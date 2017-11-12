#include <XML/Basic/Element.d>
#include <__oo2c.h>
#include <setjmp.h>

static void XML_Basic_Element__InitRootFactory(XML_Basic_Element__RootFactory rf) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)rf;
  *(OOC_INT32*)(_check_pointer(i0, 1116)) = 0;
  return;
  ;
}

XML_Basic_Element__RootFactory XML_Basic_Element__NewRootFactory(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Element__RootFactory.baseTypes[0]);
  XML_Basic_Element__InitRootFactory((XML_Basic_Element__RootFactory)i0);
  return (XML_Basic_Element__RootFactory)i0;
  ;
}

void XML_Basic_Element__RootFactoryDesc_AddFactory(XML_Basic_Element__RootFactory rf, const XML_DTD__StringVar name__ref, OOC_LEN name_0d, XML_Basic_Element__FactoryFunction gen) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)
  XML_Basic_Element__ElementFactory ef;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Element__ElementFactory.baseTypes[0]);
  ef = (XML_Basic_Element__ElementFactory)i0;
  i1 = LongStrings__Length((void*)(OOC_INT32)name, name_0d);
  *(OOC_INT32*)((_check_pointer(i0, 1494))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i1+1)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1550))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1550))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 1556)), 0);
  _copy_16((const void*)(OOC_INT32)name,(void*)(_check_pointer(i1, 1556)),i2);
  i1 = (OOC_INT32)gen;
  *(OOC_INT32*)((_check_pointer(i0, 1566))+8) = i1;
  i1 = (OOC_INT32)rf;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 1598));
  *(OOC_INT32*)(_check_pointer(i0, 1586)) = i2;
  *(OOC_INT32*)(_check_pointer(i1, 1612)) = i0;
  return;
  ;
}

XML_Basic_Element__Element XML_Basic_Element__RootFactoryDesc_NewElement(XML_Basic_Element__RootFactory rf, XML_UnicodeBuffer__CharArray name) {
  register OOC_INT32 i0,i1,i2;
  XML_Basic_Element__ElementFactory ptr;

  i0 = (OOC_INT32)rf;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1920));
  ptr = (XML_Basic_Element__ElementFactory)i0;
  i1 = i0!=0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1956))+4);
  i2 = (OOC_INT32)name;
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 1962)),(const void*)(_check_pointer(i2, 1970))))!=0;
  
l5:
  if (!i1) goto l17;
  i1 = (OOC_INT32)name;
  
l8_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1992));
  ptr = (XML_Basic_Element__ElementFactory)i0;
  i2 = i0!=0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1956))+4);
  i2 = (
  _cmp16((const void*)(_check_pointer(i2, 1962)),(const void*)(_check_pointer(i1, 1970))))!=0;
  
l13:
  if (i2) goto l8_loop;
l17:
  i1 = i0==0;
  if (i1) goto l20;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2074))+8);
  i0 = (OOC_INT32)((XML_Basic_Element__Element (*)(void))i0)();
  return (XML_Basic_Element__Element)i0;
  goto l21;
l20:
  return (XML_Basic_Element__Element)0;
l21:
  _failed_function(1672); return 0;
  ;
}

void XML_Basic_Element__InitElement(XML_Basic_Element__Element elem) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)elem;
  *(OOC_INT32*)(_check_pointer(i0, 2245)) = 0;
  return;
  ;
}

void XML_Basic_Element__ElementDesc_SetLocator(XML_Basic_Element__Element elem, XML_Locator__Locator l) {

  return;
  ;
}

OOC_CHAR8 XML_Basic_Element__ElementDesc_IsChildName(XML_Basic_Element__Element elem, XML_UnicodeBuffer__CharArray localName) {

  return 0u;
  ;
}

XML_Basic_Element__Element XML_Basic_Element__ElementDesc_NewChild(XML_Basic_Element__Element elem, XML_UnicodeBuffer__CharArray localName) {

  return (XML_Basic_Element__Element)(OOC_INT32)0;
  ;
}

XML_UnicodeBuffer__CharArray XML_Basic_Element__ElementDesc_MissingChild(XML_Basic_Element__Element elem) {

  return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  ;
}

void XML_Basic_Element__ElementDesc_AddChild(XML_Basic_Element__Element elem, XML_Basic_Element__Element child) {

  _assert(0u, 127, 3941);
  return;
  ;
}

OOC_CHAR8 XML_Basic_Element__ElementDesc_IsAttributeName(XML_Basic_Element__Element elem, XML_UnicodeBuffer__CharArray localName) {

  return 0u;
  ;
}

OOC_CHAR8 XML_Basic_Element__ElementDesc_AddAttribute(XML_Basic_Element__Element elem, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttValue value) {

  return 0u;
  ;
}

XML_UnicodeBuffer__CharArray XML_Basic_Element__ElementDesc_MissingAttribute(XML_Basic_Element__Element elem) {

  return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  ;
}

OOC_CHAR8 XML_Basic_Element__ElementDesc_HasMixedContent(XML_Basic_Element__Element elem) {

  return 0u;
  ;
}

void XML_Basic_Element__ElementDesc_AddCharacters(XML_Basic_Element__Element elem, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd) {

  _assert(0u, 127, 6067);
  return;
  ;
}

XML_UnicodeBuffer__CharArray XML_Basic_Element__ElementDesc_CheckElement(XML_Basic_Element__Element elem) {

  return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
  ;
}

void XML_Basic_Element__ElementDesc_Write(XML_Basic_Element__Element elem, XML_Writer__Writer writer) {

  return;
  ;
}

XML_Basic_Element__List XML_Basic_Element__NewList(void) {
  register OOC_INT32 i0;
  XML_Basic_Element__List list;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Element__List.baseTypes[0]);
  list = (XML_Basic_Element__List)i0;
  *(OOC_INT32*)(_check_pointer(i0, 7091)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7114))+4) = 0;
  return (XML_Basic_Element__List)i0;
  ;
}

void XML_Basic_Element__ListDesc_Append(XML_Basic_Element__List list, XML_Basic_Element__Element elem) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)elem;
  *(OOC_INT32*)(_check_pointer(i0, 7225)) = 0;
  i1 = (OOC_INT32)list;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7252));
  i2 = i2==0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7341))+4);
  *(OOC_INT32*)(_check_pointer(i2, 7347)) = i0;
  goto l4;
l3:
  *(OOC_INT32*)(_check_pointer(i1, 7281)) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 7307))+4) = i0;
l4:
  *(OOC_INT32*)((_check_pointer(i1, 7379))+4) = i0;
  return;
  ;
}

OOC_CHAR8 XML_Basic_Element__ListDesc_IsEmpty(XML_Basic_Element__List list) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)list;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7478));
  return (i0==0);
  ;
}

void XML_Basic_Element__ListDesc_Write(XML_Basic_Element__List list, XML_Writer__Writer w) {
  register OOC_INT32 i0,i1,i2;
  XML_Basic_Element__Element elem;

  i0 = (OOC_INT32)list;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7607));
  elem = (XML_Basic_Element__Element)i0;
  i1 = i0!=0;
  if (!i1) goto l8;
  i1 = (OOC_INT32)w;
  
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7651)))), XML_Basic_Element__ElementDesc_Write)),XML_Basic_Element__ElementDesc_Write)((XML_Basic_Element__Element)i0, (XML_Writer__Writer)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7682));
  elem = (XML_Basic_Element__Element)i0;
  i2 = i0!=0;
  if (i2) goto l3_loop;
l8:
  return;
  ;
}

XML_UnicodeBuffer__CharArray XML_Basic_Element__NewString(const XML_DTD__StringVar value__ref, OOC_LEN value_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(value,OOC_CHAR16 ,value_0d)
  XML_UnicodeBuffer__CharArray str;

  OOC_INITIALIZE_VPAR(value__ref,value,OOC_CHAR16 ,(value_0d*2))
  i0 = LongStrings__Length((void*)(OOC_INT32)value, value_0d);
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i0+1));
  str = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7936)), 0);
  _copy_16((const void*)(OOC_INT32)value,(void*)(_check_pointer(i0, 7936)),i1);
  return (XML_UnicodeBuffer__CharArray)i0;
  ;
}

XML_Basic_Element__StringBuffer XML_Basic_Element__NewStringBuffer(const XML_DTD__StringVar value__ref, OOC_LEN value_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(value,OOC_CHAR16 ,value_0d)
  XML_Basic_Element__StringBuffer sb;
  OOC_INT32 len;

  OOC_INITIALIZE_VPAR(value__ref,value,OOC_CHAR16 ,(value_0d*2))
  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Element__StringBuffer.baseTypes[0]);
  sb = (XML_Basic_Element__StringBuffer)i0;
  i1 = LongStrings__Length((void*)(OOC_INT32)value, value_0d);
  *(OOC_INT32*)(_check_pointer(i0, 8108)) = i1;
  len = 24;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8200));
  i1 = 24<=i1;
  if (i1) goto l3;
  i1=24;
  goto l9;
l3:
  i1=24;
l4_loop:
  i1 = 8+i1*2;
  len = i1;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 8200));
  i2 = i1<=i2;
  if (i2) goto l4_loop;
l9:
  *(OOC_INT32*)((_check_pointer(i0, 8270))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], i1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8304))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8304))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8311)), 0);
  _copy_16((const void*)(OOC_INT32)value,(void*)(_check_pointer(i1, 8311)),i2);
  return (XML_Basic_Element__StringBuffer)i0;
  ;
}

void XML_Basic_Element__StringBufferDesc_AddCharacters(XML_Basic_Element__StringBuffer sb, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_INT32 len;
  XML_UnicodeBuffer__CharArray _new;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)sb;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8654))+4);
  i2 = charsStart;
  i3 = charsEnd;
  i4 = i3-i2;
  i5 = *(OOC_INT32*)(_check_pointer(i0, 8635));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8661)), 0);
  i1 = (i4+i5)>=i1;
  if (!i1) goto l16;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8690))+4);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8697)), 0);
  
l3_loop:
  i1 = 8+i1*2;
  len = i1;
  i5 = *(OOC_INT32*)(_check_pointer(i0, 8788));
  i5 = (i4+i5)<i1;
  if (!i5) goto l3_loop;
l7:
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], i1);
  _new = (XML_UnicodeBuffer__CharArray)i1;
  i = 0;
  i5 = *(OOC_INT32*)(_check_pointer(i0, 8849));
  i6 = 0<=i5;
  if (!i6) goto l15;
  i6=0;
l10_loop:
  i7 = _check_pointer(i1, 8872);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8881))+4);
  i9 = _check_pointer(i9, 8888);
  i10 = OOC_ARRAY_LENGTH(i9, 0);
  i9 = *(OOC_UINT16*)(i9+(_check_index(i6, i10, OOC_UINT32, 8888))*2);
  *(OOC_UINT16*)(i7+(_check_index(i6, i8, OOC_UINT32, 8872))*2) = i9;
  i6 = i6+1;
  i = i6;
  i7 = i6<=i5;
  if (i7) goto l10_loop;
l15:
  *(OOC_INT32*)((_check_pointer(i0, 8911))+4) = i1;
l16:
  i = i2;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8993));
  j = i1;
  i5 = i2!=i3;
  if (!i5) goto l24;
  
l19_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9039))+4);
  i5 = _check_pointer(i5, 9046);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_UINT16*)((OOC_INT32)chars+(_check_index(i2, chars_0d, OOC_UINT32, 9058))*2);
  *(OOC_UINT16*)(i5+(_check_index(i1, i6, OOC_UINT32, 9046))*2) = i7;
  i2 = i2+1;
  i = i2;
  i1 = i1+1;
  j = i1;
  i5 = i2!=i3;
  if (i5) goto l19_loop;
l24:
  i1 = *(OOC_INT32*)(_check_pointer(i0, 9106));
  *(OOC_INT32*)(_check_pointer(i0, 9106)) = (i1+i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9144))+4);
  i1 = _check_pointer(i1, 9151);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 9154));
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT16*)(i1+(_check_index(i0, i2, OOC_UINT32, 9151))*2) = 0u;
  return;
  ;
}

void XML_Basic_Element__InitPCData(XML_Basic_Element__PCData pcdata) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)pcdata;
  XML_Basic_Element__InitElement((XML_Basic_Element__Element)i0);
  i1 = (OOC_INT32)XML_Basic_Element__NewStringBuffer(((OOC_CHAR16[]){0}), 1);
  *(OOC_INT32*)((_check_pointer(i0, 9356))+4) = i1;
  return;
  ;
}

XML_Basic_Element__PCData XML_Basic_Element__NewPCData(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Element__PCData.baseTypes[0]);
  XML_Basic_Element__InitPCData((XML_Basic_Element__PCData)i0);
  return (XML_Basic_Element__PCData)i0;
  ;
}

void XML_Basic_Element__PCDataDesc_AddCharacters(XML_Basic_Element__PCData pcdata, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)pcdata;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9709))+4);
  i1 = charsStart;
  i2 = charsEnd;
  XML_Basic_Element__StringBufferDesc_AddCharacters((XML_Basic_Element__StringBuffer)i0, (void*)(OOC_INT32)chars, chars_0d, i1, i2);
  return;
  ;
}

void XML_Basic_Element__PCDataDesc_Write(XML_Basic_Element__PCData pcdata, XML_Writer__Writer writer) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)pcdata;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9903))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9877))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9884))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9877))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9884))+4);
  i3 = (OOC_INT32)writer;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9891)), 0);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9910));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9861)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i3, (void*)(_check_pointer(i0, 9891)), i2, 0, i1);
  return;
  ;
}

void XML_Basic_Element__PCDataDesc_Normalize(XML_Basic_Element__PCData pcdata, OOC_CHAR8 stripLeadingWS, OOC_CHAR8 stripTrailingWS) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  OOC_INT32 l;
  XML_UnicodeBuffer__CharArray s;
  OOC_INT32 d;

  i = 0;
  i0 = (OOC_INT32)pcdata;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10090))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10097));
  l = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10118))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10125))+4);
  s = (XML_UnicodeBuffer__CharArray)i2;
  i3 = stripLeadingWS;
  if (i3) goto l3;
  i3=0;
  goto l21;
l3:
  i3 = 0<i1;
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = _check_pointer(i2, 10185);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_UINT16*)(i3+(_check_index(0, i4, OOC_UINT32, 10185))*2);
  i3 = (OOC_UINT16)i3<=(OOC_UINT16)32u;
  
l8:
  if (i3) goto l10;
  i3=0;
  goto l21;
l10:
  i3=0;
l11_loop:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l14;
  i4=0u;
  goto l16;
l14:
  i4 = _check_pointer(i2, 10185);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 10185))*2);
  i4 = (OOC_UINT16)i4<=(OOC_UINT16)32u;
  
l16:
  if (i4) goto l11_loop;
l21:
  d = i3;
  i4 = i3<i1;
  if (i4) goto l24;
  i1=i3;
  goto l51;
l24:
  i4=i3;
l25_loop:
  i5 = _check_pointer(i2, 10279);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 10279))*2);
  i5 = (OOC_UINT16)i5<=(OOC_UINT16)32u;
  if (i5) goto l28;
  i5 = _check_pointer(i2, 10436);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i2, 10446);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT16*)(i7+(_check_index(i3, i8, OOC_UINT32, 10446))*2);
  *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 10436))*2) = i7;
  i3 = i3+1;
  i = i3;
  
  goto l46;
l28:
  i5 = _check_pointer(i2, 10305);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT16*)(i5+(_check_index((i3-i4), i6, OOC_UINT32, 10305))*2) = 32u;
  i3 = i3+1;
  i = i3;
  i5 = i3<i1;
  if (i5) goto l31;
  i5=0u;
  goto l33;
l31:
  i5 = _check_pointer(i2, 10362);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 10362))*2);
  i5 = (OOC_UINT16)i5<=(OOC_UINT16)32u;
  
l33:
  if (!i5) goto l46;
l36_loop:
  i3 = i3+1;
  i = i3;
  i4 = i4+1;
  d = i4;
  i5 = i3<i1;
  if (i5) goto l39;
  i5=0u;
  goto l41;
l39:
  i5 = _check_pointer(i2, 10362);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = *(OOC_UINT16*)(i5+(_check_index(i3, i6, OOC_UINT32, 10362))*2);
  i5 = (OOC_UINT16)i5<=(OOC_UINT16)32u;
  
l41:
  if (i5) goto l36_loop;
l46:
  i5 = i3<i1;
  if (i5) goto l25_loop;
l50:
  i1=i3;i3=i4;
l51:
  i4 = stripTrailingWS;
  if (i4) goto l54;
  i4=0u;
  goto l56;
l54:
  i4 = i1!=i3;
  
l56:
  if (i4) goto l58;
  i4=0u;
  goto l60;
l58:
  i4 = _check_pointer(i2, 10515);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(((i1-i3)-1), i5, OOC_UINT32, 10515))*2);
  i4 = i4==32u;
  
l60:
  if (!i4) goto l63;
  i3 = i3+1;
  d = i3;
  
l63:
  i2 = _check_pointer(i2, 10563);
  i1 = i1-i3;
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 10563))*2) = 0u;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10586))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10593)) = i1;
  return;
  ;
}

void OOC_XML_Basic_Element_init(void) {

  return;
  ;
}

void OOC_XML_Basic_Element_destroy(void) {
}

/* --- */
