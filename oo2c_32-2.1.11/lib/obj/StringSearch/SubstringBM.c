#include <StringSearch/SubstringBM.d>
#include <__oo2c.h>
#include <setjmp.h>

static void StringSearch_SubstringBM__InitMatchObject(StringSearch_SubstringBM__MatchObject m, OOC_INT32 pos, OOC_INT32 endpos, StringSearch_SubstringBM__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = end;
  i1 = start;
  i2 = (OOC_INT32)string;
  i3 = (OOC_INT32)matcher;
  i4 = endpos;
  i5 = pos;
  i6 = (OOC_INT32)m;
  StringSearch_SubstringBF__InitMatchObject((StringSearch_SubstringBF__MatchObject)i6, i5, i4, (StringSearch_SubstringBF__Matcher)i3, (Object__String8)i2, i1, i0);
  return;
  ;
}

static StringSearch_SubstringBM__MatchObject StringSearch_SubstringBM__NewMatchObject(OOC_INT32 pos, OOC_INT32 endpos, StringSearch_SubstringBM__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBM__MatchObject.baseTypes[0]);
  i1 = end;
  i2 = start;
  i3 = (OOC_INT32)string;
  i4 = (OOC_INT32)matcher;
  i5 = endpos;
  i6 = pos;
  StringSearch_SubstringBM__InitMatchObject((StringSearch_SubstringBM__MatchObject)i0, i6, i5, (StringSearch_SubstringBM__Matcher)i4, (Object__String8)i3, i2, i1);
  return (StringSearch_SubstringBM__MatchObject)i0;
  ;
}

static void StringSearch_SubstringBM__InitMatcher(StringSearch_SubstringBM__Matcher matcher, Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16,i17,i18;
  OOC_INT32 m;
  OOC_INT32 m1;
  OOC_INT32 i;
  Object__CharsLatin1 array;
  OOC_CHAR8 b;
  OOC_CHAR8 a;
  OOC_INT32 *len;
  OOC_INT32 j;
  OOC_INT32 maxGap;

  i0 = groups;
  i1 = flags;
  i2 = (OOC_INT32)pattern;
  i3 = (OOC_INT32)matcher;
  StringSearch_SubstringBF__InitMatcher((StringSearch_SubstringBF__Matcher)i3, (Object__String8)i2, i1, i0);
  i0 = *(OOC_INT32*)(_check_pointer(i2, 3128));
  m = i0;
  i4 = i0-1;
  m1 = i4;
  i = 0;
  i5=0;
l1_loop:
  *(OOC_INT32*)(((_check_pointer(i3, 3194))+12)+(_check_index(i5, 256, OOC_UINT32, 3200))*4) = i0;
  i5 = i5+1;
  i = i5;
  i6 = i5<=255;
  if (i6) goto l1_loop;
l5:
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i2);
  array = (Object__CharsLatin1)i2;
  i1 = _in(0,i1);
  if (i1) goto l16;
  i = 0;
  i5 = 0<i0;
  if (!i5) goto l25;
  i6=i4;i5=0;
l10_loop:
  i7 = _check_pointer(i2, 3533);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i5, i8, OOC_UINT32, 3533)));
  *(OOC_INT32*)(((_check_pointer(i3, 3516))+12)+(_check_index(i7, 256, OOC_UINT16, 3522))*4) = i6;
  i5 = i5+1;
  i = i5;
  i6 = i6+(-1);
  i7 = i5<i0;
  if (i7) goto l10_loop;
  goto l25;
l16:
  i = 0;
  i5 = 0<i0;
  if (!i5) goto l25;
  i6=i4;i5=0;
l19_loop:
  i7 = _check_pointer(i2, 3365);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT8*)(i7+(_check_index(i5, i8, OOC_UINT32, 3365)));
  StringSearch_RegexpParser__UpperLower(i7, (void*)(OOC_INT32)&a, (void*)(OOC_INT32)&b);
  i7 = a;
  *(OOC_INT32*)(((_check_pointer(i3, 3392))+12)+(_check_index(i7, 256, OOC_UINT16, 3398))*4) = i6;
  i7 = b;
  *(OOC_INT32*)(((_check_pointer(i3, 3432))+12)+(_check_index(i7, 256, OOC_UINT16, 3438))*4) = i6;
  i5 = i5+1;
  i = i5;
  i6 = i6+(-1);
  i7 = i5<i0;
  if (i7) goto l19_loop;
l25:
  *(OOC_INT32*)((_check_pointer(i3, 3608))+1036) = ((OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBM__1819.baseTypes[0], (i0+1)));
  i5 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBM__2956.baseTypes[0], i0);
  len = (void*)i5;
  i = 1;
  i6 = 1<i0;
  if (!i6) goto l85;
  i7 = 0<i0;
  i8 = i4+(-1);
  i9=i8;i11=i8;i10=i8;i8=1;
l28_loop:
  j = 0;
  if (i1) goto l55;
  if (i7) goto l32;
  i12=0u;
  goto l34;
l32:
  i12 = i9>=0;
  
l34:
  if (i12) goto l36;
  i12=0u;
  goto l38;
l36:
  i12 = _check_pointer(i2, 3933);
  i13 = OOC_ARRAY_LENGTH(i12, 0);
  i14 = _check_pointer(i2, 3947);
  i15 = OOC_ARRAY_LENGTH(i14, 0);
  i12 = *(OOC_UINT8*)(i12+(_check_index(i4, i13, OOC_UINT32, 3933)));
  i13 = *(OOC_UINT8*)(i14+(_check_index(i9, i15, OOC_UINT32, 3947)));
  i12 = i12==i13;
  
l38:
  if (i12) goto l40;
  i12=0;
  goto l80;
l40:
  i13=i11;i14=i4;i12=0;
l41_loop:
  i12 = i12+1;
  j = i12;
  i14 = i14+(-1);
  i13 = i13+(-1);
  i15 = i12<i0;
  if (i15) goto l44;
  i15=0u;
  goto l46;
l44:
  i15 = i13>=0;
  
l46:
  if (i15) goto l48;
  i15=0u;
  goto l50;
l48:
  i15 = _check_pointer(i2, 3933);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i17 = _check_pointer(i2, 3947);
  i18 = OOC_ARRAY_LENGTH(i17, 0);
  i15 = *(OOC_UINT8*)(i15+(_check_index(i14, i16, OOC_UINT32, 3933)));
  i16 = *(OOC_UINT8*)(i17+(_check_index(i13, i18, OOC_UINT32, 3947)));
  i15 = i15==i16;
  
l50:
  if (i15) goto l41_loop;
l53:
  i12 = _div((i14-i4),(-1));
  
  goto l80;
l55:
  if (i7) goto l57;
  i12=0u;
  goto l59;
l57:
  i12 = i9>=0;
  
l59:
  if (i12) goto l61;
  i12=0u;
  goto l63;
l61:
  i12 = _check_pointer(i2, 3798);
  i13 = OOC_ARRAY_LENGTH(i12, 0);
  i14 = _check_pointer(i2, 3818);
  i15 = OOC_ARRAY_LENGTH(i14, 0);
  i12 = *(OOC_UINT8*)(i12+(_check_index(i4, i13, OOC_UINT32, 3798)));
  i13 = *(OOC_UINT8*)(i14+(_check_index(i9, i15, OOC_UINT32, 3818)));
  i12 = (_cap(i12))==(_cap(i13));
  
l63:
  if (i12) goto l65;
  i12=0;
  goto l80;
l65:
  i13=i10;i14=i4;i12=0;
l66_loop:
  i12 = i12+1;
  j = i12;
  i14 = i14+(-1);
  i13 = i13+(-1);
  i15 = i12<i0;
  if (i15) goto l69;
  i15=0u;
  goto l71;
l69:
  i15 = i13>=0;
  
l71:
  if (i15) goto l73;
  i15=0u;
  goto l75;
l73:
  i15 = _check_pointer(i2, 3798);
  i16 = OOC_ARRAY_LENGTH(i15, 0);
  i17 = _check_pointer(i2, 3818);
  i18 = OOC_ARRAY_LENGTH(i17, 0);
  i15 = *(OOC_UINT8*)(i15+(_check_index(i14, i16, OOC_UINT32, 3798)));
  i16 = *(OOC_UINT8*)(i17+(_check_index(i13, i18, OOC_UINT32, 3818)));
  i15 = (_cap(i15))==(_cap(i16));
  
l75:
  if (i15) goto l66_loop;
l78:
  i12 = _div((i14-i4),(-1));
  
l80:
  i13 = _check_pointer(i5, 4010);
  i14 = OOC_ARRAY_LENGTH(i13, 0);
  *(OOC_INT32*)(i13+(_check_index(i8, i14, OOC_UINT32, 4010))*4) = i12;
  i8 = i8+1;
  i = i8;
  i11 = i11+(-1);
  i10 = i10+(-1);
  i9 = i9+(-1);
  i12 = i8<i0;
  if (i12) goto l28_loop;
l85:
  i = 1;
  if (!i6) goto l93;
  i1=1;
l88_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4070))+1036);
  i2 = _check_pointer(i2, 4077);
  i7 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)(i2+(_check_index(i1, i7, OOC_UINT32, 4077))*4) = 0;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l88_loop;
l93:
  i = i4;
  i1 = i4>=1;
  if (!i1) goto l101;
  i1=i4;
l96_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4138))+1036);
  i2 = _check_pointer(i2, 4145);
  i4 = _check_pointer(i5, 4149);
  i7 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)(i4+(_check_index(i1, i7, OOC_UINT32, 4149))*4);
  i7 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)(i2+(_check_index(i4, i7, OOC_UINT32, 4145))*4) = i1;
  i1 = i1+(-1);
  i = i1;
  i2 = i1>=1;
  if (i2) goto l96_loop;
l101:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4179))+1036);
  i1 = _check_pointer(i1, 4186);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 4186))*4) = 1;
  maxGap = i0;
  i = 1;
  if (!i6) goto l116;
  i2=i0;i1=1;
l104_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4259))+1036);
  i4 = _check_pointer(i4, 4266);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 4266))*4);
  i4 = i4==0;
  if (!i4) goto l107;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4295))+1036);
  i4 = _check_pointer(i4, 4302);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 4302))*4) = i2;
l107:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4344))+1036);
  i4 = _check_pointer(i4, 4351);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)(i4+(_check_index(i1, i5, OOC_UINT32, 4351))*4);
  i4 = (i4+i1)==i0;
  if (!i4) goto l111;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 4392))+1036);
  i2 = _check_pointer(i2, 4399);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 4399))*4);
  maxGap = i2;
  
l111:
  i1 = i1+1;
  i = i1;
  i4 = i1<i0;
  if (i4) goto l104_loop;
l116:
  return;
  ;
}

static StringSearch_SubstringBM__Matcher StringSearch_SubstringBM__NewMatcher(Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBM__Matcher.baseTypes[0]);
  i1 = flags;
  i2 = (OOC_INT32)pattern;
  StringSearch_SubstringBM__InitMatcher((StringSearch_SubstringBM__Matcher)i0, (Object__String8)i2, i1, 0);
  return (StringSearch_SubstringBM__Matcher)i0;
  ;
}

OOC_INT32 StringSearch_SubstringBM__SearchStart(StringSearch_SubstringBM__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  Object__String8 p;
  OOC_INT32 m1;
  Object__CharsLatin1 array;
  OOC_INT32 rightEnd;
  OOC_INT32 i;
  OOC_INT32 sk;
  OOC_INT32 sh;

  i0 = (OOC_INT32)matcher;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5253));
  p = (Object__String8)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 5275));
  i3 = i2-1;
  m1 = i3;
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  i4 = pos;
  i4 = i4+i3;
  array = (Object__CharsLatin1)i1;
  rightEnd = i4;
  i5 = *(OOC_UINT32*)((_check_pointer(i0, 5370))+4);
  i5 = _in(0,i5);
  if (i5) goto l36;
  i5 = endpos;
  i6 = i4<i5;
  if (!i6) goto l70;
  i6 = i4-i3;
  i7 = 0<i2;
  
l5_loop:
  i = 0;
  if (i7) goto l8;
  i8=0u;
  goto l10;
l8:
  i8 = _check_pointer(i1, 5960);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 5940)));
  i8 = *(OOC_UINT8*)(i8+(_check_index(i3, i9, OOC_UINT32, 5960)));
  i8 = i10==i8;
  
l10:
  if (i8) goto l12;
  i8=0;
  goto l22;
l12:
  i9=i3;i8=0;
l13_loop:
  i8 = i8+1;
  i = i8;
  i9 = i9+(-1);
  i10 = i8<i2;
  if (i10) goto l16;
  i10=0u;
  goto l18;
l16:
  i10 = _check_pointer(i1, 5960);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i12 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index((i4-i8), string_0d, OOC_UINT32, 5940)));
  i10 = *(OOC_UINT8*)(i10+(_check_index(i9, i11, OOC_UINT32, 5960)));
  i10 = i12==i10;
  
l18:
  if (i10) goto l13_loop;
l21:
  i8 = _div((i9-i3),(-1));
  
l22:
  i9 = i8>=i2;
  if (i9) goto l29;
  i6 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index((i4-i8), string_0d, OOC_UINT32, 6111)));
  i6 = *(OOC_INT32*)(((_check_pointer(i0, 6093))+12)+(_check_index(i6, 256, OOC_UINT16, 6099))*4);
  sk = i6;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6150))+1036);
  i9 = _check_pointer(i9, 6157);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = *(OOC_INT32*)(i9+(_check_index(i8, i10, OOC_UINT32, 6157))*4);
  sh = i9;
  i6 = i6-i8;
  i8 = i6>i9;
  if (i8) goto l27;
  i4 = i4+i9;
  rightEnd = i4;
  
  goto l28;
l27:
  i4 = i4+i6;
  rightEnd = i4;
  
l28:
  i6 = i4-i3;
  
  goto l30;
l29:
  return i6;
  
l30:
  i8 = i4<i5;
  if (i8) goto l5_loop;
  goto l70;
l36:
  i5 = endpos;
  i6 = i4<i5;
  if (!i6) goto l70;
  i6 = i4-i3;
  i7 = 0<i2;
  
l39_loop:
  i = 0;
  if (i7) goto l42;
  i8=0u;
  goto l44;
l42:
  i8 = _check_pointer(i1, 5499);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i4, string_0d, OOC_UINT32, 5473)));
  i8 = *(OOC_UINT8*)(i8+(_check_index(i3, i9, OOC_UINT32, 5499)));
  i8 = (_cap(i10))==(_cap(i8));
  
l44:
  if (i8) goto l46;
  i8=0;
  goto l56;
l46:
  i9=i3;i8=0;
l47_loop:
  i8 = i8+1;
  i = i8;
  i9 = i9+(-1);
  i10 = i8<i2;
  if (i10) goto l50;
  i10=0u;
  goto l52;
l50:
  i10 = _check_pointer(i1, 5499);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i12 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index((i4-i8), string_0d, OOC_UINT32, 5473)));
  i10 = *(OOC_UINT8*)(i10+(_check_index(i9, i11, OOC_UINT32, 5499)));
  i10 = (_cap(i12))==(_cap(i10));
  
l52:
  if (i10) goto l47_loop;
l55:
  i8 = _div((i9-i3),(-1));
  
l56:
  i9 = i8>=i2;
  if (i9) goto l63;
  i6 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index((i4-i8), string_0d, OOC_UINT32, 5651)));
  i6 = *(OOC_INT32*)(((_check_pointer(i0, 5633))+12)+(_check_index(i6, 256, OOC_UINT16, 5639))*4);
  sk = i6;
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5690))+1036);
  i9 = _check_pointer(i9, 5697);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = *(OOC_INT32*)(i9+(_check_index(i8, i10, OOC_UINT32, 5697))*4);
  sh = i9;
  i6 = i6-i8;
  i8 = i6>i9;
  if (i8) goto l61;
  i4 = i4+i9;
  rightEnd = i4;
  
  goto l62;
l61:
  i4 = i4+i6;
  rightEnd = i4;
  
l62:
  i6 = i4-i3;
  
  goto l64;
l63:
  return i6;
  
l64:
  i8 = i4<i5;
  if (i8) goto l39_loop;
l70:
  return (-1);
  ;
}

static StringSearch_SubstringBM__MatchObject StringSearch_SubstringBM__Search(StringSearch_SubstringBM__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__String8 p;
  OOC_INT32 m1;
  Object__CharsLatin1 array;
  OOC_INT32 rightEnd;
  OOC_INT32 i;
  OOC_INT32 sk;
  OOC_INT32 sh;
  auto StringSearch_SubstringBM__MatchObject StringSearch_SubstringBM__Search_Match(void);
    
    StringSearch_SubstringBM__MatchObject StringSearch_SubstringBM__Search_Match(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = (OOC_INT32)s;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)matcher;
      i1 = *(OOC_UINT32*)((_check_pointer(i1, 6724))+4);
      i1 = _in(1,i1);
      
l5:
      if (!i1) goto l20;
      i0 = len;
      i0 = i0<0;
      if (!i0) goto l19;
      i0 = endpos;
      len = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6855)));
      i1 = i1!=0u;
      if (!i1) goto l19;
l13_loop:
      i0 = i0+1;
      len = i0;
      i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6855)));
      i1 = i1!=0u;
      if (i1) goto l13_loop;
l19:
      i0 = len;
      i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)string, string_0d, 0, i0);
      s = (Object__String8)i0;
      
l20:
      i1 = (OOC_INT32)p;
      i2 = rightEnd;
      i3 = m1;
      i2 = i2-i3;
      i1 = *(OOC_INT32*)(_check_pointer(i1, 7062));
      i3 = pos;
      i4 = (OOC_INT32)matcher;
      i5 = endpos;
      i0 = (OOC_INT32)StringSearch_SubstringBM__NewMatchObject(i3, i5, (StringSearch_SubstringBM__Matcher)i4, (Object__String8)i0, i2, (i2+i1));
      return (StringSearch_SubstringBM__MatchObject)i0;
      ;
    }


  i0 = (OOC_INT32)matcher;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7114));
  p = (Object__String8)i1;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 7136));
  i2 = i2-1;
  m1 = i2;
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  i3 = pos;
  i2 = i3+i2;
  array = (Object__CharsLatin1)i1;
  rightEnd = i2;
  i0 = *(OOC_UINT32*)((_check_pointer(i0, 7231))+4);
  i0 = _in(0,i0);
  if (i0) goto l35;
  i0 = endpos;
  i0 = i2<i0;
  if (!i0) goto l68;
l4_loop:
  i = 0;
  i0 = m1;
  i1 = 0<=i0;
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = rightEnd;
  i2 = (OOC_INT32)array;
  i2 = _check_pointer(i2, 7817);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i1, string_0d, OOC_UINT32, 7797)));
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 7817)));
  i1 = i1==i2;
  
l9:
  if (i1) goto l11;
  i1=0;
  goto l21;
l11:
  i1 = (OOC_INT32)array;
  i2 = rightEnd;
  i3=i2;i4=i0;i2=0;
l12_loop:
  i2 = i2+1;
  i = i2;
  i4 = i4+(-1);
  i3 = i3+(-1);
  i5 = i2<=i0;
  if (i5) goto l15;
  i5=0u;
  goto l17;
l15:
  i5 = _check_pointer(i1, 7817);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i3, string_0d, OOC_UINT32, 7797)));
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 7817)));
  i5 = i7==i5;
  
l17:
  if (i5) goto l12_loop;
l20:
  i1 = _div((i4-i0),(-1));
  
l21:
  i0 = i1>i0;
  if (i0) goto l28;
  i0 = rightEnd;
  i2 = (OOC_INT32)matcher;
  i3 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index((i0-i1), string_0d, OOC_UINT32, 7964)));
  i3 = *(OOC_INT32*)(((_check_pointer(i2, 7946))+12)+(_check_index(i3, 256, OOC_UINT16, 7952))*4);
  sk = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8003))+1036);
  i2 = _check_pointer(i2, 8010);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 8010))*4);
  sh = i2;
  i1 = i3-i1;
  i3 = i1>i2;
  if (i3) goto l26;
  rightEnd = (i0+i2);
  
  goto l29;
l26:
  rightEnd = (i0+i1);
  
  goto l29;
l28:
  i0 = (OOC_INT32)StringSearch_SubstringBM__Search_Match();
  return (StringSearch_SubstringBM__MatchObject)i0;
l29:
  i0 = rightEnd;
  i1 = endpos;
  i0 = i0<i1;
  if (i0) goto l4_loop;
  goto l68;
l35:
  i0 = endpos;
  i0 = i2<i0;
  if (!i0) goto l68;
l37_loop:
  i = 0;
  i0 = m1;
  i1 = 0<=i0;
  if (i1) goto l40;
  i1=0u;
  goto l42;
l40:
  i1 = rightEnd;
  i2 = (OOC_INT32)array;
  i2 = _check_pointer(i2, 7360);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i1, string_0d, OOC_UINT32, 7334)));
  i2 = *(OOC_UINT8*)(i2+(_check_index(i0, i3, OOC_UINT32, 7360)));
  i1 = (_cap(i1))==(_cap(i2));
  
l42:
  if (i1) goto l44;
  i1=0;
  goto l54;
l44:
  i1 = (OOC_INT32)array;
  i2 = rightEnd;
  i3=i2;i4=i0;i2=0;
l45_loop:
  i2 = i2+1;
  i = i2;
  i4 = i4+(-1);
  i3 = i3+(-1);
  i5 = i2<=i0;
  if (i5) goto l48;
  i5=0u;
  goto l50;
l48:
  i5 = _check_pointer(i1, 7360);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i3, string_0d, OOC_UINT32, 7334)));
  i5 = *(OOC_UINT8*)(i5+(_check_index(i4, i6, OOC_UINT32, 7360)));
  i5 = (_cap(i7))==(_cap(i5));
  
l50:
  if (i5) goto l45_loop;
l53:
  i1 = _div((i4-i0),(-1));
  
l54:
  i0 = i1>i0;
  if (i0) goto l61;
  i0 = rightEnd;
  i2 = (OOC_INT32)matcher;
  i3 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index((i0-i1), string_0d, OOC_UINT32, 7508)));
  i3 = *(OOC_INT32*)(((_check_pointer(i2, 7490))+12)+(_check_index(i3, 256, OOC_UINT16, 7496))*4);
  sk = i3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7547))+1036);
  i2 = _check_pointer(i2, 7554);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT32*)(i2+(_check_index(i1, i4, OOC_UINT32, 7554))*4);
  sh = i2;
  i1 = i3-i1;
  i3 = i1>i2;
  if (i3) goto l59;
  rightEnd = (i0+i2);
  
  goto l62;
l59:
  rightEnd = (i0+i1);
  
  goto l62;
l61:
  i0 = (OOC_INT32)StringSearch_SubstringBM__Search_Match();
  return (StringSearch_SubstringBM__MatchObject)i0;
l62:
  i0 = rightEnd;
  i1 = endpos;
  i0 = i0<i1;
  if (i0) goto l37_loop;
l68:
  return (StringSearch_SubstringBM__MatchObject)0;
  ;
}

StringSearch_SubstringBM__MatchObject StringSearch_SubstringBM__MatcherDesc_SearchChars(StringSearch_SubstringBM__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l9;
  
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 8397)));
  i1 = i1==0u;
  if (!i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)matcher;
  i2 = pos;
  i0 = (OOC_INT32)StringSearch_SubstringBM__Search((StringSearch_SubstringBM__Matcher)i1, (void*)(OOC_INT32)string, string_0d, (-1), i2, i0, (Object__String8)(OOC_INT32)0);
  return (StringSearch_SubstringBM__MatchObject)i0;
  ;
}

StringSearch_SubstringBM__MatchObject StringSearch_SubstringBM__MatcherDesc_Search(StringSearch_SubstringBM__Matcher matcher, Object__String8 string, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__CharsLatin1 chars;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l4;
  i0 = (OOC_INT32)string;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 8690));
  endpos = i0;
  
l4:
  i1 = (OOC_INT32)string;
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8776)), 0);
  i4 = *(OOC_INT32*)(_check_pointer(i1, 8785));
  i5 = (OOC_INT32)matcher;
  i6 = pos;
  i0 = (OOC_INT32)StringSearch_SubstringBM__Search((StringSearch_SubstringBM__Matcher)i5, (void*)(_check_pointer(i2, 8776)), i3, i4, i6, i0, (Object__String8)i1);
  return (StringSearch_SubstringBM__MatchObject)i0;
  ;
}

void StringSearch_SubstringBM__InitFactory(StringSearch_SubstringBM__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  StringSearch__InitFactory((StringSearch__Factory)i0);
  return;
  ;
}

static StringSearch_SubstringBM__Factory StringSearch_SubstringBM__NewFactory(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_SubstringBM__Factory.baseTypes[0]);
  StringSearch_SubstringBM__InitFactory((StringSearch_SubstringBM__Factory)i0);
  return (StringSearch_SubstringBM__Factory)i0;
  ;
}

StringSearch_SubstringBM__Matcher StringSearch_SubstringBM__FactoryDesc_Compile(StringSearch_SubstringBM__Factory f, Object__String8 pattern, OOC_UINT32 flags) {
  register OOC_INT32 i0,i1;

  i0 = flags;
  i1 = (OOC_INT32)pattern;
  i0 = (OOC_INT32)StringSearch_SubstringBM__NewMatcher((Object__String8)i1, i0, 0);
  return (StringSearch_SubstringBM__Matcher)i0;
  ;
}

void OOC_StringSearch_SubstringBM_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)StringSearch_SubstringBM__NewFactory();
  StringSearch_SubstringBM__factory = (StringSearch_SubstringBM__Factory)i0;
  return;
  ;
}

void OOC_StringSearch_SubstringBM_destroy(void) {
}

/* --- */
