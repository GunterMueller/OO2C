#include <OOC/X86/SSA.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_CHAR8 OOC_X86_SSA__IsSigned(OOC_INT8 type) {
  register OOC_INT64 i0,i1;

  i0 = type;
  i1 = 1<=i0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = i0<=4;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IsUnsigned(OOC_INT8 type) {
  register OOC_INT64 i0,i1;

  i0 = type;
  i1 = 5<=i0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = i0<=8;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IsFloat(OOC_INT8 type) {
  register OOC_INT64 i0;

  i0 = type;
  return (i0>=10);
  ;
}

void OOC_X86_SSA__SelectorDesc_INIT(OOC_X86_SSA__Selector s) {

  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__SelectorDesc_SameSelector(OOC_X86_SSA__Selector s, OOC_X86_SSA__Selector sel) {

  _failed_function(27441); return 0;
  ;
}

OOC_SymbolTable__Type OOC_X86_SSA__SelectorDesc_Type(OOC_X86_SSA__Selector s) {

  _assert(0u, 127, 27556);
  _failed_function(27525); return 0;
  ;
}

void OOC_X86_SSA__VarDesc_INIT(OOC_X86_SSA__Var s, OOC_SymbolTable__VarDecl var) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)var;
  *(OOC_INT64*)(_check_pointer(i0, 27656)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 27675))+8) = (-1);
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__VarDesc_SameSelector(OOC_X86_SSA__Var s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 27782)))), &_td_OOC_X86_SSA__VarDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 27794));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 27806)))), &_td_OOC_X86_SSA__VarDesc, 27806)), 27810));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__VarDesc_IsGlobalVar(OOC_X86_SSA__Var s) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 27904));
  i1 = i1!=0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 27921));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27926))+8);
  i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 27934)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l4:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_X86_SSA__VarDesc_Type(OOC_X86_SSA__Var s) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)s;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 28028));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28033))+88);
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_X86_SSA__ProcDesc_INIT(OOC_X86_SSA__Proc s, OOC_SymbolTable__ProcDecl decl) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)decl;
  *(OOC_INT64*)(_check_pointer(i0, 28128)) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ProcDesc_SameSelector(OOC_X86_SSA__Proc s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28239)))), &_td_OOC_X86_SSA__ProcDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 28252));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28264)))), &_td_OOC_X86_SSA__ProcDesc, 28264)), 28269));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

void OOC_X86_SSA__ProcNameDesc_INIT(OOC_X86_SSA__ProcName s, Object__String name) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)name;
  *(OOC_INT64*)(_check_pointer(i0, 28371)) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ProcNameDesc_SameSelector(OOC_X86_SSA__ProcName s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28486)))), &_td_OOC_X86_SSA__ProcNameDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 28503));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28520)))), &_td_OOC_X86_SSA__ProcNameDesc, 28520)), 28529));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 28503));
  i0 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 28508)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i1, (Object__Object)i0);
  
l4:
  return i0;
  ;
}

void OOC_X86_SSA__TypeDescrDesc_INIT(OOC_X86_SSA__TypeDescr s, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)type;
  *(OOC_INT64*)(_check_pointer(i0, 28635)) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__TypeDescrDesc_SameSelector(OOC_X86_SSA__TypeDescr s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28751)))), &_td_OOC_X86_SSA__TypeDescrDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 28769));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28781)))), &_td_OOC_X86_SSA__TypeDescrDesc, 28781)), 28791));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

void OOC_X86_SSA__ModuleDescrDesc_INIT(OOC_X86_SSA__ModuleDescr s) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ModuleDescrDesc_SameSelector(OOC_X86_SSA__ModuleDescr s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)sel;
  return (OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28982)))), &_td_OOC_X86_SSA__ModuleDescrDesc));
  ;
}

void OOC_X86_SSA__ConstDesc_INIT(OOC_X86_SSA__Const s, Object__Object value, OOC_INT16 type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)value;
  *(OOC_INT64*)(_check_pointer(i0, 29118)) = i1;
  i1 = type;
  *(OOC_INT16*)((_check_pointer(i0, 29140))+8) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ConstDesc_SameSelector(OOC_X86_SSA__Const s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 29252)))), &_td_OOC_X86_SSA__ConstDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 29265));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 29283)))), &_td_OOC_X86_SSA__ConstDesc, 29283)), 29289));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 29265));
  i0 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 29271)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i1, (Object__Object)i0);
  
l4:
  return i0;
  ;
}

void OOC_X86_SSA__HeapObjDesc_INIT(OOC_X86_SSA__HeapObj s, OOC_X86_SSA__FunctionBlock fctBlock, OOC_SymbolTable__Type type, OOC_X86_SSA__Result adr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)type;
  *(OOC_INT64*)(_check_pointer(i0, 29460)) = i1;
  i1 = (OOC_INT64)fctBlock;
  i2 = (OOC_INT64)adr;
  i1 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i1, 33, (OOC_X86_SSA__Result)i2);
  *(OOC_INT64*)((_check_pointer(i0, 29480))+8) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__HeapObjDesc_SameSelector(OOC_X86_SSA__HeapObj s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 29661)))), &_td_OOC_X86_SSA__HeapObjDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 29685))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 29696));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 29716)))), &_td_OOC_X86_SSA__HeapObjDesc, 29716)), 29724))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 29735));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 29705));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 29744));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_X86_SSA__HeapObjDesc_Type(OOC_X86_SSA__HeapObj s) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)s;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 29834));
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_X86_SSA__IndexDesc_INIT(OOC_X86_SSA__Index s, OOC_X86_SSA__FunctionBlock fctBlock, OOC_X86_SSA__Result index) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)fctBlock;
  i2 = (OOC_INT64)index;
  i1 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i1, 33, (OOC_X86_SSA__Result)i2);
  *(OOC_INT64*)(_check_pointer(i0, 29950)) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IndexDesc_SameSelector(OOC_X86_SSA__Index s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 30100)))), &_td_OOC_X86_SSA__IndexDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 30122));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 30135));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 30155)))), &_td_OOC_X86_SSA__IndexDesc, 30155)), 30161));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 30174));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 30144));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 30183));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

void OOC_X86_SSA__FieldDesc_INIT(OOC_X86_SSA__Field s, OOC_SymbolTable__FieldDecl field) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)s;
  OOC_X86_SSA__SelectorDesc_INIT((OOC_X86_SSA__Selector)i0);
  i1 = (OOC_INT64)field;
  *(OOC_INT64*)(_check_pointer(i0, 30289)) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__FieldDesc_SameSelector(OOC_X86_SSA__Field s, OOC_X86_SSA__Selector sel) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)sel;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 30403)))), &_td_OOC_X86_SSA__FieldDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i1 = (OOC_INT64)s;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 30417));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 30430)))), &_td_OOC_X86_SSA__FieldDesc, 30430)), 30436));
  i0 = i1==i0;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__SameDesignator(OOC_X86_SSA__Designator _d1, OOC_X86_SSA__Designator _d2) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_INT32 i;

  i0 = (OOC_INT64)_d1;
  i1 = (OOC_INT64)_d2;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30566)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 30577)), 0);
  i2 = i2!=i3;
  if (i2) goto l14;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 30641)), 0);
  i3 = 0<i2;
  if (!i3) goto l13;
  i3=0;
l5_loop:
  i4 = _check_pointer(i1, 30682);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i0, 30663);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i0, 30663);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT64)*(OOC_INT64*)(i8+(_check_index(i3, i9, OOC_UINT32, 30663))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 30682))*8);
  i5 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 30663))*8);
  i4 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i8, 30666)))), OOC_X86_SSA__SelectorDesc_SameSelector)),OOC_X86_SSA__SelectorDesc_SameSelector)((OOC_X86_SSA__Selector)i5, (OOC_X86_SSA__Selector)i4);
  i4 = !i4;
  if (!i4) goto l8;
  return 0u;
l8:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l13:
  return 1u;
  goto l15;
l14:
  return 0u;
l15:
  _failed_function(30476); return 0;
  ;
}

void OOC_X86_SSA__NodeDesc_INIT(OOC_X86_SSA__Node node) {

  return;
  ;
}

static void OOC_X86_SSA__SetUse(OOC_X86_SSA__Result arg, OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)arg;
  *(OOC_INT64*)(_check_pointer(i0, 31056)) = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31092))+16);
  *(OOC_INT64*)((_check_pointer(i0, 31077))+24) = i2;
  *(OOC_INT64*)((_check_pointer(i1, 31109))+16) = i0;
  return;
  ;
}

static void OOC_X86_SSA__DeleteUse(OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd prev;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31276));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31280))+16);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31369));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31373))+16);
  prev = (OOC_X86_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31400))+24);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31440))+24);
  prev = (OOC_X86_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31400))+24);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31487))+24);
  *(OOC_INT64*)((_check_pointer(i1, 31471))+24) = i2;
  goto l13;
l12:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31312));
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31332))+24);
  *(OOC_INT64*)((_check_pointer(i1, 31316))+16) = i2;
l13:
  *(OOC_INT64*)((_check_pointer(i0, 31514))+24) = 0;
  *(OOC_INT64*)(_check_pointer(i0, 31539)) = 0;
  return;
  ;
}

void OOC_X86_SSA__OpndDesc_INIT(OOC_X86_SSA__Opnd opnd, OOC_X86_SSA__Result arg) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)opnd;
  OOC_X86_SSA__NodeDesc_INIT((OOC_X86_SSA__Node)i0);
  i1 = (OOC_INT64)arg;
  *(OOC_INT64*)(_check_pointer(i0, 31719)) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 31740))+24) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 31765))+8) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 31791))+16) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 31814))+32) = 0u;
  OOC_X86_SSA__SetUse((OOC_X86_SSA__Result)i1, (OOC_X86_SSA__Opnd)i0);
  return;
  ;
}

void OOC_X86_SSA__OpndDesc_DeleteOpnd(OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd prev;

  i0 = (OOC_INT64)opnd;
  OOC_X86_SSA__DeleteUse((OOC_X86_SSA__Opnd)i0);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32121))+16);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 32127));
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32221))+16);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 32227));
  prev = (OOC_X86_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32255))+8);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32296))+8);
  prev = (OOC_X86_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32255))+8);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32345))+8);
  *(OOC_INT64*)((_check_pointer(i1, 32328))+8) = i2;
  goto l13;
l12:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32160))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32183))+8);
  *(OOC_INT64*)(_check_pointer(i1, 32166)) = i2;
l13:
  *(OOC_INT64*)((_check_pointer(i0, 32373))+8) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 32399))+16) = 0;
  return;
  ;
}

void OOC_X86_SSA__OpndDesc_ReplaceArg(OOC_X86_SSA__Opnd opnd, OOC_X86_SSA__Result arg) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)opnd;
  OOC_X86_SSA__DeleteUse((OOC_X86_SSA__Opnd)i0);
  i1 = (OOC_INT64)arg;
  OOC_X86_SSA__SetUse((OOC_X86_SSA__Result)i1, (OOC_X86_SSA__Opnd)i0);
  return;
  ;
}

OOC_INT32 OOC_X86_SSA__OpndDesc_OpndIndex(OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_X86_SSA__Opnd ptr;

  i = 0;
  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32921))+16);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 32927));
  ptr = (OOC_X86_SSA__Opnd)i1;
  i2 = i1!=i0;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32994))+8);
  ptr = (OOC_X86_SSA__Opnd)i2;
  i3 = i2!=i0;
  if (i3) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__OpndDesc_IsBackedgeOpnd(OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33121))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 33127))+40);
  i1 = i1==50;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33158))+16);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 33165)))), &_td_OOC_X86_SSA__GateInstrDesc, 33165)), 33175))+88);
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 33182)))), &_td_OOC_X86_SSA__LoopStartInstrDesc);
  
l5:
  if (i1) goto l7;
  i0=0u;
  goto l8;
l7:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33216))+16);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 33222));
  i0 = i1!=i0;
  
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__OpndDesc_IsConst(OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)opnd;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 33332));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33336))+8);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 33342))+40);
  return (i0==0);
  ;
}

void OOC_X86_SSA__ResultDesc_INIT(OOC_X86_SSA__Result res, OOC_INT8 type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)res;
  OOC_X86_SSA__NodeDesc_INIT((OOC_X86_SSA__Node)i0);
  *(OOC_INT64*)(_check_pointer(i0, 33480)) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 33507))+8) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 33529))+16) = 0;
  i1 = type;
  *(OOC_INT8*)((_check_pointer(i0, 33553))+24) = i1;
  *(OOC_INT8*)((_check_pointer(i0, 33575))+25) = 0;
  *(OOC_INT8*)((_check_pointer(i0, 33605))+26) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 33636))+28) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 33663))+32) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 33684))+40) = 0;
  return;
  ;
}

void OOC_X86_SSA__ResultDesc_SetType(OOC_X86_SSA__Result res, OOC_INT8 type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)res;
  i1 = type;
  *(OOC_INT8*)((_check_pointer(i0, 33772))+24) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ResultDesc_NonImmediateUses(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__Opnd use;

  i0 = (OOC_INT64)res;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34070))+16);
  use = (OOC_X86_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l15;
l3_loop:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 34118))+32);
  i1 = !i1;
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34135))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 34141))+40);
  i1 = i1!=33;
  
l8:
  if (!i1) goto l10;
  return 1u;
l10:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34213))+24);
  use = (OOC_X86_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l15:
  return 0u;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ResultDesc_SameLocation(OOC_X86_SSA__Result res, OOC_X86_SSA__Result res2) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)res;
  i1 = (OOC_INT64)res2;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 34360))+26);
  i3 = *(OOC_INT8*)((_check_pointer(i1, 34375))+26);
  i2 = i2==i3;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 34399))+25);
  i3 = *(OOC_INT8*)((_check_pointer(i1, 34415))+25);
  i2 = i2==i3;
  
l5:
  if (i2) goto l7;
  i1=0u;
  goto l9;
l7:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 34440))+28);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 34460))+28);
  i1 = i2==i1;
  
l9:
  if (i1) goto l11;
  i0=0u;
  goto l12;
l11:
  i0 = *(OOC_INT8*)((_check_pointer(i0, 34489))+26);
  i0 = i0!=(-1);
  
l12:
  return i0;
  ;
}

void OOC_X86_SSA__ResultDesc_DeleteResult(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Result prev;

  i0 = (OOC_INT64)res;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34942))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 34948))+8);
  i1 = i0==i1;
  if (i1) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35038))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 35044))+8);
  prev = (OOC_X86_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 35074));
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 35116));
  prev = (OOC_X86_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 35074));
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 35168));
  *(OOC_INT64*)(_check_pointer(i1, 35150)) = i0;
  goto l13;
l12:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34975))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 34999));
  *(OOC_INT64*)((_check_pointer(i1, 34981))+8) = i0;
l13:
  return;
  ;
}

void OOC_X86_SSA__ResultDesc_ReplaceUses(OOC_X86_SSA__Result res, OOC_X86_SSA__Result with) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd use;
  OOC_X86_SSA__Opnd nextUse;

  i0 = (OOC_INT64)res;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35377))+16);
  use = (OOC_X86_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l8;
  i1 = (OOC_INT64)with;
  
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35432))+24);
  nextUse = (OOC_X86_SSA__Opnd)i2;
  OOC_X86_SSA__DeleteUse((OOC_X86_SSA__Opnd)i0);
  OOC_X86_SSA__SetUse((OOC_X86_SSA__Result)i1, (OOC_X86_SSA__Opnd)i0);
  use = (OOC_X86_SSA__Opnd)i2;
  i0 = i2!=(OOC_INT64)0;
  if (!i0) goto l8;
  i0=i2;
  goto l3_loop;
l8:
  return;
  ;
}

void OOC_X86_SSA__ResultDesc_ReplaceUsesExcept(OOC_X86_SSA__Result res, OOC_X86_SSA__Result with, OOC_X86_SSA__Opnd except) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Opnd use;
  OOC_X86_SSA__Opnd nextUse;

  i0 = (OOC_INT64)res;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35725))+16);
  use = (OOC_X86_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l11;
  i1 = (OOC_INT64)except;
  i2 = (OOC_INT64)with;
  
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35780))+24);
  nextUse = (OOC_X86_SSA__Opnd)i3;
  i4 = i0!=i1;
  if (!i4) goto l6;
  OOC_X86_SSA__DeleteUse((OOC_X86_SSA__Opnd)i0);
  OOC_X86_SSA__SetUse((OOC_X86_SSA__Result)i2, (OOC_X86_SSA__Opnd)i0);
l6:
  use = (OOC_X86_SSA__Opnd)i3;
  i0 = i3!=(OOC_INT64)0;
  if (!i0) goto l11;
  i0=i3;
  goto l3_loop;
l11:
  return;
  ;
}

OOC_SymbolTable__ProcDecl OOC_X86_SSA__ResultDesc_CalledProc(OOC_X86_SSA__Result calledAdr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)calledAdr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36171))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 36177))+40);
  i1 = i1==0;
  if (i1) goto l3;
  return (OOC_SymbolTable__ProcDecl)(OOC_INT64)0;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36221))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36227))+48);
  i0 = _check_pointer(i0, 36238);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(0, i1, OOC_UINT8, 36238))*8);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 36242)))), &_td_OOC_X86_SSA__ProcDesc, 36242)), 36247));
  return (OOC_SymbolTable__ProcDecl)i0;
l4:
  _failed_function(35967); return 0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ResultDesc_IsFalse(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)res;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 36457))+24);
  i1 = i1==5;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36488))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 36494))+40);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i0=0u;
  goto l8;
l7:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36524))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36530))+48);
  i1 = _check_pointer(i1, 36541);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 36541))*8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36524))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36530))+48);
  i0 = _check_pointer(i0, 36541);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(0, i2, OOC_UINT8, 36541))*8);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 36545)))), &_td_OOC_X86_SSA__ConstDesc, 36545)), 36551));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 36545)))), &_td_OOC_X86_SSA__ConstDesc, 36545)), 36551));
  i2 = (OOC_INT64)Object_BigInt__zero;
  i0 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 36557)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i1, (Object__Object)i2);
  
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ResultDesc_IsTrue(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)res;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 36741))+24);
  i1 = i1==5;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36772))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 36778))+40);
  i1 = i1==0;
  
l5:
  if (i1) goto l7;
  i0=0u;
  goto l8;
l7:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36809))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36815))+48);
  i1 = _check_pointer(i1, 36826);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 36826))*8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36809))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36815))+48);
  i0 = _check_pointer(i0, 36826);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(0, i2, OOC_UINT8, 36826))*8);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 36830)))), &_td_OOC_X86_SSA__ConstDesc, 36830)), 36836));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 36830)))), &_td_OOC_X86_SSA__ConstDesc, 36830)), 36836));
  i2 = (OOC_INT64)Object_BigInt__zero;
  i0 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 36842)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i1, (Object__Object)i2);
  i0 = !i0;
  
l8:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__ResultDesc_IsFloat(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)res;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 37023))+24);
  i0 = OOC_X86_SSA__IsFloat(i0);
  return i0;
  ;
}

Object_Boxed__Object OOC_X86_SSA__ResultDesc_GetConst(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)res;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37240))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 37246))+40);
  i1 = i1==0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37269))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 37275))+48);
  i1 = _check_pointer(i1, 37286);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 37286))*8);
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 37290)))), &_td_OOC_X86_SSA__ConstDesc);
  
l5:
  if (i1) goto l7;
  return (Object_Boxed__Object)(OOC_INT64)0;
  goto l8;
l7:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37320))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37326))+48);
  i0 = _check_pointer(i0, 37337);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(0, i1, OOC_UINT8, 37337))*8);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 37341)))), &_td_OOC_X86_SSA__ConstDesc, 37341)), 37347));
  return (Object_Boxed__Object)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 37360)))), &_td_Object_Boxed__ObjectDesc, 37360));
l8:
  _failed_function(37071); return 0;
  ;
}

OOC_X86_SSA__IterResultUses OOC_X86_SSA__ResultDesc_Uses(OOC_X86_SSA__Result res) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__IterResultUses iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterResultUses.baseTypes[0]);
  iter = (OOC_X86_SSA__IterResultUses)i0;
  i1 = (OOC_INT64)res;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 37546))+16);
  *(OOC_INT64*)(_check_pointer(i0, 37534)) = i1;
  return (OOC_X86_SSA__IterResultUses)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterResultUsesDesc_Next(OOC_X86_SSA__IterResultUses iter, OOC_X86_SSA__Opnd *use) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 37673));
  *use = (OOC_X86_SSA__Opnd)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 37755))+24);
  *(OOC_INT64*)(_check_pointer(i0, 37743)) = i1;
  return 1u;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(37619); return 0;
  ;
}

void OOC_X86_SSA__DepDesc_INIT(OOC_X86_SSA__Dep dep, OOC_INT8 type, OOC_X86_SSA__Instr before, OOC_X86_SSA__Instr after) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)dep;
  i1 = type;
  *(OOC_INT8*)((_check_pointer(i0, 37888))+16) = i1;
  i1 = (OOC_INT64)before;
  *(OOC_INT64*)(_check_pointer(i0, 37910)) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 37936))+8) = 0;
  i1 = (OOC_INT64)after;
  *(OOC_INT64*)((_check_pointer(i0, 37963))+24) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 37987))+32) = 0;
  return;
  ;
}

void OOC_X86_SSA__DepDesc_DeleteDep(OOC_X86_SSA__Dep dep) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Dep ptr;

  i0 = (OOC_INT64)dep;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38116))+24);
  instr = (OOC_X86_SSA__Instr)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38137))+56);
  i2 = i2==i0;
  if (i2) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38230))+56);
  ptr = (OOC_X86_SSA__Dep)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38259))+8);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38299))+8);
  ptr = (OOC_X86_SSA__Dep)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38259))+8);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38350))+8);
  *(OOC_INT64*)((_check_pointer(i1, 38332))+8) = i2;
  goto l13;
l12:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38190))+8);
  *(OOC_INT64*)((_check_pointer(i1, 38172))+56) = i2;
l13:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 38389));
  instr = (OOC_X86_SSA__Instr)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38411))+64);
  i2 = i2==i0;
  if (i2) goto l25;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38501))+64);
  ptr = (OOC_X86_SSA__Dep)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38529))+32);
  i2 = i2!=i0;
  if (!i2) goto l24;
l19_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38568))+32);
  ptr = (OOC_X86_SSA__Dep)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38529))+32);
  i2 = i2!=i0;
  if (i2) goto l19_loop;
l24:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38617))+32);
  *(OOC_INT64*)((_check_pointer(i1, 38600))+32) = i0;
  goto l26;
l25:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38462))+32);
  *(OOC_INT64*)((_check_pointer(i1, 38445))+64) = i0;
l26:
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_INIT(OOC_X86_SSA__Instr instr, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  OOC_X86_SSA__NodeDesc_INIT((OOC_X86_SSA__Node)i0);
  *(OOC_INT64*)(_check_pointer(i0, 38741)) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 38768))+8) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 38797))+16) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 38825))+24) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 38853))+32) = 0;
  i1 = opcode;
  *(OOC_INT8*)((_check_pointer(i0, 38877))+40) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 38905))+44) = (-1);
  *(OOC_INT64*)((_check_pointer(i0, 38926))+48) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 38955))+56) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 38984))+64) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 39012))+72) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 39035))+80) = 0;
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_SetOpcode(OOC_X86_SSA__Instr instr, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = opcode;
  *(OOC_INT8*)((_check_pointer(i0, 39132))+40) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__InstrDesc_NonImmediateUses(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Result res;
  OOC_X86_SSA__Opnd use;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 39426))+8);
  res = (OOC_X86_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l23;
l3_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 39480))+16);
  use = (OOC_X86_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l18;
l6_loop:
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 39532))+32);
  i2 = !i2;
  if (i2) goto l9;
  i2=0u;
  goto l11;
l9:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 39549))+16);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 39555))+40);
  i2 = i2!=33;
  
l11:
  if (!i2) goto l13;
  return 1u;
l13:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 39633))+24);
  use = (OOC_X86_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l6_loop;
l18:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 39670));
  res = (OOC_X86_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l23:
  return 0u;
  ;
}

OOC_CHAR8 OOC_X86_SSA__InstrDesc_IsLive(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 39802))+40);
  switch (i1) {
  case 26:
  case 27:
  case 28:
  case 46:
  case 49:
  case 35:
  case 43:
  case 51:
  case 52:
  case 54:
  case 53:
  case 55:
  case 29:
    return 1u;
    goto l4;
  default:
    i0 = OOC_X86_SSA__InstrDesc_NonImmediateUses((OOC_X86_SSA__Instr)i0);
    return i0;
    goto l4;
  }
l4:
  _failed_function(39760); return 0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__InstrDesc_Unchecked(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40296))+64);
  return (i0==(OOC_INT64)0);
  ;
}

OOC_CHAR8 OOC_X86_SSA__InstrDesc_IsLoopEndGate(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 40410))+40);
  i1 = i1==50;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 40435)))), &_td_OOC_X86_SSA__GateInstrDesc, 40435)), 40445))+88);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 40451))+40);
  i0 = i0==53;
  
l4:
  return i0;
  ;
}

OOC_X86_SSA__MergeInstr OOC_X86_SSA__InstrDesc_TopLevelMerge(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__Instr last;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 40894)))), &_td_OOC_X86_SSA__BranchInstrDesc, 40894)), 40906))+96);
  last = (OOC_X86_SSA__Instr)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 40931)))), &_td_OOC_X86_SSA__MergeInstrDesc);
  if (i1) goto l3;
  return (OOC_X86_SSA__MergeInstr)(OOC_INT64)0;
  goto l4;
l3:
  return (OOC_X86_SSA__MergeInstr)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 41005)))), &_td_OOC_X86_SSA__MergeInstrDesc, 41005));
l4:
  _failed_function(40518); return 0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__InstrDesc_AllOpndsSameValue(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 41175));
  i1 = i1==0;
  if (i1) goto l14;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 41244));
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41272))+8);
  i1 = i1!=0;
  if (!i1) goto l13;
l5_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41319))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 41328));
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 41308));
  i1 = i2!=i1;
  if (!i1) goto l8;
  return 0u;
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41396))+8);
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41272))+8);
  i1 = i1!=0;
  if (i1) goto l5_loop;
l13:
  return 1u;
  goto l15;
l14:
  return 1u;
l15:
  _failed_function(41101); return 0;
  ;
}

OOC_INT32 OOC_X86_SSA__InstrDesc_SizeOpndList(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 num;
  OOC_X86_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 41658));
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = i0!=0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  num = i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 41729))+8);
  opnd = (OOC_X86_SSA__Opnd)i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

static void OOC_X86_SSA__AddOpnd(OOC_X86_SSA__Instr instr, OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd prev;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 41960))+16) = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 41990));
  i2 = i2==0;
  if (i2) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 42070));
  prev = (OOC_X86_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 42098))+8);
  i2 = i2!=0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 42138))+8);
  prev = (OOC_X86_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 42098))+8);
  i2 = i2!=0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT64*)((_check_pointer(i1, 42170))+8) = i0;
  goto l13;
l12:
  *(OOC_INT64*)(_check_pointer(i1, 42023)) = i0;
l13:
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_SetDesignator(OOC_X86_SSA__Instr instr, OOC_X86_SSA__Designator designator) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)designator;
  *(OOC_INT64*)((_check_pointer(i0, 42296))+48) = i1;
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_ExtendDesignator(OOC_X86_SSA__Instr instr, OOC_X86_SSA__Selector selector) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_X86_SSA__Designator _new;
  OOC_INT32 i;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42482))+48);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 42493)), 0);
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], (i1+1));
  _new = (OOC_X86_SSA__Designator)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42527))+48);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 42538)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 42555);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42567))+48);
  i6 = _check_pointer(i6, 42578);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 42578))*8);
  *(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 42555))*8) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i2 = _check_pointer(i1, 42599);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42609))+48);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 42620)), 0);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i5 = (OOC_INT64)selector;
  *(OOC_INT64*)(i2+(_check_index(i3, i4, OOC_UINT32, 42599))*8) = i5;
  *(OOC_INT64*)((_check_pointer(i0, 42646))+48) = i1;
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_AddOpnd(OOC_X86_SSA__Instr instr, OOC_X86_SSA__Result arg) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  i1 = (OOC_INT64)arg;
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i0, (OOC_X86_SSA__Result)i1);
  i1 = (OOC_INT64)instr;
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i1, (OOC_X86_SSA__Opnd)i0);
  return;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__InstrDesc_AddResult(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Result res;
  OOC_X86_SSA__Result prev;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Result.baseTypes[0]);
  i1 = type;
  OOC_X86_SSA__ResultDesc_INIT((OOC_X86_SSA__Result)i0, i1);
  res = (OOC_X86_SSA__Result)i0;
  i1 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 43201))+8) = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 43231))+8);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 43314))+8);
  prev = (OOC_X86_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 43344));
  i2 = i2!=(OOC_INT64)0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 43386));
  prev = (OOC_X86_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 43344));
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT64*)(_check_pointer(i1, 43420)) = i0;
  goto l13;
l12:
  *(OOC_INT64*)((_check_pointer(i1, 43266))+8) = i0;
l13:
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_INT8 OOC_X86_SSA__MapType(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 43549)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 43574)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44313)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44359)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44406)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44455)))), &_td_OOC_SymbolTable__FormalParsDesc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44507)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i1) goto l13;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44501)))), 44501);
  goto l43;
l13:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44549))+72);
  i0 = OOC_X86_SSA__MapType((OOC_SymbolTable__Type)i0);
  return i0;
  goto l43;
l15:
  return 9;
  goto l43;
l17:
  return 9;
  goto l43;
l19:
  return 0;
  goto l43;
l21:
  return 0;
  goto l43;
l23:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 43609))+72);
  switch (i0) {
  case 17:
    return 0;
    goto l43;
  case 1:
    return 5;
    goto l43;
  case 2:
    return 6;
    goto l43;
  case 3:
    return 7;
    goto l43;
  case 0:
    return 5;
    goto l43;
  case 4:
    return 1;
    goto l43;
  case 5:
    return 2;
    goto l43;
  case 6:
    return 3;
    goto l43;
  case 7:
    return 4;
    goto l43;
  case 8:
    return 10;
    goto l43;
  case 9:
    return 11;
    goto l43;
  case 10:
    return 7;
    goto l43;
  case 11:
    return 5;
    goto l43;
  case 12:
    return 9;
    goto l43;
  case 13:
  case 14:
  case 15:
    return 9;
    goto l43;
  case 16:
    return 9;
    goto l43;
  default:
    _failed_case(i0, 43600);
    goto l43;
  }
l43:
  _failed_function(43493); return 0;
  ;
}

OOC_INT32 OOC_X86_SSA__TypeSize(OOC_INT8 type) {
  register OOC_INT64 i0;

  i0 = type;
  switch (i0) {
  case 1:
  case 5:
    return 1;
    goto l7;
  case 2:
  case 6:
    return 2;
    goto l7;
  case 3:
  case 7:
  case 10:
  case 9:
    return 4;
    goto l7;
  case 4:
  case 8:
  case 11:
    return 8;
    goto l7;
  default:
    _failed_case(i0, 44637);
    goto l7;
  }
l7:
  _failed_function(44593); return 0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__InstrDesc_AddResultExpr(OOC_X86_SSA__Instr instr, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i0 = OOC_X86_SSA__MapType((OOC_SymbolTable__Type)i0);
  i1 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i1, i0);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__InstrDesc_AddResultReg(OOC_X86_SSA__Instr instr, OOC_INT8 type, OOC_INT8 reg) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__Result res;

  i0 = type;
  i1 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i1, i0);
  res = (OOC_X86_SSA__Result)i0;
  *(OOC_INT8*)((_check_pointer(i0, 45445))+26) = 0;
  i1 = reg;
  *(OOC_INT8*)((_check_pointer(i0, 45474))+25) = i1;
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Opnd OOC_X86_SSA__InstrDesc_NthOpnd(OOC_X86_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 45779));
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 45831))+8);
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  return (OOC_X86_SSA__Opnd)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__InstrDesc_NthArg(OOC_X86_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46167));
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46219))+8);
  opnd = (OOC_X86_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46270));
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_INT32 OOC_X86_SSA__InstrDesc_IncomingPaths(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 46365))+40);
  switch (i1) {
  case 48:
  case 47:
  case 53:
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 46428)))), &_td_OOC_X86_SSA__MergeInstrDesc, 46428)), 46439))+104);
    i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 46445)), 0);
    return i0;
    goto l5;
  case 52:
    return 2;
    goto l5;
  default:
    _failed_case(i1, 46355);
    goto l5;
  }
l5:
  _failed_function(46316); return 0;
  ;
}

void OOC_X86_SSA__InstrDesc_AddDep(OOC_X86_SSA__Instr instr, OOC_INT8 type, OOC_X86_SSA__Instr beforeInstr) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Dep ptr;
  OOC_X86_SSA__Dep dep;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46796))+56);
  ptr = (OOC_X86_SSA__Dep)i1;
  i2 = (OOC_INT64)beforeInstr;
  i3 = type;
  i4 = i1!=(OOC_INT64)0;
  if (!i4) goto l15;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 46847));
  i4 = i4==i2;
  if (i4) goto l6;
  i4=0u;
  goto l8;
l6:
  i4 = *(OOC_INT8*)((_check_pointer(i1, 46876))+16);
  i4 = i4==i3;
  
l8:
  if (!i4) goto l10;
  return;
l10:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 46938))+8);
  ptr = (OOC_X86_SSA__Dep)i1;
  i4 = i1!=(OOC_INT64)0;
  if (i4) goto l3_loop;
l15:
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Dep.baseTypes[0]);
  OOC_X86_SSA__DepDesc_INIT((OOC_X86_SSA__Dep)i1, i3, (OOC_X86_SSA__Instr)i2, (OOC_X86_SSA__Instr)i0);
  dep = (OOC_X86_SSA__Dep)i1;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47035))+56);
  *(OOC_INT64*)((_check_pointer(i1, 47015))+8) = i3;
  *(OOC_INT64*)((_check_pointer(i0, 47057))+56) = i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 47109))+64);
  *(OOC_INT64*)((_check_pointer(i1, 47084))+32) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 47136))+64) = i1;
  return;
  ;
}

OOC_X86_SSA__Dep OOC_X86_SSA__InstrDesc_GetDep(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__Dep x;
  OOC_X86_SSA__Dep dep;

  x = (OOC_X86_SSA__Dep)(OOC_INT64)0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47294))+56);
  dep = (OOC_X86_SSA__Dep)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=(OOC_INT64)0;
  goto l13;
l3:
  i1 = type;
  i2=(OOC_INT64)0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 47345))+16);
  i3 = i3==i1;
  if (!i3) goto l8;
  _assert((i2==(OOC_INT64)0), 127, 47372);
  x = (OOC_X86_SSA__Dep)i0;
  i2=i0;
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47434))+8);
  dep = (OOC_X86_SSA__Dep)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l4_loop;
l12:
  i0=i2;
l13:
  _assert((i0!=(OOC_INT64)0), 127, 47460);
  return (OOC_X86_SSA__Dep)i0;
  ;
}

void OOC_X86_SSA__InstrDesc_DeleteDep(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1;

  i0 = type;
  i1 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_GetDep((OOC_X86_SSA__Instr)i1, i0);
  OOC_X86_SSA__DepDesc_DeleteDep((OOC_X86_SSA__Dep)i0);
  return;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__InstrDesc_GetBeforeInstr(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__Dep dep;

  i0 = type;
  i1 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_GetDep((OOC_X86_SSA__Instr)i1, i0);
  dep = (OOC_X86_SSA__Dep)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 47793));
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__InstrDesc_GetAfterInstr(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__Instr x;
  OOC_X86_SSA__Dep dep;

  x = (OOC_X86_SSA__Instr)(OOC_INT64)0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47960))+64);
  dep = (OOC_X86_SSA__Dep)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=(OOC_INT64)0;
  goto l13;
l3:
  i1 = type;
  i2=(OOC_INT64)0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 48010))+16);
  i3 = i3==i1;
  if (!i3) goto l8;
  _assert((i2==(OOC_INT64)0), 127, 48037);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48070))+24);
  x = (OOC_X86_SSA__Instr)i2;
  
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48105))+32);
  dep = (OOC_X86_SSA__Dep)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l4_loop;
l12:
  i0=i2;
l13:
  _assert((i0!=(OOC_INT64)0), 127, 48130);
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__InstrDesc_GetAfterInstrOpcode(OOC_X86_SSA__Instr instr, OOC_INT8 type, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Instr x;
  OOC_X86_SSA__Dep dep;

  x = (OOC_X86_SSA__Instr)(OOC_INT64)0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48386))+64);
  dep = (OOC_X86_SSA__Dep)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=(OOC_INT64)0;
  goto l17;
l3:
  i1 = type;
  i2 = opcode;
  i3=(OOC_INT64)0;
l4_loop:
  i4 = *(OOC_INT8*)((_check_pointer(i0, 48436))+16);
  i4 = i4==i1;
  if (i4) goto l7;
  i4=0u;
  goto l9;
l7:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48456))+24);
  i4 = *(OOC_INT8*)((_check_pointer(i4, 48462))+40);
  i4 = i4==i2;
  
l9:
  if (!i4) goto l12;
  _assert((i3==(OOC_INT64)0), 127, 48493);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48526))+24);
  x = (OOC_X86_SSA__Instr)i3;
  
l12:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48561))+32);
  dep = (OOC_X86_SSA__Dep)i0;
  i4 = i0!=(OOC_INT64)0;
  if (i4) goto l4_loop;
l16:
  i0=i3;
l17:
  _assert((i0!=(OOC_INT64)0), 127, 48586);
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__BranchInstr OOC_X86_SSA__InstrDesc_GetBranchBeforeInstr(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__Dep x;
  OOC_X86_SSA__Dep dep;

  x = (OOC_X86_SSA__Dep)(OOC_INT64)0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48791))+56);
  dep = (OOC_X86_SSA__Dep)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=(OOC_INT64)0;
  goto l17;
l3:
  i1 = type;
  i2=(OOC_INT64)0;
l4_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 48842));
  i3 = *(OOC_INT8*)((_check_pointer(i3, 48849))+40);
  i3 = i3==46;
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 48873))+16);
  i3 = i3==i1;
  
l9:
  if (!i3) goto l12;
  _assert((i2==(OOC_INT64)0), 127, 48900);
  x = (OOC_X86_SSA__Dep)i0;
  i2=i0;
l12:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48962))+8);
  dep = (OOC_X86_SSA__Dep)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l4_loop;
l16:
  i0=i2;
l17:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 48996));
  return (OOC_X86_SSA__BranchInstr)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49004)))), &_td_OOC_X86_SSA__BranchInstrDesc, 49004));
  ;
}

OOC_X86_SSA__MergeInstr OOC_X86_SSA__InstrDesc_JumpTarget(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__Instr merge;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 49147))+40);
  _assert((i1==49), 127, 49135);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_GetAfterInstr((OOC_X86_SSA__Instr)i0, 0);
  merge = (OOC_X86_SSA__Instr)i0;
  return (OOC_X86_SSA__MergeInstr)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49227)))), &_td_OOC_X86_SSA__MergeInstrDesc, 49227));
  ;
}

OOC_X86_SSA__Block OOC_X86_SSA__InstrDesc_MergingTarget(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__Instr target;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 49356))+40);
  switch (i1) {
  case 49:
    i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_JumpTarget((OOC_X86_SSA__Instr)i0);
    return (OOC_X86_SSA__Block)i0;
    goto l7;
  case 52:
    return (OOC_X86_SSA__Block)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49448)))), &_td_OOC_X86_SSA__LoopStartInstrDesc, 49448));
    goto l7;
  case 54:
    i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_GetAfterInstrOpcode((OOC_X86_SSA__Instr)i0, 0, 53);
    target = (OOC_X86_SSA__Instr)i0;
    return (OOC_X86_SSA__Block)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49565)))), &_td_OOC_X86_SSA__BlockDesc, 49565));
    goto l7;
  case 55:
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49612)))), &_td_OOC_X86_SSA__LoopBackedgeInstrDesc, 49612)), 49630))+88);
    return (OOC_X86_SSA__Block)i0;
    goto l7;
  default:
    _failed_case(i1, 49346);
    goto l7;
  }
l7:
  _failed_function(49284); return 0;
  ;
}

void OOC_X86_SSA__InstrDesc_TransferDeps(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  OOC_X86_SSA__Dep after;
  OOC_X86_SSA__Dep nextAfter;
  OOC_X86_SSA__Dep before;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50034))+64);
  after = (OOC_X86_SSA__Dep)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l16;
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50097))+32);
  nextAfter = (OOC_X86_SSA__Dep)i2;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50130))+56);
  before = (OOC_X86_SSA__Dep)i3;
  i4 = i3!=(OOC_INT64)0;
  if (!i4) goto l11;
l6_loop:
  i4 = *(OOC_INT8*)((_check_pointer(i3, 50206))+16);
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50186))+24);
  i6 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 50219));
  OOC_X86_SSA__InstrDesc_AddDep((OOC_X86_SSA__Instr)i5, i4, (OOC_X86_SSA__Instr)i6);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 50253))+8);
  before = (OOC_X86_SSA__Dep)i3;
  i4 = i3!=(OOC_INT64)0;
  if (i4) goto l6_loop;
l11:
  OOC_X86_SSA__DepDesc_DeleteDep((OOC_X86_SSA__Dep)i1);
  after = (OOC_X86_SSA__Dep)i2;
  i1 = i2!=(OOC_INT64)0;
  if (!i1) goto l16;
  i1=i2;
  goto l3_loop;
l16:
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_DesignatorGateToGate(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)instr;
  *(OOC_INT8*)((_check_pointer(i0, 50426))+40) = 50;
  *(OOC_INT64*)((_check_pointer(i0, 50452))+48) = (OOC_INT64)0;
  return;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterOperandsDesc_Next(OOC_X86_SSA__IterOperands iter, OOC_X86_SSA__Opnd *opnd) {

  _failed_function(50543); return 0;
  ;
}

OOC_X86_SSA__IterInstrOperands OOC_X86_SSA__InstrDesc_Operands(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__IterInstrOperands iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterInstrOperands.baseTypes[0]);
  iter = (OOC_X86_SSA__IterInstrOperands)i0;
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 50725));
  *(OOC_INT64*)(_check_pointer(i0, 50711)) = i1;
  return (OOC_X86_SSA__IterInstrOperands)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterInstrOperandsDesc_Next(OOC_X86_SSA__IterInstrOperands iter, OOC_X86_SSA__Opnd *opnd) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 50862));
  *opnd = (OOC_X86_SSA__Opnd)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50946))+8);
  *(OOC_INT64*)(_check_pointer(i0, 50933)) = i1;
  return 1u;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(50806); return 0;
  ;
}

OOC_X86_SSA__IterInstrResults OOC_X86_SSA__InstrDesc_Results(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__IterInstrResults iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterInstrResults.baseTypes[0]);
  iter = (OOC_X86_SSA__IterInstrResults)i0;
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 51132))+8);
  *(OOC_INT64*)(_check_pointer(i0, 51118)) = i1;
  return (OOC_X86_SSA__IterInstrResults)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterInstrResultsDesc_Next(OOC_X86_SSA__IterInstrResults iter, OOC_X86_SSA__Result *res) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 51269));
  *res = (OOC_X86_SSA__Result)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 51351));
  *(OOC_INT64*)(_check_pointer(i0, 51339)) = i1;
  return 1u;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(51213); return 0;
  ;
}

OOC_X86_SSA__IterJumpGateOperands OOC_X86_SSA__InstrDesc_GateOperands(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_X86_SSA__IterJumpGateOperands iter;
  OOC_X86_SSA__Block merge;
  OOC_INT32 i;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterJumpGateOperands.baseTypes[0]);
  iter = (OOC_X86_SSA__IterJumpGateOperands)i0;
  i1 = (OOC_INT64)instr;
  i2 = (OOC_INT64)OOC_X86_SSA__InstrDesc_MergingTarget((OOC_X86_SSA__Instr)i1);
  merge = (OOC_X86_SSA__Block)i2;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 51627))+88);
  *(OOC_INT64*)(_check_pointer(i0, 51608)) = i3;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 51653))+40);
  switch (i3) {
  case 49:
    i = 0;
    i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 51709)))), &_td_OOC_X86_SSA__MergeInstrDesc, 51709)), 51720))+104);
    i3 = _check_pointer(i3, 51726);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(0, i4, OOC_UINT32, 51726))*8);
    i3 = i3!=i1;
    if (!i3) goto l25;
    i3=0;
l6_loop:
    i3 = i3+1;
    i = i3;
    i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 51709)))), &_td_OOC_X86_SSA__MergeInstrDesc, 51709)), 51720))+104);
    i4 = _check_pointer(i4, 51726);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 51726))*8);
    i4 = i4!=i1;
    if (i4) goto l6_loop;
    goto l25;
  case 52:
    i = 0;
    goto l25;
  case 54:
    i = 0;
    i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 51849)))), &_td_OOC_X86_SSA__MergeInstrDesc, 51849)), 51860))+104);
    i3 = _check_pointer(i3, 51866);
    i4 = OOC_ARRAY_LENGTH(i3, 0);
    i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(0, i4, OOC_UINT32, 51866))*8);
    i3 = i3!=i1;
    if (!i3) goto l25;
    i3=0;
l17_loop:
    i3 = i3+1;
    i = i3;
    i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 51849)))), &_td_OOC_X86_SSA__MergeInstrDesc, 51849)), 51860))+104);
    i4 = _check_pointer(i4, 51866);
    i5 = OOC_ARRAY_LENGTH(i4, 0);
    i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 51866))*8);
    i4 = i4!=i1;
    if (i4) goto l17_loop;
    goto l25;
  case 55:
    i = 1;
    goto l25;
  default:
    _failed_case(i3, 51643);
    goto l25;
  }
l25:
  i1 = i;
  *(OOC_INT32*)((_check_pointer(i0, 51960))+8) = i1;
  return (OOC_X86_SSA__IterJumpGateOperands)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterJumpGateOperandsDesc_Next(OOC_X86_SSA__IterJumpGateOperands iter, OOC_X86_SSA__Opnd *opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Instr instr;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 52131));
  instr = (OOC_X86_SSA__Instr)i1;
  i2 = i1!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 52175))+40);
  i2 = i2!=50;
  
l5:
  if (!i2) goto l17;
l8_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52214))+16);
  instr = (OOC_X86_SSA__Instr)i1;
  i2 = i1!=0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 52175))+40);
  i2 = i2!=50;
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = i1==0;
  if (i2) goto l20;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52338))+16);
  *(OOC_INT64*)(_check_pointer(i0, 52319)) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 52382))+8);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_NthOpnd((OOC_X86_SSA__Instr)i1, i0);
  *opnd = (OOC_X86_SSA__Opnd)i0;
  return 1u;
  goto l21;
l20:
  *opnd = (OOC_X86_SSA__Opnd)0;
  return 0u;
l21:
  _failed_function(52050); return 0;
  ;
}

OOC_X86_SSA__IterInstrBeforeList OOC_X86_SSA__InstrDesc_BeforeList(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__IterInstrBeforeList iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterInstrBeforeList.baseTypes[0]);
  iter = (OOC_X86_SSA__IterInstrBeforeList)i0;
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52585))+56);
  *(OOC_INT64*)(_check_pointer(i0, 52571)) = i1;
  i1 = type;
  i2 = i1==(-1);
  if (i2) goto l3;
  *(OOC_UINT32*)((_check_pointer(i0, 52673))+8) = (_bit_range(i1,i1));
  goto l4;
l3:
  *(OOC_UINT32*)((_check_pointer(i0, 52636))+8) = 7u;
l4:
  return (OOC_X86_SSA__IterInstrBeforeList)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterInstrBeforeListDesc_Next(OOC_X86_SSA__IterInstrBeforeList iter, OOC_X86_SSA__Dep *dep) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 52827));
  *dep = (OOC_X86_SSA__Dep)i1;
  i2 = i1!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 52863))+16);
  i3 = *(OOC_UINT32*)((_check_pointer(i0, 52876))+8);
  i2 = !(_in(i2,i3));
  
l5:
  if (!i2) goto l17;
l8_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52903))+8);
  *dep = (OOC_X86_SSA__Dep)i1;
  i2 = i1!=0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 52863))+16);
  i3 = *(OOC_UINT32*)((_check_pointer(i0, 52876))+8);
  i2 = !(_in(i2,i3));
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = i1==0;
  if (i2) goto l20;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 53000))+8);
  *(OOC_INT64*)(_check_pointer(i0, 52988)) = i1;
  return 1u;
  goto l21;
l20:
  return 0u;
l21:
  _failed_function(52774); return 0;
  ;
}

OOC_X86_SSA__IterInstrAfterList OOC_X86_SSA__InstrDesc_AfterList(OOC_X86_SSA__Instr instr, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__IterInstrAfterList iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterInstrAfterList.baseTypes[0]);
  iter = (OOC_X86_SSA__IterInstrAfterList)i0;
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 53204))+64);
  *(OOC_INT64*)(_check_pointer(i0, 53190)) = i1;
  i1 = type;
  i2 = i1==(-1);
  if (i2) goto l3;
  *(OOC_UINT32*)((_check_pointer(i0, 53291))+8) = (_bit_range(i1,i1));
  goto l4;
l3:
  *(OOC_UINT32*)((_check_pointer(i0, 53254))+8) = 7u;
l4:
  return (OOC_X86_SSA__IterInstrAfterList)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterInstrAfterListDesc_Next(OOC_X86_SSA__IterInstrAfterList iter, OOC_X86_SSA__Dep *dep) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 53443));
  *dep = (OOC_X86_SSA__Dep)i1;
  i2 = i1!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 53479))+16);
  i3 = *(OOC_UINT32*)((_check_pointer(i0, 53492))+8);
  i2 = !(_in(i2,i3));
  
l5:
  if (!i2) goto l17;
l8_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 53519))+32);
  *dep = (OOC_X86_SSA__Dep)i1;
  i2 = i1!=0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 53479))+16);
  i3 = *(OOC_UINT32*)((_check_pointer(i0, 53492))+8);
  i2 = !(_in(i2,i3));
  
l13:
  if (i2) goto l8_loop;
l17:
  i2 = i1==0;
  if (i2) goto l20;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 53615))+32);
  *(OOC_INT64*)(_check_pointer(i0, 53603)) = i1;
  return 1u;
  goto l21;
l20:
  return 0u;
l21:
  _failed_function(53390); return 0;
  ;
}

void OOC_X86_SSA__BlockDesc_INIT(OOC_X86_SSA__Block b, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1;

  i0 = opcode;
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i1, i0);
  *(OOC_INT64*)((_check_pointer(i1, 53747))+88) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 53771))+96) = (OOC_INT64)0;
  return;
  ;
}

void OOC_X86_SSA__BlockDesc_Add(OOC_X86_SSA__Block b, OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 54061))+16) = (OOC_INT64)0;
  i1 = (OOC_INT64)b;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54104))+96);
  *(OOC_INT64*)((_check_pointer(i0, 54089))+24) = i2;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54125))+88);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l3;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54319))+96);
  *(OOC_INT64*)((_check_pointer(i2, 54329))+16) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 54357))+96) = i0;
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 54194))+88) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 54222))+96) = i0;
l4:
  *(OOC_INT64*)((_check_pointer(i0, 54396))+32) = i1;
  return;
  ;
}

void OOC_X86_SSA__BlockDesc_AddInFront(OOC_X86_SSA__Block b, OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 54643))+24) = (OOC_INT64)0;
  i1 = (OOC_INT64)b;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54686))+88);
  *(OOC_INT64*)((_check_pointer(i0, 54671))+16) = i2;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54707))+88);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l3;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54906))+88);
  *(OOC_INT64*)((_check_pointer(i2, 54916))+24) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 54944))+88) = i0;
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 54775))+88) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 54803))+96) = i0;
l4:
  *(OOC_INT64*)((_check_pointer(i0, 54983))+32) = i1;
  return;
  ;
}

void OOC_X86_SSA__BlockDesc_MoveBehind(OOC_X86_SSA__Block b, OOC_X86_SSA__Instr before, OOC_X86_SSA__Instr after) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)before;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55251))+32);
  i2 = (OOC_INT64)b;
  _assert((i1==i2), 127, 55238);
  i1 = (OOC_INT64)after;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55280))+32);
  _assert((i3==i2), 127, 55268);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55307))+16);
  i3 = i3!=i1;
  if (!i3) goto l15;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55374))+24);
  i3 = i3==(OOC_INT64)0;
  if (i3) goto l5;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55461))+24);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55490))+16);
  *(OOC_INT64*)((_check_pointer(i3, 55471))+16) = i4;
  goto l6;
l5:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55425))+16);
  *(OOC_INT64*)((_check_pointer(i2, 55406))+88) = i3;
l6:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55528))+16);
  i3 = i3==(OOC_INT64)0;
  if (i3) goto l9;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55615))+16);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55644))+24);
  *(OOC_INT64*)((_check_pointer(i3, 55625))+24) = i4;
  goto l10;
l9:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55579))+24);
  *(OOC_INT64*)((_check_pointer(i2, 55560))+96) = i3;
l10:
  *(OOC_INT64*)((_check_pointer(i1, 55711))+24) = i0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55764))+16);
  *(OOC_INT64*)((_check_pointer(i1, 55744))+16) = i3;
  *(OOC_INT64*)((_check_pointer(i0, 55788))+16) = i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55824))+16);
  i0 = i0==(OOC_INT64)0;
  if (i0) goto l13;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55901))+16);
  *(OOC_INT64*)((_check_pointer(i0, 55911))+24) = i1;
  goto l15;
l13:
  *(OOC_INT64*)((_check_pointer(i2, 55856))+96) = i1;
l15:
  return;
  ;
}

void OOC_X86_SSA__BlockDesc_Remove(OOC_X86_SSA__Block b, OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56153))+32);
  i2 = (OOC_INT64)b;
  _assert((i2==i1), 127, 56137);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56175))+24);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56256))+24);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56285))+16);
  *(OOC_INT64*)((_check_pointer(i1, 56266))+16) = i3;
  goto l4;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56224))+16);
  *(OOC_INT64*)((_check_pointer(i2, 56205))+88) = i1;
l4:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56319))+16);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l7;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56400))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56429))+24);
  *(OOC_INT64*)((_check_pointer(i1, 56410))+24) = i2;
  goto l8;
l7:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56368))+24);
  *(OOC_INT64*)((_check_pointer(i2, 56349))+96) = i1;
l8:
  *(OOC_INT64*)((_check_pointer(i0, 56459))+16) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 56487))+24) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 56515))+32) = (OOC_INT64)0;
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_MoveToFront(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56628))+32);
  OOC_X86_SSA__BlockDesc_Remove((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  OOC_X86_SSA__BlockDesc_AddInFront((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return;
  ;
}

void OOC_X86_SSA__InstrDesc_Delete(OOC_X86_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Block b;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 57465))+32);
  b = (OOC_X86_SSA__Block)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 57555));
  i2 = i2!=0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 57586));
  OOC_X86_SSA__OpndDesc_DeleteOpnd((OOC_X86_SSA__Opnd)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 57555));
  i2 = i2!=0;
  if (i2) goto l3_loop;
l8:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 57701))+56);
  i2 = i2!=0;
  if (!i2) goto l16;
l11_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 57734))+56);
  OOC_X86_SSA__DepDesc_DeleteDep((OOC_X86_SSA__Dep)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 57701))+56);
  i2 = i2!=0;
  if (i2) goto l11_loop;
l16:
  OOC_X86_SSA__BlockDesc_Remove((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return;
  ;
}

void OOC_X86_SSA__BlockDesc_RemoveAll(OOC_X86_SSA__Block b) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)b;
  *(OOC_INT64*)((_check_pointer(i0, 57853))+88) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 57877))+96) = (OOC_INT64)0;
  return;
  ;
}

OOC_INT32 OOC_X86_SSA__BlockDesc_NestingDepth(OOC_X86_SSA__Block b) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT64)b;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 58052))+32);
  b = (OOC_X86_SSA__Block)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__BlockDesc_Dominates(OOC_X86_SSA__Block b, OOC_X86_SSA__Block x) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)x;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l11;
  i1 = (OOC_INT64)b;
  
l3_loop:
  i2 = i0==i1;
  if (!i2) goto l6;
  return 1u;
l6:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58253))+32);
  x = (OOC_X86_SSA__Block)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l3_loop;
l11:
  return 0u;
  ;
}

OOC_INT32 OOC_X86_SSA__BlockDesc_Count(OOC_X86_SSA__Block b, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_X86_SSA__Instr instr;

  i = 0;
  i0 = (OOC_INT64)b;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58434))+88);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0;
  goto l13;
l3:
  i1 = opcode;
  i2=0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 58488))+40);
  i3 = i3==i1;
  if (!i3) goto l8;
  i2 = i2+1;
  i = i2;
  
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58558))+16);
  instr = (OOC_X86_SSA__Instr)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l4_loop;
l12:
  i0=i2;
l13:
  return i0;
  ;
}

OOC_X86_SSA__IterBlockInstructions OOC_X86_SSA__BlockDesc_Instructions(OOC_X86_SSA__Block b) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__IterBlockInstructions iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterBlockInstructions.baseTypes[0]);
  iter = (OOC_X86_SSA__IterBlockInstructions)i0;
  i1 = (OOC_INT64)b;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 58748))+88);
  *(OOC_INT64*)(_check_pointer(i0, 58738)) = i1;
  return (OOC_X86_SSA__IterBlockInstructions)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterBlockInstructionsDesc_Next(OOC_X86_SSA__IterBlockInstructions iter, OOC_X86_SSA__Instr *instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)iter;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 58897));
  *instr = (OOC_X86_SSA__Instr)i1;
  i2 = i1==0;
  if (i2) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 58983))+16);
  *(OOC_INT64*)(_check_pointer(i0, 58969)) = i1;
  return 1u;
  goto l4;
l3:
  return 0u;
l4:
  _failed_function(58838); return 0;
  ;
}

OOC_X86_SSA__IterBlockAllInstructions OOC_X86_SSA__BlockDesc_AllInstructions(OOC_X86_SSA__Block b, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1;
  OOC_X86_SSA__IterBlockAllInstructions iter;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__IterBlockAllInstructions.baseTypes[0]);
  iter = (OOC_X86_SSA__IterBlockAllInstructions)i0;
  i1 = (OOC_INT64)b;
  *(OOC_INT64*)(_check_pointer(i0, 59190)) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 59210))+8) = 0;
  i1 = opcode;
  *(OOC_INT8*)((_check_pointer(i0, 59233))+16) = i1;
  return (OOC_X86_SSA__IterBlockAllInstructions)i0;
  ;
}

OOC_CHAR8 OOC_X86_SSA__IterBlockAllInstructionsDesc_Next(OOC_X86_SSA__IterBlockAllInstructions iter, OOC_X86_SSA__Instr *instr) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__Instr i;

  i0 = (OOC_INT64)iter;
l1_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 59424));
  i = (OOC_X86_SSA__Instr)i1;
  i2 = i1==0;
  if (i2) goto l8;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 59687)))), &_td_OOC_X86_SSA__BlockDesc);
  if (i2) goto l6;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 59816))+16);
  *(OOC_INT64*)(_check_pointer(i0, 59806)) = i2;
  goto l13;
l6:
  *(OOC_INT64*)((_check_pointer(i0, 59716))+8) = (_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 59728)))), &_td_OOC_X86_SSA__BlockDesc, 59728));
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 59761)))), &_td_OOC_X86_SSA__BlockDesc, 59761)), 59767))+88);
  *(OOC_INT64*)(_check_pointer(i0, 59750)) = i2;
  goto l13;
l8:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59471))+8);
  i2 = i2==0;
  if (i2) goto l11;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59554))+8);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 59560))+16);
  *(OOC_INT64*)(_check_pointer(i0, 59541)) = i2;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59600))+8);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 59606))+32);
  *(OOC_INT64*)((_check_pointer(i0, 59586))+8) = i2;
  i2 = OOC_X86_SSA__IterBlockAllInstructionsDesc_Next((OOC_X86_SSA__IterBlockAllInstructions)i0, (void*)(OOC_INT64)instr);
  return i2;
  goto l13;
l11:
  return 0u;
l13:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 59867))+16);
  i2 = i2<0;
  if (i2) goto l16;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 59885))+40);
  i3 = *(OOC_INT8*)((_check_pointer(i0, 59899))+16);
  i2 = i2==i3;
  
  goto l18;
l16:
  i2=1u;
l18:
  if (!i2) goto l1_loop;
l21:
  *instr = (OOC_X86_SSA__Instr)i1;
  return 1u;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__BlockDesc_AddInstr0(OOC_X86_SSA__Block b, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  i1 = opcode;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__BlockDesc_AddInstr1(OOC_X86_SSA__Block b, OOC_INT8 opcode, OOC_X86_SSA__Result arg1) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  i1 = opcode;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, i1);
  i1 = (OOC_INT64)arg1;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__BlockDesc_AddInstr2(OOC_X86_SSA__Block b, OOC_INT8 opcode, OOC_X86_SSA__Result arg1, OOC_X86_SSA__Result arg2) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  i1 = opcode;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, i1);
  i1 = (OOC_INT64)arg1;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)arg2;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__Instr OOC_X86_SSA__BlockDesc_AddInstr3(OOC_X86_SSA__Block b, OOC_INT8 opcode, OOC_X86_SSA__Result arg1, OOC_X86_SSA__Result arg2, OOC_X86_SSA__Result arg3) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  i1 = opcode;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, i1);
  i1 = (OOC_INT64)arg1;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)arg2;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)arg3;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__Instr)i0;
  ;
}

OOC_X86_SSA__Block OOC_X86_SSA__BlockDesc_AddBlock0(OOC_X86_SSA__Block b, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Block.baseTypes[0]);
  i1 = opcode;
  OOC_X86_SSA__BlockDesc_INIT((OOC_X86_SSA__Block)i0, i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__Block)i0;
  ;
}

OOC_X86_SSA__Block OOC_X86_SSA__BlockDesc_AddBlock1(OOC_X86_SSA__Block b, OOC_INT8 opcode, OOC_X86_SSA__Result arg1) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Block.baseTypes[0]);
  i1 = opcode;
  OOC_X86_SSA__BlockDesc_INIT((OOC_X86_SSA__Block)i0, i1);
  i1 = (OOC_INT64)arg1;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__Block)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstType(OOC_X86_SSA__Block b, OOC_X86_SSA__Const selector, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Designator designator;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 0);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], 1);
  designator = (OOC_X86_SSA__Designator)i1;
  i2 = _check_pointer(i1, 61541);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT64)selector;
  *(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 61541))*8) = i4;
  OOC_X86_SSA__InstrDesc_SetDesignator((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Designator)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  i1 = type;
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, i1);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConst(OOC_X86_SSA__Block b, OOC_X86_SSA__Const selector, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)type;
  i0 = OOC_X86_SSA__MapType((OOC_SymbolTable__Type)i0);
  i1 = (OOC_INT64)b;
  i2 = (OOC_INT64)selector;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConstType((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Const)i2, i0);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstBool(OOC_X86_SSA__Block b, OOC_CHAR8 value) {
  register OOC_INT64 i0,i1,i2;

  i0 = value;
  if (i0) goto l3;
  i0=0;
  goto l4;
l3:
  i0=1;
l4:
  i1 = (OOC_INT64)OOC_SymbolTable_Predef__GetType(0);
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Const.baseTypes[0]);
  i0 = (OOC_INT64)Object_BigInt__NewInt(i0);
  OOC_X86_SSA__ConstDesc_INIT((OOC_X86_SSA__Const)i2, (Object__Object)i0, (-1));
  i0 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConst((OOC_X86_SSA__Block)i0, (OOC_X86_SSA__Const)i2, (OOC_SymbolTable__Type)i1);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstInt(OOC_X86_SSA__Block b, Object_BigInt__BigInt value, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Const.baseTypes[0]);
  i1 = (OOC_INT64)value;
  OOC_X86_SSA__ConstDesc_INIT((OOC_X86_SSA__Const)i0, (Object__Object)i1, (-1));
  i1 = (OOC_INT64)b;
  i2 = (OOC_INT64)type;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConst((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Const)i0, (OOC_SymbolTable__Type)i2);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstReal(OOC_X86_SSA__Block b, Object_Boxed__LongReal value, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Const.baseTypes[0]);
  i1 = (OOC_INT64)value;
  OOC_X86_SSA__ConstDesc_INIT((OOC_X86_SSA__Const)i0, (Object__Object)i1, (-1));
  i1 = (OOC_INT64)b;
  i2 = (OOC_INT64)type;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConst((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Const)i0, (OOC_SymbolTable__Type)i2);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstZero(OOC_X86_SSA__Block b, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)type;
  i1 = OOC_SymbolTable_TypeRules__IsRealType((OOC_SymbolTable__Type)i0);
  if (i1) goto l3;
  i1 = (OOC_INT64)Object_BigInt__zero;
  i2 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConstInt((OOC_X86_SSA__Block)i2, (Object_BigInt__BigInt)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_X86_SSA__Result)i0;
  goto l4;
l3:
  i1 = (OOC_INT64)Object_Boxed__zeroLongReal;
  i2 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConstReal((OOC_X86_SSA__Block)i2, (Object_Boxed__LongReal)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_X86_SSA__Result)i0;
l4:
  _failed_function(62546); return 0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstDim(OOC_X86_SSA__Block b, OOC_INT32 dim) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)OOC_SymbolTable_Predef__GetType(6);
  i1 = dim;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Const.baseTypes[0]);
  i1 = (OOC_INT64)Object_BigInt__NewInt(i1);
  OOC_X86_SSA__ConstDesc_INIT((OOC_X86_SSA__Const)i2, (Object__Object)i1, (-1));
  i1 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConst((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Const)i2, (OOC_SymbolTable__Type)i0);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddConstLength(OOC_X86_SSA__Block b, OOC_INT32 length) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)OOC_SymbolTable_Predef__GetType(7);
  i1 = length;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Const.baseTypes[0]);
  i1 = (OOC_INT64)Object_BigInt__NewInt(i1);
  OOC_X86_SSA__ConstDesc_INIT((OOC_X86_SSA__Const)i2, (Object__Object)i1, (-1));
  i1 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConst((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Const)i2, (OOC_SymbolTable__Type)i0);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddAdr(OOC_X86_SSA__Block b, OOC_X86_SSA__Global selector) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Designator designator;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 0);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], 1);
  designator = (OOC_X86_SSA__Designator)i1;
  i2 = _check_pointer(i1, 63361);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT64)selector;
  *(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 63361))*8) = i4;
  OOC_X86_SSA__InstrDesc_SetDesignator((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Designator)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddAdrRT(OOC_X86_SSA__Block b, Object__String name) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Designator designator;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 0);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], 1);
  designator = (OOC_X86_SSA__Designator)i1;
  i2 = _check_pointer(i1, 63669);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT64)name;
  i5 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__ProcName.baseTypes[0]);
  OOC_X86_SSA__ProcNameDesc_INIT((OOC_X86_SSA__ProcName)i5, (Object__String)i4);
  *(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 63669))*8) = i5;
  OOC_X86_SSA__InstrDesc_SetDesignator((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Designator)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddAdrTypeDescr(OOC_X86_SSA__Block b, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Designator designator;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 0);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], 1);
  designator = (OOC_X86_SSA__Designator)i1;
  i2 = _check_pointer(i1, 63999);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT64)type;
  i5 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__TypeDescr.baseTypes[0]);
  OOC_X86_SSA__TypeDescrDesc_INIT((OOC_X86_SSA__TypeDescr)i5, (OOC_SymbolTable__Type)i4);
  *(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 63999))*8) = i5;
  OOC_X86_SSA__InstrDesc_SetDesignator((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Designator)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddAdrModuleDescr(OOC_X86_SSA__Block b) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Designator designator;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 0);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], 1);
  designator = (OOC_X86_SSA__Designator)i1;
  i2 = _check_pointer(i1, 64325);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__ModuleDescr.baseTypes[0]);
  OOC_X86_SSA__ModuleDescrDesc_INIT((OOC_X86_SSA__ModuleDescr)i4);
  *(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 64325))*8) = i4;
  OOC_X86_SSA__InstrDesc_SetDesignator((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Designator)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddFramePointerOffset(OOC_X86_SSA__Block b, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Designator designator;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Instr.baseTypes[0]);
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 0);
  instr = (OOC_X86_SSA__Instr)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Designator.baseTypes[0], 1);
  designator = (OOC_X86_SSA__Designator)i1;
  i2 = _check_pointer(i1, 64673);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = (OOC_INT64)varDecl;
  i5 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Var.baseTypes[0]);
  OOC_X86_SSA__VarDesc_INIT((OOC_X86_SSA__Var)i5, (OOC_SymbolTable__VarDecl)i4);
  *(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 64673))*8) = i5;
  OOC_X86_SSA__InstrDesc_SetDesignator((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Designator)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  return (OOC_X86_SSA__Result)i0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__BlockDesc_AddLoadRegister(OOC_X86_SSA__Block b, OOC_X86_SSA__Result value, OOC_INT8 reg) {
  register OOC_INT64 i0,i1,i2;
  OOC_X86_SSA__Instr instr;

  i0 = (OOC_INT64)value;
  i1 = (OOC_INT64)b;
  i1 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i1, 38, (OOC_X86_SSA__Result)i0);
  instr = (OOC_X86_SSA__Instr)i1;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 65012))+24);
  i2 = reg;
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResultReg((OOC_X86_SSA__Instr)i1, i0, i2);
  return (OOC_X86_SSA__Result)i0;
  ;
}

void OOC_X86_SSA__OpndDesc_InsertCopy(OOC_X86_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__Instr opndInstr;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Block b;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 65165))+16);
  opndInstr = (OOC_X86_SSA__Instr)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65195))+32);
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 65222));
  i2 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i2, 36, (OOC_X86_SSA__Result)i3);
  instr = (OOC_X86_SSA__Instr)i2;
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 65269));
  i3 = *(OOC_INT8*)((_check_pointer(i3, 65273))+24);
  i3 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i2, i3);
  OOC_X86_SSA__OpndDesc_ReplaceArg((OOC_X86_SSA__Opnd)i0, (OOC_X86_SSA__Result)i3);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 65369))+32);
  b = (OOC_X86_SSA__Block)i0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 65401))+24);
  *(OOC_INT64*)((_check_pointer(i0, 65382))+96) = i3;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 65422))+24);
  *(OOC_INT64*)((_check_pointer(i3, 65432))+16) = 0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65488))+24);
  *(OOC_INT64*)((_check_pointer(i2, 65465))+24) = i3;
  *(OOC_INT64*)((_check_pointer(i2, 65509))+16) = i1;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 65547))+24);
  i3 = i3==0;
  if (i3) goto l3;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 65618))+24);
  *(OOC_INT64*)((_check_pointer(i0, 65628))+16) = i2;
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i0, 65577))+88) = i2;
l4:
  *(OOC_INT64*)((_check_pointer(i1, 65671))+24) = i2;
  return;
  ;
}

void OOC_X86_SSA__BranchInstrDesc_INIT(OOC_X86_SSA__BranchInstr instr, OOC_CHAR8 caseBranch) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  OOC_X86_SSA__BlockDesc_INIT((OOC_X86_SSA__Block)i0, 46);
  *(OOC_INT64*)((_check_pointer(i0, 65814))+104) = (OOC_INT64)0;
  i1 = caseBranch;
  *(OOC_UINT8*)((_check_pointer(i0, 65838))+112) = i1;
  return;
  ;
}

void OOC_X86_SSA__BranchInstrDesc_SetPaths(OOC_X86_SSA__BranchInstr instr, Object__ObjectArrayPtr paths) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)paths;
  *(OOC_INT64*)((_check_pointer(i0, 65955))+104) = i1;
  return;
  ;
}

void OOC_X86_SSA__BranchInstrDesc_SetPaths2(OOC_X86_SSA__BranchInstr instr, OOC_X86_SSA__Block pathTrue, OOC_X86_SSA__Block pathFalse) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__ObjectArrayPtr paths;

  i0 = (OOC_INT64)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], 2);
  paths = (Object__ObjectArrayPtr)i0;
  i1 = _check_pointer(i0, 66123);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT64)pathTrue;
  *(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 66123))*8) = i3;
  i1 = _check_pointer(i0, 66149);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT64)pathFalse;
  *(OOC_INT64*)(i1+(_check_index(1, i2, OOC_UINT8, 66149))*8) = i3;
  i1 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i1, 66176))+104) = i0;
  return;
  ;
}

OOC_X86_SSA__BranchInstr OOC_X86_SSA__BlockDesc_AddBranch(OOC_X86_SSA__Block b, OOC_X86_SSA__Result select, OOC_CHAR8 caseBranch) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__BranchInstr.baseTypes[0]);
  i1 = caseBranch;
  OOC_X86_SSA__BranchInstrDesc_INIT((OOC_X86_SSA__BranchInstr)i0, i1);
  i1 = (OOC_INT64)select;
  OOC_X86_SSA__InstrDesc_AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Result)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__BranchInstr)i0;
  ;
}

void OOC_X86_SSA__MergeInstrDesc_INIT(OOC_X86_SSA__MergeInstr instr, OOC_INT8 opcode, Object__ObjectArrayPtr jumps) {
  register OOC_INT64 i0,i1;

  i0 = opcode;
  i1 = (OOC_INT64)instr;
  OOC_X86_SSA__BlockDesc_INIT((OOC_X86_SSA__Block)i1, i0);
  i0 = (OOC_INT64)jumps;
  *(OOC_INT64*)((_check_pointer(i1, 66670))+104) = i0;
  return;
  ;
}

void OOC_X86_SSA__MergeInstrDesc_AddJump(OOC_X86_SSA__MergeInstr instr, OOC_X86_SSA__Instr jump) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  Object__ObjectArrayPtr _new;
  OOC_INT32 i;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 66816))+104);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l11;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 66887))+104);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 66893)), 0);
  i1 = (OOC_INT64)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], (i1+1));
  _new = (Object__ObjectArrayPtr)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 66929))+104);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 66935)), 0);
  i3 = 0<i2;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = _check_pointer(i1, 66954);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 66966))+104);
  i6 = _check_pointer(i6, 66972);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 66972))*8);
  *(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 66954))*8) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
  goto l12;
l11:
  i1 = (OOC_INT64)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], 1);
  _new = (Object__ObjectArrayPtr)i1;
  
l12:
  i2 = _check_pointer(i1, 67004);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 67012)), 0);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i5 = (OOC_INT64)jump;
  *(OOC_INT64*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 67004))*8) = i5;
  *(OOC_INT64*)((_check_pointer(i0, 67036))+104) = i1;
  OOC_X86_SSA__InstrDesc_AddDep((OOC_X86_SSA__Instr)i0, 0, (OOC_X86_SSA__Instr)i5);
  return;
  ;
}

OOC_X86_SSA__MergeInstr OOC_X86_SSA__BlockDesc_AddMerge(OOC_X86_SSA__Block b, OOC_INT8 opcode, Object__ObjectArrayPtr jumps) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__MergeInstr instr;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__MergeInstr.baseTypes[0]);
  i1 = (OOC_INT64)jumps;
  i2 = opcode;
  OOC_X86_SSA__MergeInstrDesc_INIT((OOC_X86_SSA__MergeInstr)i0, i2, (Object__ObjectArrayPtr)i1);
  instr = (OOC_X86_SSA__MergeInstr)i0;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l11;
  i1 = _check_pointer(i1, 67329);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i2 = i1+i2*8;
  i3 = i2!=i1;
  if (!i3) goto l11;
l5_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)i1;
  OOC_X86_SSA__InstrDesc_AddDep((OOC_X86_SSA__Instr)i0, 0, (OOC_X86_SSA__Instr)i3);
  i1 = i1+8;
  i3 = i2!=i1;
  if (i3) goto l5_loop;
l11:
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__MergeInstr)i0;
  ;
}

OOC_X86_SSA__MergeInstr OOC_X86_SSA__BlockDesc_AddMerge0(OOC_X86_SSA__Block b, OOC_INT8 opcode, OOC_X86_SSA__Result arg1) {
  register OOC_INT64 i0,i1,i2;

  i0 = opcode;
  i1 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddMerge((OOC_X86_SSA__Block)i1, i0, (Object__ObjectArrayPtr)(OOC_INT64)0);
  i1 = (OOC_INT64)arg1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l4;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
l4:
  return (OOC_X86_SSA__MergeInstr)i0;
  ;
}

OOC_X86_SSA__MergeInstr OOC_X86_SSA__BlockDesc_AddMerge2(OOC_X86_SSA__Block b, OOC_INT8 opcode, OOC_X86_SSA__Instr jump1, OOC_X86_SSA__Instr jump2) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__ObjectArrayPtr jumps;

  i0 = (OOC_INT64)RT0__NewObject(_td_Object__ObjectArrayPtr.baseTypes[0], 2);
  jumps = (Object__ObjectArrayPtr)i0;
  i1 = _check_pointer(i0, 67884);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT64)jump1;
  *(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 67884))*8) = i3;
  i1 = _check_pointer(i0, 67907);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT64)jump2;
  *(OOC_INT64*)(i1+(_check_index(1, i2, OOC_UINT8, 67907))*8) = i3;
  i1 = (OOC_INT64)b;
  i2 = opcode;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddMerge((OOC_X86_SSA__Block)i1, i2, (Object__ObjectArrayPtr)i0);
  return (OOC_X86_SSA__MergeInstr)i0;
  ;
}

void OOC_X86_SSA__GateInstrDesc_INIT(OOC_X86_SSA__GateInstr instr, OOC_INT8 opcode, OOC_X86_SSA__Block merge) {
  register OOC_INT64 i0,i1;

  i0 = opcode;
  i1 = (OOC_INT64)instr;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i1, i0);
  i0 = (OOC_INT64)merge;
  *(OOC_INT64*)((_check_pointer(i1, 68087))+88) = i0;
  return;
  ;
}

OOC_X86_SSA__GateInstr OOC_X86_SSA__BlockDesc_AddGate(OOC_X86_SSA__Block b, OOC_INT8 opcode) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__GateInstr.baseTypes[0]);
  i1 = (OOC_INT64)b;
  i2 = opcode;
  OOC_X86_SSA__GateInstrDesc_INIT((OOC_X86_SSA__GateInstr)i0, i2, (OOC_X86_SSA__Block)i1);
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__GateInstr)i0;
  ;
}

void OOC_X86_SSA__LoopStartInstrDesc_INIT(OOC_X86_SSA__LoopStartInstr instr) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)instr;
  OOC_X86_SSA__BlockDesc_INIT((OOC_X86_SSA__Block)i0, 52);
  *(OOC_INT64*)((_check_pointer(i0, 68393))+104) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 68420))+112) = (OOC_INT64)0;
  return;
  ;
}

void OOC_X86_SSA__LoopStartInstrDesc_SetBackedge(OOC_X86_SSA__LoopStartInstr instr, OOC_X86_SSA__Instr backedge) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)backedge;
  *(OOC_INT64*)((_check_pointer(i0, 68528))+104) = i1;
  return;
  ;
}

void OOC_X86_SSA__LoopStartInstrDesc_SetEnd(OOC_X86_SSA__LoopStartInstr instr, OOC_X86_SSA__MergeInstr end) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)end;
  *(OOC_INT64*)((_check_pointer(i0, 68648))+112) = i1;
  return;
  ;
}

OOC_X86_SSA__LoopStartInstr OOC_X86_SSA__BlockDesc_AddLoopStart(OOC_X86_SSA__Block b) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__LoopStartInstr.baseTypes[0]);
  OOC_X86_SSA__LoopStartInstrDesc_INIT((OOC_X86_SSA__LoopStartInstr)i0);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__LoopStartInstr)i0;
  ;
}

void OOC_X86_SSA__LoopBackedgeInstrDesc_INIT(OOC_X86_SSA__LoopBackedgeInstr instr, OOC_X86_SSA__LoopStartInstr start) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 55);
  i1 = (OOC_INT64)start;
  *(OOC_INT64*)((_check_pointer(i0, 68979))+88) = i1;
  return;
  ;
}

OOC_X86_SSA__LoopBackedgeInstr OOC_X86_SSA__BlockDesc_AddLoopBackedge(OOC_X86_SSA__Block b, OOC_X86_SSA__LoopStartInstr start) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__LoopBackedgeInstr.baseTypes[0]);
  i1 = (OOC_INT64)start;
  OOC_X86_SSA__LoopBackedgeInstrDesc_INIT((OOC_X86_SSA__LoopBackedgeInstr)i0, (OOC_X86_SSA__LoopStartInstr)i1);
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__LoopBackedgeInstr)i0;
  ;
}

void OOC_X86_SSA__ExitInstrDesc_INIT(OOC_X86_SSA__ExitInstr instr, OOC_X86_SSA__Result sp, OOC_X86_SSA__Result fp, Object__ObjectArrayPtr returns) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  OOC_X86_SSA__InstrDesc_INIT((OOC_X86_SSA__Instr)i0, 27);
  i1 = (OOC_INT64)returns;
  *(OOC_INT64*)((_check_pointer(i0, 69352))+88) = i1;
  i1 = (OOC_INT64)sp;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  i1 = (OOC_INT64)fp;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__Opnd.baseTypes[0]);
  OOC_X86_SSA__OpndDesc_INIT((OOC_X86_SSA__Opnd)i2, (OOC_X86_SSA__Result)i1);
  OOC_X86_SSA__AddOpnd((OOC_X86_SSA__Instr)i0, (OOC_X86_SSA__Opnd)i2);
  return;
  ;
}

OOC_X86_SSA__ExitInstr OOC_X86_SSA__BlockDesc_AddExit(OOC_X86_SSA__Block b, OOC_X86_SSA__Result sp, OOC_X86_SSA__Result fp, Object__ObjectArrayPtr returns) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__ExitInstr instr;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_X86_SSA__ExitInstr.baseTypes[0]);
  i1 = (OOC_INT64)returns;
  i2 = (OOC_INT64)fp;
  i3 = (OOC_INT64)sp;
  OOC_X86_SSA__ExitInstrDesc_INIT((OOC_X86_SSA__ExitInstr)i0, (OOC_X86_SSA__Result)i3, (OOC_X86_SSA__Result)i2, (Object__ObjectArrayPtr)i1);
  instr = (OOC_X86_SSA__ExitInstr)i0;
  i1 = _check_pointer(i1, 69654);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i2 = i1+i2*8;
  i3 = i2!=i1;
  if (!i3) goto l8;
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)i1;
  OOC_X86_SSA__InstrDesc_AddDep((OOC_X86_SSA__Instr)i0, 0, (OOC_X86_SSA__Instr)i3);
  i1 = i1+8;
  i3 = i2!=i1;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_Add((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Instr)i0);
  return (OOC_X86_SSA__ExitInstr)i0;
  ;
}

void OOC_X86_SSA__BlockDesc_SetMarkers(OOC_X86_SSA__Block b, OOC_X86_SSA__Node newInfo, OOC_INT32 newMarker) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Instr instr;
  OOC_X86_SSA__Result res;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)newInfo;
  *(OOC_INT64*)((_check_pointer(i0, 70026))+72) = i1;
  i2 = newMarker;
  *(OOC_INT32*)((_check_pointer(i0, 70049))+80) = i2;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 70090))+88);
  instr = (OOC_X86_SSA__Instr)i0;
  i3 = i0!=(OOC_INT64)0;
  if (!i3) goto l20;
l3_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 70145)))), &_td_OOC_X86_SSA__BlockDesc);
  if (i3) goto l6;
  *(OOC_INT64*)((_check_pointer(i0, 70226))+72) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 70257))+80) = i2;
  goto l7;
l6:
  OOC_X86_SSA__BlockDesc_SetMarkers((OOC_X86_SSA__Block)i0, (OOC_X86_SSA__Node)i1, i2);
l7:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 70315))+8);
  res = (OOC_X86_SSA__Result)i3;
  i4 = i3!=(OOC_INT64)0;
  if (!i4) goto l15;
l10_loop:
  *(OOC_INT64*)((_check_pointer(i3, 70366))+32) = i1;
  *(OOC_INT32*)((_check_pointer(i3, 70395))+40) = i2;
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 70435));
  res = (OOC_X86_SSA__Result)i3;
  i4 = i3!=(OOC_INT64)0;
  if (i4) goto l10_loop;
l15:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 70479))+16);
  instr = (OOC_X86_SSA__Instr)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l3_loop;
l20:
  return;
  ;
}

void OOC_X86_SSA__FunctionBlockDesc_INIT(OOC_X86_SSA__FunctionBlock b, OOC_SymbolTable__ProcDecl procDecl, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  OOC_X86_SSA__BlockDesc_INIT((OOC_X86_SSA__Block)i0, 31);
  i1 = (OOC_INT64)procDecl;
  *(OOC_INT64*)((_check_pointer(i0, 70682))+104) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 70710))+112) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 70730))+120) = (OOC_INT64)0;
  i1 = (OOC_INT64)ADT_Dictionary_IntValue__New();
  *(OOC_INT64*)((_check_pointer(i0, 70749))+128) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 70783))+136) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 70809))+140) = (-1);
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 70839))+144) = i1;
  return;
  ;
}

void OOC_X86_SSA__FunctionBlockDesc_SetEnter(OOC_X86_SSA__FunctionBlock b, OOC_X86_SSA__Instr enter) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)enter;
  *(OOC_INT64*)((_check_pointer(i0, 70964))+112) = i1;
  return;
  ;
}

void OOC_X86_SSA__FunctionBlockDesc_SetExit(OOC_X86_SSA__FunctionBlock b, OOC_X86_SSA__ExitInstr exit) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)exit;
  *(OOC_INT64*)((_check_pointer(i0, 71067))+120) = i1;
  return;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__FunctionBlockDesc_FixType(OOC_X86_SSA__FunctionBlock b, OOC_X86_SSA__Result arg, OOC_INT8 type) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)arg;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 71380))+24);
  i2 = type;
  i1 = i1!=i2;
  if (i1) goto l3;
  return (OOC_X86_SSA__Result)i0;
  goto l12;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 71412))+8);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 71418))+40);
  i1 = i1==0;
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 71451))+24);
  i1 = (i1<10)==(i2<10);
  
l8:
  if (i1) goto l10;
  i1 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i1, 22, (OOC_X86_SSA__Result)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, i2);
  return (OOC_X86_SSA__Result)i0;
  goto l12;
l10:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 71524))+8);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 71530))+48);
  i0 = _check_pointer(i0, 71541);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(0, i1, OOC_UINT8, 71541))*8);
  i1 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConstType((OOC_X86_SSA__Block)i1, (OOC_X86_SSA__Const)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71545)))), &_td_OOC_X86_SSA__ConstDesc, 71545)), i2);
  return (OOC_X86_SSA__Result)i0;
l12:
  _failed_function(71127); return 0;
  ;
}

void OOC_X86_SSA__FunctionBlockDesc_AllocateLocalVar(OOC_X86_SSA__FunctionBlock b, OOC_SymbolTable__VarDecl varDecl) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  OOC_INT32 align;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 71833))+128);
  i2 = (OOC_INT64)varDecl;
  i1 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i2);
  i1 = !i1;
  if (!i1) goto l7;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 71877))+136);
  i = i1;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 71913))+88);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 71918))+64);
  i1 = i1-i3;
  i = i1;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 71948))+88);
  i3 = *(OOC_INT16*)((_check_pointer(i3, 71953))+68);
  align = i3;
  i4 = _mod(i1,i3);
  i5 = i4!=0;
  if (!i5) goto l6;
  i1 = i1-(i3-i4);
  i = i1;
  
l6:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 72046))+128);
  ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i3, (Object__Object)i2, i1);
  *(OOC_INT32*)((_check_pointer(i0, 72081))+136) = i1;
l7:
  return;
  ;
}

void OOC_X86_SSA__FunctionBlockDesc_SetMaxSizeCallStack(OOC_X86_SSA__FunctionBlock b, OOC_INT32 size) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 72215))+140) = i1;
  return;
  ;
}

OOC_INT32 OOC_X86_SSA__FunctionBlockDesc_Offset(OOC_X86_SSA__FunctionBlock b, OOC_SymbolTable__VarDecl varDecl, OOC_INT32 dim) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 offset;
  OOC_SymbolTable__VarDecl p;
  OOC_SymbolTable__Type type;
  auto OOC_INT32 OOC_X86_SSA__FunctionBlockDesc_Offset_ArgumentSize(OOC_SymbolTable__Type type);
    
    OOC_INT32 OOC_X86_SSA__FunctionBlockDesc_Offset_ArgumentSize(OOC_SymbolTable__Type type) {
      register OOC_INT64 i0;

      i0 = (OOC_INT64)type;
      i0 = OOC_SymbolTable_TypeRules__IsPredefType((OOC_SymbolTable__Type)i0, 9);
      if (i0) goto l3;
      return 4;
      goto l4;
l3:
      return 8;
l4:
      _failed_function(73048); return 0;
      ;
    }


  i0 = (OOC_INT64)varDecl;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l38;
  i1 = (OOC_INT64)b;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 73466))+128);
  i2 = ADT_Dictionary_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i0);
  if (i2) goto l36;
  offset = 8;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 73638))+104);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 73647))+112);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 73658))+96);
  i1 = _check_pointer(i1, 73665);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i2 = i1+i2*8;
  i3 = i2!=i1;
  if (!i3) goto l35;
  i3 = dim;
  i4 = i3>=0;
  i5=8;
l7_loop:
  i6 = (OOC_INT64)*(OOC_INT64*)i1;
  p = (OOC_SymbolTable__VarDecl)i6;
  i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 73687))+88);
  type = (OOC_SymbolTable__Type)i7;
  i8 = i6==i0;
  if (i8) goto l26;
  i8 = OOC_X86_SSA__FunctionBlockDesc_Offset_ArgumentSize((OOC_SymbolTable__Type)i7);
  i5 = i5+i8;
  offset = i5;
  i8 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i7, 73946)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i8) goto l16;
  i6 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i7, 74103)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i6) goto l30;
  i6 = OOC_SymbolTable__ArrayDesc_GetOpenDimensions((OOC_SymbolTable__Array)i7);
  i5 = i5+i6*4;
  offset = i5;
  
  goto l30;
l16:
  i6 = *(OOC_UINT8*)((_check_pointer(i6, 73978))+107);
  if (i6) goto l19;
  i6=0u;
  goto l21;
l19:
  i6 = *(OOC_UINT8*)((_check_pointer(i7, 73996))+106);
  
l21:
  if (!i6) goto l30;
  i5 = i5+4;
  offset = i5;
  
  goto l30;
l26:
  if (i4) goto l28;
  return i5;
  goto l30;
l28:
  i6 = OOC_X86_SSA__FunctionBlockDesc_Offset_ArgumentSize((OOC_SymbolTable__Type)i7);
  return ((i5+i6)+i3*4);
l30:
  i1 = i1+8;
  i6 = i2!=i1;
  if (i6) goto l7_loop;
l35:
  _assert(0u, 127, 74314);
  goto l39;
l36:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 73512))+128);
  i0 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0);
  return i0;
  goto l39;
l38:
  i0 = (OOC_INT64)b;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 73290))+136);
  i1 = _abs(i1);
  offset = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 73321))+140);
  _assert((i2>=0), 127, 73313);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 73365))+140);
  return (((((i1+i0)+4)-1)>>2)*4);
l39:
  _failed_function(72299); return 0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__FunctionBlockDesc_AddGetLengthInstr(OOC_X86_SSA__FunctionBlock b, OOC_X86_SSA__Instr getInstr, OOC_INT32 dim, OOC_SymbolTable__Array dimType, OOC_X86_SSA__Result fp) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_X86_SSA__Result dimension;
  OOC_SymbolTable__VarDecl paramRef;
  OOC_X86_SSA__Result offset;
  auto OOC_SymbolTable__VarDecl OOC_X86_SSA__FunctionBlockDesc_AddGetLengthInstr_VarParamArray(OOC_X86_SSA__Instr get);
    
    OOC_SymbolTable__VarDecl OOC_X86_SSA__FunctionBlockDesc_AddGetLengthInstr_VarParamArray(OOC_X86_SSA__Instr get) {
      register OOC_INT64 i0,i1,i2;

      i0 = (OOC_INT64)get;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 75106))+48);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 75117)), 0);
      i1 = i1==1;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 75140))+48);
      i1 = _check_pointer(i1, 75151);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 75151))*8);
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 75155)))), &_td_OOC_X86_SSA__VarDesc);
      
l5:
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 75177))+48);
      i1 = _check_pointer(i1, 75188);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 75188))*8);
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 75192)))), &_td_OOC_X86_SSA__VarDesc, 75192)), 75196));
      i1 = *(OOC_UINT8*)((_check_pointer(i1, 75201))+104);
      
l9:
      if (i1) goto l11;
      return (OOC_SymbolTable__VarDecl)(OOC_INT64)0;
      goto l12;
l11:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 75237))+48);
      i0 = _check_pointer(i0, 75248);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(0, i1, OOC_UINT8, 75248))*8);
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 75252)))), &_td_OOC_X86_SSA__VarDesc, 75252)), 75256));
      return (OOC_SymbolTable__VarDecl)i0;
l12:
      _failed_function(74908); return 0;
      ;
    }


  i0 = (OOC_INT64)getInstr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 75356))+40);
  _assert((i1==34), 127, 75341);
  i1 = (OOC_INT64)dimType;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 75386))+72);
  if (i2) goto l3;
  i0 = (OOC_INT64)OOC_SymbolTable_Predef__GetType(6);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 75910))+96);
  i1 = (OOC_INT64)Object_BigInt__NewInt(i1);
  i2 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConstInt((OOC_X86_SSA__Block)i2, (Object_BigInt__BigInt)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_X86_SSA__Result)i0;
  goto l8;
l3:
  i1 = dim;
  i2 = (OOC_INT64)b;
  i3 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddConstDim((OOC_X86_SSA__Block)i2, i1);
  dimension = (OOC_X86_SSA__Result)i3;
  i0 = (OOC_INT64)OOC_X86_SSA__FunctionBlockDesc_AddGetLengthInstr_VarParamArray((OOC_X86_SSA__Instr)i0);
  paramRef = (OOC_SymbolTable__VarDecl)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l6;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr0((OOC_X86_SSA__Block)i2, 42);
  
  goto l7;
l6:
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddFramePointerOffset((OOC_X86_SSA__Block)i2, (OOC_SymbolTable__VarDecl)i0);
  offset = (OOC_X86_SSA__Result)i0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 75584))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 75590))+48);
  i3 = _check_pointer(i3, 75601);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(0, i4, OOC_UINT8, 75601))*8);
  *(OOC_INT32*)((_check_pointer((_type_guard(i3, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 75605)))), &_td_OOC_X86_SSA__VarDesc, 75605)), 75609))+8) = i1;
  i1 = (OOC_INT64)fp;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr2((OOC_X86_SSA__Block)i2, 1, (OOC_X86_SSA__Result)i1, (OOC_X86_SSA__Result)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i2, 34, (OOC_X86_SSA__Result)i0);
  
l7:
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 3);
  return (OOC_X86_SSA__Result)i0;
l8:
  _failed_function(74382); return 0;
  ;
}

OOC_X86_SSA__Result OOC_X86_SSA__FunctionBlockDesc_AddGetParamTypeTag(OOC_X86_SSA__FunctionBlock b, OOC_SymbolTable__VarDecl parameter, OOC_X86_SSA__Result fp) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_X86_SSA__Result offset;

  i0 = (OOC_INT64)parameter;
  i1 = (OOC_INT64)b;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddFramePointerOffset((OOC_X86_SSA__Block)i1, (OOC_SymbolTable__VarDecl)i0);
  offset = (OOC_X86_SSA__Result)i0;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 76338))+8);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 76344))+48);
  i2 = _check_pointer(i2, 76355);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 76355))*8);
  *(OOC_INT32*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 76359)))), &_td_OOC_X86_SSA__VarDesc, 76359)), 76363))+8) = 0;
  i2 = (OOC_INT64)fp;
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr2((OOC_X86_SSA__Block)i1, 1, (OOC_X86_SSA__Result)i2, (OOC_X86_SSA__Result)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_AddInstr1((OOC_X86_SSA__Block)i1, 34, (OOC_X86_SSA__Result)i0);
  i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_AddResult((OOC_X86_SSA__Instr)i0, 9);
  return (OOC_X86_SSA__Result)i0;
  ;
}

void OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination(OOC_X86_SSA__FunctionBlock fctBlock) {
  register OOC_INT64 i0;
  auto void OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_MarkLive(OOC_X86_SSA__Instr instr);
  auto void OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_RemoveDead(OOC_X86_SSA__Block b);
    
    void OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_MarkLive(OOC_X86_SSA__Instr instr) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_X86_SSA__Opnd opnd;
      OOC_X86_SSA__Dep dep;

      i0 = (OOC_INT64)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 76754))+80);
      i1 = i1==0;
      if (!i1) goto l22;
      *(OOC_INT32*)((_check_pointer(i0, 76788))+80) = 1;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 76823)))), &_td_OOC_X86_SSA__LoopStartInstrDesc);
      if (!i1) goto l5;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 76867))+104);
      OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_MarkLive((OOC_X86_SSA__Instr)i1);
l5:
      i1 = (OOC_INT64)OOC_X86_SSA__InstrDesc_Operands((OOC_X86_SSA__Instr)i0);
      i2 = (OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG(i1)), OOC_X86_SSA__IterInstrOperandsDesc_Next);
      i3 = OOC_TBCALL(i2,OOC_X86_SSA__IterInstrOperandsDesc_Next)((OOC_X86_SSA__IterInstrOperands)i1, (void*)(OOC_INT64)&opnd);
      if (!i3) goto l13;
l8_loop:
      i3 = (OOC_INT64)opnd;
      i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 76992));
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 76996))+8);
      OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_MarkLive((OOC_X86_SSA__Instr)i3);
      i3 = OOC_TBCALL(i2,OOC_X86_SSA__IterInstrOperandsDesc_Next)((OOC_X86_SSA__IterInstrOperands)i1, (void*)(OOC_INT64)&opnd);
      if (i3) goto l8_loop;
l13:
      i0 = (OOC_INT64)OOC_X86_SSA__InstrDesc_BeforeList((OOC_X86_SSA__Instr)i0, (-1));
      i1 = (OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG(i0)), OOC_X86_SSA__IterInstrBeforeListDesc_Next);
      i2 = OOC_TBCALL(i1,OOC_X86_SSA__IterInstrBeforeListDesc_Next)((OOC_X86_SSA__IterInstrBeforeList)i0, (void*)(OOC_INT64)&dep);
      if (!i2) goto l22;
l16_loop:
      i2 = (OOC_INT64)dep;
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 77087));
      OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_MarkLive((OOC_X86_SSA__Instr)i2);
      i2 = OOC_TBCALL(i1,OOC_X86_SSA__IterInstrBeforeListDesc_Next)((OOC_X86_SSA__IterInstrBeforeList)i0, (void*)(OOC_INT64)&dep);
      if (i2) goto l16_loop;
l22:
      return;
      ;
    }

    
    void OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_RemoveDead(OOC_X86_SSA__Block b) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_X86_SSA__Instr instr;

      i0 = (OOC_INT64)b;
      i0 = (OOC_INT64)OOC_X86_SSA__BlockDesc_Instructions((OOC_X86_SSA__Block)i0);
      i1 = (OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG(i0)), OOC_X86_SSA__IterBlockInstructionsDesc_Next);
      i2 = OOC_TBCALL(i1,OOC_X86_SSA__IterBlockInstructionsDesc_Next)((OOC_X86_SSA__IterBlockInstructions)i0, (void*)(OOC_INT64)&instr);
      if (!i2) goto l14;
l3_loop:
      i2 = (OOC_INT64)instr;
      i3 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 77269)))), &_td_OOC_X86_SSA__BlockDesc);
      if (!i3) goto l6;
      OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_RemoveDead((OOC_X86_SSA__Block)i2);
l6:
      i2 = (OOC_INT64)instr;
      i3 = *(OOC_INT32*)((_check_pointer(i2, 77376))+80);
      i3 = i3==0;
      if (!i3) goto l9;
      OOC_X86_SSA__InstrDesc_Delete((OOC_X86_SSA__Instr)i2);
l9:
      i2 = OOC_TBCALL(i1,OOC_X86_SSA__IterBlockInstructionsDesc_Next)((OOC_X86_SSA__IterBlockInstructions)i0, (void*)(OOC_INT64)&instr);
      if (i2) goto l3_loop;
l14:
      return;
      ;
    }


  i0 = (OOC_INT64)fctBlock;
  OOC_X86_SSA__BlockDesc_SetMarkers((OOC_X86_SSA__Block)i0, (OOC_X86_SSA__Node)(OOC_INT64)0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 77668))+120);
  OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_MarkLive((OOC_X86_SSA__Instr)i0);
  i0 = (OOC_INT64)fctBlock;
  OOC_X86_SSA__FunctionBlockDesc_DeadCodeElimination_RemoveDead((OOC_X86_SSA__Block)i0);
  return;
  ;
}

void OOC_OOC_X86_SSA_init(void) {

  return;
  ;
}

void OOC_OOC_X86_SSA_destroy(void) {
}

/* --- */
