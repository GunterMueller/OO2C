#include <XML/Regexp.d>
#include <__oo2c.h>
#include <setjmp.h>

XML_Regexp__Regexp XML_Regexp__New(XML_DTD__CP contentModel) {
  register OOC_INT32 i0,i1;
  XML_Regexp__Regexp regexp;
  auto OOC_INT32 XML_Regexp__New_NewState(void);
  auto void XML_Regexp__New_Convert(XML_DTD__CP cp, OOC_INT32 start, OOC_INT32 end);
    
    OOC_INT32 XML_Regexp__New_NewState(void) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_Regexp__States _new;
      OOC_INT32 i;
      OOC_INT32 newState;

      i0 = (OOC_INT32)regexp;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2531));
      i2 = *(OOC_INT32*)((_check_pointer(i0, 2511))+8);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2539)), 0);
      i1 = i2==i1;
      if (!i1) goto l19;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2577));
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2585)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_Regexp__States.baseTypes[0], (i1*2));
      _new = (XML_Regexp__States)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2625));
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2633)), 0);
      i3 = 0<i2;
      if (!i3) goto l10;
      i3=0;
l5_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2667));
      i4 = _check_pointer(i4, 2675);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = _check_pointer(i1, 2654);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      _copy_block((i4+((_check_index(i3, i5, OOC_UINT32, 2675))*12)),(i6+((_check_index(i3, i7, OOC_UINT32, 2654))*12)),12);
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l5_loop;
l10:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2720));
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 2728)), 0);
      i = i2;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2742)), 0);
      i4 = i2<i3;
      if (!i4) goto l18;
l13_loop:
      i4 = _check_pointer(i1, 2763);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_INT32*)(i4+((_check_index(i2, i5, OOC_UINT32, 2763))*12)) = 0;
      i2 = i2+1;
      i = i2;
      i4 = i2<i3;
      if (i4) goto l13_loop;
l18:
      *(OOC_INT32*)(_check_pointer(i0, 2807)) = i1;
l19:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 2858))+8);
      newState = i1;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2878));
      i2 = _check_pointer(i2, 2886);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)(i2+((_check_index(i1, i3, OOC_UINT32, 2886))*12)) = 0;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2940));
      i2 = _check_pointer(i2, 2948);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 2948))*12))+4) = (-2);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2985));
      i2 = _check_pointer(i2, 2993);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)((i2+((_check_index(i1, i3, OOC_UINT32, 2993))*12))+8) = (-2);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 3035))+8);
      *(OOC_INT32*)((_check_pointer(i0, 3035))+8) = (i2+1);
      return i1;
      ;
    }

    
    void XML_Regexp__New_Convert(XML_DTD__CP cp, OOC_INT32 start, OOC_INT32 end) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 subStart;
      auto void XML_Regexp__New_Convert_ConvertCP(XML_DTD__CP cp, OOC_INT32 start, OOC_INT32 end);
        
        void XML_Regexp__New_Convert_ConvertCP(XML_DTD__CP cp, OOC_INT32 start, OOC_INT32 end) {
          register OOC_INT32 i0,i1,i2,i3,i4;
          auto void XML_Regexp__New_Convert_ConvertCP_ConvertChoiceList(XML_DTD__CP ptr, OOC_INT32 start, OOC_INT32 end);
          auto void XML_Regexp__New_Convert_ConvertCP_ConvertSeqList(XML_DTD__CP ptr, OOC_INT32 start, OOC_INT32 end);
            
            void XML_Regexp__New_Convert_ConvertCP_ConvertChoiceList(XML_DTD__CP ptr, OOC_INT32 start, OOC_INT32 end) {
              register OOC_INT32 i0,i1,i2,i3,i4,i5;
              OOC_INT32 first1;
              OOC_INT32 first2;

              i0 = (OOC_INT32)ptr;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3627))+4);
              i1 = i1==(OOC_INT32)0;
              if (i1) goto l3;
              i1 = XML_Regexp__New_NewState();
              first1 = i1;
              i2 = end;
              XML_Regexp__New_Convert((XML_DTD__CP)i0, i1, i2);
              i3 = XML_Regexp__New_NewState();
              first2 = i3;
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3841))+4);
              XML_Regexp__New_Convert_ConvertCP_ConvertChoiceList((XML_DTD__CP)i0, i3, i2);
              i0 = (OOC_INT32)regexp;
              i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3881));
              i2 = _check_pointer(i2, 3889);
              i4 = OOC_ARRAY_LENGTH(i2, 0);
              i5 = start;
              *(OOC_INT32*)((i2+((_check_index(i5, i4, OOC_UINT32, 3889))*12))+4) = i1;
              i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3933));
              i0 = _check_pointer(i0, 3941);
              i1 = OOC_ARRAY_LENGTH(i0, 0);
              *(OOC_INT32*)((i0+((_check_index(i5, i1, OOC_UINT32, 3941))*12))+8) = i3;
              goto l4;
l3:
              i1 = end;
              i2 = start;
              XML_Regexp__New_Convert((XML_DTD__CP)i0, i2, i1);
l4:
              return;
              ;
            }

            
            void XML_Regexp__New_Convert_ConvertCP_ConvertSeqList(XML_DTD__CP ptr, OOC_INT32 start, OOC_INT32 end) {
              register OOC_INT32 i0,i1,i2;
              OOC_INT32 first1;

              i0 = (OOC_INT32)ptr;
              i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4145))+4);
              i1 = i1==(OOC_INT32)0;
              if (i1) goto l3;
              i1 = XML_Regexp__New_NewState();
              first1 = i1;
              i2 = start;
              XML_Regexp__New_Convert((XML_DTD__CP)i0, i2, i1);
              i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4324))+4);
              i2 = end;
              XML_Regexp__New_Convert_ConvertCP_ConvertSeqList((XML_DTD__CP)i0, i1, i2);
              goto l4;
l3:
              i1 = end;
              i2 = start;
              XML_Regexp__New_Convert((XML_DTD__CP)i0, i2, i1);
l4:
              return;
              ;
            }


          i0 = (OOC_INT32)cp;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4415)))), &_td_XML_DTD__NameCPDesc);
          if (i1) goto l11;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4588)))), &_td_XML_DTD__ChoiceCPDesc);
          if (i1) goto l9;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4670)))), &_td_XML_DTD__SeqCPDesc);
          if (i1) goto l7;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4666)))), 4666);
          goto l12;
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4713))+8);
          i1 = end;
          i2 = start;
          XML_Regexp__New_Convert_ConvertCP_ConvertSeqList((XML_DTD__CP)i0, i2, i1);
          goto l12;
l9:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4637))+8);
          i1 = end;
          i2 = start;
          XML_Regexp__New_Convert_ConvertCP_ConvertChoiceList((XML_DTD__CP)i0, i2, i1);
          goto l12;
l11:
          i1 = (OOC_INT32)regexp;
          i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4447));
          i2 = _check_pointer(i2, 4455);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = start;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4474))+8);
          *(OOC_INT32*)(i2+((_check_index(i4, i3, OOC_UINT32, 4455))*12)) = i0;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4498));
          i0 = _check_pointer(i0, 4506);
          i2 = OOC_ARRAY_LENGTH(i0, 0);
          i3 = end;
          *(OOC_INT32*)((i0+((_check_index(i4, i2, OOC_UINT32, 4506))*12))+4) = i3;
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4545));
          i0 = _check_pointer(i0, 4553);
          i1 = OOC_ARRAY_LENGTH(i0, 0);
          *(OOC_INT32*)((i0+((_check_index(i4, i1, OOC_UINT32, 4553))*12))+8) = i3;
l12:
          return;
          ;
        }


      i0 = (OOC_INT32)cp;
      i1 = *(OOC_INT8*)(_check_pointer(i0, 4796));
      switch (i1) {
      case 0:
        i1 = end;
        i2 = start;
        XML_Regexp__New_Convert_ConvertCP((XML_DTD__CP)i0, i2, i1);
        goto l7;
      case 1:
        i1 = XML_Regexp__New_NewState();
        subStart = i1;
        i2 = end;
        XML_Regexp__New_Convert_ConvertCP((XML_DTD__CP)i0, i1, i2);
        i0 = (OOC_INT32)regexp;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4972));
        i1 = _check_pointer(i1, 4980);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i3 = start;
        i4 = end;
        *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 4980))*12))+4) = i4;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5017));
        i0 = _check_pointer(i0, 5025);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i2 = subStart;
        *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 5025))*12))+8) = i2;
        goto l7;
      case 2:
        i1 = XML_Regexp__New_NewState();
        subStart = i1;
        i2 = start;
        XML_Regexp__New_Convert_ConvertCP((XML_DTD__CP)i0, i1, i2);
        i0 = (OOC_INT32)regexp;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5163));
        i1 = _check_pointer(i1, 5171);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i3 = start;
        i4 = end;
        *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 5171))*12))+4) = i4;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5208));
        i0 = _check_pointer(i0, 5216);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i2 = subStart;
        *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 5216))*12))+8) = i2;
        goto l7;
      case 3:
        i1 = XML_Regexp__New_NewState();
        subStart = i1;
        i2 = start;
        XML_Regexp__New_Convert_ConvertCP((XML_DTD__CP)i0, i2, i1);
        i0 = (OOC_INT32)regexp;
        i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5354));
        i1 = _check_pointer(i1, 5362);
        i2 = OOC_ARRAY_LENGTH(i1, 0);
        i3 = subStart;
        i4 = end;
        *(OOC_INT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 5362))*12))+4) = i4;
        i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5402));
        i0 = _check_pointer(i0, 5410);
        i1 = OOC_ARRAY_LENGTH(i0, 0);
        i2 = start;
        *(OOC_INT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 5410))*12))+8) = i2;
        goto l7;
      default:
        _failed_case(i1, 4789);
        goto l7;
      }
l7:
      return;
      ;
    }


  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Regexp__Regexp.baseTypes[0]);
  regexp = (XML_Regexp__Regexp)i0;
  *(OOC_INT32*)(_check_pointer(i0, 5508)) = ((OOC_INT32)RT0__NewObject(_td_XML_Regexp__States.baseTypes[0], 16));
  *(OOC_INT32*)((_check_pointer(i0, 5533))+8) = 0;
  i1 = XML_Regexp__New_NewState();
  *(OOC_INT32*)((_check_pointer(i0, 5556))+4) = i1;
  i0 = (OOC_INT32)regexp;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5619))+4);
  i1 = (OOC_INT32)contentModel;
  XML_Regexp__New_Convert((XML_DTD__CP)i1, i0, (-1));
  i0 = (OOC_INT32)regexp;
  return (XML_Regexp__Regexp)i0;
  ;
}

static XML_Regexp__Set XML_Regexp__NewSet(void) {
  register OOC_INT32 i0;
  XML_Regexp__Set set;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Regexp__Set.baseTypes[0]);
  set = (XML_Regexp__Set)i0;
  *(OOC_INT32*)(_check_pointer(i0, 5789)) = ((OOC_INT32)RT0__NewObject(_td_XML_Regexp__Members.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 5811))+4) = 0;
  return (XML_Regexp__Set)i0;
  ;
}

static void XML_Regexp__Include(XML_Regexp__Set set, OOC_INT32 element) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  XML_Regexp__Members _new;
  OOC_INT32 j;

  i = 0;
  i0 = (OOC_INT32)set;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5981))+4);
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5995));
  i1 = _check_pointer(i1, 6004);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 6004))*4);
  i2 = element;
  i1 = i1!=i2;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1 = element;
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5981))+4);
  i3 = i2!=i3;
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5995));
  i3 = _check_pointer(i3, 6004);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 6004))*4);
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l16:
  i1=i2;
l17:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6065))+4);
  i2 = i1==i2;
  if (!i2) goto l31;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6100));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 6109)), 0);
  i2 = i1==i2;
  if (!i2) goto l30;
  i2 = (OOC_INT32)RT0__NewObject(_td_XML_Regexp__Members.baseTypes[0], (i1*2));
  _new = (XML_Regexp__Members)i2;
  j = 0;
  i3 = 0<i1;
  if (!i3) goto l29;
  i3=0;
l24_loop:
  i4 = _check_pointer(i2, 6184);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6194));
  i6 = _check_pointer(i6, 6203);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 6203))*4);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 6184))*4) = i6;
  i3 = i3+1;
  j = i3;
  i4 = i3<i1;
  if (i4) goto l24_loop;
l29:
  *(OOC_INT32*)(_check_pointer(i0, 6231)) = i2;
l30:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6268));
  i2 = _check_pointer(i2, 6277);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = element;
  *(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 6277))*4) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6307))+4);
  *(OOC_INT32*)((_check_pointer(i0, 6307))+4) = (i1+1);
l31:
  return;
  ;
}

XML_Regexp__Matcher XML_Regexp__NewMatcher(XML_Regexp__Regexp regexp) {
  register OOC_INT32 i0,i1,i2;
  XML_Regexp__Matcher m;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Regexp__Matcher.baseTypes[0]);
  m = (XML_Regexp__Matcher)i0;
  i1 = (OOC_INT32)regexp;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6684));
  *(OOC_INT32*)(_check_pointer(i0, 6666)) = i2;
  i2 = (OOC_INT32)XML_Regexp__NewSet();
  *(OOC_INT32*)((_check_pointer(i0, 6699))+4) = i2;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6753))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6736))+4);
  XML_Regexp__Include((XML_Regexp__Set)i2, i1);
  return (XML_Regexp__Matcher)i0;
  ;
}

OOC_CHAR8 XML_Regexp__MatcherDesc_Matches(XML_Regexp__Matcher m, XML_UnicodeBuffer__CharArray name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  XML_Regexp__Set newSet;
  OOC_INT32 i;
  OOC_INT32 s;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6933))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 6942))+4);
  i1 = i1==0;
  if (i1) goto l28;
  i1 = (OOC_INT32)XML_Regexp__NewSet();
  newSet = (XML_Regexp__Set)i1;
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7175))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 7184))+4);
  i2 = 0!=i2;
  if (!i2) goto l23;
  i2 = (OOC_INT32)name;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7209))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 7218));
  i4 = _check_pointer(i4, 7227);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7227))*4);
  s = i4;
  i5 = i4==(-1);
  if (i5) goto l18;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7343));
  i5 = _check_pointer(i5, 7351);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 7351))*12));
  i5 = i5==0;
  if (i5) goto l13;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7572));
  i5 = _check_pointer(i5, 7580);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i4, i6, OOC_UINT32, 7580))*12));
  i5 = (
  _cmp16((const void*)(_check_pointer(i5, 7589)),(const void*)(_check_pointer(i2, 7597))))==0;
  if (!i5) goto l18;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7633));
  i5 = _check_pointer(i5, 7641);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i4 = *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 7641))*12))+4);
  XML_Regexp__Include((XML_Regexp__Set)i1, i4);
  goto l18;
l13:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7405));
  i5 = _check_pointer(i5, 7413);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 7413))*12))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7393))+4);
  XML_Regexp__Include((XML_Regexp__Set)i6, i5);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7441));
  i5 = _check_pointer(i5, 7449);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7463));
  i7 = _check_pointer(i7, 7471);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i5 = *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 7449))*12))+4);
  i6 = *(OOC_INT32*)((i7+((_check_index(i4, i8, OOC_UINT32, 7471))*12))+8);
  i5 = i5!=i6;
  if (!i5) goto l18;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7522));
  i5 = _check_pointer(i5, 7530);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i4 = *(OOC_INT32*)((i5+((_check_index(i4, i6, OOC_UINT32, 7530))*12))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7510))+4);
  XML_Regexp__Include((XML_Regexp__Set)i5, i4);
l18:
  i3 = i3+1;
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7175))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 7184))+4);
  i4 = i3!=i4;
  if (i4) goto l5_loop;
l23:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 7710))+4);
  i2 = i2!=0;
  if (i2) goto l26;
  return 0u;
  goto l29;
l26:
  *(OOC_INT32*)((_check_pointer(i0, 7736))+4) = i1;
  return 1u;
  goto l29;
l28:
  return 1u;
l29:
  _failed_function(6825); return 0;
  ;
}

OOC_CHAR8 XML_Regexp__MatcherDesc_EndOfRegexp(XML_Regexp__Matcher m) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;
  OOC_INT32 s;

  i = 0;
  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7964))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 7973))+4);
  i1 = 0!=i1;
  if (!i1) goto l18;
  i1=0;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7996))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8005));
  i2 = _check_pointer(i2, 8014);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 8014))*4);
  s = i2;
  i3 = i2==(-1);
  if (i3) goto l12;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8085));
  i3 = _check_pointer(i3, 8093);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+((_check_index(i2, i4, OOC_UINT32, 8093))*12));
  i3 = i3==0;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8145));
  i3 = _check_pointer(i3, 8153);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8153))*12))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8133))+4);
  XML_Regexp__Include((XML_Regexp__Set)i4, i3);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8179));
  i3 = _check_pointer(i3, 8187);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8201));
  i5 = _check_pointer(i5, 8209);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i3 = *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8187))*12))+4);
  i4 = *(OOC_INT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 8209))*12))+8);
  i3 = i3!=i4;
  if (!i3) goto l13;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8258));
  i3 = _check_pointer(i3, 8266);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i2 = *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 8266))*12))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8246))+4);
  XML_Regexp__Include((XML_Regexp__Set)i3, i2);
  goto l13;
l12:
  return 1u;
l13:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7964))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 7973))+4);
  i2 = i1!=i2;
  if (i2) goto l3_loop;
l18:
  return 0u;
  ;
}

XML_UnicodeBuffer__CharArray XML_Regexp__MatcherDesc_ExpectedTags(XML_Regexp__Matcher m, XML_UnicodeBuffer__CharArray currentElement) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 len;
  OOC_INT32 i;
  XML_UnicodeBuffer__CharArray str;

  i0 = (OOC_INT32)m;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8541))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8550))+4);
  i1 = i1==0;
  if (i1) goto l35;
  len = 0;
  i = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8721))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8730))+4);
  i1 = 0!=i1;
  if (i1) goto l5;
  i1=0;
  goto l19;
l5:
  i1 = (OOC_INT32)currentElement;
  i2=0;i3=0;
l6_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8754))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 8763));
  i4 = _check_pointer(i4, 8772);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 8772))*4);
  i4 = i4==(-1);
  if (i4) goto l13;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8872));
  i4 = _check_pointer(i4, 8880);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8882))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 8891));
  i5 = _check_pointer(i5, 8900);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 8900))*4);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i5, i6, OOC_UINT32, 8880))*12));
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l14;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8964));
  i4 = _check_pointer(i4, 8972);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8974))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 8983));
  i5 = _check_pointer(i5, 8992);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 8992))*4);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i5, i6, OOC_UINT32, 8972))*12));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8964));
  i5 = _check_pointer(i5, 8972);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8974))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 8983));
  i6 = _check_pointer(i6, 8992);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+(_check_index(i2, i7, OOC_UINT32, 8992))*4);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i6, i7, OOC_UINT32, 8972))*12));
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9002)), 0);
  i4 = LongStrings__Length((void*)(_check_pointer(i5, 9002)), i4);
  i3 = i3+(i4+1);
  len = i3;
  
  goto l14;
l13:
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8850)), 0);
  i4 = LongStrings__Length((void*)(_check_pointer(i1, 8850)), i4);
  i3 = i3+(i4+2);
  len = i3;
  
l14:
  i2 = i2+1;
  i = i2;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8721))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 8730))+4);
  i4 = i2!=i4;
  if (i4) goto l6_loop;
l18:
  i1=i3;
l19:
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i1+1));
  str = (XML_UnicodeBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9098)), 0);
  _copy_16((const void*)((OOC_CHAR16[]){0}),(void*)(_check_pointer(i1, 9098)),i2);
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9134))+4);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 9143))+4);
  i2 = 0!=i2;
  if (!i2) goto l34;
  i2 = (OOC_INT32)currentElement;
  i3=0;
l22_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9167))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 9176));
  i4 = _check_pointer(i4, 9185);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 9185))*4);
  i4 = i4==(-1);
  if (i4) goto l28;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9321));
  i4 = _check_pointer(i4, 9329);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9331))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 9340));
  i5 = _check_pointer(i5, 9349);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 9349))*4);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i5, i6, OOC_UINT32, 9329))*12));
  i4 = i4!=(OOC_INT32)0;
  if (!i4) goto l29;
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9410)), 0);
  LongStrings__Append(((OOC_CHAR16[]){32,0}), 2, (void*)(_check_pointer(i1, 9410)), i4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9445));
  i4 = _check_pointer(i4, 9453);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9455))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 9464));
  i5 = _check_pointer(i5, 9473);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 9473))*4);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i5, i6, OOC_UINT32, 9453))*12));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9445));
  i5 = _check_pointer(i5, 9453);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9455))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 9464));
  i6 = _check_pointer(i6, 9473);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 9473))*4);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i6, i7, OOC_UINT32, 9453))*12));
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 9483)), 0);
  i6 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9489)), 0);
  LongStrings__Append((void*)(_check_pointer(i5, 9483)), i4, (void*)(_check_pointer(i1, 9489)), i6);
  goto l29;
l28:
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9248)), 0);
  LongStrings__Append(((OOC_CHAR16[]){32,47,0}), 3, (void*)(_check_pointer(i1, 9248)), i4);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9296)), 0);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9302)), 0);
  LongStrings__Append((void*)(_check_pointer(i2, 9296)), i4, (void*)(_check_pointer(i1, 9302)), i5);
l29:
  i3 = i3+1;
  i = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9134))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 9143))+4);
  i4 = i3!=i4;
  if (i4) goto l22_loop;
l34:
  return (XML_UnicodeBuffer__CharArray)i1;
  goto l36;
l35:
  return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
l36:
  _failed_function(8384); return 0;
  ;
}

void OOC_XML_Regexp_init(void) {

  return;
  ;
}

void OOC_XML_Regexp_destroy(void) {
}

/* --- */
