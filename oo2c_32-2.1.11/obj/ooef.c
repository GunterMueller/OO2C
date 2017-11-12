#include <ooef.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_CHAR8 ooef__Match(const OOC_CHAR8 pat__ref[], OOC_LEN pat_0d, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(pat,OOC_CHAR8 ,pat_0d)
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)
  OOC_INT16 lenPattern;
  OOC_INT16 lenSource;
  auto OOC_CHAR8 ooef__Match_RecMatch(OOC_CHAR8 src[], OOC_LEN src_0d, OOC_INT16 posSrc, OOC_CHAR8 pat[], OOC_LEN pat_0d, OOC_INT16 posPat);
    
    OOC_CHAR8 ooef__Match_RecMatch(OOC_CHAR8 src[], OOC_LEN src_0d, OOC_INT16 posSrc, OOC_CHAR8 pat[], OOC_LEN pat_0d, OOC_INT16 posPat) {
      register OOC_INT32 i0,i1,i2,i3,i4;

l1_loop:
      i0 = posSrc;
      i1 = lenSource;
      i2 = i0==i1;
      if (i2) goto l4;
      i2=0u;
      goto l6;
l4:
      i2 = lenPattern;
      i3 = posPat;
      i2 = i3==i2;
      
l6:
      if (!i2) goto l7;
      goto l39;
l7:
      i2 = lenPattern;
      i3 = posPat;
      i4 = i3==i2;
      if (!i4) goto l9;
      goto l37;
l9:
      i4 = *(OOC_UINT8*)((OOC_INT32)pat+(_check_index(i3, pat_0d, OOC_UINT16, 3423)));
      i4 = i4==42u;
      if (i4) goto l20;
      i1 = *(OOC_UINT8*)((OOC_INT32)pat+(_check_index(i3, pat_0d, OOC_UINT16, 3755)));
      i1 = i1!=63u;
      if (i1) goto l14;
      i1=0u;
      goto l16;
l14:
      i1 = *(OOC_UINT8*)((OOC_INT32)pat+(_check_index(i3, pat_0d, OOC_UINT16, 3777)));
      i2 = *(OOC_UINT8*)((OOC_INT32)src+(_check_index(i0, src_0d, OOC_UINT16, 3791)));
      i1 = i1!=i2;
      
l16:
      if (!i1) goto l17;
      goto l18;
l17:
      posSrc = (i0+1);
      posPat = (i3+1);
      goto l1_loop;
l18:
      return 0u;
      goto l1_loop;
l20:
      i2 = i3==(i2-1);
      if (!i2) goto l22;
      goto l34;
l22:
      i2 = i0<=i1;
      if (i2) goto l24;
      goto l33;
l24:
      i2 = i3+1;
      
l25_loop:
      i3 = ooef__Match_RecMatch((void*)(OOC_INT32)src, src_0d, i0, (void*)(OOC_INT32)pat, pat_0d, i2);
      if (!i3) goto l28;
      return 1u;
l28:
      i0 = i0+1;
      i3 = i0<=i1;
      if (i3) goto l25_loop;
l33:
      return 0u;
      goto l1_loop;
l34:
      return 1u;
      goto l1_loop;
l37:
      return 0u;
      goto l1_loop;
l39:
      return 1u;
      goto l1_loop;
l42:
      ;
    }


  OOC_INITIALIZE_VPAR(pat__ref,pat,OOC_CHAR8 ,pat_0d)
  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  i0 = Strings__Length((void*)(OOC_INT32)pat, pat_0d);
  lenPattern = i0;
  i0 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  lenSource = i0;
  i0 = ooef__Match_RecMatch((void*)(OOC_INT32)s, s_0d, 0, (void*)(OOC_INT32)pat, pat_0d, 0);
  return i0;
  ;
}

static void ooef__ActiveFile(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  ooef__FileInfo f;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)ooef__files;
  f = (ooef__FileInfo)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (
  _cmp8((const void*)((_check_pointer(i0, 4294))+4),(const void*)(OOC_INT32)name))!=0;
  
l5:
  if (i1) goto l7;
  i1=i0;
  goto l17;
l7:
  i1=i0;
l8_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4324));
  f = (ooef__FileInfo)i1;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (
  _cmp8((const void*)((_check_pointer(i1, 4294))+4),(const void*)(OOC_INT32)name))!=0;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l20;
  ooef__active = (ooef__FileInfo)i1;
  goto l21;
l20:
  i1 = (OOC_INT32)RT0__NewObject(_td_ooef__FileInfo.baseTypes[0]);
  f = (ooef__FileInfo)i1;
  *(OOC_INT32*)(_check_pointer(i1, 4441)) = i0;
  _copy_8((const void*)(OOC_INT32)name,(void*)((_check_pointer(i1, 4477))+4),256);
  *(OOC_INT32*)((_check_pointer(i1, 4493))+260) = (OOC_INT32)0;
  ooef__files = (ooef__FileInfo)i1;
  ooef__active = (ooef__FileInfo)i1;
l21:
  return;
  ;
}

static void ooef__AddError(ooef__Error *list, OOC_INT32 pos, const OOC_CHAR8 text__ref[], OOC_LEN text_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(text,OOC_CHAR8 ,text_0d)
  ooef__Error err;
  ooef__Error ptr;

  OOC_INITIALIZE_VPAR(text__ref,text,OOC_CHAR8 ,text_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_ooef__Error.baseTypes[0]);
  err = (ooef__Error)i0;
  *(OOC_INT32*)(_check_pointer(i0, 4805)) = 0;
  i1 = pos;
  *(OOC_INT32*)((_check_pointer(i0, 4827))+4) = i1;
  _copy_8((const void*)(OOC_INT32)text,(void*)((_check_pointer(i0, 4860))+8),100);
  i1 = (OOC_INT32)*list;
  i2 = i1==0;
  if (i2) goto l12;
  ptr = (ooef__Error)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4961));
  i2 = i2!=0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4996));
  ptr = (ooef__Error)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4961));
  i2 = i2!=0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT32*)(_check_pointer(i1, 5023)) = i0;
  goto l13;
l12:
  *list = (ooef__Error)i0;
l13:
  return;
  ;
}

static void ooef__ScanInput(void) {
  register OOC_INT32 i0,i1;
  OOC_INT16 i;
  OOC_CHAR8 ch;
  OOC_CHAR8 str[1024];
  ooef__Filename filename;
  OOC_CHAR8 number[16];
  OOC_CHAR8 text[1024];
  auto void ooef__ScanInput_Ln(void);
    
    void ooef__ScanInput_Ln(void) {
      register OOC_INT32 i0;

      i0 = In__Done();
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = ch;
      i0 = i0==10u;
      
l5:
      if (!i0) goto l7;
      Out__Ln();
l7:
      return;
      ;
    }


  i0 = In__Done();
  if (!i0) goto l59;
l3_loop:
  i = 0;
  i0=0;
l4_loop:
  In__Char((void*)(OOC_INT32)&ch);
  i1 = In__Done();
  i1 = !i1;
  if (i1) goto l7;
  i1 = ch;
  i1 = i1==10u;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l17;
  i1 = i0<1023;
  if (!i1) goto l4_loop;
  i1 = ch;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 5710))) = i1;
  i0 = i0+1;
  i = i0;
  
  goto l4_loop;
l17:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 5771))) = 0u;
  i0 = ooef__Match((OOC_CHAR8*)"In file *: ", 12, (void*)(OOC_INT32)str, 1024);
  if (i0) goto l50;
  i0 = ooef__Match((OOC_CHAR8*)"*: *", 5, (void*)(OOC_INT32)str, 1024);
  if (i0) goto l25;
  i0 = ooef__echoText;
  if (!i0) goto l54;
  Out__String((void*)(OOC_INT32)str, 1024);
  ooef__ScanInput_Ln();
  goto l54;
l25:
  i0 = ooef__echoErrors;
  if (!i0) goto l28;
  Out__String((void*)(OOC_INT32)str, 1024);
  ooef__ScanInput_Ln();
l28:
  i = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 1024, OOC_UINT16, 6337)));
  i0 = i0!=58u;
  if (i0) goto l31;
  i0=0;
  goto l37;
l31:
  i0=0;
l32_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 6337)));
  i1 = i1!=58u;
  if (i1) goto l32_loop;
l37:
  Strings__Extract((void*)(OOC_INT32)str, 1024, 0, i0, (void*)(OOC_INT32)number, 16);
  i1 = IntConv__FormatInt((void*)(OOC_INT32)number, 16);
  i1 = i1==0;
  if (i1) goto l40;
  i1=0u;
  goto l42;
l40:
  i1 = (OOC_INT32)ooef__active;
  i1 = i1!=(OOC_INT32)0;
  
l42:
  if (i1) goto l47;
  i0 = ooef__echoText;
  if (!i0) goto l54;
  Out__String((void*)(OOC_INT32)str, 1024);
  ooef__ScanInput_Ln();
  goto l54;
l47:
  i1 = Strings__Length((void*)(OOC_INT32)str, 1024);
  Strings__Extract((void*)(OOC_INT32)str, 1024, (i0+1), ((i1-i0)-1), (void*)(OOC_INT32)text, 1024);
  i0 = IntConv__ValueInt((void*)(OOC_INT32)number, 16);
  i1 = (OOC_INT32)ooef__active;
  ooef__AddError((void*)((_check_pointer(i1, 6719))+260), i0, (void*)(OOC_INT32)text, 1024);
  goto l54;
l50:
  i0 = ooef__echoErrors;
  if (!i0) goto l53;
  Out__String((void*)(OOC_INT32)str, 1024);
  ooef__ScanInput_Ln();
l53:
  i0 = Strings__Length((void*)(OOC_INT32)str, 1024);
  Strings__Extract((void*)(OOC_INT32)str, 1024, 8, (i0-10), (void*)(OOC_INT32)filename, 256);
  ooef__ActiveFile((void*)(OOC_INT32)filename, 256);
l54:
  i0 = In__Done();
  if (i0) goto l3_loop;
l59:
  return;
  ;
}

static void ooef__SortErrors(void) {
  register OOC_INT32 i0,i1,i2;
  ooef__FileInfo f;
  ooef__FileInfo next;
  ooef__Error newList;
  ooef__Error e;
  auto ooef__Error ooef__SortErrors_RemLargestPos(ooef__Error *list, OOC_INT32 max);
    
    ooef__Error ooef__SortErrors_RemLargestPos(ooef__Error *list, OOC_INT32 max) {
      register OOC_INT32 i0,i1,i2;
      ooef__Error e;

      i0 = (OOC_INT32)*list;
      i1 = i0==(OOC_INT32)0;
      if (i1) goto l11;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 7544))+4);
      i2 = max;
      i1 = i1>=i2;
      if (i1) goto l5;
      i0 = (OOC_INT32)ooef__SortErrors_RemLargestPos((void*)(_check_pointer(i0, 7782)), i2);
      return (ooef__Error)i0;
      goto l12;
l5:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 7609))+4);
      i1 = (OOC_INT32)ooef__SortErrors_RemLargestPos((void*)(_check_pointer(i0, 7597)), i1);
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l8;
      i0=i1;
      goto l9;
l8:
      e = (ooef__Error)i0;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7692));
      *list = (ooef__Error)i1;
      
l9:
      return (ooef__Error)i0;
      goto l12;
l11:
      return (ooef__Error)(OOC_INT32)0;
l12:
      _failed_function(7208); return 0;
      ;
    }


  f = (ooef__FileInfo)(OOC_INT32)0;
  i0 = (OOC_INT32)ooef__files;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0=(OOC_INT32)0;
  goto l9;
l3:
  i1=(OOC_INT32)0;
l4_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7913));
  next = (ooef__FileInfo)i2;
  *(OOC_INT32*)(_check_pointer(i0, 7932)) = i1;
  f = (ooef__FileInfo)i0;
  ooef__files = (ooef__FileInfo)i2;
  i1 = i2!=(OOC_INT32)0;
  if (!i1) goto l9;
  i1=i0;i0=i2;
  goto l4_loop;
l9:
  ooef__files = (ooef__FileInfo)i0;
  f = (ooef__FileInfo)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l26;
l12_loop:
  newList = (ooef__Error)(OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8092))+260);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l16_loop;
  i1=(OOC_INT32)0;
  goto l21;
l16_loop:
  i0 = (OOC_INT32)ooef__SortErrors_RemLargestPos((void*)((_check_pointer(i0, 8141))+260), (-2147483647-1));
  e = (ooef__Error)i0;
  i1 = (OOC_INT32)newList;
  *(OOC_INT32*)(_check_pointer(i0, 8177)) = i1;
  newList = (ooef__Error)i0;
  i1 = (OOC_INT32)f;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8092))+260);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l20;
  i0=i1;
  goto l16_loop;
l20:
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l21:
  *(OOC_INT32*)((_check_pointer(i0, 8235))+260) = i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8269));
  f = (ooef__FileInfo)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l12_loop;
l26:
  return;
  ;
}

static void ooef__PrintErrors(void) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  ooef__FileInfo f;
  Files__File file;
  Msg__Msg res;
  Channel__Reader reader;
  OOC_INT32 fileSize;
  OOC_INT32 lastPos;
  OOC_INT32 lineStart;
  OOC_INT32 scanPos;
  OOC_INT32 scanLine;
  ooef__Error e;
  OOC_INT32 col;
  OOC_INT32 i;
  auto OOC_INT32 ooef__PrintErrors_CountLines(OOC_INT32 start, OOC_INT32 end);
  auto OOC_INT32 ooef__PrintErrors_SkipLines(OOC_INT32 pos, OOC_INT32 n);
  auto void ooef__PrintErrors_PrintText(OOC_INT32 start, OOC_INT32 end);
  auto OOC_INT32 ooef__PrintErrors_Column(OOC_INT32 pos);
    
    OOC_INT32 ooef__PrintErrors_CountLines(OOC_INT32 start, OOC_INT32 end) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 count;

      count = 0;
      i0 = start;
      i1 = end;
      i2 = i0<i1;
      if (i2) goto l3;
      i0=0;
      goto l13;
l3:
      i2 = (OOC_INT32)ooef__fileBuffer;
      i3=0;
l4_loop:
      i4 = _check_pointer(i2, 8821);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i0, i5, OOC_UINT32, 8821)));
      i4 = i4==10u;
      if (!i4) goto l8;
      i3 = i3+1;
      count = i3;
      
l8:
      i0 = i0+1;
      start = i0;
      i4 = i0<i1;
      if (i4) goto l4_loop;
l12:
      i0=i3;
l13:
      return i0;
      ;
    }

    
    OOC_INT32 ooef__PrintErrors_SkipLines(OOC_INT32 pos, OOC_INT32 n) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;

      i0 = n;
      i1 = i0<=0;
      if (i1) goto l19;
      i1 = fileSize;
      i2 = pos;
      i3 = i2<i1;
      if (!i3) goto l18;
      i3 = (OOC_INT32)ooef__fileBuffer;
      {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l5_loop:
      i4 = _check_pointer(i3, 9583);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i0, i5, OOC_UINT32, 9583)));
      i0 = i0+1;
      i4 = i4==10u;
      if (!i4) goto l13;
      i4 = i2==1;
      if (i4) goto l11;
      i2 = i2-1;
      n = i2;
      
      goto l13;
l11:
      return i0;
      
l13:
      pos = i0;
      i4 = i0<i1;
      if (i4) goto l5_loop;
l18:
      return i1;
      goto l36;
l19:
      i1 = pos;
      i2 = i1>0;
      if (!i2) goto l35;
      i2 = (OOC_INT32)ooef__fileBuffer;
      {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l22_loop:
      i3 = _check_pointer(i2, 9321);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = i0-1;
      i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 9321)));
      i3 = i3==10u;
      if (i3) goto l25;
      i0=i1;
      goto l30;
l25:
      i3 = i1==0;
      if (i3) goto l28;
      i0 = i1+1;
      n = i0;
      
      goto l30;
l28:
      return i0;
      i0=i1;
l30:
      pos = i5;
      i1 = i5>0;
      if (!i1) goto l35;
      i1=i0;i0=i5;
      goto l22_loop;
l35:
      return 0;
l36:
      _failed_function(8961); return 0;
      ;
    }

    
    void ooef__PrintErrors_PrintText(OOC_INT32 start, OOC_INT32 end) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;

      i0 = start;
      i = i0;
      i1 = end;
      i2 = i0<i1;
      if (!i2) goto l8;
l3_loop:
      i3 = (OOC_INT32)ooef__fileBuffer;
      i3 = _check_pointer(i3, 10085);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i0, i4, OOC_UINT32, 10085)));
      Out__Char(i3);
      i0 = i0+1;
      i = i0;
      i3 = i0<i1;
      if (i3) goto l3_loop;
l8:
      i0 = fileSize;
      i0 = i1==i0;
      if (i0) goto l11;
      i0=0u;
      goto l13;
l11:
      i0=i2;
l13:
      if (i0) goto l15;
      i0=0u;
      goto l17;
l15:
      i0 = (OOC_INT32)ooef__fileBuffer;
      i0 = _check_pointer(i0, 10173);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_UINT8*)(i0+(_check_index((i1-1), i2, OOC_UINT32, 10173)));
      i0 = i0!=10u;
      
l17:
      if (!i0) goto l19;
      Out__Char(10u);
l19:
      return;
      ;
    }

    
    OOC_INT32 ooef__PrintErrors_Column(OOC_INT32 pos) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 p;
      OOC_INT32 c;

      i0 = lineStart;
      p = i0;
      c = 0;
      i1 = pos;
      i2 = i0<i1;
      if (i2) goto l3;
      i0=0;
      goto l13;
l3:
      i2 = (OOC_INT32)ooef__fileBuffer;
      i3=0;
l4_loop:
      i4 = _check_pointer(i2, 10642);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i0, i5, OOC_UINT32, 10642)));
      i4 = i4==9u;
      if (i4) goto l7;
      i3 = i3+1;
      c = i3;
      
      goto l8;
l7:
      i3 = (i3+8)-(_mod(i3,8));
      c = i3;
      
l8:
      i0 = i0+1;
      p = i0;
      i4 = i0<i1;
      if (i4) goto l4_loop;
l12:
      i0=i3;
l13:
      return (i0+1);
      ;
    }


  i0 = (OOC_INT32)ooef__files;
  f = (ooef__FileInfo)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l84;
  
l3_loop:
  i1 = (OOC_INT32)ooef__mode;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10908))+8);
  i1 = *(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10923)))), &_td_Config__IntegerVarDesc, 10923)), 10934));
  i1 = i1==0;
  if (!i1) goto l9;
  i1 = (OOC_INT32)ooef__files;
  i1 = i0!=i1;
  if (!i1) goto l8;
  Out__String((OOC_CHAR8*)"###############################################################################", 80);
  Out__Ln();
l8:
  Out__String((OOC_CHAR8*)"In file ", 9);
  Out__String((void*)((_check_pointer(i0, 11167))+4), 256);
  Out__String((OOC_CHAR8*)":", 2);
  Out__Ln();
l9:
  i1 = Files__Exists((void*)((_check_pointer(i0, 11308))+4), 256);
  if (!i1) goto l79;
  i1 = (OOC_INT32)Files__Old((void*)((_check_pointer(i0, 11349))+4), 256, 1u, (void*)(OOC_INT32)&res);
  file = (Files__File)i1;
  i2 = i1==(OOC_INT32)0;
  if (!i2) goto l14;
  Out__String((OOC_CHAR8*)"Error: Can\047t open file ", 24);
  Out__String((void*)((_check_pointer(i0, 11477))+4), 256);
  Out__Ln();
  return;
l14:
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11556)))), Files__FileDesc_NewReader)),Files__FileDesc_NewReader)((Files__File)i1);
  reader = (Channel__Reader)i2;
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11595)))), PosixFileDescr__ChannelDesc_Length)),PosixFileDescr__ChannelDesc_Length)((PosixFileDescr__Channel)i1);
  fileSize = i3;
  i4 = ooef__bufferSize;
  i4 = i3>i4;
  if (!i4) goto l17;
  ooef__fileBuffer = (void*)((OOC_INT32)RT0__NewObject(_td_ooef__1903.baseTypes[0], i3));
  ooef__bufferSize = i3;
l17:
  i4 = (OOC_INT32)ooef__fileBuffer;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11745)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i2, (void*)(_check_pointer(i4, 11768)), (-1), 0, i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11803))+4);
  i2 = i2!=(OOC_INT32)0;
  if (!i2) goto l20;
  Out__String((OOC_CHAR8*)"Error: Error while reading from ", 33);
  Out__String((void*)((_check_pointer(i0, 11910))+4), 256);
  Out__Ln();
  return;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11979)))), Files__FileDesc_Close)),Files__FileDesc_Close)((Files__File)i1);
  lastPos = (-1);
  lineStart = 0;
  scanPos = 0;
  scanLine = 1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12136))+260);
  e = (ooef__Error)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l23;
  i0=(-1);
  goto l75;
l23:
  i1=(-1);
l24_loop:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12262))+4);
  i3 = scanPos;
  i2 = i3<i2;
  if (!i2) goto l35;
  i2 = (OOC_INT32)ooef__fileBuffer;
l27_loop:
  i3 = _check_pointer(i2, 12298);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i5 = scanPos;
  i3 = *(OOC_UINT8*)(i3+(_check_index(i5, i4, OOC_UINT32, 12298)));
  i4 = i5+1;
  i3 = i3==10u;
  if (!i3) goto l30;
  i3 = scanLine;
  scanLine = (i3+1);
  lineStart = i4;
l30:
  scanPos = i4;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12262))+4);
  i3 = i4<i3;
  if (i3) goto l27_loop;
l35:
  i2 = (OOC_INT32)ooef__mode;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12463))+8);
  i3 = *(OOC_INT32*)(_check_pointer((_type_guard(i3, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12478)))), &_td_Config__IntegerVarDesc, 12478)), 12489));
  i3 = i3==0;
  if (i3) goto l44;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14090))+8);
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14105)))), &_td_Config__IntegerVarDesc, 14105)), 14116));
  i2 = i2>=1;
  if (!i2) goto l43;
  i2 = (OOC_INT32)f;
  Out__String((void*)((_check_pointer(i2, 14168))+4), 256);
  Out__Char(58u);
  i2 = scanLine;
  Out__LongInt(i2, 0);
  i2 = (OOC_INT32)ooef__mode;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 14264))+8);
  i2 = *(OOC_INT32*)(_check_pointer((_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14279)))), &_td_Config__IntegerVarDesc, 14279)), 14290));
  i2 = i2==2;
  if (!i2) goto l42;
  Out__Char(44u);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 14384))+4);
  i2 = ooef__PrintErrors_Column(i2);
  Out__LongInt(i2, 0);
l42:
  Out__Char(58u);
  Out__String((void*)((_check_pointer(i0, 14465))+8), 100);
  Out__Ln();
l43:
  i0=i1;
  goto l70;
l44:
  i0 = i1>=0;
  if (i0) goto l47;
  i2=0u;
  goto l49;
l47:
  i2 = scanPos;
  i2 = ooef__PrintErrors_CountLines(i1, i2);
  i3 = ooef__trailContext;
  i4 = ooef__leadContext;
  i5 = ooef__connContext;
  i2 = (i2-1)<=((i4+i3)+i5);
  
l49:
  if (i2) goto l53;
  if (!i0) goto l52;
  i0 = ooef__trailContext;
  i0 = ooef__PrintErrors_SkipLines(i1, (i0+1));
  i1 = ooef__PrintErrors_SkipLines(i1, 1);
  ooef__PrintErrors_PrintText(i1, i0);
  Out__Ln();
  Out__String((OOC_CHAR8*)"...", 4);
  Out__Ln();
  Out__Ln();
l52:
  i0 = scanPos;
  i1 = ooef__PrintErrors_SkipLines(i0, 1);
  i2 = ooef__leadContext;
  i0 = ooef__PrintErrors_SkipLines(i0, (-i2));
  ooef__PrintErrors_PrintText(i0, i1);
  goto l54;
l53:
  i0 = scanPos;
  i0 = ooef__PrintErrors_SkipLines(i0, 1);
  i1 = ooef__PrintErrors_SkipLines(i1, 1);
  ooef__PrintErrors_PrintText(i1, i0);
l54:
  i0 = scanPos;
  i1 = lastPos;
  i2 = (OOC_INT32)e;
  i1 = i1!=i0;
  if (!i1) goto l69;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 13568))+4);
  i1 = ooef__PrintErrors_Column(i1);
  col = i1;
  i = 1;
  i3 = 1<i1;
  if (!i3) goto l68;
  i3=1;
l59_loop:
  i4 = i3<=1;
  if (i4) goto l62;
  Out__Char(45u);
  goto l63;
l62:
  Out__Char(35u);
l63:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l59_loop;
l68:
  Out__Char(94u);
  Out__Ln();
l69:
  Out__String((OOC_CHAR8*)"# ", 3);
  i1 = scanLine;
  Out__LongInt(i1, 0);
  Out__String((OOC_CHAR8*)": ", 3);
  Out__String((void*)((_check_pointer(i2, 14009))+8), 100);
  Out__Ln();
  lastPos = i0;
  
l70:
  i1 = (OOC_INT32)e;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 14524));
  e = (ooef__Error)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l75;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
  goto l24_loop;
l75:
  i1 = (OOC_INT32)ooef__mode;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 14560))+8);
  i1 = *(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14575)))), &_td_Config__IntegerVarDesc, 14575)), 14586));
  i1 = i1==0;
  if (!i1) goto l79;
  i1 = ooef__trailContext;
  i1 = ooef__PrintErrors_SkipLines(i0, (1+i1));
  i0 = ooef__PrintErrors_SkipLines(i0, 1);
  ooef__PrintErrors_PrintText(i0, i1);
l79:
  i0 = (OOC_INT32)f;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14823));
  f = (ooef__FileInfo)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l84:
  return;
  ;
}

static OOC_CHAR8 ooef__TranslateArgs(OOC_CHAR8 file[], OOC_LEN file_0d, OOC_INT32 *pos) {
  register OOC_INT32 i0,i1,i2;
  Object__String arg;
  Object__String8 str8;
  Object__CharsLatin1 chars;
  OOC_INT8 res;

  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = (OOC_INT32)Config_Section_Arguments__SectionDesc_Get((Config_Section_Arguments__Section)i0, 0);
  arg = (Object__String)i0;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15104)))), Object__StringDesc_ToString8)),Object__StringDesc_ToString8)((Object__String)i0, 63u);
  str8 = (Object__String8)i1;
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 15180)), 0);
  i2 = Files__Exists((void*)(_check_pointer(i1, 15180)), i2);
  i2 = !i2;
  if (i2) goto l11;
  _copy_8((const void*)(_check_pointer(i1, 15317)),(void*)(OOC_INT32)file,file_0d);
  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = (OOC_INT32)Config_Section_Arguments__SectionDesc_Get((Config_Section_Arguments__Section)i0, 1);
  arg = (Object__String)i0;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15382)))), Object__StringDesc_ToString8)),Object__StringDesc_ToString8)((Object__String)i0, 63u);
  str8 = (Object__String8)i0;
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  chars = (Object__CharsLatin1)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 15462)), 0);
  IntStr__StrToInt((void*)(_check_pointer(i0, 15462)), i1, (void*)(OOC_INT32)pos, (void*)(OOC_INT32)&res);
  i0 = res;
  i0 = i0!=0;
  if (i0) goto l5;
  i0 = *pos;
  i0 = i0<0;
  
  goto l7;
l5:
  i0=1u;
l7:
  if (i0) goto l9;
  return 1u;
  goto l12;
l9:
  Out__String((OOC_CHAR8*)"Error: Invalid file position ", 30);
  i0 = *pos;
  Out__LongInt(i0, 0);
  Out__Ln();
  return 0u;
  goto l12;
l11:
  Out__String((OOC_CHAR8*)"Error: Cannot find file ", 25);
  Out__Object((Object__Object)i0);
  Out__Ln();
  return 0u;
l12:
  _failed_function(14868); return 0;
  ;
}

static void ooef__WriteHelp(void) {

  Out__String((OOC_CHAR8*)"Usage: oo2c --error-style char-pos ... | ooef [option]", 55);
  Out__Ln();
  Out__String((OOC_CHAR8*)"       ooef [option] <module> <pos>", 36);
  Out__Ln();
  Out__String((OOC_CHAR8*)"Options: ", 10);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--context, -c   Print errors in source text context (default).", 63);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--line, -l      Print errors in the format `file:line:error\047.", 62);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--linecol, -L   Print errors in the format `file:line,column:error\047.", 69);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--help, -h      Write this text and exit.", 42);
  Out__Ln();
  return;
  ;
}

static void ooef__NewConfig(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Config__NewIntegerVar(0);
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c0), (Config__Variable)i0);
  ooef__mode = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--context,-c", 13, (OOC_CHAR8*)"<options><set name=\047errorFormat\047>0</set></options>", 51);
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--line,-l", 10, (OOC_CHAR8*)"<options><set name=\047errorFormat\047>1</set></options>", 51);
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--linecol,-L", 13, (OOC_CHAR8*)"<options><set name=\047errorFormat\047>2</set></options>", 51);
  OOC_Config__AddRepositoryListEnv();
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--repository,-r", 16, (OOC_CHAR8*)"<repositories><file-system>$1</file-system></repositories>", 59);
  i0 = (OOC_INT32)Config__NewBooleanVar(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c1), (Config__Variable)i0);
  ooef__help = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine((OOC_CHAR8*)"-h,--help", 10, (OOC_CHAR8*)"<options><set name=\047help\047>TRUE</set></options>", 47);
  OOC_Config_CCompiler__RegisterConfig();
  return;
  ;
}

void OOC_ooef_init(void) {
  register OOC_INT32 i0,i1;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"errorFormat", 12, 0, 11);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"help", 5, 0, 4);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  ooef__files = (ooef__FileInfo)(OOC_INT32)0;
  ooef__active = (ooef__FileInfo)(OOC_INT32)0;
  ooef__fileBuffer = (void*)(OOC_INT32)0;
  ooef__bufferSize = (-1);
  ooef__echoErrors = 0u;
  ooef__echoText = 1u;
  ooef__leadContext = 3;
  ooef__trailContext = 3;
  ooef__connContext = 3;
  i0 = (OOC_INT32)OOC_Error__NewList((Object__String)((OOC_INT32)_c2));
  ooef__cfgErrList = (OOC_Error__List)i0;
  ooef__NewConfig();
  i0 = (OOC_INT32)ooef__cfgErrList;
  OOC_Config__Read((Msg__MsgList)i0);
  i0 = (OOC_INT32)ooef__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 17447));
  i1 = i1!=0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)IO_StdChannels__stderr;
  OOC_Error__ListDesc_Write((OOC_Error__List)i0, (IO__ByteChannel)i1);
l3:
  i0 = (OOC_INT32)ooef__cfgErrList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  i0 = !i0;
  if (i0) goto l25;
  i0 = (OOC_INT32)ooef__help;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17577))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17592)))), &_td_Config__BooleanVarDesc, 17592)), 17603));
  if (i0) goto l12;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i1 = i1!=0;
  if (i1) goto l10;
  i0=0u;
  goto l14;
l10:
  i0 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i0 = i0!=2;
  
  goto l14;
l12:
  i0=1u;
l14:
  if (i0) goto l23;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i0 = i0==2;
  if (i0) goto l18;
  ooef__ScanInput();
  ooef__SortErrors();
  ooef__PrintErrors();
  goto l26;
l18:
  i0 = ooef__TranslateArgs((void*)(OOC_INT32)ooef__dummy, 1024, (void*)(OOC_INT32)&ooef__errorPos);
  if (!i0) goto l26;
  ooef__ActiveFile((void*)(OOC_INT32)ooef__dummy, 1024);
  i0 = (OOC_INT32)ooef__active;
  i1 = ooef__errorPos;
  ooef__AddError((void*)((_check_pointer(i0, 17865))+260), i1, (OOC_CHAR8*)"", 1);
  ooef__PrintErrors();
  goto l26;
l23:
  ooef__WriteHelp();
  goto l26;
l25:
  _halt(1);
l26:
  return;
  ;
}

void OOC_ooef_destroy(void) {
}

/* --- */
