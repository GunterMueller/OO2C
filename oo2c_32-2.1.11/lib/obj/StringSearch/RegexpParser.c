#include <StringSearch/RegexpParser.d>
#include <__oo2c.h>
#include <setjmp.h>

void StringSearch_RegexpParser__UpperLower(OOC_CHAR8 ch, OOC_CHAR8 *upper, OOC_CHAR8 *lower) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = 96<i0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_UINT8)i0<(OOC_UINT8)123;
  
l5:
  if (i1) goto l15;
  i1 = 224<=i0;
  if (i1) goto l9;
  i1=0u;
  goto l11;
l9:
  i1 = (OOC_UINT8)i0<(OOC_UINT8)255;
  
l11:
  if (i1) goto l13;
  i1=0u;
  goto l17;
l13:
  i1 = i0!=247;
  
  goto l17;
l15:
  i1=1u;
l17:
  if (i1) goto l39;
  i1 = 64<i0;
  if (i1) goto l21;
  i1=0u;
  goto l23;
l21:
  i1 = (OOC_UINT8)i0<(OOC_UINT8)91;
  
l23:
  if (i1) goto l33;
  i1 = 192<=i0;
  if (i1) goto l27;
  i1=0u;
  goto l29;
l27:
  i1 = (OOC_UINT8)i0<(OOC_UINT8)223;
  
l29:
  if (i1) goto l31;
  i1=0u;
  goto l35;
l31:
  i1 = i0!=215;
  
  goto l35;
l33:
  i1=1u;
l35:
  if (i1) goto l37;
  *upper = i0;
  *lower = i0;
  goto l40;
l37:
  *upper = i0;
  *lower = (i0+32);
  goto l40;
l39:
  *upper = (i0-32);
  *lower = i0;
l40:
  return;
  ;
}

static StringSearch_RegexpParser__CharSet StringSearch_RegexpParser__NewSet(void) {
  register OOC_INT32 i0,i1,i2;
  StringSearch_RegexpParser__CharSet set;
  OOC_INT32 i;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpParser__CharSet.baseTypes[0]);
  set = (StringSearch_RegexpParser__CharSet)i0;
  i = 0;
  i1=0;
l1_loop:
  *(OOC_UINT32*)((_check_pointer(i0, 5755))+(_check_index(i1, 8, OOC_UINT32, 5755))*4) = 0u;
  i1 = i1+1;
  i = i1;
  i2 = i1<=7;
  if (i2) goto l1_loop;
l5:
  return (StringSearch_RegexpParser__CharSet)i0;
  ;
}

static void StringSearch_RegexpParser__SetElement(StringSearch_RegexpParser__CharSet set, OOC_UINT32 flags, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_CHAR8 lower;
  OOC_CHAR8 upper;

  i0 = flags;
  i0 = _in(0,i0);
  if (i0) goto l3;
  i0 = i;
  i1 = (OOC_INT32)set;
  i2 = i0>>5;
  i3 = *(OOC_UINT32*)((_check_pointer(i1, 6166))+(_check_index(i2, 8, OOC_UINT32, 6166))*4);
  *(OOC_UINT32*)((_check_pointer(i1, 6166))+(_check_index(i2, 8, OOC_UINT32, 6166))*4) = (_set_bit(i3,(_mod(i0,32))));
  goto l4;
l3:
  i0 = i;
  StringSearch_RegexpParser__UpperLower(i0, (void*)(OOC_INT32)&upper, (void*)(OOC_INT32)&lower);
  i0 = upper;
  i1 = (OOC_INT32)set;
  i2 = i0>>5;
  i3 = *(OOC_UINT32*)((_check_pointer(i1, 6022))+(_check_index(i2, 8, OOC_UINT16, 6022))*4);
  *(OOC_UINT32*)((_check_pointer(i1, 6022))+(_check_index(i2, 8, OOC_UINT16, 6022))*4) = (_set_bit(i3,(_mod(i0,32))));
  i0 = lower;
  i2 = i0>>5;
  i3 = *(OOC_UINT32*)((_check_pointer(i1, 6090))+(_check_index(i2, 8, OOC_UINT16, 6090))*4);
  *(OOC_UINT32*)((_check_pointer(i1, 6090))+(_check_index(i2, 8, OOC_UINT16, 6090))*4) = (_set_bit(i3,(_mod(i0,32))));
l4:
  return;
  ;
}

static void StringSearch_RegexpParser__SetRange(StringSearch_RegexpParser__CharSet set, OOC_UINT32 flags, OOC_CHAR8 start, OOC_CHAR8 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = end;
  i1 = start;
  i2 = (OOC_UINT8)i1<=(OOC_UINT8)i0;
  if (!i2) goto l8;
  i2 = (OOC_INT32)set;
  i3 = flags;
  
l3_loop:
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i2, i3, i1);
  i1 = i1+1;
  i4 = i1<=i0;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

static void StringSearch_RegexpParser__Union(StringSearch_RegexpParser__CharSet dest, StringSearch_RegexpParser__CharSet source) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dest;
  i1 = (OOC_INT32)source;
  i = 0;
  i2=0;
l1_loop:
  i3 = *(OOC_UINT32*)((_check_pointer(i0, 6562))+(_check_index(i2, 8, OOC_UINT32, 6562))*4);
  i4 = *(OOC_UINT32*)((_check_pointer(i1, 6572))+(_check_index(i2, 8, OOC_UINT32, 6572))*4);
  *(OOC_UINT32*)((_check_pointer(i0, 6551))+(_check_index(i2, 8, OOC_UINT32, 6551))*4) = (i3|i4);
  i2 = i2+1;
  i = i2;
  i3 = i2<=7;
  if (i3) goto l1_loop;
l5:
  return;
  ;
}

static void StringSearch_RegexpParser__UnionComplement(StringSearch_RegexpParser__CharSet dest, StringSearch_RegexpParser__CharSet source) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)dest;
  i1 = (OOC_INT32)source;
  i = 0;
  i2=0;
l1_loop:
  i3 = *(OOC_UINT32*)((_check_pointer(i1, 6747))+(_check_index(i2, 8, OOC_UINT32, 6747))*4);
  i4 = *(OOC_UINT32*)((_check_pointer(i0, 6735))+(_check_index(i2, 8, OOC_UINT32, 6735))*4);
  *(OOC_UINT32*)((_check_pointer(i0, 6724))+(_check_index(i2, 8, OOC_UINT32, 6724))*4) = (i4|(~i3));
  i2 = i2+1;
  i = i2;
  i3 = i2<=7;
  if (i3) goto l1_loop;
l5:
  return;
  ;
}

static OOC_CHAR8 StringSearch_RegexpParser__Shorthand(OOC_CHAR8 ch) {
  register OOC_INT32 i0;

  i0 = ch;
  switch (i0) {
  case 98u:
    return 8u;
    goto l11;
  case 97u:
    return 7u;
    goto l11;
  case 101u:
    return 27u;
    goto l11;
  case 102u:
    return 12u;
    goto l11;
  case 110u:
    return 10u;
    goto l11;
  case 114u:
    return 13u;
    goto l11;
  case 116u:
    return 9u;
    goto l11;
  case 118u:
    return 11u;
    goto l11;
  default:
    return 0u;
    goto l11;
  }
l11:
  _failed_function(6794); return 0;
  ;
}

void StringSearch_RegexpParser__InitGroup(StringSearch_RegexpParser__Group group, OOC_INT8 groupId) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)group;
  *(OOC_INT32*)(_check_pointer(i0, 7183)) = 0;
  i1 = groupId;
  *(OOC_INT8*)((_check_pointer(i0, 7211))+4) = i1;
  return;
  ;
}

StringSearch_RegexpParser__Group StringSearch_RegexpParser__BuilderDesc_NewGroup(StringSearch_RegexpParser__Builder b, OOC_INT8 groupId) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpParser__Group.baseTypes[0]);
  i1 = groupId;
  StringSearch_RegexpParser__InitGroup((StringSearch_RegexpParser__Group)i0, i1);
  return (StringSearch_RegexpParser__Group)i0;
  ;
}

void StringSearch_RegexpParser__InitExpr(StringSearch_RegexpParser__Expr expr) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)expr;
  *(OOC_INT32*)(_check_pointer(i0, 7477)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7500))+4) = 0;
  return;
  ;
}

StringSearch_RegexpParser__Expr StringSearch_RegexpParser__BuilderDesc_NewExpr(StringSearch_RegexpParser__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpParser__Expr.baseTypes[0]);
  StringSearch_RegexpParser__InitExpr((StringSearch_RegexpParser__Expr)i0);
  return (StringSearch_RegexpParser__Expr)i0;
  ;
}

void StringSearch_RegexpParser__InitTerm(StringSearch_RegexpParser__Term term) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)term;
  *(OOC_INT32*)(_check_pointer(i0, 7728)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7751))+4) = 0;
  *(OOC_INT8*)((_check_pointer(i0, 7776))+8) = 0;
  return;
  ;
}

StringSearch_RegexpParser__Term StringSearch_RegexpParser__BuilderDesc_NewTerm(StringSearch_RegexpParser__Builder b) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpParser__Term.baseTypes[0]);
  StringSearch_RegexpParser__InitTerm((StringSearch_RegexpParser__Term)i0);
  return (StringSearch_RegexpParser__Term)i0;
  ;
}

void StringSearch_RegexpParser__InitFactor(StringSearch_RegexpParser__Factor factor, OOC_INT8 type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)factor;
  i1 = type;
  *(OOC_INT8*)(_check_pointer(i0, 8040)) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 8066))+1) = 0u;
  *(OOC_INT32*)((_check_pointer(i0, 8090))+4) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8118))+8) = 0;
  return;
  ;
}

StringSearch_RegexpParser__Factor StringSearch_RegexpParser__BuilderDesc_NewFactor(StringSearch_RegexpParser__Builder b, OOC_INT8 type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpParser__Factor.baseTypes[0]);
  i1 = type;
  StringSearch_RegexpParser__InitFactor((StringSearch_RegexpParser__Factor)i0, i1);
  return (StringSearch_RegexpParser__Factor)i0;
  ;
}

void StringSearch_RegexpParser__InitBuilder(StringSearch_RegexpParser__Builder b) {

  return;
  ;
}

StringSearch_RegexpParser__Builder StringSearch_RegexpParser__NewBuilder(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpParser__Builder.baseTypes[0]);
  StringSearch_RegexpParser__InitBuilder((StringSearch_RegexpParser__Builder)i0);
  return (StringSearch_RegexpParser__Builder)i0;
  ;
}

StringSearch_RegexpParser__Group StringSearch_RegexpParser__Parse(StringSearch_RegexpParser__Builder b, Object__String8 pattern, OOC_UINT32 flags) {
  register OOC_INT32 i0,i1;
  Object__CharsLatin1 re;
  OOC_INT32 reEnd;
  OOC_INT8 groupCount;
  OOC_INT8 currentGroup;
  OOC_INT32 pos;
  OOC_INT32 errorPos;
  StringSearch_RegexpParser__Group regexpGroup;
  auto void StringSearch_RegexpParser__Parse_Error(void);
  auto void StringSearch_RegexpParser__Parse_Regexp(StringSearch_RegexpParser__Group *group);
    
    void StringSearch_RegexpParser__Parse_Error(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = errorPos;
      i0 = i0<0;
      if (!i0) goto l3;
      i0 = pos;
      errorPos = i0;
l3:
      i0 = (OOC_INT32)re;
      i0 = _check_pointer(i0, 9383);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = pos;
      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 9383)));
      i0 = i0!=0u;
      if (!i0) goto l6;
      pos = (i2+1);
l6:
      return;
      ;
    }

    
    void StringSearch_RegexpParser__Parse_Regexp(StringSearch_RegexpParser__Group *group) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT8 oldGroupId;
      StringSearch_RegexpParser__Expr last;
      auto void StringSearch_RegexpParser__Parse_Regexp_Expr(StringSearch_RegexpParser__Expr *expr);
        
        void StringSearch_RegexpParser__Parse_Regexp_Expr(StringSearch_RegexpParser__Expr *expr) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          StringSearch_RegexpParser__Term last;
          auto void StringSearch_RegexpParser__Parse_Regexp_Expr_Term(StringSearch_RegexpParser__Term *term);
            
            void StringSearch_RegexpParser__Parse_Regexp_Expr_Term(StringSearch_RegexpParser__Term *term) {
              register OOC_INT32 i0,i1,i2;
              auto void StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor(StringSearch_RegexpParser__Factor *factor);
                
                void StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor(StringSearch_RegexpParser__Factor *factor) {
                  register OOC_INT32 i0,i1,i2,i3,i4,i5;
                  auto OOC_INT8 StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set(StringSearch_RegexpParser__CharSet set);
                    
                    OOC_INT8 StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set(StringSearch_RegexpParser__CharSet set) {
                      register OOC_INT32 i0,i1,i2,i3,i4;
                      OOC_INT8 type;
                      OOC_CHAR8 ch1;
                      auto OOC_CHAR8 StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_SpecialSequence(OOC_CHAR8 ch);
                      auto OOC_CHAR8 StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_Char(void);
                        
                        OOC_CHAR8 StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_SpecialSequence(OOC_CHAR8 ch) {
                          register OOC_INT32 i0;

                          i0 = ch;
                          i0 = _cap(i0);
                          switch (i0) {
                          case 68u:
                          case 83u:
                          case 87u:
                            return 1u;
                            goto l4;
                          default:
                            return 0u;
                            goto l4;
                          }
l4:
                          _failed_function(9867); return 0;
                          ;
                        }

                        
                        OOC_CHAR8 StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_Char(void) {
                          register OOC_INT32 i0,i1,i2,i3,i4;

                          i0 = (OOC_INT32)re;
                          i1 = _check_pointer(i0, 10182);
                          i2 = OOC_ARRAY_LENGTH(i1, 0);
                          i3 = pos;
                          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 10182)));
                          i1 = i1==92u;
                          if (i1) goto l3;
                          i1 = i3+1;
                          pos = i1;
                          i0 = _check_pointer(i0, 10563);
                          i2 = OOC_ARRAY_LENGTH(i0, 0);
                          i0 = *(OOC_UINT8*)(i0+(_check_index((i1-1), i2, OOC_UINT32, 10563)));
                          return i0;
                          goto l12;
l3:
                          i1 = _check_pointer(i0, 10230);
                          i2 = OOC_ARRAY_LENGTH(i1, 0);
                          i4 = i3+1;
                          i1 = *(OOC_UINT8*)(i1+(_check_index(i4, i2, OOC_UINT32, 10230)));
                          i1 = i1==0u;
                          if (i1) goto l10;
                          i1 = _check_pointer(i0, 10325);
                          i2 = OOC_ARRAY_LENGTH(i1, 0);
                          i1 = *(OOC_UINT8*)(i1+(_check_index(i4, i2, OOC_UINT32, 10325)));
                          i1 = StringSearch_RegexpParser__Shorthand(i1);
                          i1 = i1!=0u;
                          if (i1) goto l8;
                          i1 = i3+2;
                          pos = i1;
                          i0 = _check_pointer(i0, 10474);
                          i2 = OOC_ARRAY_LENGTH(i0, 0);
                          i0 = *(OOC_UINT8*)(i0+(_check_index((i1-1), i2, OOC_UINT32, 10474)));
                          return i0;
                          goto l12;
l8:
                          i1 = i3+2;
                          pos = i1;
                          i0 = _check_pointer(i0, 10399);
                          i2 = OOC_ARRAY_LENGTH(i0, 0);
                          i0 = *(OOC_UINT8*)(i0+(_check_index((i1-1), i2, OOC_UINT32, 10399)));
                          i0 = StringSearch_RegexpParser__Shorthand(i0);
                          return i0;
                          goto l12;
l10:
                          StringSearch_RegexpParser__Parse_Error();
                          return 32u;
l12:
                          _failed_function(10126); return 0;
                          ;
                        }


                      i0 = pos;
                      i0 = i0+1;
                      pos = i0;
                      i1 = (OOC_INT32)re;
                      i1 = _check_pointer(i1, 10717);
                      i2 = OOC_ARRAY_LENGTH(i1, 0);
                      i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 10717)));
                      i1 = i1==94u;
                      if (i1) goto l3;
                      type = 6;
                      
                      goto l5_loop;
l3:
                      type = 7;
                      pos = (i0+1);
                      
l5_loop:
                      i0 = (OOC_INT32)re;
                      i1 = _check_pointer(i0, 10901);
                      i2 = OOC_ARRAY_LENGTH(i1, 0);
                      i3 = pos;
                      i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 10901)));
                      i1 = i1==92u;
                      if (i1) goto l8;
                      i1=0u;
                      goto l10;
l8:
                      i1 = _check_pointer(i0, 10941);
                      i2 = OOC_ARRAY_LENGTH(i1, 0);
                      i1 = *(OOC_UINT8*)(i1+(_check_index((i3+1), i2, OOC_UINT32, 10941)));
                      i1 = StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_SpecialSequence(i1);
                      
l10:
                      if (i1) goto l28;
                      i0 = StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_Char();
                      ch1 = i0;
                      i1 = (OOC_INT32)re;
                      i2 = _check_pointer(i1, 11502);
                      i3 = OOC_ARRAY_LENGTH(i2, 0);
                      i4 = pos;
                      i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 11502)));
                      i2 = i2==45u;
                      if (i2) goto l14;
                      i2=0u;
                      goto l16;
l14:
                      i2 = _check_pointer(i1, 11541);
                      i3 = OOC_ARRAY_LENGTH(i2, 0);
                      i2 = *(OOC_UINT8*)(i2+(_check_index((i4+1), i3, OOC_UINT32, 11541)));
                      i2 = i2!=93u;
                      
l16:
                      if (i2) goto l18;
                      i1=0u;
                      goto l24;
l18:
                      i2 = _check_pointer(i1, 11584);
                      i3 = OOC_ARRAY_LENGTH(i2, 0);
                      i2 = *(OOC_UINT8*)(i2+(_check_index((i4+1), i3, OOC_UINT32, 11584)));
                      i2 = i2==92u;
                      if (i2) goto l21;
                      i1=0u;
                      goto l22;
l21:
                      i1 = _check_pointer(i1, 11649);
                      i2 = OOC_ARRAY_LENGTH(i1, 0);
                      i1 = *(OOC_UINT8*)(i1+(_check_index((i4+2), i2, OOC_UINT32, 11649)));
                      i1 = StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_SpecialSequence(i1);
                      
l22:
                      i1 = !i1;
                      
l24:
                      if (i1) goto l26;
                      i1 = flags;
                      i2 = (OOC_INT32)set;
                      StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i2, i1, i0);
                      goto l38;
l26:
                      pos = (i4+1);
                      i0 = StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set_Char();
                      i1 = ch1;
                      i2 = flags;
                      i3 = (OOC_INT32)set;
                      StringSearch_RegexpParser__SetRange((StringSearch_RegexpParser__CharSet)i3, i2, i1, i0);
                      goto l38;
l28:
                      i0 = _check_pointer(i0, 10980);
                      i1 = OOC_ARRAY_LENGTH(i0, 0);
                      i0 = *(OOC_UINT8*)(i0+(_check_index((i3+1), i1, OOC_UINT32, 10980)));
                      switch (i0) {
                      case 100u:
                        i0 = (OOC_INT32)StringSearch_RegexpParser__setDigits;
                        i1 = (OOC_INT32)set;
                        StringSearch_RegexpParser__Union((StringSearch_RegexpParser__CharSet)i1, (StringSearch_RegexpParser__CharSet)i0);
                        goto l37;
                      case 68u:
                        i0 = (OOC_INT32)StringSearch_RegexpParser__setDigits;
                        i1 = (OOC_INT32)set;
                        StringSearch_RegexpParser__UnionComplement((StringSearch_RegexpParser__CharSet)i1, (StringSearch_RegexpParser__CharSet)i0);
                        goto l37;
                      case 115u:
                        i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
                        i1 = (OOC_INT32)set;
                        StringSearch_RegexpParser__Union((StringSearch_RegexpParser__CharSet)i1, (StringSearch_RegexpParser__CharSet)i0);
                        goto l37;
                      case 83u:
                        i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
                        i1 = (OOC_INT32)set;
                        StringSearch_RegexpParser__UnionComplement((StringSearch_RegexpParser__CharSet)i1, (StringSearch_RegexpParser__CharSet)i0);
                        goto l37;
                      case 119u:
                        i0 = (OOC_INT32)StringSearch_RegexpParser__setAlphaNum;
                        i1 = (OOC_INT32)set;
                        StringSearch_RegexpParser__Union((StringSearch_RegexpParser__CharSet)i1, (StringSearch_RegexpParser__CharSet)i0);
                        goto l37;
                      case 87u:
                        i0 = (OOC_INT32)StringSearch_RegexpParser__setAlphaNum;
                        i1 = (OOC_INT32)set;
                        StringSearch_RegexpParser__UnionComplement((StringSearch_RegexpParser__CharSet)i1, (StringSearch_RegexpParser__CharSet)i0);
                        goto l37;
                      default:
                        StringSearch_RegexpParser__Parse_Error();
                        goto l37;
                      }
l37:
                      i0 = pos;
                      pos = (i0+2);
l38:
                      i0 = errorPos;
                      i0 = i0>=0;
                      if (i0) goto l41;
                      i0 = (OOC_INT32)re;
                      i0 = _check_pointer(i0, 11912);
                      i1 = OOC_ARRAY_LENGTH(i0, 0);
                      i2 = pos;
                      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 11912)));
                      i0 = i0==0u;
                      
                      goto l43;
l41:
                      i0=1u;
l43:
                      if (i0) goto l45;
                      i0 = (OOC_INT32)re;
                      i0 = _check_pointer(i0, 11930);
                      i1 = OOC_ARRAY_LENGTH(i0, 0);
                      i2 = pos;
                      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 11930)));
                      i0 = i0==93u;
                      
                      goto l47;
l45:
                      i0=1u;
l47:
                      if (!i0) goto l5_loop;
l50:
                      i0 = (OOC_INT32)re;
                      i0 = _check_pointer(i0, 11964);
                      i1 = OOC_ARRAY_LENGTH(i0, 0);
                      i2 = pos;
                      i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 11964)));
                      i0 = i0!=93u;
                      if (i0) goto l53;
                      pos = (i2+1);
                      goto l54;
l53:
                      StringSearch_RegexpParser__Parse_Error();
l54:
                      i0 = type;
                      return i0;
                      ;
                    }


                  i0 = (OOC_INT32)re;
                  i0 = _check_pointer(i0, 12224);
                  i1 = OOC_ARRAY_LENGTH(i0, 0);
                  i2 = pos;
                  i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 12224)));
                  switch (i0) {
                  case 46u:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12277)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, 3);
                    i1 = pos;
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    pos = (i1+1);
                    goto l40;
                  case 94u:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12394)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, 4);
                    i1 = pos;
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    pos = (i1+1);
                    goto l40;
                  case 36u:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12509)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, 5);
                    i1 = pos;
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    pos = (i1+1);
                    goto l40;
                  case 92u:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12632)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, (-2));
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    i1 = (OOC_INT32)re;
                    i2 = _check_pointer(i1, 12679);
                    i3 = pos;
                    i4 = i3+1;
                    i5 = OOC_ARRAY_LENGTH(i2, 0);
                    i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i5, OOC_UINT32, 12679)));
                    switch (i2) {
                    case 46u:
                    case 94u:
                    case 36u:
                    case 42u:
                    case 43u:
                    case 63u:
                    case 92u:
                    case 91u:
                    case 93u:
                    case 124u:
                    case 40u:
                    case 41u:
                      *(OOC_INT8*)(_check_pointer(i0, 12810)) = 0;
                      i0 = (OOC_INT32)*factor;
                      i1 = _check_pointer(i1, 12849);
                      i2 = OOC_ARRAY_LENGTH(i1, 0);
                      i1 = *(OOC_UINT8*)(i1+(_check_index(i4, i2, OOC_UINT32, 12849)));
                      *(OOC_UINT8*)((_check_pointer(i0, 12837))+1) = i1;
                      i0=i3;
                      goto l16;
                    case 100u:
                    case 68u:
                      *(OOC_INT8*)(_check_pointer(i0, 12905)) = 6;
                      i0 = (OOC_INT32)*factor;
                      i1 = (OOC_INT32)StringSearch_RegexpParser__setDigits;
                      *(OOC_INT32*)((_check_pointer(i0, 12931))+4) = i1;
                      i0=i3;
                      goto l16;
                    case 115u:
                    case 83u:
                      *(OOC_INT8*)(_check_pointer(i0, 13002)) = 6;
                      i0 = (OOC_INT32)*factor;
                      i1 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
                      *(OOC_INT32*)((_check_pointer(i0, 13028))+4) = i1;
                      i0=i3;
                      goto l16;
                    case 119u:
                    case 87u:
                      *(OOC_INT8*)(_check_pointer(i0, 13103)) = 6;
                      i0 = (OOC_INT32)*factor;
                      i1 = (OOC_INT32)StringSearch_RegexpParser__setAlphaNum;
                      *(OOC_INT32*)((_check_pointer(i0, 13129))+4) = i1;
                      i0=i3;
                      goto l16;
                    default:
                      i2 = _check_pointer(i1, 13206);
                      i5 = OOC_ARRAY_LENGTH(i2, 0);
                      i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i5, OOC_UINT32, 13206)));
                      i2 = StringSearch_RegexpParser__Shorthand(i2);
                      i2 = i2!=0u;
                      if (i2) goto l14;
                      StringSearch_RegexpParser__Parse_Error();
                      i0 = pos;
                      i0 = i0-2;
                      pos = i0;
                      
                      goto l16;
l14:
                      *(OOC_INT8*)(_check_pointer(i0, 13250)) = 0;
                      i0 = (OOC_INT32)*factor;
                      i1 = _check_pointer(i1, 13318);
                      i2 = OOC_ARRAY_LENGTH(i1, 0);
                      i1 = *(OOC_UINT8*)(i1+(_check_index(i4, i2, OOC_UINT32, 13318)));
                      i1 = StringSearch_RegexpParser__Shorthand(i1);
                      *(OOC_UINT8*)((_check_pointer(i0, 13295))+1) = i1;
                      i0=i3;
                      goto l16;
                    }
l16:
                    i1 = (OOC_INT32)*factor;
                    i2 = *(OOC_INT8*)(_check_pointer(i1, 13449));
                    i2 = i2==6;
                    if (i2) goto l19;
                    i2=0u;
                    goto l21;
l19:
                    i2 = (OOC_INT32)re;
                    i2 = _check_pointer(i2, 13498);
                    i3 = OOC_ARRAY_LENGTH(i2, 0);
                    i2 = *(OOC_UINT8*)(i2+(_check_index((i0+1), i3, OOC_UINT32, 13498)));
                    i2 = (OOC_UINT8)65u<=(OOC_UINT8)i2;
                    
l21:
                    if (i2) goto l23;
                    i2=0u;
                    goto l25;
l23:
                    i2 = (OOC_INT32)re;
                    i2 = _check_pointer(i2, 13512);
                    i3 = OOC_ARRAY_LENGTH(i2, 0);
                    i2 = *(OOC_UINT8*)(i2+(_check_index((i0+1), i3, OOC_UINT32, 13512)));
                    i2 = (OOC_UINT8)i2<=(OOC_UINT8)90u;
                    
l25:
                    if (!i2) goto l27;
                    *(OOC_INT8*)(_check_pointer(i1, 13555)) = 7;
l27:
                    pos = (i0+2);
                    goto l40;
                  case 91u:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13687)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, 6);
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    i1 = (OOC_INT32)StringSearch_RegexpParser__NewSet();
                    *(OOC_INT32*)((_check_pointer(i0, 13731))+4) = i1;
                    i0 = (OOC_INT32)*factor;
                    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13795))+4);
                    i1 = StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor_Set((StringSearch_RegexpParser__CharSet)i1);
                    *(OOC_INT8*)(_check_pointer(i0, 13774)) = i1;
                    goto l40;
                  case 40u:
                    pos = (i2+1);
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13890)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, (-1));
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    StringSearch_RegexpParser__Parse_Regexp((void*)((_check_pointer(i0, 13944))+8));
                    i0 = (OOC_INT32)re;
                    i0 = _check_pointer(i0, 13974);
                    i1 = OOC_ARRAY_LENGTH(i0, 0);
                    i2 = pos;
                    i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 13974)));
                    i0 = i0==41u;
                    if (i0) goto l32;
                    StringSearch_RegexpParser__Parse_Error();
                    goto l40;
l32:
                    pos = (i2+1);
                    goto l40;
                  case 42u:
                  case 43u:
                  case 63u:
                  case 93u:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14151)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, (-2));
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    StringSearch_RegexpParser__Parse_Error();
                    goto l40;
                  default:
                    i0 = flags;
                    i0 = _in(0,i0);
                    if (i0) goto l38;
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14393)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, 0);
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    
                    goto l39;
l38:
                    i0 = (OOC_INT32)b;
                    i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14313)))), StringSearch_RegexpParser__BuilderDesc_NewFactor)),StringSearch_RegexpParser__BuilderDesc_NewFactor)((StringSearch_RegexpParser__Builder)i0, 1);
                    *factor = (StringSearch_RegexpParser__Factor)i0;
                    
l39:
                    i1 = (OOC_INT32)re;
                    i1 = _check_pointer(i1, 14468);
                    i2 = OOC_ARRAY_LENGTH(i1, 0);
                    i3 = pos;
                    i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 14468)));
                    *(OOC_UINT8*)((_check_pointer(i0, 14456))+1) = i1;
                    pos = (i3+1);
                    goto l40;
                  }
l40:
                  return;
                  ;
                }


              i0 = (OOC_INT32)b;
              i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14579)))), StringSearch_RegexpParser__BuilderDesc_NewTerm)),StringSearch_RegexpParser__BuilderDesc_NewTerm)((StringSearch_RegexpParser__Builder)i0);
              *term = (StringSearch_RegexpParser__Term)i0;
              StringSearch_RegexpParser__Parse_Regexp_Expr_Term_Factor((void*)((_check_pointer(i0, 14625))+4));
              i0 = (OOC_INT32)re;
              i0 = _check_pointer(i0, 14653);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              i2 = pos;
              i0 = *(OOC_UINT8*)(i0+(_check_index(i2, i1, OOC_UINT32, 14653)));
              switch (i0) {
              case 42u:
                i0 = (OOC_INT32)*term;
                *(OOC_INT8*)((_check_pointer(i0, 14683))+8) = 2;
                pos = (i2+1);
                goto l6;
              case 43u:
                i0 = (OOC_INT32)*term;
                *(OOC_INT8*)((_check_pointer(i0, 14748))+8) = 3;
                pos = (i2+1);
                goto l6;
              case 63u:
                i0 = (OOC_INT32)*term;
                *(OOC_INT8*)((_check_pointer(i0, 14813))+8) = 1;
                pos = (i2+1);
                goto l6;
              default:
                goto l6;
              }
l6:
              return;
              ;
            }


          i0 = (OOC_INT32)b;
          i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14940)))), StringSearch_RegexpParser__BuilderDesc_NewExpr)),StringSearch_RegexpParser__BuilderDesc_NewExpr)((StringSearch_RegexpParser__Builder)i0);
          *expr = (StringSearch_RegexpParser__Expr)i0;
          i1 = (OOC_INT32)re;
          i2 = _check_pointer(i1, 14978);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = pos;
          i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14978)));
          i2 = i2==0u;
          if (i2) goto l3;
          i2 = _check_pointer(i1, 14996);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = *(OOC_UINT8*)(i2+(_check_index(i4, i3, OOC_UINT32, 14996)));
          i2 = i2==124u;
          
          goto l5;
l3:
          i2=1u;
l5:
          if (i2) goto l7;
          i1 = _check_pointer(i1, 15015);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = *(OOC_UINT8*)(i1+(_check_index(i4, i2, OOC_UINT32, 15015)));
          i1 = i1==41u;
          
          goto l8;
l7:
          i1=1u;
l8:
          i1 = !i1;
          if (!i1) goto l43;
          StringSearch_RegexpParser__Parse_Regexp_Expr_Term((void*)((_check_pointer(i0, 15054))+4));
          i0 = (OOC_INT32)*expr;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15079))+4);
          last = (StringSearch_RegexpParser__Term)i0;
          i1 = errorPos;
          i1 = i1<0;
          if (i1) goto l13;
          i1=0u;
          goto l15;
l13:
          i1 = (OOC_INT32)re;
          i1 = _check_pointer(i1, 15143);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = pos;
          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15143)));
          i1 = i1!=0u;
          
l15:
          if (i1) goto l17;
          i1=0u;
          goto l19;
l17:
          i1 = (OOC_INT32)re;
          i1 = _check_pointer(i1, 15160);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = pos;
          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15160)));
          i1 = i1!=124u;
          
l19:
          if (i1) goto l21;
          i1=0u;
          goto l23;
l21:
          i1 = (OOC_INT32)re;
          i1 = _check_pointer(i1, 15178);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = pos;
          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15178)));
          i1 = i1!=41u;
          
l23:
          if (!i1) goto l43;
l25_loop:
          StringSearch_RegexpParser__Parse_Regexp_Expr_Term((void*)(_check_pointer(i0, 15216)));
          i0 = (OOC_INT32)last;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15237));
          last = (StringSearch_RegexpParser__Term)i0;
          i1 = errorPos;
          i1 = i1<0;
          if (i1) goto l28;
          i1=0u;
          goto l30;
l28:
          i1 = (OOC_INT32)re;
          i1 = _check_pointer(i1, 15143);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = pos;
          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15143)));
          i1 = i1!=0u;
          
l30:
          if (i1) goto l32;
          i1=0u;
          goto l34;
l32:
          i1 = (OOC_INT32)re;
          i1 = _check_pointer(i1, 15160);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = pos;
          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15160)));
          i1 = i1!=124u;
          
l34:
          if (i1) goto l36;
          i1=0u;
          goto l38;
l36:
          i1 = (OOC_INT32)re;
          i1 = _check_pointer(i1, 15178);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i3 = pos;
          i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15178)));
          i1 = i1!=41u;
          
l38:
          if (i1) goto l25_loop;
l43:
          return;
          ;
        }


      i0 = groupCount;
      i1 = i0==127;
      if (i1) goto l3;
      groupCount = (i0+1);
      goto l4;
l3:
      StringSearch_RegexpParser__Parse_Error();
l4:
      i0 = currentGroup;
      oldGroupId = i0;
      i0 = (OOC_INT32)b;
      i1 = groupCount;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15455)))), StringSearch_RegexpParser__BuilderDesc_NewGroup)),StringSearch_RegexpParser__BuilderDesc_NewGroup)((StringSearch_RegexpParser__Builder)i0, i1);
      *group = (StringSearch_RegexpParser__Group)i0;
      StringSearch_RegexpParser__Parse_Regexp_Expr((void*)(_check_pointer(i0, 15504)));
      i0 = (OOC_INT32)*group;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15536));
      last = (StringSearch_RegexpParser__Expr)i0;
      i1 = (OOC_INT32)re;
      i1 = _check_pointer(i1, 15563);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = pos;
      i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15563)));
      i1 = i1==124u;
      if (!i1) goto l12;
      i1=i0;i0=i3;
l7_loop:
      pos = (i0+1);
      StringSearch_RegexpParser__Parse_Regexp_Expr((void*)(_check_pointer(i1, 15616)));
      i0 = (OOC_INT32)last;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15645));
      last = (StringSearch_RegexpParser__Expr)i0;
      i1 = (OOC_INT32)re;
      i1 = _check_pointer(i1, 15563);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = pos;
      i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT32, 15563)));
      i1 = i1==124u;
      if (!i1) goto l12;
      i1=i0;i0=i3;
      goto l7_loop;
l12:
      i0 = oldGroupId;
      currentGroup = i0;
      return;
      ;
    }


  i0 = (OOC_INT32)pattern;
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  re = (Object__CharsLatin1)i1;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 15784));
  reEnd = i0;
  groupCount = (-1);
  currentGroup = (-1);
  pos = 0;
  errorPos = (-1);
  StringSearch_RegexpParser__Parse_Regexp((void*)(OOC_INT32)&regexpGroup);
  i0 = pos;
  i1 = reEnd;
  i0 = i0!=i1;
  if (!i0) goto l3;
  StringSearch_RegexpParser__Parse_Error();
l3:
  i0 = errorPos;
  i0 = i0<0;
  if (i0) goto l6;
  return (StringSearch_RegexpParser__Group)0;
  goto l7;
l6:
  i0 = (OOC_INT32)regexpGroup;
  return (StringSearch_RegexpParser__Group)i0;
l7:
  _failed_function(8543); return 0;
  ;
}

void OOC_StringSearch_RegexpParser_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)StringSearch_RegexpParser__NewSet();
  StringSearch_RegexpParser__setDigits = (StringSearch_RegexpParser__CharSet)i0;
  StringSearch_RegexpParser__SetRange((StringSearch_RegexpParser__CharSet)i0, 0u, 48u, 57u);
  i0 = (OOC_INT32)StringSearch_RegexpParser__NewSet();
  StringSearch_RegexpParser__setWhitespace = (StringSearch_RegexpParser__CharSet)i0;
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i0, 0u, 32);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i0, 0u, 9);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i0, 0u, 10);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i0, 0u, 13);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i0, 0u, 12);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setWhitespace;
  StringSearch_RegexpParser__SetElement((StringSearch_RegexpParser__CharSet)i0, 0u, 11);
  i0 = (OOC_INT32)StringSearch_RegexpParser__NewSet();
  StringSearch_RegexpParser__setAlphaNum = (StringSearch_RegexpParser__CharSet)i0;
  StringSearch_RegexpParser__SetRange((StringSearch_RegexpParser__CharSet)i0, 0u, 48u, 57u);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setAlphaNum;
  StringSearch_RegexpParser__SetRange((StringSearch_RegexpParser__CharSet)i0, 0u, 97u, 122u);
  i0 = (OOC_INT32)StringSearch_RegexpParser__setAlphaNum;
  StringSearch_RegexpParser__SetRange((StringSearch_RegexpParser__CharSet)i0, 0u, 65u, 90u);
  return;
  ;
}

void OOC_StringSearch_RegexpParser_destroy(void) {
}

/* --- */
