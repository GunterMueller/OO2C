#include <XML/Builder/Validation.d>
#include <__oo2c.h>
#include <setjmp.h>

void XML_Builder_Validation__BuilderDesc_SetLocator(XML_Builder_Validation__Builder b, XML_Locator__Locator locator) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)locator;
  *(OOC_INT32*)(_check_pointer(i0, 3498)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3531))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3531))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3548)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i0, (XML_Locator__Locator)i1);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_SetErrorListener(XML_Builder_Validation__Builder b, XML_Locator__ErrorListener el) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)el;
  *(OOC_INT32*)((_check_pointer(i0, 3673))+8) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3701))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3701))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3718)))), XML_Builder__BuilderDesc_SetErrorListener)),XML_Builder__BuilderDesc_SetErrorListener)((XML_Builder__Builder)i0, (XML_Locator__ErrorListener)i1);
  return;
  ;
}

static void XML_Builder_Validation__Err(XML_Builder_Validation__Builder b, OOC_INT32 code) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3952));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3859))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3859))+8);
  i3 = (OOC_INT32)XML_Builder_Validation__validationContext;
  i4 = code;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3874)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i3, i4, 0u, (void*)(_check_pointer(i1, 3967)));
  return;
  ;
}

static void XML_Builder_Validation__ErrString(XML_Builder_Validation__Builder b, OOC_INT32 code, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, XML_UnicodeBuffer__CharArray value) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4234));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4141))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4141))+8);
  i3 = (OOC_INT32)XML_Builder_Validation__validationContext;
  i4 = code;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4156)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i3, i4, 0u, (void*)(_check_pointer(i1, 4249)));
  err = (Msg__Msg)i0;
  i1 = (OOC_INT32)value;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4310)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 4310)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4260)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name, name_0d, (Msg__LStringPtr)i1);
  return;
  ;
}

static void XML_Builder_Validation__ErrString2(XML_Builder_Validation__Builder b, OOC_INT32 code, const OOC_CHAR8 name1__ref[], OOC_LEN name1_0d, XML_UnicodeBuffer__CharArray value1, const OOC_CHAR8 name2__ref[], OOC_LEN name2_0d, XML_UnicodeBuffer__CharArray value2) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(name1,OOC_CHAR8 ,name1_0d)
  OOC_ALLOCATE_VPAR(name2,OOC_CHAR8 ,name2_0d)
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(name1__ref,name1,OOC_CHAR8 ,name1_0d)
  OOC_INITIALIZE_VPAR(name2__ref,name2,OOC_CHAR8 ,name2_0d)
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4653));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4560))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4560))+8);
  i3 = (OOC_INT32)XML_Builder_Validation__validationContext;
  i4 = code;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4575)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i3, i4, 0u, (void*)(_check_pointer(i1, 4668)));
  err = (Msg__Msg)i0;
  i1 = (OOC_INT32)value1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4731)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 4731)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4679)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name1, name1_0d, (Msg__LStringPtr)i1);
  i1 = (OOC_INT32)value2;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4795)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 4795)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4743)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name2, name2_0d, (Msg__LStringPtr)i1);
  return;
  ;
}

static void XML_Builder_Validation__ErrString3(XML_Builder_Validation__Builder b, OOC_INT32 code, const OOC_CHAR8 name1__ref[], OOC_LEN name1_0d, XML_UnicodeBuffer__CharArray value1, const OOC_CHAR8 name2__ref[], OOC_LEN name2_0d, XML_UnicodeBuffer__CharArray value2, const OOC_CHAR8 name3__ref[], OOC_LEN name3_0d, XML_UnicodeBuffer__CharArray value3) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(name1,OOC_CHAR8 ,name1_0d)
  OOC_ALLOCATE_VPAR(name2,OOC_CHAR8 ,name2_0d)
  OOC_ALLOCATE_VPAR(name3,OOC_CHAR8 ,name3_0d)
  Msg__Msg err;

  OOC_INITIALIZE_VPAR(name1__ref,name1,OOC_CHAR8 ,name1_0d)
  OOC_INITIALIZE_VPAR(name2__ref,name2,OOC_CHAR8 ,name2_0d)
  OOC_INITIALIZE_VPAR(name3__ref,name3,OOC_CHAR8 ,name3_0d)
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5203));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5110))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5110))+8);
  i3 = (OOC_INT32)XML_Builder_Validation__validationContext;
  i4 = code;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 5125)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i3, i4, 0u, (void*)(_check_pointer(i1, 5218)));
  err = (Msg__Msg)i0;
  i1 = (OOC_INT32)value1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5281)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 5281)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5229)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name1, name1_0d, (Msg__LStringPtr)i1);
  i1 = (OOC_INT32)value2;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5345)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 5345)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5293)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name2, name2_0d, (Msg__LStringPtr)i1);
  i1 = (OOC_INT32)value3;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5409)), 0);
  i1 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 5409)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5357)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i0, (void*)(OOC_INT32)name3, name3_0d, (Msg__LStringPtr)i1);
  return;
  ;
}

static void XML_Builder_Validation__IncErrorPos(XML_Builder_Validation__Builder b, OOC_INT32 delta) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5503));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5503));
  i2 = *(OOC_INT32*)(_check_pointer(i2, 5518));
  i3 = delta;
  *(OOC_INT32*)(_check_pointer(i1, 5518)) = (i2+i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5549));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5549));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 5564))+8);
  *(OOC_INT32*)((_check_pointer(i1, 5564))+8) = (i0+i3);
  return;
  ;
}

static OOC_CHAR8 XML_Builder_Validation__IsS(OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0==32u;
  if (i1) goto l3;
  i1 = i0==9u;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = i0==13u;
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l11;
  i0 = i0==10u;
  
  goto l12;
l11:
  i0=1u;
l12:
  return i0;
  ;
}

static OOC_CHAR8 XML_Builder_Validation__IsName(OOC_CHAR16 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(0, string_0d, OOC_UINT8, 5879))*2);
  i0 = XML_Parser__IsNameChar0(i0);
  i0 = !i0;
  if (i0) goto l14;
  i0 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(1, string_0d, OOC_UINT32, 5950))*2);
  i0 = i0!=0u;
  if (!i0) goto l13;
  i0=1;
l5_loop:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6000))*2);
  i1 = XML_Parser__IsNameChar(i1);
  i1 = !i1;
  if (!i1) goto l8;
  return 0u;
l8:
  i0 = i0+1;
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 5950))*2);
  i1 = i1!=0u;
  if (i1) goto l5_loop;
l13:
  return 1u;
  goto l15;
l14:
  return 0u;
l15:
  _failed_function(5766); return 0;
  ;
}

static OOC_CHAR8 XML_Builder_Validation__IsNames(OOC_CHAR16 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0=0;
l1_loop:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6260))*2);
  i1 = XML_Parser__IsNameChar0(i1);
  if (!i1) goto l19;
l5_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6343))*2);
  i1 = XML_Parser__IsNameChar(i1);
  i1 = !i1;
  if (!i1) goto l5_loop;
l9:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6367))*2);
  i1 = i1==0u;
  if (!i1) goto l11;
  goto l16;
l11:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6455))*2);
  i1 = XML_Builder_Validation__IsS(i1);
  if (!i1) goto l19;
  i0 = i0+1;
  
  goto l1_loop;
l16:
  return 1u;
  
  goto l1_loop;
l19:
  return 0u;
  ;
}

static OOC_CHAR8 XML_Builder_Validation__IsNmtoken(OOC_CHAR16 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(0, string_0d, OOC_UINT8, 6835))*2);
  i0 = XML_Parser__IsNameChar(i0);
  i0 = !i0;
  if (i0) goto l14;
  i0 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(1, string_0d, OOC_UINT32, 6906))*2);
  i0 = i0!=0u;
  if (!i0) goto l13;
  i0=1;
l5_loop:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6956))*2);
  i1 = XML_Parser__IsNameChar(i1);
  i1 = !i1;
  if (!i1) goto l8;
  return 0u;
l8:
  i0 = i0+1;
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 6906))*2);
  i1 = i1!=0u;
  if (i1) goto l5_loop;
l13:
  return 1u;
  goto l15;
l14:
  return 0u;
l15:
  _failed_function(6720); return 0;
  ;
}

static OOC_CHAR8 XML_Builder_Validation__IsNmtokens(OOC_CHAR16 string[], OOC_LEN string_0d) {
  register OOC_INT32 i0,i1;

  i0=0;
l1_loop:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 7221))*2);
  i1 = XML_Parser__IsNameChar(i1);
  if (!i1) goto l19;
l5_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 7304))*2);
  i1 = XML_Parser__IsNameChar(i1);
  i1 = !i1;
  if (!i1) goto l5_loop;
l9:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 7328))*2);
  i1 = i1==0u;
  if (!i1) goto l11;
  goto l16;
l11:
  i1 = *(OOC_UINT16*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 7416))*2);
  i1 = XML_Builder_Validation__IsS(i1);
  if (!i1) goto l19;
  i0 = i0+1;
  
  goto l1_loop;
l16:
  return 1u;
  
  goto l1_loop;
l19:
  return 0u;
  ;
}

static OOC_CHAR8 XML_Builder_Validation__IsStandalone(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7741))+12);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 7757))+48);
  i1 = i1==0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7806));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7821))+12);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 7829))+8);
  i0 = i0==5;
  
l4:
  return i0;
  ;
}

static XML_Builder_Validation__IDDecl XML_Builder_Validation__NewIDDecl(XML_UnicodeBuffer__CharArray name) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Validation__IDDecl.baseTypes[0]);
  i1 = (OOC_INT32)name;
  XML_DTD__InitDeclaration((XML_DTD__Declaration)i0, (XML_UnicodeBuffer__CharArray)i1);
  return (XML_Builder_Validation__IDDecl)i0;
  ;
}

static void XML_Builder_Validation__PushElement(XML_Builder_Validation__Builder b, XML_DTD__Declaration elemDecl) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  XML_Builder_Validation__Stack _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8194))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8174))+32);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8201)), 0);
  i1 = i2==i1;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8232))+36);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8239)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Validation__Stack.baseTypes[0], (i1*2));
  _new = (XML_Builder_Validation__Stack)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8272))+36);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8279)), 0);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8306))+36);
  i4 = _check_pointer(i4, 8313);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i1, 8298);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  _copy_block((i4+(_check_index(i3, i5, OOC_UINT32, 8313))*8),(i6+(_check_index(i3, i7, OOC_UINT32, 8298))*8),8);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 8335))+36) = i1;
l11:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8370))+32);
  *(OOC_INT32*)((_check_pointer(i0, 8370))+32) = (i1+1);
  i1 = (OOC_INT32)elemDecl;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l18;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8527))+36);
  i2 = _check_pointer(i2, 8534);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8536))+32);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 8534))*8) = (_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8571)))), &_td_XML_DTD__ElementDeclDesc, 8571));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8608)))), &_td_XML_DTD__ElementDeclDesc, 8608)), 8620))+12);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l16;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8708))+36);
  i2 = _check_pointer(i2, 8715);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8717))+32);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8784)))), &_td_XML_DTD__ElementDeclDesc, 8784)), 8796))+12);
  i1 = (OOC_INT32)XML_Regexp__NewMatcher((XML_Regexp__Regexp)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8812)))), &_td_XML_Regexp__RegexpDesc, 8812)));
  *(OOC_INT32*)((i2+(_check_index(i0, i3, OOC_UINT32, 8715))*8)+4) = i1;
  goto l19;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8650))+36);
  i1 = _check_pointer(i1, 8657);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8659))+32);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)((i1+(_check_index(i0, i2, OOC_UINT32, 8657))*8)+4) = (OOC_INT32)0;
  goto l19;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8420))+36);
  i1 = _check_pointer(i1, 8427);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8429))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)XML_Builder_Validation__dummyElement;
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 8427))*8) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8472))+36);
  i1 = _check_pointer(i1, 8479);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8481))+32);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)((i1+(_check_index(i0, i2, OOC_UINT32, 8479))*8)+4) = (OOC_INT32)0;
l19:
  return;
  ;
}

static void XML_Builder_Validation__PopElement(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8907))+36);
  i1 = _check_pointer(i1, 8914);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8916))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 8914))*8) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8948))+36);
  i1 = _check_pointer(i1, 8955);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8957))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)((i1+(_check_index(i2, i3, OOC_UINT32, 8955))*8)+4) = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8997))+32);
  *(OOC_INT32*)((_check_pointer(i0, 8997))+32) = (i1-1);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_StartDocument(XML_Builder_Validation__Builder b, XML_DTD__ExternalEntity documentEntity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)documentEntity;
  *(OOC_INT32*)((_check_pointer(i0, 9121))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9162))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9162))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9179)))), XML_Builder__BuilderDesc_StartDocument)),XML_Builder__BuilderDesc_StartDocument)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i1);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_EndDocument(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_DTD__Declaration ptr;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9396))+28);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9412));
  ptr = (XML_DTD__Declaration)i1;
  i2 = i1!=0;
  if (!i2) goto l11;
l3_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9483))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9460))+24);
  i2 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i3, (XML_UnicodeBuffer__CharArray)i2);
  i2 = i2==0;
  if (!i2) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9550))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 19, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9585));
  ptr = (XML_DTD__Declaration)i1;
  i2 = i1!=0;
  if (i2) goto l3_loop;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9611))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9611))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9628)))), XML_Builder__BuilderDesc_EndDocument)),XML_Builder__BuilderDesc_EndDocument)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_StartDTD(XML_Builder_Validation__Builder b, XML_DTD__Builder dtdBuilder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)dtdBuilder;
  *(OOC_INT32*)((_check_pointer(i0, 9735))+16) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9761))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9761))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 9778)))), XML_Builder__BuilderDesc_StartDTD)),XML_Builder__BuilderDesc_StartDTD)((XML_Builder__Builder)i0, (XML_DTD__Builder)i1);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_EndDTD(XML_Builder_Validation__Builder b, XML_DTD__ExternalEntity externalDTD, OOC_CHAR8 allDeclarationsProcessed) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_DTD__Declaration decl;
  XML_DTD__ElementDecl elemDecl;
  XML_DTD__CP cp;
  XML_DTD__NameNode nameNode;
  auto void XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes(XML_DTD__Declaration list);
  auto OOC_CHAR8 XML_Builder_Validation__BuilderDesc_EndDTD_InList(XML_UnicodeBuffer__CharArray name, XML_DTD__CP list);
    
    void XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes(XML_DTD__Declaration list) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      XML_DTD__Declaration decl;
      XML_DTD__AttrDecl attrDecl;
      XML_UnicodeBuffer__CharArray _default;
      OOC_CHAR8 didNormalization;
      OOC_CHAR8 match;
      auto XML_UnicodeBuffer__CharArray XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes_DuplicateToken(XML_DTD__NameNode list);
        
        XML_UnicodeBuffer__CharArray XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes_DuplicateToken(XML_DTD__NameNode list) {
          register OOC_INT32 i0,i1,i2,i3;
          XML_DTD__NameNode ptr1;
          XML_DTD__NameNode ptr2;

          i0 = (OOC_INT32)list;
          ptr1 = (XML_DTD__NameNode)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l19;
          
l3_loop:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10450));
          ptr2 = (XML_DTD__NameNode)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l14;
l6_loop:
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10510))+4);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10524))+4);
          i2 = (
          _cmp16((const void*)(_check_pointer(i2, 10516)),(const void*)(_check_pointer(i3, 10530))))==0;
          if (!i2) goto l9;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10563))+4);
          return (XML_UnicodeBuffer__CharArray)i2;
l9:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 10611));
          ptr2 = (XML_DTD__NameNode)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l6_loop;
l14:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10655));
          ptr1 = (XML_DTD__NameNode)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l19:
          return (XML_UnicodeBuffer__CharArray)(OOC_INT32)0;
          ;
        }


      i0 = (OOC_INT32)list;
      decl = (XML_DTD__Declaration)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l61;
      
l3_loop:
      i1 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10810)))), &_td_XML_DTD__AttrDeclDesc, 10810);
      attrDecl = (XML_DTD__AttrDecl)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 10850))+20);
      i2 = i2>=2;
      if (!i2) goto l31;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 10907))+12);
      i2 = i2==0;
      if (i2) goto l29;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11303))+24);
      i2 = (OOC_INT32)XML_DTD__AttValueDesc_FlattenNorm((XML_DTD__AttValue)i2, (XML_DTD__AttrDecl)i1, (void*)(OOC_INT32)&didNormalization);
      _default = (XML_UnicodeBuffer__CharArray)i2;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 11446))+12);
      switch (i3) {
      case 1:
      case 3:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11539)), 0);
        i2 = XML_Builder_Validation__IsName((void*)(_check_pointer(i2, 11539)), i3);
        match = i2;
        goto l25;
      case 2:
      case 4:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11629)), 0);
        i2 = XML_Builder_Validation__IsNames((void*)(_check_pointer(i2, 11629)), i3);
        match = i2;
        goto l25;
      case 5:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11704)), 0);
        i2 = XML_Builder_Validation__IsNmtoken((void*)(_check_pointer(i2, 11704)), i3);
        match = i2;
        goto l25;
      case 6:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11781)), 0);
        i2 = XML_Builder_Validation__IsNmtokens((void*)(_check_pointer(i2, 11781)), i3);
        match = i2;
        goto l25;
      case 8:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11859)), 0);
        i3 = XML_Builder_Validation__IsNmtoken((void*)(_check_pointer(i2, 11859)), i3);
        if (i3) goto l16;
        i2=0u;
        goto l17;
l16:
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11895))+16);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11926)), 0);
        i2 = XML_DTD__EnumerationDesc_Matches((XML_DTD__Enumeration)i3, (void*)(_check_pointer(i2, 11926)), i4);
        
l17:
        match = i2;
        goto l25;
      case 7:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11999)), 0);
        i3 = XML_Builder_Validation__IsName((void*)(_check_pointer(i2, 11999)), i3);
        if (i3) goto l21;
        i2=0u;
        goto l22;
l21:
        i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12035))+16);
        i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 12066)), 0);
        i2 = XML_DTD__EnumerationDesc_Matches((XML_DTD__Enumeration)i3, (void*)(_check_pointer(i2, 12066)), i4);
        
l22:
        match = i2;
        goto l25;
      case 9:
        match = 1u;
        goto l25;
      default:
        _failed_case(i3, 11433);
        goto l25;
      }
l25:
      i2 = match;
      i2 = !i2;
      if (!i2) goto l31;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12327))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12265))+8);
      i4 = (OOC_INT32)b;
      XML_Builder_Validation__ErrString2((XML_Builder_Validation__Builder)i4, 17, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i3, (OOC_CHAR8*)"attribute", 10, (XML_UnicodeBuffer__CharArray)i2);
      goto l31;
l29:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11121))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11061))+8);
      i4 = (OOC_INT32)b;
      XML_Builder_Validation__ErrString2((XML_Builder_Validation__Builder)i4, 16, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i3, (OOC_CHAR8*)"attribute", 10, (XML_UnicodeBuffer__CharArray)i2);
l31:
      i2 = *(OOC_INT8*)((_check_pointer(i1, 12484))+12);
      i2 = i2==7;
      if (!i2) goto l45;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12546))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12559));
      nameNode = (XML_DTD__NameNode)i2;
      i3 = i2!=(OOC_INT32)0;
      if (!i3) goto l45;
l36_loop:
      i3 = (OOC_INT32)b;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12658))+4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12624))+20);
      i4 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i5, (XML_UnicodeBuffer__CharArray)i4);
      i4 = i4==(OOC_INT32)0;
      if (!i4) goto l39;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12881))+4);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12819))+8);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12766))+4);
      XML_Builder_Validation__ErrString3((XML_Builder_Validation__Builder)i3, 11, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i5, (OOC_CHAR8*)"attribute", 10, (XML_UnicodeBuffer__CharArray)i4);
l39:
      i2 = (OOC_INT32)nameNode;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12938));
      nameNode = (XML_DTD__NameNode)i2;
      i3 = i2!=(OOC_INT32)0;
      if (i3) goto l36_loop;
l45:
      i2 = *(OOC_INT8*)((_check_pointer(i1, 13080))+12);
      i2 = i2==8;
      if (i2) goto l48;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 13133))+12);
      i2 = i2==7;
      
      goto l50;
l48:
      i2=1u;
l50:
      if (i2) goto l52;
      i2=0u;
      goto l54;
l52:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13199))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13212));
      i2 = (OOC_INT32)XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes_DuplicateToken((XML_DTD__NameNode)i2);
      i2 = i2!=(OOC_INT32)0;
      
l54:
      if (!i2) goto l56;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13332))+16);
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 13344));
      i2 = (OOC_INT32)XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes_DuplicateToken((XML_DTD__NameNode)i2);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13455))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13397))+8);
      i4 = (OOC_INT32)b;
      XML_Builder_Validation__ErrString3((XML_Builder_Validation__Builder)i4, 35, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1, (OOC_CHAR8*)"attribute", 10, (XML_UnicodeBuffer__CharArray)i3);
l56:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13501));
      decl = (XML_DTD__Declaration)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l61:
      return;
      ;
    }

    
    OOC_CHAR8 XML_Builder_Validation__BuilderDesc_EndDTD_InList(XML_UnicodeBuffer__CharArray name, XML_DTD__CP list) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)list;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13655)))), &_td_XML_DTD__NameCPDesc, 13655)), 13662))+8);
      i2 = (OOC_INT32)name;
      i1 = (
      _cmp16((const void*)(_check_pointer(i1, 13668)),(const void*)(_check_pointer(i2, 13676))))!=0;
      
l5:
      if (!i1) goto l17;
      i1 = (OOC_INT32)name;
      
l8_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13702))+4);
      list = (XML_DTD__CP)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l11;
      i2=0u;
      goto l13;
l11:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13655)))), &_td_XML_DTD__NameCPDesc, 13655)), 13662))+8);
      i2 = (
      _cmp16((const void*)(_check_pointer(i2, 13668)),(const void*)(_check_pointer(i1, 13676))))!=0;
      
l13:
      if (i2) goto l8_loop;
l17:
      return (i0!=(OOC_INT32)0);
      ;
    }


  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13871))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13876))+16);
  XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes((XML_DTD__Declaration)i0);
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13912))+16);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13917))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13935));
  decl = (XML_DTD__Declaration)i0;
  i1 = i0!=0;
  if (!i1) goto l42;
l3_loop:
  i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14000)))), &_td_XML_DTD__ElementDeclDesc, 14000);
  elemDecl = (XML_DTD__ElementDecl)i0;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 14038))+18);
  if (!i1) goto l6;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14174))+4);
  i2 = (OOC_INT32)b;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i2, 33, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14218))+24);
  i2 = (OOC_INT32)XML_DTD__undefAttr;
  i1 = i1==i2;
  if (!i1) goto l9;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14365))+4);
  i2 = (OOC_INT32)b;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i2, 6, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l9:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14409))+28);
  i2 = (OOC_INT32)XML_DTD__undefAttr;
  i1 = i1==i2;
  if (i1) goto l18;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14603))+28);
  i1 = i1!=0;
  if (i1) goto l14;
  i1=0u;
  goto l16;
l14:
  i1 = XML_DTD__ElementDeclDesc_IsEmpty((XML_DTD__ElementDecl)i0);
  
l16:
  if (i1) goto l19;
  goto l19;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14574))+4);
  i2 = (OOC_INT32)b;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i2, 7, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l19:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 14853))+16);
  i1 = i1==3;
  if (i1) goto l36;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 15045))+16);
  i1 = i1==2;
  if (!i1) goto l37;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15175))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15194)))), &_td_XML_DTD__ChoiceCPDesc, 15194)), 15203))+8);
  cp = (XML_DTD__CP)i1;
  i2 = i1!=0;
  if (!i2) goto l37;
  i2 = (OOC_INT32)b;
  
l26_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15284))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15267)))), &_td_XML_DTD__NameCPDesc, 15267)), 15274))+8);
  i3 = XML_Builder_Validation__BuilderDesc_EndDTD_InList((XML_UnicodeBuffer__CharArray)i4, (XML_DTD__CP)i3);
  if (!i3) goto l29;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15435)))), &_td_XML_DTD__NameCPDesc, 15435)), 15442))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15387))+4);
  XML_Builder_Validation__ErrString2((XML_Builder_Validation__Builder)i2, 27, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i4, (OOC_CHAR8*)"child", 6, (XML_UnicodeBuffer__CharArray)i3);
l29:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15483))+4);
  cp = (XML_DTD__CP)i1;
  i3 = i1!=0;
  if (i3) goto l26_loop;
  goto l37;
l36:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15007))+8);
  i1 = (OOC_INT32)XML_Regexp__New((XML_DTD__CP)i1);
  XML_DTD__ElementDeclDesc_SetRegexp((XML_DTD__ElementDecl)i0, (XML_DTD__RegexpInfo)i1);
l37:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15619))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15634));
  XML_Builder_Validation__BuilderDesc_EndDTD_CheckAttributes((XML_DTD__Declaration)i0);
  i0 = (OOC_INT32)decl;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 15672));
  decl = (XML_DTD__Declaration)i0;
  i1 = i0!=0;
  if (i1) goto l3_loop;
l42:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15706))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15711))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 15724));
  decl = (XML_DTD__Declaration)i1;
  i2 = i1!=0;
  if (!i2) goto l57;
l45_loop:
  i2 = *(OOC_INT8*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15781)))), &_td_XML_DTD__EntityDesc, 15781)), 15788))+8);
  i2 = i2==4;
  if (i2) goto l48;
  i2=0u;
  goto l50;
l48:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15865)))), &_td_XML_DTD__ExternalEntityDesc, 15865)), 15880))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15830))+20);
  i2 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i3, (XML_UnicodeBuffer__CharArray)i2);
  i2 = i2==0;
  
l50:
  if (!i2) goto l52;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16038)))), &_td_XML_DTD__ExternalEntityDesc, 16038)), 16053))+32);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15989))+4);
  XML_Builder_Validation__ErrString2((XML_Builder_Validation__Builder)i0, 28, (OOC_CHAR8*)"entity", 7, (XML_UnicodeBuffer__CharArray)i3, (OOC_CHAR8*)"notation", 9, (XML_UnicodeBuffer__CharArray)i2);
l52:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16091));
  decl = (XML_DTD__Declaration)i1;
  i2 = i1!=0;
  if (i2) goto l45_loop;
l57:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16117))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16117))+4);
  i2 = (OOC_INT32)externalDTD;
  i3 = allDeclarationsProcessed;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16134)))), XML_Builder__BuilderDesc_EndDTD)),XML_Builder__BuilderDesc_EndDTD)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i2, i3);
  return;
  ;
}

static void XML_Builder_Validation__CheckEmpty(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 16252))+32);
  i1 = i1>=0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16281))+36);
  i1 = _check_pointer(i1, 16288);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 16290))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 16288))*8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16308))+16);
  i1 = i1==0;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16419))+36);
  i1 = _check_pointer(i1, 16426);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 16428))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 16426))*8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16446))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 32, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l7:
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_StartElement(XML_Builder_Validation__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_UnicodeBuffer__CharArray expected;
  XML_DTD__CP list;
  XML_DTD__Declaration elemDecl;
  auto OOC_CHAR8 XML_Builder_Validation__BuilderDesc_StartElement_InCPList(XML_UnicodeBuffer__CharArray name, XML_DTD__CP list);
  auto XML_UnicodeBuffer__CharArray XML_Builder_Validation__BuilderDesc_StartElement_ListMixedElements(XML_DTD__CP list);
    
    OOC_CHAR8 XML_Builder_Validation__BuilderDesc_StartElement_InCPList(XML_UnicodeBuffer__CharArray name, XML_DTD__CP list) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)list;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16818)))), &_td_XML_DTD__NameCPDesc, 16818)), 16825))+8);
      i2 = (OOC_INT32)name;
      i1 = (
      _cmp16((const void*)(_check_pointer(i1, 16831)),(const void*)(_check_pointer(i2, 16839))))!=0;
      
l5:
      if (!i1) goto l17;
      i1 = (OOC_INT32)name;
      
l8_loop:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16865))+4);
      list = (XML_DTD__CP)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l11;
      i2=0u;
      goto l13;
l11:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16818)))), &_td_XML_DTD__NameCPDesc, 16818)), 16825))+8);
      i2 = (
      _cmp16((const void*)(_check_pointer(i2, 16831)),(const void*)(_check_pointer(i1, 16839))))!=0;
      
l13:
      if (i2) goto l8_loop;
l17:
      return (i0!=(OOC_INT32)0);
      ;
    }

    
    XML_UnicodeBuffer__CharArray XML_Builder_Validation__BuilderDesc_StartElement_ListMixedElements(XML_DTD__CP list) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      XML_UnicodeBuffer__CharArray str;
      OOC_INT32 len;
      OOC_INT32 i;
      XML_UnicodeBuffer__CharArray str2;

      i0 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], 64);
      str = (XML_UnicodeBuffer__CharArray)i0;
      i1 = _check_pointer(i0, 17088);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT8, 17088))*2) = 0u;
      len = 0;
      i1 = (OOC_INT32)list;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l11;
      i2=0;
l3_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17192)))), &_td_XML_DTD__NameCPDesc, 17192)), 17199))+8);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17192)))), &_td_XML_DTD__NameCPDesc, 17192)), 17199))+8);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 17205)), 0);
      i3 = LongStrings__Length((void*)(_check_pointer(i4, 17205)), i3);
      i = i3;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17240)), 0);
      i4 = ((i2+i3)+1)>=i4;
      if (!i4) goto l6;
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17278)), 0);
      i4 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i4*2));
      str2 = (XML_UnicodeBuffer__CharArray)i4;
      i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17311)), 0);
      _copy_16((const void*)(_check_pointer(i0, 17304)),(void*)(_check_pointer(i4, 17311)),i5);
l6:
      i4 = _check_pointer(i0, 17338);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_UINT16*)(i4+(_check_index(i2, i5, OOC_UINT32, 17338))*2) = 32u;
      i4 = _check_pointer(i0, 17363);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_UINT16*)(i4+(_check_index((i2+1), i5, OOC_UINT32, 17363))*2) = 0u;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17415)))), &_td_XML_DTD__NameCPDesc, 17415)), 17422))+8);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 17415)))), &_td_XML_DTD__NameCPDesc, 17415)), 17422))+8);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 17428)), 0);
      i6 = OOC_ARRAY_LENGTH((_check_pointer(i0, 17434)), 0);
      LongStrings__Append((void*)(_check_pointer(i5, 17428)), i4, (void*)(_check_pointer(i0, 17434)), i6);
      i2 = i2+(i3+1);
      len = i2;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17482))+4);
      list = (XML_DTD__CP)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l3_loop;
l11:
      return (XML_UnicodeBuffer__CharArray)i0;
      ;
    }


  i0 = (OOC_INT32)b;
  XML_Builder_Validation__CheckEmpty((XML_Builder_Validation__Builder)i0);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 17582))+32);
  i1 = i1==(-1);
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17914))+36);
  i1 = _check_pointer(i1, 17921);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 17923))+32);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+(_check_index(i3, i2, OOC_UINT32, 17921))*8)+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18538))+36);
  i1 = _check_pointer(i1, 18545);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 18547))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 18545))*8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 18565))+16);
  i1 = i1==2;
  if (!i1) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18759))+36);
  i1 = _check_pointer(i1, 18766);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 18768))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 18766))*8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18786))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 18805)))), &_td_XML_DTD__ChoiceCPDesc, 18805)), 18814))+8);
  list = (XML_DTD__CP)i1;
  i2 = (OOC_INT32)localName;
  i2 = XML_Builder_Validation__BuilderDesc_StartElement_InCPList((XML_UnicodeBuffer__CharArray)i2, (XML_DTD__CP)i1);
  i2 = !i2;
  if (!i2) goto l30;
  XML_Builder_Validation__IncErrorPos((XML_Builder_Validation__Builder)i0, (-1));
  i0 = (OOC_INT32)XML_Builder_Validation__BuilderDesc_StartElement_ListMixedElements((XML_DTD__CP)i1);
  i1 = (OOC_INT32)b;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i1, 30, (OOC_CHAR8*)"elements", 9, (XML_UnicodeBuffer__CharArray)i0);
  XML_Builder_Validation__IncErrorPos((XML_Builder_Validation__Builder)i1, 1);
  i0=i1;
  goto l30;
l13:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18061))+36);
  i1 = _check_pointer(i1, 18068);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 18070))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+(_check_index(i2, i3, OOC_UINT32, 18068))*8)+4);
  i2 = (OOC_INT32)localName;
  i1 = XML_Regexp__MatcherDesc_Matches((XML_Regexp__Matcher)i1, (XML_UnicodeBuffer__CharArray)i2);
  i1 = !i1;
  if (!i1) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18186))+36);
  i1 = _check_pointer(i1, 18193);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 18195))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 18193))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18139))+36);
  i2 = _check_pointer(i2, 18146);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 18148))+32);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18213))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+(_check_index(i3, i4, OOC_UINT32, 18146))*8)+4);
  i1 = (OOC_INT32)XML_Regexp__MatcherDesc_ExpectedTags((XML_Regexp__Matcher)i2, (XML_UnicodeBuffer__CharArray)i1);
  expected = (XML_UnicodeBuffer__CharArray)i1;
  XML_Builder_Validation__IncErrorPos((XML_Builder_Validation__Builder)i0, (-1));
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l18;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 30, (OOC_CHAR8*)"elements", 9, (XML_UnicodeBuffer__CharArray)i1);
  goto l19;
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18357))+36);
  i1 = _check_pointer(i1, 18364);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 18366))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 18364))*8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 18384))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 29, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l19:
  XML_Builder_Validation__IncErrorPos((XML_Builder_Validation__Builder)i0, 1);
  goto l30;
l22:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17656))+16);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l28;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17787))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17792));
  i2 = (OOC_INT32)localName;
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 17802)),(const void*)(_check_pointer(i2, 17815))))!=0;
  if (!i1) goto l30;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17868))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 17873));
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 26, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i1);
  goto l30;
l28:
  i1 = (OOC_INT32)XML_DTD__New();
  *(OOC_INT32*)((_check_pointer(i0, 17754))+16) = i1;
l30:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19090))+16);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19095))+12);
  i2 = (OOC_INT32)localName;
  i1 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i1, (XML_UnicodeBuffer__CharArray)i2);
  elemDecl = (XML_DTD__Declaration)i1;
  i3 = i1==(OOC_INT32)0;
  if (!i3) goto l33;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 31, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
l33:
  XML_Builder_Validation__PushElement((XML_Builder_Validation__Builder)i0, (XML_DTD__Declaration)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19265))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19265))+4);
  i3 = (OOC_INT32)namespaceDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 19282)))), XML_Builder__BuilderDesc_StartElement)),XML_Builder__BuilderDesc_StartElement)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)i3, (XML_UnicodeBuffer__CharArray)i2);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_EndElement(XML_Builder_Validation__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_UnicodeBuffer__CharArray expected;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19629))+36);
  i1 = _check_pointer(i1, 19636);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 19638))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+(_check_index(i2, i3, OOC_UINT32, 19636))*8)+4);
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19678))+36);
  i1 = _check_pointer(i1, 19685);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 19687))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+(_check_index(i2, i3, OOC_UINT32, 19685))*8)+4);
  i1 = XML_Regexp__MatcherDesc_EndOfRegexp((XML_Regexp__Matcher)i1);
  i1 = !i1;
  
l5:
  if (!i1) goto l10;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19795))+36);
  i1 = _check_pointer(i1, 19802);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 19804))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 19802))*8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19748))+36);
  i2 = _check_pointer(i2, 19755);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 19757))+32);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 19822))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((i2+(_check_index(i3, i4, OOC_UINT32, 19755))*8)+4);
  i1 = (OOC_INT32)XML_Regexp__MatcherDesc_ExpectedTags((XML_Regexp__Matcher)i2, (XML_UnicodeBuffer__CharArray)i1);
  expected = (XML_UnicodeBuffer__CharArray)i1;
  i2 = i1!=(OOC_INT32)0;
  if (!i2) goto l10;
  XML_Builder_Validation__IncErrorPos((XML_Builder_Validation__Builder)i0, (-2));
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 30, (OOC_CHAR8*)"elements", 9, (XML_UnicodeBuffer__CharArray)i1);
  XML_Builder_Validation__IncErrorPos((XML_Builder_Validation__Builder)i0, 2);
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20027))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 20027))+4);
  i3 = (OOC_INT32)namespaceDecl;
  i4 = (OOC_INT32)localName;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 20044)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i2, (XML_DTD__NamespaceDeclaration)i3, (XML_UnicodeBuffer__CharArray)i4);
  XML_Builder_Validation__PopElement((XML_Builder_Validation__Builder)i0);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_Attribute(XML_Builder_Validation__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  XML_UnicodeBuffer__CharArray string;
  OOC_CHAR8 didNormalization;
  XML_DTD__Declaration decl;
  OOC_INT32 i;
  OOC_INT32 start;
  XML_UnicodeBuffer__CharArray substr;
  OOC_CHAR8 dummy;
  XML_UnicodeBuffer__CharArray _default;
  XML_DTD__Entity ref;
  auto XML_DTD__Entity XML_Builder_Validation__BuilderDesc_Attribute_ExternalReference(XML_DTD__AttValue attValue);
    
    XML_DTD__Entity XML_Builder_Validation__BuilderDesc_Attribute_ExternalReference(XML_DTD__AttValue attValue) {
      register OOC_INT32 i0,i1,i2;
      XML_DTD__Entity ref;
      XML_DTD__Fragment fragment;

      ref = (XML_DTD__Entity)(OOC_INT32)0;
      i0 = (OOC_INT32)attValue;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 20771));
      fragment = (XML_DTD__Fragment)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i0=(OOC_INT32)0;
      goto l25;
l3:
      i1=(OOC_INT32)0;
l4_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20854)))), &_td_XML_DTD__EntityRefDesc);
      if (i2) goto l7;
      i2=0u;
      goto l9;
l7:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20899)))), &_td_XML_DTD__EntityRefDesc, 20899)), 20909))+8);
      i2 = i2!=(OOC_INT32)0;
      
l9:
      if (!i2) goto l16;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 20956)))), &_td_XML_DTD__EntityRefDesc, 20956)), 20966))+8);
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 20974))+16);
      if (i1) goto l14;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21132)))), &_td_XML_DTD__EntityRefDesc, 21132)), 21142))+8);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21150))+20);
      i1 = (OOC_INT32)XML_Builder_Validation__BuilderDesc_Attribute_ExternalReference((XML_DTD__AttValue)i1);
      ref = (XML_DTD__Entity)i1;
      
      goto l16;
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 21032)))), &_td_XML_DTD__EntityRefDesc, 21032)), 21042))+8);
      ref = (XML_DTD__Entity)i1;
      
l16:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 21217));
      fragment = (XML_DTD__Fragment)i0;
      i2 = i1==(OOC_INT32)0;
      if (i2) goto l19;
      i2=0u;
      goto l21;
l19:
      i2 = i0!=(OOC_INT32)0;
      
l21:
      if (i2) goto l4_loop;
l24:
      i0=i1;
l25:
      return (XML_DTD__Entity)i0;
      ;
    }


  i0 = (OOC_INT32)attrDecl;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l156;
  i1 = (OOC_INT32)value;
  i2 = (OOC_INT32)XML_DTD__AttValueDesc_FlattenNorm((XML_DTD__AttValue)i1, (XML_DTD__AttrDecl)i0, (void*)(OOC_INT32)&didNormalization);
  string = (XML_UnicodeBuffer__CharArray)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i0, 21448))+12);
  switch (i3) {
  case 3:
    i3 = specified;
    if (i3) goto l7;
    i3=0u;
    goto l9;
l7:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 21703)), 0);
    i3 = XML_Builder_Validation__IsName((void*)(_check_pointer(i2, 21703)), i3);
    i3 = !i3;
    
l9:
    if (i3) goto l18;
    i3 = (OOC_INT32)b;
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 21792))+16);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 21797))+4);
    i4 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i4, (XML_UnicodeBuffer__CharArray)i2);
    decl = (XML_DTD__Declaration)i4;
    i5 = i4==(OOC_INT32)0;
    if (i5) goto l16;
    i4 = *(OOC_INT8*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 21946)))), &_td_XML_DTD__EntityDesc, 21946)), 21953))+8);
    i4 = i4!=4;
    if (!i4) goto l129;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 5, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
l16:
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 4, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
l18:
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 2, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
  case 4:
    i3 = specified;
    if (i3) goto l23;
    i3=0u;
    goto l25;
l23:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22148)), 0);
    i3 = XML_Builder_Validation__IsNames((void*)(_check_pointer(i2, 22148)), i3);
    i3 = !i3;
    
l25:
    if (i3) goto l49;
    i3 = (OOC_INT32)b;
    i = 0;
    i4=0;
l27_loop:
    start = i4;
    i5 = _check_pointer(i2, 22279);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 22279))*2);
    i5 = (OOC_UINT16)i5>(OOC_UINT16)32u;
    if (i5) goto l30;
    i5=i4;
    goto l36;
l30:
    i5=i4;
l31_loop:
    i5 = i5+1;
    i = i5;
    i6 = _check_pointer(i2, 22279);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 22279))*2);
    i6 = (OOC_UINT16)i6>(OOC_UINT16)32u;
    if (i6) goto l31_loop;
l36:
    i6 = i5-i4;
    i7 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i6+1));
    substr = (XML_UnicodeBuffer__CharArray)i7;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22426)), 0);
    i9 = OOC_ARRAY_LENGTH((_check_pointer(i7, 22467)), 0);
    LongStrings__Extract((void*)(_check_pointer(i2, 22426)), i8, i4, i6, (void*)(_check_pointer(i7, 22467)), i9);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 22492))+16);
    i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 22497))+4);
    i4 = (OOC_INT32)XML_DTD__NamespaceDesc_Get((XML_DTD__Namespace)i4, (XML_UnicodeBuffer__CharArray)i7);
    decl = (XML_DTD__Declaration)i4;
    i6 = i4==(OOC_INT32)0;
    if (i6) goto l42;
    i4 = *(OOC_INT8*)((_check_pointer((_type_guard(i4, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 22652)))), &_td_XML_DTD__EntityDesc, 22652)), 22659))+8);
    i4 = i4!=4;
    if (!i4) goto l43;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 5, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i7);
    goto l43;
l42:
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 4, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i7);
l43:
    i4 = _check_pointer(i2, 22810);
    i6 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT16*)(i4+(_check_index(i5, i6, OOC_UINT32, 22810))*2);
    i4 = i4==0u;
    if (i4) goto l129;
    i4 = i5+1;
    i = i4;
    
    goto l27_loop;
l49:
    i2 = (OOC_INT32)b;
    XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i2, 3);
    goto l129;
  case 7:
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 22978))+16);
    i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23008)), 0);
    i3 = XML_DTD__EnumerationDesc_Matches((XML_DTD__Enumeration)i3, (void*)(_check_pointer(i2, 23008)), i4);
    i3 = !i3;
    if (!i3) goto l129;
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 9, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
  case 5:
    i3 = specified;
    if (i3) goto l58;
    i3=0u;
    goto l60;
l58:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23161)), 0);
    i3 = XML_Builder_Validation__IsNmtoken((void*)(_check_pointer(i2, 23161)), i3);
    i3 = !i3;
    
l60:
    if (!i3) goto l129;
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 12, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
  case 6:
    i3 = specified;
    if (i3) goto l66;
    i2=0u;
    goto l68;
l66:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23308)), 0);
    i2 = XML_Builder_Validation__IsNmtokens((void*)(_check_pointer(i2, 23308)), i3);
    i2 = !i2;
    
l68:
    if (!i2) goto l129;
    i2 = (OOC_INT32)b;
    XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i2, 13);
    goto l129;
  case 8:
    i3 = specified;
    if (i3) goto l74;
    i3=0u;
    goto l76;
l74:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23435)), 0);
    i3 = XML_Builder_Validation__IsNmtoken((void*)(_check_pointer(i2, 23435)), i3);
    i3 = !i3;
    
l76:
    if (i3) goto l81;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 23496))+16);
    i4 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23526)), 0);
    i3 = XML_DTD__EnumerationDesc_Matches((XML_DTD__Enumeration)i3, (void*)(_check_pointer(i2, 23526)), i4);
    i3 = !i3;
    if (!i3) goto l129;
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 14, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
l81:
    i2 = (OOC_INT32)b;
    XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i2, 12);
    goto l129;
  case 0:
    i3 = specified;
    if (i3) goto l86;
    i3=0u;
    goto l88;
l86:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23669)), 0);
    i3 = XML_Builder_Validation__IsName((void*)(_check_pointer(i2, 23669)), i3);
    i3 = !i3;
    
l88:
    if (i3) goto l93;
    i3 = (OOC_INT32)XML_Builder_Validation__NewIDDecl((XML_UnicodeBuffer__CharArray)i2);
    i4 = (OOC_INT32)b;
    i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 23742))+24);
    i3 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i5, (XML_DTD__Declaration)i3);
    i3 = !i3;
    if (!i3) goto l129;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i4, 18, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
l93:
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 2, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
  case 1:
    i3 = specified;
    if (i3) goto l98;
    i3=0u;
    goto l100;
l98:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 23922)), 0);
    i3 = XML_Builder_Validation__IsName((void*)(_check_pointer(i2, 23922)), i3);
    i3 = !i3;
    
l100:
    if (i3) goto l102;
    i2 = (OOC_INT32)XML_Builder_Validation__NewIDDecl((XML_UnicodeBuffer__CharArray)i2);
    i3 = (OOC_INT32)b;
    i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24013))+28);
    i2 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i3, (XML_DTD__Declaration)i2);
    dummy = (!i2);
    goto l129;
l102:
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 2, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
  case 2:
    i3 = specified;
    if (i3) goto l107;
    i3=0u;
    goto l109;
l107:
    i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 24140)), 0);
    i3 = XML_Builder_Validation__IsNames((void*)(_check_pointer(i2, 24140)), i3);
    i3 = !i3;
    
l109:
    if (i3) goto l126;
    i3 = (OOC_INT32)b;
    i = 0;
    i4=0;
l111_loop:
    start = i4;
    i5 = _check_pointer(i2, 24293);
    i6 = OOC_ARRAY_LENGTH(i5, 0);
    i5 = *(OOC_UINT16*)(i5+(_check_index(i4, i6, OOC_UINT32, 24293))*2);
    i5 = (OOC_UINT16)i5>(OOC_UINT16)32u;
    if (i5) goto l114;
    i5=i4;
    goto l120;
l114:
    i5=i4;
l115_loop:
    i5 = i5+1;
    i = i5;
    i6 = _check_pointer(i2, 24293);
    i7 = OOC_ARRAY_LENGTH(i6, 0);
    i6 = *(OOC_UINT16*)(i6+(_check_index(i5, i7, OOC_UINT32, 24293))*2);
    i6 = (OOC_UINT16)i6>(OOC_UINT16)32u;
    if (i6) goto l115_loop;
l120:
    i6 = i5-i4;
    i7 = (OOC_INT32)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i6+1));
    substr = (XML_UnicodeBuffer__CharArray)i7;
    i8 = OOC_ARRAY_LENGTH((_check_pointer(i2, 24440)), 0);
    i9 = OOC_ARRAY_LENGTH((_check_pointer(i7, 24481)), 0);
    LongStrings__Extract((void*)(_check_pointer(i2, 24440)), i8, i4, i6, (void*)(_check_pointer(i7, 24481)), i9);
    i4 = (OOC_INT32)XML_Builder_Validation__NewIDDecl((XML_UnicodeBuffer__CharArray)i7);
    i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 24508))+28);
    i4 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i6, (XML_DTD__Declaration)i4);
    dummy = (!i4);
    i4 = _check_pointer(i2, 24587);
    i6 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = *(OOC_UINT16*)(i4+(_check_index(i5, i6, OOC_UINT32, 24587))*2);
    i4 = i4==0u;
    if (i4) goto l129;
    i4 = i5+1;
    i = i4;
    
    goto l111_loop;
l126:
    i3 = (OOC_INT32)b;
    XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 3, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i2);
    goto l129;
  default:
    goto l129;
  }
l129:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 24923))+20);
  i3 = (OOC_INT32)b;
  i2 = i2==3;
  if (!i2) goto l135;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 24982))+24);
  i2 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i2, (XML_DTD__AttrDecl)i0);
  _default = (XML_UnicodeBuffer__CharArray)i2;
  i4 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i1, (XML_DTD__AttrDecl)i0);
  string = (XML_UnicodeBuffer__CharArray)i4;
  i2 = (
  _cmp16((const void*)(_check_pointer(i4, 25081)),(const void*)(_check_pointer(i2, 25092))))!=0;
  if (!i2) goto l135;
  XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i3, 15);
l135:
  i2 = XML_Builder_Validation__IsStandalone((XML_Builder_Validation__Builder)i3);
  if (!i2) goto l157;
  i2 = specified;
  i2 = !i2;
  if (i2) goto l140;
  i2=0u;
  goto l142;
l140:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 25364))+13);
  
l142:
  if (!i2) goto l144;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 25486))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i3, 23, (OOC_CHAR8*)"attribute", 10, (XML_UnicodeBuffer__CharArray)i2);
l144:
  i2 = didNormalization;
  if (i2) goto l147;
  i0=0u;
  goto l149;
l147:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 25734))+13);
  
l149:
  if (!i0) goto l151;
  XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i3, 21);
l151:
  i0 = (OOC_INT32)XML_Builder_Validation__BuilderDesc_Attribute_ExternalReference((XML_DTD__AttValue)i1);
  ref = (XML_DTD__Entity)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l157;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26147))+4);
  i1 = (OOC_INT32)b;
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i1, 22, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i0);
  goto l157;
l156:
  i0 = (OOC_INT32)b;
  XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i0, 1);
l157:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26196))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26196))+4);
  i2 = (OOC_INT32)namespaceDecl;
  i3 = (OOC_INT32)localName;
  i4 = specified;
  i5 = (OOC_INT32)value;
  i6 = (OOC_INT32)attrDecl;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26213)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i0, (XML_DTD__NamespaceDeclaration)i2, (XML_UnicodeBuffer__CharArray)i3, (XML_DTD__AttrDecl)i6, (XML_DTD__AttValue)i5, i4);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_NamespaceDeclaration(XML_Builder_Validation__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl) {

  _assert(0u, 127, 26435);
  
  ;
}

void XML_Builder_Validation__BuilderDesc_AttributesDone(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26532))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26532))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26549)))), XML_Builder__BuilderDesc_AttributesDone)),XML_Builder__BuilderDesc_AttributesDone)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_SkippedEntity(XML_Builder_Validation__Builder b, XML_UnicodeBuffer__CharArray name, XML_DTD__Entity referent) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  XML_Builder_Validation__CheckEmpty((XML_Builder_Validation__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26703))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 26703))+4);
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)referent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 26720)))), XML_Builder__BuilderDesc_SkippedEntity)),XML_Builder__BuilderDesc_SkippedEntity)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (XML_DTD__Entity)i3);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_Characters(XML_Builder_Validation__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_DTD__ElementDecl elemDecl;

  i0 = (OOC_INT32)b;
  XML_Builder_Validation__CheckEmpty((XML_Builder_Validation__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27065))+36);
  i1 = _check_pointer(i1, 27072);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 27074))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 27072))*8);
  i1 = XML_DTD__ElementDeclDesc_IsElementContent((XML_DTD__ElementDecl)i1);
  if (!i1) goto l18;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27137))+36);
  i1 = _check_pointer(i1, 27144);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 27146))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 27144))*8);
  elemDecl = (XML_DTD__ElementDecl)i1;
  i2 = elementWhitespace;
  i3 = i2==1;
  if (i3) goto l12;
  i3 = *(OOC_UINT8*)((_check_pointer(i1, 27323))+17);
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = XML_Builder_Validation__IsStandalone((XML_Builder_Validation__Builder)i0);
  
l9:
  if (!i3) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27438))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 20, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
  goto l13;
l12:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 27295))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 34, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l13:
  i1 = i2==2;
  if (!i1) goto l18;
  elementWhitespace = 0;
  
l18:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27605))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27605))+4);
  i2 = charsStart;
  i3 = charsEnd;
  i4 = elementWhitespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 27622)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i0, (void*)(OOC_INT32)chars, chars_0d, i2, i3, i4);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_StartCDATA(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  XML_Builder_Validation__CheckEmpty((XML_Builder_Validation__Builder)i0);
  i1 = XML_Builder_Validation__IsStandalone((XML_Builder_Validation__Builder)i0);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 27998))+36);
  i1 = _check_pointer(i1, 28005);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 28007))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 28005))*8);
  i1 = XML_DTD__ElementDeclDesc_IsElementContent((XML_DTD__ElementDecl)i1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28125))+36);
  i1 = _check_pointer(i1, 28132);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 28134))+32);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i2, i3, OOC_UINT32, 28132))*8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 28152))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 25, (OOC_CHAR8*)"element", 8, (XML_UnicodeBuffer__CharArray)i1);
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28179))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28179))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28196)))), XML_Builder__BuilderDesc_StartCDATA)),XML_Builder__BuilderDesc_StartCDATA)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_EndCDATA(XML_Builder_Validation__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28275))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28275))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28292)))), XML_Builder__BuilderDesc_EndCDATA)),XML_Builder__BuilderDesc_EndCDATA)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_StartEntity(XML_Builder_Validation__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  XML_Builder_Validation__CheckEmpty((XML_Builder_Validation__Builder)i0);
  i1 = XML_Builder_Validation__IsStandalone((XML_Builder_Validation__Builder)i0);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)entity;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 28438))+16);
  
l5:
  if (!i1) goto l7;
  XML_Builder_Validation__Err((XML_Builder_Validation__Builder)i0, 24);
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28529))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28529))+4);
  i2 = (OOC_INT32)entity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28546)))), XML_Builder__BuilderDesc_StartEntity)),XML_Builder__BuilderDesc_StartEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_EndEntity(XML_Builder_Validation__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28658))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28658))+4);
  i2 = (OOC_INT32)entity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28675)))), XML_Builder__BuilderDesc_EndEntity)),XML_Builder__BuilderDesc_EndEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_EntityDecl(XML_Builder_Validation__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28786))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28786))+4);
  i2 = (OOC_INT32)entity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 28803)))), XML_Builder__BuilderDesc_EntityDecl)),XML_Builder__BuilderDesc_EntityDecl)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_Notation(XML_Builder_Validation__Builder b, XML_DTD__Notation notation) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 28920))+20);
  i2 = (OOC_INT32)notation;
  i1 = XML_DTD__NamespaceDesc_Add((XML_DTD__Namespace)i1, (XML_DTD__Declaration)i2);
  i1 = !i1;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 29022))+4);
  XML_Builder_Validation__ErrString((XML_Builder_Validation__Builder)i0, 10, (OOC_CHAR8*)"name", 5, (XML_UnicodeBuffer__CharArray)i1);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29044))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29044))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29061)))), XML_Builder__BuilderDesc_Notation)),XML_Builder__BuilderDesc_Notation)((XML_Builder__Builder)i0, (XML_DTD__Notation)i2);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_ProcessingInstruction(XML_Builder_Validation__Builder b, XML_UnicodeBuffer__CharArray target, XML_DTD__StringVar content, OOC_LEN content_0d, OOC_INT32 contentStart, OOC_INT32 contentEnd, URI__URI baseURI) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29309))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29309))+4);
  i2 = (OOC_INT32)target;
  i3 = contentStart;
  i4 = contentEnd;
  i5 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29326)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (void*)(OOC_INT32)content, content_0d, i3, i4, (URI__URI)i5);
  return;
  ;
}

void XML_Builder_Validation__BuilderDesc_Comment(XML_Builder_Validation__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29570))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 29570))+4);
  i2 = start;
  i3 = end;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 29587)))), XML_Builder__BuilderDesc_Comment)),XML_Builder__BuilderDesc_Comment)((XML_Builder__Builder)i0, (void*)(OOC_INT32)chars, chars_0d, i2, i3);
  return;
  ;
}

void XML_Builder_Validation__Init(XML_Builder_Validation__Builder b, XML_Builder__Builder delegateBuilder) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)delegateBuilder;
  *(OOC_INT32*)((_check_pointer(i0, 29728))+4) = i1;
  *(OOC_INT32*)(_check_pointer(i0, 29771)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 29800))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 29834))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 29864))+16) = 0;
  i1 = (OOC_INT32)XML_DTD__NewNamespace();
  *(OOC_INT32*)((_check_pointer(i0, 29883))+20) = i1;
  i1 = (OOC_INT32)XML_DTD__NewNamespace();
  *(OOC_INT32*)((_check_pointer(i0, 29931))+24) = i1;
  i1 = (OOC_INT32)XML_DTD__NewNamespace();
  *(OOC_INT32*)((_check_pointer(i0, 29973))+28) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 30023))+32) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 30052))+36) = ((OOC_INT32)RT0__NewObject(_td_XML_Builder_Validation__Stack.baseTypes[0], 16));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30090))+36);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30097)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30112))+36);
  i3 = _check_pointer(i3, 30119);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 30119))*8) = 0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 30144))+36);
  i3 = _check_pointer(i3, 30151);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+(_check_index(i2, i4, OOC_UINT32, 30151))*8)+4) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

XML_Builder_Validation__Builder XML_Builder_Validation__New(XML_Builder__Builder delegateBuilder) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Validation__Builder.baseTypes[0]);
  i1 = (OOC_INT32)delegateBuilder;
  XML_Builder_Validation__Init((XML_Builder_Validation__Builder)i0, (XML_Builder__Builder)i1);
  return (XML_Builder_Validation__Builder)i0;
  ;
}

static void XML_Builder_Validation__SetErrorMessages(void) {
  register OOC_INT32 i0,i1;
  OOC_INT16 i;
  OOC_CHAR8 t[128];

  i = 0;
  i0=0;
l1_loop:
  switch (i0) {
  case 1:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute has not been declared",(void*)(OOC_INT32)t,128);
    goto l39;
  case 2:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute value `${name}\047 does not match the Name production",(void*)(OOC_INT32)t,128);
    goto l39;
  case 3:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute value does not match the Names production",(void*)(OOC_INT32)t,128);
    goto l39;
  case 4:
    _copy_8((const void*)(OOC_CHAR8*)"`${name}\047 refers to an unknown general entity",(void*)(OOC_INT32)t,128);
    goto l39;
  case 5:
    _copy_8((const void*)(OOC_CHAR8*)"`${name}\047 refers to a parsed entity",(void*)(OOC_INT32)t,128);
    goto l39;
  case 6:
    _copy_8((const void*)(OOC_CHAR8*)"Element `${element}\047 has more than one ID attribute",(void*)(OOC_INT32)t,128);
    goto l39;
  case 7:
    _copy_8((const void*)(OOC_CHAR8*)"Element `${element}\047 has more than one NOTATION attribute",(void*)(OOC_INT32)t,128);
    goto l39;
  case 8:
    _copy_8((const void*)(OOC_CHAR8*)"Empty element `${element}\047 has a NOTATION attribute `${attribute}\047",(void*)(OOC_INT32)t,128);
    goto l39;
  case 9:
    _copy_8((const void*)(OOC_CHAR8*)"`${name}\047 does not match any of the names of the notation declaration",(void*)(OOC_INT32)t,128);
    goto l39;
  case 10:
    _copy_8((const void*)(OOC_CHAR8*)"Notation `${name}\047 is already declared",(void*)(OOC_INT32)t,128);
    goto l39;
  case 11:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute declaration `${element}/@${attribute}\047 refers to undeclared notation `${name}\047",(void*)(OOC_INT32)t,128);
    goto l39;
  case 12:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute value `${name}\047 does not match the Nmtoken production",(void*)(OOC_INT32)t,128);
    goto l39;
  case 13:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute value does not match the Nmtokens production",(void*)(OOC_INT32)t,128);
    goto l39;
  case 14:
    _copy_8((const void*)(OOC_CHAR8*)"`${name}\047 does not match any of the names of the enumeration declaration",(void*)(OOC_INT32)t,128);
    goto l39;
  case 15:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute value does not match the fixed default value",(void*)(OOC_INT32)t,128);
    goto l39;
  case 16:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute declaration `${element}/@${attribute}\047 of type ID must not have a default value",(void*)(OOC_INT32)t,128);
    goto l39;
  case 17:
    _copy_8((const void*)(OOC_CHAR8*)"Invalid default value in attribute declaration `${element}/@${attribute}\047",(void*)(OOC_INT32)t,128);
    goto l39;
  case 18:
    _copy_8((const void*)(OOC_CHAR8*)"ID `${name}\047 is already defined",(void*)(OOC_INT32)t,128);
    goto l39;
  case 19:
    _copy_8((const void*)(OOC_CHAR8*)"No matching ID attribute for IDREF `${name}\047",(void*)(OOC_INT32)t,128);
    goto l39;
  case 20:
    _copy_8((const void*)(OOC_CHAR8*)"With standalone=\047yes\047, `${element}\047 cannot have white space content",(void*)(OOC_INT32)t,128);
    goto l39;
  case 21:
    _copy_8((const void*)(OOC_CHAR8*)"With standalone=\047yes\047, this attribute value must not change with normalization",(void*)(OOC_INT32)t,128);
    goto l39;
  case 22:
    _copy_8((const void*)(OOC_CHAR8*)"With standalone=\047yes\047, the attribute value refers to the externally declared entity `&${name};\047",(void*)(OOC_INT32)t,128);
    goto l39;
  case 23:
    _copy_8((const void*)(OOC_CHAR8*)"With standalone=\047yes\047, the attribute `${attribute}\047 is taken from an external markup declaration",(void*)(OOC_INT32)t,128);
    goto l39;
  case 24:
    _copy_8((const void*)(OOC_CHAR8*)"With standalone=\047yes\047, this entity reference points to an externally declared entity",(void*)(OOC_INT32)t,128);
    goto l39;
  case 25:
    _copy_8((const void*)(OOC_CHAR8*)"`${element}\047 does not have character content",(void*)(OOC_INT32)t,128);
    goto l39;
  case 26:
    _copy_8((const void*)(OOC_CHAR8*)"Element name does not match root name `${name}\047 from the DTD",(void*)(OOC_INT32)t,128);
    goto l39;
  case 27:
    _copy_8((const void*)(OOC_CHAR8*)"In element `${element}\047, child `${child}\047 appears multiple times in the Mixed declaration",(void*)(OOC_INT32)t,128);
    goto l39;
  case 28:
    _copy_8((const void*)(OOC_CHAR8*)"Unparsed entity `${entity}\047 refers to undeclared notation `${notation}\047",(void*)(OOC_INT32)t,128);
    goto l39;
  case 29:
    _copy_8((const void*)(OOC_CHAR8*)"Expected end tag </${element}>",(void*)(OOC_INT32)t,128);
    goto l39;
  case 30:
    _copy_8((const void*)(OOC_CHAR8*)"Expected tags:${elements}",(void*)(OOC_INT32)t,128);
    goto l39;
  case 31:
    _copy_8((const void*)(OOC_CHAR8*)"Element type `${name}\047 is not declared",(void*)(OOC_INT32)t,128);
    goto l39;
  case 32:
    _copy_8((const void*)(OOC_CHAR8*)"Parent element `${element}\047 is declared EMPTY",(void*)(OOC_INT32)t,128);
    goto l39;
  case 33:
    _copy_8((const void*)(OOC_CHAR8*)"Element `${element}\047 is declared more than once",(void*)(OOC_INT32)t,128);
    goto l39;
  case 34:
    _copy_8((const void*)(OOC_CHAR8*)"Element `${element}\047 is restricted to element content",(void*)(OOC_INT32)t,128);
    goto l39;
  case 35:
    _copy_8((const void*)(OOC_CHAR8*)"Duplicate token `${name}\047 in enumerated attribute type `${element}/@${attribute}\047",(void*)(OOC_INT32)t,128);
    goto l39;
  default:
    _copy_8((const void*)(OOC_CHAR8*)"",(void*)(OOC_INT32)t,128);
    goto l39;
  }
l39:
  i1 = (
  _cmp8((const void*)(OOC_INT32)t,(const void*)(OOC_CHAR8*)""))!=0;
  if (!i1) goto l42;
  i1 = (OOC_INT32)XML_Builder_Validation__validationContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 34436)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i1, i0, (void*)(OOC_INT32)t, 128);
l42:
  i0 = i0+1;
  i = i0;
  i1 = i0<=999;
  if (i1) goto l1_loop;
l46:
  return;
  ;
}

void OOC_XML_Builder_Validation_init(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)XML_Error__NewContext((OOC_CHAR8*)"XML:Builder:Validation", 23);
  XML_Builder_Validation__validationContext = (XML_Error__Context)i0;
  XML_Builder_Validation__SetErrorMessages();
  XML_Builder_Validation__dummyElement = (XML_DTD__ElementDecl)((OOC_INT32)RT0__NewObject(_td_XML_DTD__ElementDecl.baseTypes[0]));
  i0 = (OOC_INT32)XML_DTD__GetStringValue(((OOC_CHAR16[]){38,118,97,108,105,100,97,116,105,111,110,45,100,117,109,109,121,0}), 18);
  i1 = (OOC_INT32)XML_Builder_Validation__dummyElement;
  XML_DTD__InitElementDecl((XML_DTD__ElementDecl)i1, (XML_UnicodeBuffer__CharArray)i0, (XML_DTD__CP)(OOC_INT32)0, (XML_DTD__Namespace)(OOC_INT32)0, 0u);
  return;
  ;
}

void OOC_XML_Builder_Validation_destroy(void) {
}

/* --- */
