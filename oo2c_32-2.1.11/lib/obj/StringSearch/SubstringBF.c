#include <StringSearch/SubstringBF.d>
#include <__oo2c.h>
#include <setjmp.h>

void StringSearch_SubstringBF__InitMatchObject(StringSearch_SubstringBF__MatchObject m, OOC_INT32 pos, OOC_INT32 endpos, StringSearch_SubstringBF__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)string;
  i1 = (OOC_INT32)matcher;
  i2 = endpos;
  i3 = pos;
  i4 = (OOC_INT32)m;
  StringSearch__InitMatchObject((StringSearch__MatchObject)i4, i3, i2, (StringSearch__Matcher)i1, (Object__String8)i0);
  i0 = start;
  *(OOC_INT32*)((_check_pointer(i4, 1987))+16) = i0;
  i0 = end;
  *(OOC_INT32*)((_check_pointer(i4, 2010))+20) = i0;
  return;
  ;
}

static StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__NewMatchObject(OOC_INT32 pos, OOC_INT32 endpos, StringSearch_SubstringBF__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBF__MatchObject.baseTypes[0]);
  i1 = end;
  i2 = start;
  i3 = (OOC_INT32)string;
  i4 = (OOC_INT32)matcher;
  i5 = endpos;
  i6 = pos;
  StringSearch_SubstringBF__InitMatchObject((StringSearch_SubstringBF__MatchObject)i0, i6, i5, (StringSearch_SubstringBF__Matcher)i4, (Object__String8)i3, i2, i1);
  return (StringSearch_SubstringBF__MatchObject)i0;
  ;
}

OOC_INT32 StringSearch_SubstringBF__MatchObjectDesc_Start(StringSearch_SubstringBF__MatchObject m, OOC_INT32 group) {
  register OOC_INT32 i0;

  i0 = group;
  _assert((i0==0), 127, 2448);
  i0 = (OOC_INT32)m;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2480))+16);
  return i0;
  ;
}

OOC_INT32 StringSearch_SubstringBF__MatchObjectDesc_End(StringSearch_SubstringBF__MatchObject m, OOC_INT32 group) {
  register OOC_INT32 i0;

  i0 = group;
  _assert((i0==0), 127, 2573);
  i0 = (OOC_INT32)m;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 2605))+20);
  return i0;
  ;
}

void StringSearch_SubstringBF__InitMatcher(StringSearch_SubstringBF__Matcher matcher, Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = groups;
  i1 = flags;
  i2 = (OOC_INT32)pattern;
  i3 = (OOC_INT32)matcher;
  StringSearch__InitMatcher((StringSearch__Matcher)i3, (Object__String8)i2, i1, i0);
  return;
  ;
}

static StringSearch_SubstringBF__Matcher StringSearch_SubstringBF__NewMatcher(Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBF__Matcher.baseTypes[0]);
  i1 = flags;
  i2 = (OOC_INT32)pattern;
  StringSearch_SubstringBF__InitMatcher((StringSearch_SubstringBF__Matcher)i0, (Object__String8)i2, i1, 0);
  return (StringSearch_SubstringBF__Matcher)i0;
  ;
}

static StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__Match(StringSearch_SubstringBF__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 spos;
  OOC_INT32 ppos;
  Object__CharsLatin1 array;

  i0 = pos;
  spos = i0;
  ppos = 0;
  i1 = (OOC_INT32)matcher;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3360));
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i2);
  array = (Object__CharsLatin1)i2;
  i3 = *(OOC_UINT32*)((_check_pointer(i1, 3413))+4);
  i3 = _in(0,i3);
  if (i3) goto l28;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3624));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 3633));
  i3 = 0!=i3;
  if (i3) goto l5;
  i3=0u;
  goto l7;
l5:
  i3 = endpos;
  i3 = i0!=i3;
  
l7:
  if (i3) goto l9;
  i3=0u;
  goto l11;
l9:
  i3 = _check_pointer(i2, 3696);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 3682)));
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 3696)));
  i3 = i5==i3;
  
l11:
  if (i3) goto l13;
  i3=i0;i2=0;
  goto l54;
l13:
  i3 = endpos;
  i4=i0;i5=0;
l14_loop:
  i4 = i4+1;
  spos = i4;
  i5 = i5+1;
  ppos = i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3624));
  i6 = *(OOC_INT32*)(_check_pointer(i6, 3633));
  i6 = i5!=i6;
  if (i6) goto l17;
  i6=0u;
  goto l19;
l17:
  i6 = i4!=i3;
  
l19:
  if (i6) goto l21;
  i6=0u;
  goto l23;
l21:
  i6 = _check_pointer(i2, 3696);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 3682)));
  i6 = *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT32, 3696)));
  i6 = i8==i6;
  
l23:
  if (i6) goto l14_loop;
l26:
  i2=i5;i3=i4;
  goto l54;
l28:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3454));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 3463));
  i3 = 0!=i3;
  if (i3) goto l31;
  i3=0u;
  goto l33;
l31:
  i3 = endpos;
  i3 = i0!=i3;
  
l33:
  if (i3) goto l35;
  i3=0u;
  goto l37;
l35:
  i3 = _check_pointer(i2, 3535);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 3516)));
  i3 = *(OOC_UINT8*)(i3+(_check_index(0, i4, OOC_UINT32, 3535)));
  i3 = (_cap(i5))==(_cap(i3));
  
l37:
  if (i3) goto l39;
  i3=i0;i2=0;
  goto l54;
l39:
  i3 = endpos;
  i4=i0;i5=0;
l40_loop:
  i4 = i4+1;
  spos = i4;
  i5 = i5+1;
  ppos = i5;
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3454));
  i6 = *(OOC_INT32*)(_check_pointer(i6, 3463));
  i6 = i5!=i6;
  if (i6) goto l43;
  i6=0u;
  goto l45;
l43:
  i6 = i4!=i3;
  
l45:
  if (i6) goto l47;
  i6=0u;
  goto l49;
l47:
  i6 = _check_pointer(i2, 3535);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 3516)));
  i6 = *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT32, 3535)));
  i6 = (_cap(i8))==(_cap(i6));
  
l49:
  if (i6) goto l40_loop;
l52:
  i2=i5;i3=i4;
l54:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3784));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 3793));
  i2 = i2==i4;
  if (i2) goto l57;
  return (StringSearch_SubstringBF__MatchObject)0;
  goto l77;
l57:
  i2 = (OOC_INT32)s;
  i4 = endpos;
  i2 = i2==0;
  if (i2) goto l60;
  i2=0u;
  goto l62;
l60:
  i2 = *(OOC_UINT32*)((_check_pointer(i1, 3864))+4);
  i2 = _in(1,i2);
  
l62:
  if (!i2) goto l76;
  i2 = len;
  i2 = i2<0;
  if (!i2) goto l75;
  len = i4;
  i2 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 3995)));
  i2 = i2!=0u;
  if (!i2) goto l75;
  i2=i4;
l69_loop:
  i2 = i2+1;
  len = i2;
  i5 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT32, 3995)));
  i5 = i5!=0u;
  if (i5) goto l69_loop;
l75:
  i2 = len;
  i2 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)string, string_0d, 0, i2);
  s = (Object__String8)i2;
l76:
  i2 = (OOC_INT32)s;
  i0 = (OOC_INT32)StringSearch_SubstringBF__NewMatchObject(i0, i4, (StringSearch_SubstringBF__Matcher)i1, (Object__String8)i2, i0, i3);
  return (StringSearch_SubstringBF__MatchObject)i0;
l77:
  _failed_function(3078); return 0;
  ;
}

StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__MatcherDesc_MatchChars(StringSearch_SubstringBF__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l9;
  
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 4433)));
  i1 = i1==0u;
  if (!i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)matcher;
  i2 = pos;
  i0 = (OOC_INT32)StringSearch_SubstringBF__Match((StringSearch_SubstringBF__Matcher)i1, (void*)(OOC_INT32)string, string_0d, (-1), i2, i0, (Object__String8)(OOC_INT32)0);
  return (StringSearch_SubstringBF__MatchObject)i0;
  ;
}

StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__MatcherDesc_Match(StringSearch_SubstringBF__Matcher matcher, Object__String8 string, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__CharsLatin1 chars;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l4;
  i0 = (OOC_INT32)string;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 4723));
  endpos = i0;
  
l4:
  i1 = (OOC_INT32)string;
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4808)), 0);
  i4 = *(OOC_INT32*)(_check_pointer(i1, 4817));
  i5 = (OOC_INT32)matcher;
  i6 = pos;
  i0 = (OOC_INT32)StringSearch_SubstringBF__Match((StringSearch_SubstringBF__Matcher)i5, (void*)(_check_pointer(i2, 4808)), i3, i4, i6, i0, (Object__String8)i1);
  return (StringSearch_SubstringBF__MatchObject)i0;
  ;
}

static StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__Search(StringSearch_SubstringBF__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 spos;
  OOC_INT32 ppos;
  Object__CharsLatin1 array;

  i0 = pos;
  spos = i0;
  ppos = 0;
  i1 = (OOC_INT32)matcher;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5158));
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i2);
  array = (Object__CharsLatin1)i2;
  i3 = *(OOC_UINT32*)((_check_pointer(i1, 5211))+4);
  i3 = _in(0,i3);
  if (i3) goto l24;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5544));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 5553));
  i3 = 0!=i3;
  if (i3) goto l5;
  i3=0u;
  goto l7;
l5:
  i3 = endpos;
  i3 = i0!=i3;
  
l7:
  if (i3) goto l9;
  i3=i0;i2=0;
  goto l46;
l9:
  i3 = endpos;
  i4=i0;i5=0;
l10_loop:
  i6 = _check_pointer(i2, 5616);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 5602)));
  i6 = *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT32, 5616)));
  i6 = i8==i6;
  if (i6) goto l13;
  i4 = (i4-i5)+1;
  spos = i4;
  ppos = 0;
  i5=0;
  goto l14;
l13:
  i4 = i4+1;
  spos = i4;
  i5 = i5+1;
  ppos = i5;
  
l14:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5544));
  i6 = *(OOC_INT32*)(_check_pointer(i6, 5553));
  i6 = i5!=i6;
  if (i6) goto l17;
  i6=0u;
  goto l19;
l17:
  i6 = i4!=i3;
  
l19:
  if (i6) goto l10_loop;
l22:
  i2=i5;i3=i4;
  goto l46;
l24:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5252));
  i3 = *(OOC_INT32*)(_check_pointer(i3, 5261));
  i3 = 0!=i3;
  if (i3) goto l27;
  i3=0u;
  goto l29;
l27:
  i3 = endpos;
  i3 = i0!=i3;
  
l29:
  if (i3) goto l31;
  i3=i0;i2=0;
  goto l46;
l31:
  i3 = endpos;
  i4=i0;i5=0;
l32_loop:
  i6 = _check_pointer(i2, 5335);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 5315)));
  i6 = *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT32, 5335)));
  i6 = (_cap(i8))==(_cap(i6));
  if (i6) goto l35;
  i4 = (i4-i5)+1;
  spos = i4;
  ppos = 0;
  i5=0;
  goto l36;
l35:
  i4 = i4+1;
  spos = i4;
  i5 = i5+1;
  ppos = i5;
  
l36:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5252));
  i6 = *(OOC_INT32*)(_check_pointer(i6, 5261));
  i6 = i5!=i6;
  if (i6) goto l39;
  i6=0u;
  goto l41;
l39:
  i6 = i4!=i3;
  
l41:
  if (i6) goto l32_loop;
l44:
  i2=i5;i3=i4;
l46:
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5824));
  i4 = *(OOC_INT32*)(_check_pointer(i4, 5833));
  i2 = i2==i4;
  if (i2) goto l49;
  return (StringSearch_SubstringBF__MatchObject)0;
  goto l69;
l49:
  i2 = (OOC_INT32)s;
  i4 = endpos;
  i2 = i2==0;
  if (i2) goto l52;
  i2=0u;
  goto l54;
l52:
  i2 = *(OOC_UINT32*)((_check_pointer(i1, 5904))+4);
  i2 = _in(1,i2);
  
l54:
  if (!i2) goto l68;
  i2 = len;
  i2 = i2<0;
  if (!i2) goto l67;
  len = i4;
  i2 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 6035)));
  i2 = i2!=0u;
  if (!i2) goto l67;
  i2=i4;
l61_loop:
  i2 = i2+1;
  len = i2;
  i5 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT32, 6035)));
  i5 = i5!=0u;
  if (i5) goto l61_loop;
l67:
  i2 = len;
  i2 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)string, string_0d, 0, i2);
  s = (Object__String8)i2;
l68:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6258));
  i2 = *(OOC_INT32*)(_check_pointer(i2, 6267));
  i5 = (OOC_INT32)s;
  i0 = (OOC_INT32)StringSearch_SubstringBF__NewMatchObject(i0, i4, (StringSearch_SubstringBF__Matcher)i1, (Object__String8)i5, (i3-i2), i3);
  return (StringSearch_SubstringBF__MatchObject)i0;
l69:
  _failed_function(4873); return 0;
  ;
}

StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__MatcherDesc_SearchChars(StringSearch_SubstringBF__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l9;
  
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6530)));
  i1 = i1==0u;
  if (!i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)matcher;
  i2 = pos;
  i0 = (OOC_INT32)StringSearch_SubstringBF__Search((StringSearch_SubstringBF__Matcher)i1, (void*)(OOC_INT32)string, string_0d, (-1), i2, i0, (Object__String8)(OOC_INT32)0);
  return (StringSearch_SubstringBF__MatchObject)i0;
  ;
}

StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__MatcherDesc_Search(StringSearch_SubstringBF__Matcher matcher, Object__String8 string, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__CharsLatin1 chars;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l4;
  i0 = (OOC_INT32)string;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 6823));
  endpos = i0;
  
l4:
  i1 = (OOC_INT32)string;
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6909)), 0);
  i4 = *(OOC_INT32*)(_check_pointer(i1, 6918));
  i5 = (OOC_INT32)matcher;
  i6 = pos;
  i0 = (OOC_INT32)StringSearch_SubstringBF__Search((StringSearch_SubstringBF__Matcher)i5, (void*)(_check_pointer(i2, 6909)), i3, i4, i6, i0, (Object__String8)i1);
  return (StringSearch_SubstringBF__MatchObject)i0;
  ;
}

void StringSearch_SubstringBF__InitFactory(StringSearch_SubstringBF__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  StringSearch__InitFactory((StringSearch__Factory)i0);
  return;
  ;
}

static StringSearch_SubstringBF__Factory StringSearch_SubstringBF__NewFactory(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBF__Factory.baseTypes[0]);
  StringSearch_SubstringBF__InitFactory((StringSearch_SubstringBF__Factory)i0);
  return (StringSearch_SubstringBF__Factory)i0;
  ;
}

StringSearch_SubstringBF__Matcher StringSearch_SubstringBF__FactoryDesc_Compile(StringSearch_SubstringBF__Factory f, Object__String8 pattern, OOC_UINT32 flags) {
  register OOC_INT32 i0,i1;

  i0 = flags;
  i1 = (OOC_INT32)pattern;
  i0 = (OOC_INT32)StringSearch_SubstringBF__NewMatcher((Object__String8)i1, i0, 0);
  return (StringSearch_SubstringBF__Matcher)i0;
  ;
}

void OOC_StringSearch_SubstringBF_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)StringSearch_SubstringBF__NewFactory();
  StringSearch_SubstringBF__factory = (StringSearch_SubstringBF__Factory)i0;
  return;
  ;
}

void OOC_StringSearch_SubstringBF_destroy(void) {
}

/* --- */
