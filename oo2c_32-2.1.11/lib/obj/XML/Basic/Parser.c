#include <XML/Basic/Parser.d>
#include <__oo2c.h>
#include <setjmp.h>

static void XML_Basic_Parser__InitBuild(XML_Basic_Parser__Build b, XML_Basic_Element__RootFactory rootFactory, OOC_INT32 maxNestingDepth) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  XML_Builder__Init((XML_Builder__Builder)i0);
  i1 = (OOC_INT32)rootFactory;
  *(OOC_INT32*)((_check_pointer(i0, 2307))+12) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2342))+4) = (OOC_INT32)0;
  *(OOC_INT32*)(_check_pointer(i0, 2365)) = (OOC_INT32)0;
  *(OOC_UINT8*)((_check_pointer(i0, 2394))+8) = 1u;
  i1 = maxNestingDepth;
  *(OOC_INT32*)((_check_pointer(i0, 2416))+24) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2464))+16) = ((OOC_INT32)RT0__NewObject(_td_XML_Basic_Parser__ElementStack.baseTypes[0], 5));
  i = 0;
  i1=0;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2545))+16);
  i2 = _check_pointer(i2, 2552);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)(i2+(_check_index(i1, i3, OOC_UINT32, 2552))*4) = (OOC_INT32)0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=4;
  if (i2) goto l1_loop;
l5:
  *(OOC_INT32*)((_check_pointer(i0, 2577))+20) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 2604))+28) = (OOC_INT32)0;
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_Error(XML_Basic_Parser__Build b, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg msg;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 2726))+8);
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2808))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2753));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2753));
  i4 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  i5 = code;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2768)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i3, (XML_Error__Context)i4, i5, 1u, (void*)(_check_pointer(i1, 2817)));
  msg = (Msg__Msg)i1;
  *(OOC_UINT8*)((_check_pointer(i0, 2828))+8) = 0u;
l3:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_ErrorName(XML_Basic_Parser__Build b, OOC_INT32 code, XML_UnicodeBuffer__CharArray name) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg msg;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 2980))+8);
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3062))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3007));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3007));
  i4 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  i5 = code;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3022)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i3, (XML_Error__Context)i4, i5, 1u, (void*)(_check_pointer(i1, 3071)));
  msg = (Msg__Msg)i1;
  i2 = (OOC_INT32)name;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3135)), 0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 3135)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3084)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, (OOC_CHAR8*)"name", 5, (Msg__LStringPtr)i2);
  *(OOC_UINT8*)((_check_pointer(i0, 3147))+8) = 0u;
l3:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_ErrorString(XML_Basic_Parser__Build b, OOC_INT32 code, XML_UnicodeBuffer__CharArray string) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Msg__Msg msg;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 3307))+8);
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3389))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3334));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3334));
  i4 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  i5 = code;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3349)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i3, (XML_Error__Context)i4, i5, 1u, (void*)(_check_pointer(i1, 3398)));
  msg = (Msg__Msg)i1;
  i2 = (OOC_INT32)string;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3466)), 0);
  i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i2, 3466)), i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3411)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, (OOC_CHAR8*)"string", 7, (Msg__LStringPtr)i2);
  *(OOC_UINT8*)((_check_pointer(i0, 3478))+8) = 0u;
l3:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_SetLocator(XML_Basic_Parser__Build b, XML_Locator__Locator locator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)locator;
  *(OOC_INT32*)((_check_pointer(i0, 3599))+4) = i1;
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_SetErrorListener(XML_Basic_Parser__Build b, XML_Locator__ErrorListener el) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)el;
  *(OOC_INT32*)(_check_pointer(i0, 3722)) = i1;
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_StartElement(XML_Basic_Parser__Build b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  XML_Basic_Parser__ElementStack newStack;
  OOC_INT32 i;

  i0 = (OOC_INT32)namespaceDecl;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l3;
  i0 = (OOC_INT32)b;
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 3);
l3:
  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4022))+20);
  i1 = i1==(-1);
  if (i1) goto l41;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4244))+20);
  i1 = i1==(-2);
  if (i1) goto l39;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4317))+24);
  i1 = i1>=0;
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4355))+20);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4373))+24);
  i1 = i1==i2;
  
l12:
  if (i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4447))+16);
  i1 = _check_pointer(i1, 4454);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4456))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4447))+16);
  i4 = _check_pointer(i4, 4454);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 4456))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 4454))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 4454))*4);
  i2 = (OOC_INT32)localName;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 4471)))), XML_Basic_Element__ElementDesc_IsChildName)),XML_Basic_Element__ElementDesc_IsChildName)((XML_Basic_Element__Element)i1, (XML_UnicodeBuffer__CharArray)i2);
  i1 = !i1;
  if (i1) goto l35;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4581))+16);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4556))+20);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4588)), 0);
  i1 = (i3+1)==i1;
  if (!i1) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4626))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4633)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Parser__ElementStack.baseTypes[0], (i1*2));
  newStack = (XML_Basic_Parser__ElementStack)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4668))+16);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4675)), 0);
  i = 0;
  i3 = i3*2;
  i4 = 0<i3;
  if (!i4) goto l30;
  i4=0;
l20_loop:
  i5 = *(OOC_INT32*)((_check_pointer(i0, 4705))+20);
  i5 = i4<=i5;
  if (i5) goto l23;
  i5 = _check_pointer(i1, 4800);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4800))*4) = (OOC_INT32)0;
  goto l24;
l23:
  i5 = _check_pointer(i1, 4746);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4754))+16);
  i7 = _check_pointer(i7, 4761);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 4761))*4);
  *(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 4746))*4) = i7;
l24:
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l20_loop;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4862))+16);
  i1 = _check_pointer(i1, 4869);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 4871))+20);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4901))+16);
  i5 = _check_pointer(i5, 4908);
  i6 = *(OOC_INT32*)((_check_pointer(i0, 4910))+20);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4901))+16);
  i8 = _check_pointer(i8, 4908);
  i9 = *(OOC_INT32*)((_check_pointer(i0, 4910))+20);
  i10 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i9, i10, OOC_UINT32, 4908))*4);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i6, i7, OOC_UINT32, 4908))*4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i8, 4925)))), XML_Basic_Element__ElementDesc_NewChild)),XML_Basic_Element__ElementDesc_NewChild)((XML_Basic_Element__Element)i5, (XML_UnicodeBuffer__CharArray)i2);
  *(OOC_INT32*)(i1+(_check_index((i3+1), i4, OOC_UINT32, 4869))*4) = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4960))+16);
  i1 = _check_pointer(i1, 4967);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4969))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index((i2+1), i3, OOC_UINT32, 4967))*4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l33;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5063))+20);
  *(OOC_INT32*)((_check_pointer(i0, 5063))+20) = (i1+1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5089))+16);
  i1 = _check_pointer(i1, 5096);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5098))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5089))+16);
  i4 = _check_pointer(i4, 5096);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 5098))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 5096))*4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5128))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 5096))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5113)))), XML_Basic_Element__ElementDesc_SetLocator)),XML_Basic_Element__ElementDesc_SetLocator)((XML_Basic_Element__Element)i1, (XML_Locator__Locator)i0);
  goto l46;
l33:
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 21);
  goto l46;
l35:
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 20);
  goto l46;
l37:
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 4);
  goto l46;
l39:
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 2);
  goto l46;
l41:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4055))+16);
  i1 = _check_pointer(i1, 4062);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4070))+12);
  i4 = (OOC_INT32)localName;
  i3 = (OOC_INT32)XML_Basic_Element__RootFactoryDesc_NewElement((XML_Basic_Element__RootFactory)i3, (XML_UnicodeBuffer__CharArray)i4);
  *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 4062))*4) = i3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4120))+16);
  i1 = _check_pointer(i1, 4127);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT8, 4127))*4);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l44;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4206))+20);
  *(OOC_INT32*)((_check_pointer(i0, 4206))+20) = (i1+1);
  goto l46;
l44:
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 1);
l46:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_Attribute(XML_Basic_Parser__Build b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)namespaceDecl;
  i0 = i0!=(OOC_INT32)0;
  if (i0) goto l10;
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5568))+16);
  i1 = _check_pointer(i1, 5575);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5577))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5568))+16);
  i4 = _check_pointer(i4, 5575);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 5577))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 5575))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 5575))*4);
  i2 = (OOC_INT32)localName;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5592)))), XML_Basic_Element__ElementDesc_IsAttributeName)),XML_Basic_Element__ElementDesc_IsAttributeName)((XML_Basic_Element__Element)i1, (XML_UnicodeBuffer__CharArray)i2);
  i1 = !i1;
  if (i1) goto l8;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5677))+16);
  i1 = _check_pointer(i1, 5684);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 5686))+20);
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5677))+16);
  i5 = _check_pointer(i5, 5684);
  i6 = *(OOC_INT32*)((_check_pointer(i0, 5686))+20);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i6, i7, OOC_UINT32, 5684))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 5684))*4);
  i3 = (OOC_INT32)value;
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 5701)))), XML_Basic_Element__ElementDesc_AddAttribute)),XML_Basic_Element__ElementDesc_AddAttribute)((XML_Basic_Element__Element)i1, (XML_UnicodeBuffer__CharArray)i2, (XML_DTD__AttValue)i3);
  i1 = !i1;
  if (!i1) goto l11;
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 11);
  goto l11;
l8:
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 10);
  goto l11;
l10:
  i0 = (OOC_INT32)b;
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 3);
l11:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_AttributesDone(XML_Basic_Parser__Build b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5892))+16);
  i1 = _check_pointer(i1, 5899);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5901))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5892))+16);
  i4 = _check_pointer(i4, 5899);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 5901))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 5899))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 5899))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 5916)))), XML_Basic_Element__ElementDesc_MissingAttribute)),XML_Basic_Element__ElementDesc_MissingAttribute)((XML_Basic_Element__Element)i1);
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l4;
  XML_Basic_Parser__BuildDesc_ErrorName((XML_Basic_Parser__Build)i0, 12, (XML_UnicodeBuffer__CharArray)i1);
l4:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_Characters(XML_Basic_Parser__Build b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  auto OOC_CHAR8 XML_Basic_Parser__BuildDesc_Characters_IsWhitespace(void);
    
    OOC_CHAR8 XML_Basic_Parser__BuildDesc_Characters_IsWhitespace(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = charsStart;
      i1 = charsEnd;
      i2 = i0!=i1;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = *(OOC_UINT16*)((OOC_INT32)chars+(_check_index(i0, chars_0d, OOC_UINT32, 6392))*2);
      i2 = (OOC_UINT16)i2<=(OOC_UINT16)32u;
      
l5:
      if (!i2) goto l17;
l8_loop:
      i0 = i0+1;
      i2 = i0!=i1;
      if (i2) goto l11;
      i2=0u;
      goto l13;
l11:
      i2 = *(OOC_UINT16*)((OOC_INT32)chars+(_check_index(i0, chars_0d, OOC_UINT32, 6392))*2);
      i2 = (OOC_UINT16)i2<=(OOC_UINT16)32u;
      
l13:
      if (i2) goto l8_loop;
l17:
      return (i0==i1);
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6503))+16);
  i1 = _check_pointer(i1, 6510);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6512))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6503))+16);
  i4 = _check_pointer(i4, 6510);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 6512))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 6510))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 6510))*4);
  i1 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6527)))), XML_Basic_Element__ElementDesc_HasMixedContent)),XML_Basic_Element__ElementDesc_HasMixedContent)((XML_Basic_Element__Element)i1);
  if (i1) goto l6;
  i1 = XML_Basic_Parser__BuildDesc_Characters_IsWhitespace();
  i1 = !i1;
  if (!i1) goto l7;
  XML_Basic_Parser__BuildDesc_Error((XML_Basic_Parser__Build)i0, 23);
  goto l7;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6559))+16);
  i1 = _check_pointer(i1, 6566);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6568))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6559))+16);
  i4 = _check_pointer(i4, 6566);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 6568))+20);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i0, i5, OOC_UINT32, 6566))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 6566))*4);
  i2 = charsStart;
  i3 = charsEnd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6583)))), XML_Basic_Element__ElementDesc_AddCharacters)),XML_Basic_Element__ElementDesc_AddCharacters)((XML_Basic_Element__Element)i1, (void*)(OOC_INT32)chars, chars_0d, i2, i3);
l7:
  return;
  ;
}

void XML_Basic_Parser__BuildDesc_EndElement(XML_Basic_Parser__Build b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  XML_UnicodeBuffer__CharArray name;
  XML_UnicodeBuffer__CharArray errorMsg;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6885))+16);
  i1 = _check_pointer(i1, 6892);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 6894))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6885))+16);
  i4 = _check_pointer(i4, 6892);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 6894))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 6892))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 6892))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6909)))), XML_Basic_Element__ElementDesc_MissingChild)),XML_Basic_Element__ElementDesc_MissingChild)((XML_Basic_Element__Element)i1);
  name = (XML_UnicodeBuffer__CharArray)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l3;
  XML_Basic_Parser__BuildDesc_ErrorName((XML_Basic_Parser__Build)i0, 22, (XML_UnicodeBuffer__CharArray)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7031))+16);
  i1 = _check_pointer(i1, 7038);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7040))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7031))+16);
  i4 = _check_pointer(i4, 7038);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 7040))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 7038))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7038))*4);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 7055)))), XML_Basic_Element__ElementDesc_CheckElement)),XML_Basic_Element__ElementDesc_CheckElement)((XML_Basic_Element__Element)i1);
  errorMsg = (XML_UnicodeBuffer__CharArray)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l6;
  XML_Basic_Parser__BuildDesc_ErrorString((XML_Basic_Parser__Build)i0, 24, (XML_UnicodeBuffer__CharArray)i1);
l6:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7177))+20);
  i1 = i1==0;
  if (i1) goto l9;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7421))+16);
  i1 = _check_pointer(i1, 7428);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7430))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7382))+16);
  i4 = _check_pointer(i4, 7389);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 7391))+20);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7382))+16);
  i7 = _check_pointer(i7, 7389);
  i8 = *(OOC_INT32*)((_check_pointer(i0, 7391))+20);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index((i8-1), i9, OOC_UINT32, 7389))*4);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7428))*4);
  i2 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index((i5-1), i6, OOC_UINT32, 7389))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 7408)))), XML_Basic_Element__ElementDesc_AddChild)),XML_Basic_Element__ElementDesc_AddChild)((XML_Basic_Element__Element)i2, (XML_Basic_Element__Element)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7455))+16);
  i1 = _check_pointer(i1, 7462);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7464))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7462))*4) = (OOC_INT32)0;
  goto l10;
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7220))+16);
  i1 = _check_pointer(i1, 7227);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7229))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7227))*4);
  *(OOC_INT32*)((_check_pointer(i0, 7209))+28) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7253))+16);
  i1 = _check_pointer(i1, 7260);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7262))+20);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 7260))*4) = (OOC_INT32)0;
  *(OOC_INT32*)((_check_pointer(i0, 7293))+20) = (-1);
l10:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7507))+20);
  *(OOC_INT32*)((_check_pointer(i0, 7507))+20) = (i1-1);
  return;
  ;
}

XML_Basic_Element__Element XML_Basic_Parser__Parse(IO__ByteChannel byteReader, URI__URI baseURI, XML_UnicodeCodec__Factory unicodeFactory, XML_Basic_Element__RootFactory rootFactory, OOC_INT32 maxNestingDepth, OOC_UINT32 flags, XML_Error__List *errList) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  XML_Basic_Parser__Build b;
  XML_Builder__Builder builder;
  XML_Parser__Parser parser;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Basic_Parser__Build.baseTypes[0]);
  b = (XML_Basic_Parser__Build)i0;
  i1 = (OOC_INT32)rootFactory;
  i2 = maxNestingDepth;
  XML_Basic_Parser__InitBuild((XML_Basic_Parser__Build)i0, (XML_Basic_Element__RootFactory)i1, i2);
  i1 = flags;
  i1 = _in(0,i1);
  if (i1) goto l3;
  builder = (XML_Builder__Builder)i0;
  i2=i0;
  goto l4;
l3:
  i2 = (OOC_INT32)XML_Builder_Validation__New((XML_Builder__Builder)i0);
  builder = (XML_Builder__Builder)i2;
  
l4:
  i3 = (OOC_INT32)byteReader;
  i4 = (OOC_INT32)baseURI;
  i5 = (OOC_INT32)unicodeFactory;
  i2 = (OOC_INT32)XML_Parser__NewChannel((IO__ByteChannel)i3, (URI__URI)i4, (XML_UnicodeCodec__Factory)i5, (XML_EntityResolver__Resolver)(OOC_INT32)0, (XML_Builder__Builder)i2);
  parser = (XML_Parser__Parser)i2;
  i3 = _check_pointer(i2, 9960);
  if (i1) goto l7;
  i4 = i4!=(OOC_INT32)0;
  
  goto l8;
l7:
  i4=1u;
l8:
  *(OOC_UINT8*)(i3+60) = i4;
  *(OOC_UINT8*)((_check_pointer(i2, 10033))+62) = i1;
  XML_Parser__ParserDesc_ParseDocument((XML_Parser__Parser)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10118));
  i1 = *(OOC_INT32*)(_check_pointer(i1, 10127));
  i1 = i1==0;
  if (i1) goto l11;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10253));
  *errList = (XML_Error__List)i0;
  return (XML_Basic_Element__Element)(OOC_INT32)0;
  goto l12;
l11:
  *errList = (XML_Error__List)(OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10185))+28);
  _assert((i1!=(OOC_INT32)0), 127, 10176);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10214))+28);
  return (XML_Basic_Element__Element)i0;
l12:
  _failed_function(8299); return 0;
  ;
}

void OOC_XML_Basic_Parser_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)XML_Error__NewContext((OOC_CHAR8*)"XML:Basic:Parser", 17);
  XML_Basic_Parser__msgParserContext = (XML_Error__Context)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10391)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 1, (OOC_CHAR8*)"Unknown root element name", 26);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10476)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 2, (OOC_CHAR8*)"Junk after root element", 24);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10558)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 3, (OOC_CHAR8*)"XML namespaces are not supported", 33);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10654)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 4, (OOC_CHAR8*)"This child element exceeds the maximum nesting depth", 53);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10771)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 10, (OOC_CHAR8*)"Invalid attribute name for this element", 40);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10872)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 11, (OOC_CHAR8*)"Invalid value for this attribute", 33);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10967)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 12, (OOC_CHAR8*)"Attribute `${name}\047 is required for this element", 49);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11084)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 20, (OOC_CHAR8*)"Invalid name for child element", 31);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11172)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 21, (OOC_CHAR8*)"This child element cannot appear at this position", 50);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11282)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 22, (OOC_CHAR8*)"Child element `${name}\047 is required for this element", 53);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11396)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 23, (OOC_CHAR8*)"Only whitespace allowed as content of this element", 51);
  i0 = (OOC_INT32)XML_Basic_Parser__msgParserContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11508)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i0, 24, (OOC_CHAR8*)"${string}", 10);
  return;
  ;
}

void OOC_XML_Basic_Parser_destroy(void) {
}

/* --- */
