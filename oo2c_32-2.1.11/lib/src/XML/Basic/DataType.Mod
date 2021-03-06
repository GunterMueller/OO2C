MODULE XML:Basic:DataType;

IMPORT
  LongStrings, IntStr, Exception, URI, URI:Parser,
  XML:DTD, XML:EntityResolver, XML:Basic:Element;


PROCEDURE GetIntAttr* (value: Element.AttValue; VAR number: LONGINT): BOOLEAN;
  VAR
    str: Element.String;
    str8: ARRAY 32 OF CHAR;
    res: IntStr.ConvResults;
  BEGIN
    str := value. Flatten (NIL);
    LongStrings.Short (str^, "?", str8);
    IntStr.StrToInt (str8, number, res);
    RETURN (res = IntStr.strAllRight)
  END GetIntAttr;
  
PROCEDURE GetStringLatin1Attr* (value: Element.AttValue; VAR str: ARRAY OF CHAR): BOOLEAN;
  VAR
    v: Element.String;
    i: LONGINT;
  BEGIN
    v := value. Flatten (NIL);
    IF (LongStrings.Length (v^) >= LEN (str)) THEN
      RETURN FALSE
    ELSE
      i := -1;
      REPEAT
        INC (i);
        IF (v[i] <= MAX (CHAR)) THEN
          str[i] := SHORT (v[i])
        ELSE
          RETURN FALSE
        END
      UNTIL (v[i] = 0X);
      RETURN TRUE
    END
  END GetStringLatin1Attr;
  
PROCEDURE GetURIAttr* (value: Element.AttValue; baseURI: URI.URI;
                       VAR uri: URI.URI): BOOLEAN;
  VAR
    str8: DTD.StringURI;
    v: Element.String;
  BEGIN
    v := value. Flatten (NIL);
    str8 := EntityResolver.NormalizeURI (v);
    TRY
      IF (baseURI # NIL) & (baseURI IS URI.HierarchicalURI) THEN
        uri := Parser.NewURILatin1(str8^, baseURI(URI.HierarchicalURI))
      ELSE
        uri := Parser.NewURILatin1(str8^, NIL)
      END;
      RETURN TRUE;
    CATCH Exception.ParseError:
      RETURN FALSE;
    END;
  END GetURIAttr;
  
END XML:Basic:DataType.
