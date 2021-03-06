MODULE H2O:Process;

IMPORT
  Log, Err, Object,
  ADT:StringBuffer, ADT:Dictionary, ADT:LinkedList, ADT:ArrayList,
  H2O:Source, H2O:Error, H2O:Scanner, H2O:Type;

CONST
  (* Pre-Processor symbols *)
  define=700;
  undef=701;
  include=702;
  if=703;
  elif=704;
  else=705;
  endif=706;
  ifdef=707;
  ifndef=708;
  defined*=709;
  line=710;
  pragma=711;

CONST
  debugExpand* = 0;
  debugSkip* = 1;
  debugCond* = 2;
  debugDefine* = 3;

  strictRedefine* = 4;
  strictUndefine* = 5;

TYPE

  TokenList = LinkedList.LinkedList(Scanner.Token);
  TokenIterator = LinkedList.Iterator(Scanner.Token);

  Param = POINTER TO ParamDesc;
  ParamDesc = RECORD
    next : Param;			(* next parameter in linear list *)
    id : INTEGER;			(* parameter identifier *)
    name : STRING;			(* parameter name *)
  END;

  Macro* = POINTER TO MacroDesc;
  MacroDesc* = RECORD (Object.ObjectDesc)
    module- : Type.Module;	(* module for macro definition *)
    name- : STRING;				(* name of macro *)
    nParams : INTEGER;			(* number of formal parameters *)
    params : Param;				(* list of parameter names *)
    body : TokenList;	(* linked list of tokens *)
    function- : BOOLEAN;			(* macro requires parameters *)
    selfdefine : BOOLEAN;		(* symbol defined equivalent to self *)
  END;

  Process* = POINTER TO ProcessDesc;
  ProcessDesc* = RECORD (Scanner.TokenSourceDesc)
    ex : Scanner.Interpreter;		(* expression interpreter *)
    scanner : Scanner.Scanner;		(* input scanner *)
    in- : Source.Input;
    err- : Error.Error;
    expanded : TokenList;	(* queue of tokens from expansion *)
    macro : Dictionary.Dictionary(STRING,Macro);	(* defined macros *)
    macroDecl- : ArrayList.ArrayList(Macro); (* macros in declared order *)
  END;

VAR
  keyWords : Scanner.KeyWord;		(* preprocessor keywords *)
  moduleOptions : SET;			(* module options *)

PROCEDURE PrintMacro(m : Macro);
VAR
  o : Object.Object;
  p : Param;
  i : TokenIterator;
BEGIN
  Err.String("MACRO "); Err.Object(m.name);
  IF m.function THEN
    Err.String("(");
    p := m.params;
    WHILE p # NIL DO
      Err.Object(p.name);
      p := p.next;
      IF p # NIL THEN Err.Char(",") END;
    END;
    Err.String(")");
  END;
  Err.Ln;

  i := m.body.GetIterator(NIL);
  WHILE i.HasNext() DO
    o := i.Next(); 
    Err.String("  "); o(Scanner.Token).Write(Err.writer);
    Err.Ln;
  END;
  Err.String("END "); Err.Object(m.name); Err.Ln;
  Err.Ln;
END PrintMacro;

PROCEDURE (p : Process) FindMacro(name : STRING; VAR result : Macro) : BOOLEAN;
VAR o : Object.Object;
BEGIN
  IF p.macro.HasKey(name) THEN
    o := p.macro.Get(name);
    result := o(Macro);
    RETURN TRUE;
  ELSE
    RETURN FALSE;
  END;
END FindMacro;

PROCEDURE (p : Process) IsDefined*(name : STRING) : BOOLEAN;
BEGIN
  RETURN p.macro.HasKey(name);
END IsDefined;

(* Push the body of the given macro into the source stream. This can be used
   by a parser to retreive the definition of a macro for evaluation. *)
PROCEDURE (p : Process) PushMacro* (m : Macro);
BEGIN
  ASSERT(~m.function);
  p.expanded.Prepend(Scanner.NewIdentToken(m.name));
END PushMacro;

PROCEDURE (p : Process) Undefine(name : STRING);
BEGIN
  p.macroDecl.Remove(p.macroDecl.IndexOf(p.macro.Get(name)));
  p.macro.Delete(name);
END Undefine;

PROCEDURE (p : Process) GetToken* (token : Scanner.Token; options : SET);
VAR
  m : Macro;

  PROCEDURE GetSym;
  (* Get next symbol from input. If tokens are queued resulting from macro
     expansion, the first queued token is returned. Otherwise, the next token
     is read from the input scanner. *)
  VAR o : Object.Object;
  BEGIN
    IF p.expanded.Size() > 0 THEN
      o := p.expanded.RemoveFirst();
      token^ := o(Scanner.Token)^;
    ELSE
      p.scanner.GetToken(token, options);
    END;
  END GetSym;

  PROCEDURE Expect(sym : INTEGER);
  BEGIN
    IF token.sym = sym THEN
      GetSym;
    ELSE
      p.err.ExpectedToken(Scanner.NewToken(sym), token);
    END;
  END Expect;

  PROCEDURE ExpandMacro(m : Macro);
  VAR 
    params : POINTER TO ARRAY OF TokenList;
    i, size, paste : LONGINT;
    result : TokenList;
    iBody, iParam : TokenIterator;
    o : Object.Object;
    s, t : Scanner.Token;
 
    PROCEDURE PasteTokens() : BOOLEAN;
    VAR 
      t1, t2 : Scanner.Token;
    BEGIN
      t2 := result.RemoveLast();
      t1 := result.RemoveLast();
      IF (t1.sym = Scanner.ident) & (t2.sym = Scanner.ident) THEN
        result.Append(Scanner.NewIdentToken(t1.name + t2.name));
        RETURN TRUE;
      END;
      RETURN FALSE;
    END PasteTokens;

    PROCEDURE ScanParameter(list : TokenList);
    VAR
      bracketLevel, braceLevel : INTEGER;
    BEGIN
      bracketLevel := 0; braceLevel := 0;
      LOOP
        CASE token.sym OF
        | Scanner.comma:
          IF (bracketLevel = 0) & (braceLevel = 0) THEN EXIT END;
        | Scanner.lbrace:    INC(braceLevel)
        | Scanner.lbracket:  INC(bracketLevel)
        | Scanner.rbrace: 
          DEC(braceLevel); 
          IF (braceLevel < 0) THEN 
            p.err.Error("Unbalanced parentheses");
          END;
        | Scanner.rbracket:
          DEC(bracketLevel);
          IF (bracketLevel < 0) THEN EXIT END;
        | Scanner.endFile:
          IF (braceLevel = 0) & (bracketLevel = 0) THEN EXIT
          ELSE
            p.err.Error("Unexpected end of input during macro parameter");
          END;
        ELSE
        END;
        list.Append(token.Copy());
        GetSym;
      END;
    END ScanParameter;

  BEGIN
    IF debugExpand IN moduleOptions THEN
      Err.String("ExpandMacro("); Err.Object(m.name); Err.String(")");
    END;
    GetSym;
    params := NIL;
    IF m.function THEN
      Expect(Scanner.lbracket);
      (* allocate an array of actual parameters *)
      NEW(params, m.nParams);

      FOR i := 0 TO m.nParams-1 DO
        IF debugExpand IN moduleOptions THEN
          Err.String("FORMAL["); Err.Int(i,0); Err.String("]");
        END;

        params[i] := NEW(TokenList);

        ScanParameter(params[i]);
        IF i < m.nParams-1 THEN Expect(Scanner.comma) END;
      END;
      Expect(Scanner.rbracket);
    END;

    result := NEW(TokenList);
    iBody := m.body.GetIterator(NIL); iParam := NIL; paste := 0;
    WHILE iBody.HasNext() DO
      o := iBody.Next(); s := o(Scanner.Token);
      IF s.sym = Scanner.parameter THEN
        IF debugExpand IN moduleOptions THEN
          Err.String("SUBST["); Err.LongInt(s.value,0); Err.String("]"); Err.Ln;
        END;

        iParam := params[s.value].GetIterator(iParam);
        WHILE iParam.HasNext() DO
          o := iParam.Next(); t := o(Scanner.Token);
          IF debugExpand IN moduleOptions THEN
            Err.String("APPEND["); t.Write(Err.writer); Err.String("]"); Err.Ln;
          END;
          result.Append(t);
        END
      ELSIF s.sym = Scanner.paste THEN
        paste := result.Size() + 1;
      ELSE
        IF debugExpand IN moduleOptions THEN
          Err.String("APPEND["); s.Write(Err.writer); Err.String("]"); Err.Ln;
        END;
        result.Append(s);
      END;
      (* check for token paste operation *)
      IF paste > 0 THEN
        size := result.Size();
        IF size = paste THEN
          IF (size < 2) OR ~PasteTokens() THEN
            p.err.Error("Illegal token paste");
          END;
          paste := 0;
        END;
      END;
    END;
    result.Append(token.Copy());
    WHILE result.Size() > 0 DO
      p.expanded.Prepend(result.RemoveLast());
    END;
  END ExpandMacro;
  
  PROCEDURE GetSymP;
  (* Get next symbol for a preprocessor directive. This function always returns
     tokens from the input scanner, and does not return queued tokens.
     Preprocessor directives cannot occur within  macros. This function always
     returns end-of-line symbols, since these are required to terminate some
     directives (eg. #define). *)
  BEGIN
    p.scanner.GetToken(token, {Scanner.optReturnEndLine});
  END GetSymP;

  PROCEDURE ExpectP(sym : INTEGER);
  (* Check for the specified token and generate an error if not found. If token
     is found, get the next token for this preprocessor directive. *)
  BEGIN
    IF token.sym = sym THEN
      GetSymP;
    ELSE
      p.err.ExpectedToken(Scanner.NewToken(sym),token);
    END;
  END ExpectP;

  PROCEDURE End;
  (* Expect and end of line token and generate an error if not found. If the
     token is found, read the next token. *)
  BEGIN
    IF token.sym # Scanner.endLine THEN
      p.err.ExpectedToken(Scanner.NewToken(Scanner.endLine),token);
    END;
    GetSym;
  END End;

  PROCEDURE Directive;

    PROCEDURE Include;
    VAR 
      search : BOOLEAN;
      name : STRING;
      buffer : StringBuffer.StringBuffer;
    BEGIN
      GetSymP;
      IF token.sym = Scanner.string THEN
        name := token.name.Substring(1, token.name.length-1);
        search := FALSE;
      ELSIF token.sym = Scanner.lt THEN
        buffer := StringBuffer.New("");
        WHILE p.scanner.ch # ">" DO
          buffer.AppendLatin1Char(p.scanner.ch);
          p.scanner.GetChar();
        END;
        GetSymP;
        ASSERT(token.sym = Scanner.gt);
        name := buffer.ToString();
        search := TRUE;
      ELSE
        p.err.Error("Invalid include specification"); RETURN;
      END;
      p.scanner.GetToken(token, {Scanner.optReturnEndLine,Scanner.optDontReadAhead});
      IF token.sym = Scanner.endLine THEN
        p.scanner.in.Include(name, search);
        (* Re-read endLine symbol *)
        GetSymP; ASSERT(token.sym = Scanner.endLine);
        (* Now get next symbol from input *)
        GetSym;
      ELSE
        p.err.Error("Junk after end of #include directive"); 
	WHILE token.sym # Scanner.endLine DO 
          p.scanner.GetToken(token, {Scanner.optReturnEndLine});
        END;
      END;
    END Include;

    PROCEDURE Define;
    VAR
      name : STRING;
      object : Object.Object;
      m : Macro;
      t : Scanner.Token;
      param, lastParam : Param;
      defFunc : BOOLEAN;
    
      PROCEDURE AddParameter;
      (* Add parameter named token.name to current macro *)
      VAR param : Param;
      BEGIN
        NEW(param);
        param.id := m.nParams;
        INC(m.nParams);
        param.name := token.name;
    
        param.next := NIL;
        IF lastParam = NIL THEN 
          m.params := param
        ELSE
          lastParam.next := param;
        END;
        lastParam := param;
        GetSymP;
      END AddParameter;
    
      PROCEDURE FindParam(name : STRING; VAR result : Param) : BOOLEAN;
      VAR param : Param;
      BEGIN
        param := m.params;
        WHILE param # NIL DO
          IF name.Equals(param.name) THEN
            result := param; RETURN TRUE
          END;
          param := param.next
        END;
        RETURN FALSE
      END FindParam;
    
    BEGIN
      GetSymP;
      IF token.sym # Scanner.ident THEN 
        p.err.ExpectedIdentifier(token);
      END;
      name := token.name;

      (* Check for previous definition of this macro. *)

      IF p.macro.HasKey(name) THEN
        p.err.MsgParam("Macro '$0' redefined", name, NIL, NIL, strictRedefine IN moduleOptions);
        p.Undefine(name);
      END;

      defFunc := p.scanner.ch = '(';  (* bracket must immediately follow ident *)

      lastParam := NIL;

      NEW(m); 
      m.module := p.scanner.in.GetModule();
      m.module.AddDefinition();
      m.name := name;
      m.nParams := 0;
      m.params := NIL;
      m.body := NEW(TokenList);
      m.selfdefine := FALSE;
      m.function := FALSE;

      GetSymP;

      (* Process parameter list. *)

      IF defFunc THEN
        ASSERT(token.sym = Scanner.lbracket);
        m.function := TRUE;
        GetSymP;
        IF token.sym = Scanner.ident THEN
          AddParameter();
          WHILE token.sym = Scanner.comma DO
            GetSymP;
            IF token.sym # Scanner.ident THEN p.err.ExpectedIdentifier(token) END;
            AddParameter();
          END;
        END;
        ExpectP(Scanner.rbracket);
      END;

      (* Scan tokens until end-of-line, appending tokens to the macro body.
      Identifiers with the name of a parameter are mapped to Scanner.parameter
      tokens. *)

      WHILE token.sym # Scanner.endLine DO
        IF (token.sym = Scanner.ident) & FindParam(token.name, param) THEN
          t := Scanner.NewTokenParameter(param.id);
        ELSE
          t := token.Copy();
        END;
        m.body.Append(t);
        GetSymP;
      END;

      (* Check for self definition (eg. "#define foo foo"). Attempting to
      expand such definitions will recurse indefinitely, so this special case
      if flagged in order to bypass macro expansion (see GetToken). *)

      IF (m.body.Size() = 1) THEN
        object := m.body.Get(0); t := object(Scanner.Token);
        IF (t.sym = Scanner.ident) & (t.name.Equals(m.name)) THEN
          m.selfdefine := TRUE;
        END;
      END;

      p.macro.Set(name, m);
      p.macroDecl.Append(m);
      IF debugDefine IN moduleOptions THEN PrintMacro(m) END;
      End();
    END Define;

    PROCEDURE Undef;
    BEGIN
      GetSymP;
      IF token.sym # Scanner.ident THEN 
        p.err.ExpectedIdentifier(token);
      ELSIF ~p.macro.HasKey(token.name) THEN 
        p.err.MsgParam("#undef macro '$0' not defined", token.name, NIL, NIL, strictUndefine IN moduleOptions);
      ELSE
	    p.Undefine(token.name);
      END;
      GetSymP;
      End();
    END Undef;
    
    (* term=1 - skip to endif
    ** term=0 - skip to else or endif
    *)
    
    PROCEDURE SkipTo(term : INTEGER);
    VAR 
      level : INTEGER;
      result : LONGINT;
    BEGIN
      level := 0;
      IF debugSkip IN moduleOptions THEN Err.String("SkipTo: START") END;
      LOOP
        IF token.sym = Scanner.hash THEN
          GetSymP;
          IF token.sym = Scanner.ident THEN
            Scanner.CheckKeyWord(keyWords, token);
            IF debugSkip IN moduleOptions THEN  
              Err.String("SkipTo: Got "); Err.Int(token.sym,0);  Err.Ln;
              p.in.ShowContext();
            END;
            CASE token.sym OF
            | endif:
              IF level = 0 THEN 
                GetSymP; End(); RETURN 
              ELSE 
                DEC(level)
              END;
            | ifdef, ifndef, if:
              INC(level);
            | else:
              IF (level = 0) & (term = 0) THEN 
                GetSymP; End(); RETURN
              END;
            | elif:
              IF (level = 0) & (term = 0) THEN
                p.GetToken(token, {Scanner.optReturnEndLine});
                p.ex.Evaluate(token, {Scanner.optReturnEndLine}, result);
                End();
                IF result # 0 THEN RETURN END; 
              END;
            ELSE
            END;
          ELSIF token.sym = Scanner.endFile THEN
            p.err.Error("Unexpected end of file during conditional");
          END;
        END;
        GetSymP;
      END
    END SkipTo;
   
    PROCEDURE Ifdef(invert : BOOLEAN);
    VAR result : BOOLEAN;
    BEGIN
      IF debugCond IN moduleOptions THEN Err.String("Ifdef") END; 
      GetSymP;
      IF token.sym # Scanner.ident THEN
        p.err.ExpectedIdentifier(token);
      ELSE
        result := p.macro.HasKey(token.name);
        IF invert THEN result := ~result END;
        IF debugCond IN moduleOptions THEN
          IF result THEN Err.String("TRUE") ELSE Err.String("FALSE") END;
        END;
        GetSymP;
        End();
        IF ~result THEN SkipTo(0) END;
      END;
    END Ifdef;
    
    PROCEDURE Elif;
    VAR result : LONGINT;
    BEGIN
      IF debugCond IN moduleOptions THEN Err.String("Elif") END;
      p.GetToken(token, {Scanner.optReturnEndLine});
      p.ex.Evaluate(token, {Scanner.optReturnEndLine}, result);
      End(); 
      SkipTo(1);
    END Elif;
    
    PROCEDURE Else;
    BEGIN
      GetSymP;
      End();
      SkipTo(1);
    END Else;
    
    PROCEDURE Endif;
    BEGIN
      GetSymP;
      End();
    END Endif;
    
    PROCEDURE If;
    VAR result : LONGINT;
    BEGIN
      IF debugCond IN moduleOptions THEN Err.String("If") END;
      p.GetToken(token, {Scanner.optReturnEndLine});
      p.ex.Evaluate(token, {Scanner.optReturnEndLine}, result);
      IF debugCond IN moduleOptions THEN Err.String("Result="); Err.LongInt(result,0); END;
      End();
      IF result = 0 THEN SkipTo(0) END;
    END If;

    PROCEDURE Pragma;
    BEGIN
      GetSymP;
      IF (token.sym = Scanner.ident) THEN
        p.err.MsgParam("pragma '$0' ignored", token.name, NIL, NIL, FALSE);
      END;
      WHILE token.sym # Scanner.endLine DO GetSymP END; 
      End();
(*
      IF (sym = ident) & Strings.Equal("pack", identName) THEN
        GetSym0;
        Expect(lbracket);
        WHILE sym # rbracket DO
          IF (sym = ident) & Strings.Equal("push", identName) THEN
            GetSym0;
            IF packSP < packLen THEN
              packStack[packSP] := pack;
              INC(packSP);
            ELSE
              Error(13);
            END;
          ELSIF (sym = ident) & Strings.Equal("pop", identName) THEN
            GetSym0;
            IF packSP > 0 THEN
              DEC(packSP);
              pack := packStack[packSP];
            ELSE
              Error(14);
            END;
          ELSE
            Express(pack);
          END;
          WHILE sym = comma DO GetSym0 END;
        END;
        Expect(rbracket);
        Err.String("Pack is now "); Err.LongInt(pack,0); Err.Ln;
      ELSE
      END;
      WHILE sym # endLine DO GetSym0 END; 
*)
    END Pragma;

  BEGIN
    GetSymP;
    IF token.sym = Scanner.ident THEN
      Scanner.CheckKeyWord(keyWords, token);
    END;
    CASE token.sym OF
    | include: Include
    | define: Define
    | undef: Undef
    | ifdef: Ifdef(FALSE)
    | ifndef: Ifdef(TRUE)
    | else: Else
    | endif: Endif
    | if: If
    | elif: Elif
    | pragma: Pragma
    ELSE
      p.err.ErrorParam("Unknown preprocessor directive: $0", token, NIL, NIL);
    END;
  END Directive;

BEGIN
  GetSym;
  IF Scanner.optDontExpand IN options THEN 
    RETURN 
  ELSE
    LOOP
      IF (token.sym = Scanner.ident) & p.FindMacro(token.name, m) & ~m.selfdefine THEN
        ExpandMacro(m);
        GetSym;
      ELSIF token.sym = Scanner.hash THEN
        Directive;
      ELSE
        RETURN
      END
    END
  END
END GetToken;

PROCEDURE Init* (options : SET);
BEGIN
  moduleOptions := options;
END Init;

PROCEDURE New* (scanner : Scanner.Scanner; ex : Scanner.Interpreter; err : Error.Error) : Process;
VAR 
  p : Process;
BEGIN
  NEW(p);
  p.scanner := scanner;
  p.in := p.scanner.in;
  p.err := err;
  p.ex := ex;
  p.macro := NEW(Dictionary.Dictionary(STRING,Macro));
  p.macroDecl := NEW(ArrayList.ArrayList(Macro), 10);
  p.expanded := NEW(TokenList);
  RETURN p;
END New;

BEGIN
  keyWords := NIL;
  Scanner.AddKeyWord(keyWords, "define", define); 
  Scanner.AddKeyWord(keyWords, "undef", undef);
  Scanner.AddKeyWord(keyWords, "include", include);
  Scanner.AddKeyWord(keyWords, "if", if); 
  Scanner.AddKeyWord(keyWords, "elif", elif); 
  Scanner.AddKeyWord(keyWords, "else", else); 
  Scanner.AddKeyWord(keyWords, "endif", endif);
  Scanner.AddKeyWord(keyWords, "ifdef", ifdef); 
  Scanner.AddKeyWord(keyWords, "ifndef", ifndef);
  Scanner.AddKeyWord(keyWords, "defined", defined);
  Scanner.AddKeyWord(keyWords, "line", line); 
  Scanner.AddKeyWord(keyWords, "pragma", pragma);
END H2O:Process.
