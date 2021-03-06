#include <OOC/SSA.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SSA__InitNode(OOC_SSA__Node n) {

  return;
  ;
}

static void OOC_SSA__SetUse(OOC_SSA__Result arg, OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)arg;
  *(OOC_INT64*)(_check_pointer(i0, 8896)) = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8934))+24);
  *(OOC_INT64*)((_check_pointer(i0, 8918))+32) = i2;
  *(OOC_INT64*)((_check_pointer(i1, 8952))+24) = i0;
  return;
  ;
}

static void OOC_SSA__DeleteUse(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9121));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9126))+24);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9218));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9223))+24);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9251))+32);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9292))+32);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9251))+32);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9340))+32);
  *(OOC_INT64*)((_check_pointer(i1, 9323))+32) = i2;
  goto l13;
l12:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9159));
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9181))+32);
  *(OOC_INT64*)((_check_pointer(i1, 9164))+24) = i2;
l13:
  *(OOC_INT64*)((_check_pointer(i0, 9367))+32) = 0;
  *(OOC_INT64*)(_check_pointer(i0, 9393)) = 0;
  return;
  ;
}

static void OOC_SSA__InitOpnd(OOC_SSA__Opnd opnd, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)opnd;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  i1 = (OOC_INT64)arg;
  *(OOC_INT64*)(_check_pointer(i0, 9596)) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 9618))+32) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 9644))+16) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 9671))+24) = 0;
  i2 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 9695))+8) = i2;
  OOC_SSA__SetUse((OOC_SSA__Result)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

static OOC_SSA__Opnd OOC_SSA__NewOpnd(OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__Opnd.baseTypes[0]);
  i1 = _class;
  i2 = (OOC_INT64)arg;
  OOC_SSA__InitOpnd((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i2, i1);
  return (OOC_SSA__Opnd)i0;
  ;
}

static void OOC_SSA__InitTypedOpnd(OOC_SSA__TypedOpnd opnd, OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT64 i0,i1,i2;

  i0 = _class;
  i1 = (OOC_INT64)arg;
  i2 = (OOC_INT64)opnd;
  OOC_SSA__InitOpnd((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i1, i0);
  i0 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i2, 10240))+40) = i0;
  i0 = passByReference;
  *(OOC_UINT8*)((_check_pointer(i2, 10264))+48) = i0;
  return;
  ;
}

static OOC_SSA__Opnd OOC_SSA__NewTypedOpnd(OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__TypedOpnd.baseTypes[0]);
  i1 = passByReference;
  i2 = (OOC_INT64)type;
  i3 = _class;
  i4 = (OOC_INT64)arg;
  OOC_SSA__InitTypedOpnd((OOC_SSA__TypedOpnd)i0, (OOC_SSA__Result)i4, i3, (OOC_SymbolTable__Type)i2, i1);
  return (OOC_SSA__Opnd)i0;
  ;
}

void OOC_SSA__OpndDesc_DeleteOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT64)opnd;
  OOC_SSA__DeleteUse((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10811))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10818))+48);
  i1 = i1==i0;
  if (i1) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10915))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10922))+48);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10951))+16);
  i2 = i2!=i0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10993))+16);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10951))+16);
  i2 = i2!=i0;
  if (i2) goto l6_loop;
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11043))+16);
  *(OOC_INT64*)((_check_pointer(i1, 11025))+16) = i2;
  goto l13;
l12:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10852))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10877))+16);
  *(OOC_INT64*)((_check_pointer(i1, 10859))+48) = i2;
l13:
  *(OOC_INT64*)((_check_pointer(i0, 11071))+16) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 11098))+24) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SSA__OpndDesc_ReplaceArg(OOC_SSA__Opnd opnd, OOC_SSA__Result arg) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)opnd;
  OOC_SSA__DeleteUse((OOC_SSA__Opnd)i0);
  i1 = (OOC_INT64)arg;
  OOC_SSA__SetUse((OOC_SSA__Result)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

OOC_INT32 OOC_SSA__OpndDesc_OpndIndex(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_SSA__Opnd ptr;

  i = 0;
  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11974))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 11981))+48);
  ptr = (OOC_SSA__Opnd)i1;
  i2 = i1!=i0;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 12050))+16);
  ptr = (OOC_SSA__Opnd)i2;
  i3 = i2!=i0;
  if (i3) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

OOC_INT32 OOC_SSA__OpndDesc_GetIntConst(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)opnd;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 12247));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 12253)))), &_td_OOC_SSA__ConstDesc, 12253)), 12259))+80);
  i0 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 12274)))), &_td_Object_BigInt__BigIntDesc, 12274)));
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsScheduleOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)opnd;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 12388))+8);
  switch (i0) {
  case 17:
  case 18:
  case 20:
    return 1u;
    goto l4;
  default:
    return 0u;
    goto l4;
  }
l4:
  _failed_function(12339); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsValueOpnd(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)opnd;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 12919))+8);
  switch (i0) {
  case 18:
  case 20:
  case 5:
  case 7:
    return 0u;
    goto l4;
  default:
    return 1u;
    goto l4;
  }
l4:
  _failed_function(12601); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__OpndDesc_IsValueOpndHere(OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT64)opnd;
  i1 = OOC_SSA__OpndDesc_IsValueOpnd((OOC_SSA__Opnd)i0);
  if (i1) goto l3;
  return 0u;
  goto l8;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 13890))+24);
  instr = (OOC_SSA__Instr)i1;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 14207))+72);
  i2 = i2!=5;
  if (i2) goto l6;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14242))+48);
  i0 = i1!=i0;
  
  goto l7;
l6:
  i0=1u;
l7:
  return i0;
l8:
  _failed_function(13153); return 0;
  ;
}

static void OOC_SSA__InitResult(OOC_SSA__Result res, OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)res;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT64*)(_check_pointer(i0, 14593)) = 0;
  i1 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 14621))+16) = i1;
  i1 = _class;
  *(OOC_INT8*)((_check_pointer(i0, 14646))+8) = i1;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 14671))+9) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 14702))+32) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 14724))+40) = (-1);
  *(OOC_INT64*)((_check_pointer(i0, 14755))+24) = 0;
  return;
  ;
}

OOC_SSA__Result OOC_SSA__NewResult(OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__Result.baseTypes[0]);
  i1 = subclass;
  i2 = _class;
  i3 = (OOC_INT64)instr;
  OOC_SSA__InitResult((OOC_SSA__Result)i0, (OOC_SSA__Instr)i3, i2, i1);
  return (OOC_SSA__Result)i0;
  ;
}

void OOC_SSA__ResultDesc_DeleteResult(OOC_SSA__Result res) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Result prev;

  i0 = (OOC_INT64)res;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15600))+16);
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 15624));
  i2 = i2!=i0;
  if (!i2) goto l9;
l4_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 15665));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 15624));
  i2 = i2!=i0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 15714));
  *(OOC_INT64*)(_check_pointer(i1, 15695)) = i0;
  return;
  ;
}

void OOC_SSA__ResultDesc_ReplaceUses(OOC_SSA__Result res, OOC_SSA__Result with) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;

  i0 = (OOC_INT64)res;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15914))+24);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l8;
  i1 = (OOC_INT64)with;
  
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15970))+32);
  nextUse = (OOC_SSA__Opnd)i2;
  OOC_SSA__DeleteUse((OOC_SSA__Opnd)i0);
  OOC_SSA__SetUse((OOC_SSA__Result)i1, (OOC_SSA__Opnd)i0);
  use = (OOC_SSA__Opnd)i2;
  i0 = i2!=(OOC_INT64)0;
  if (!i0) goto l8;
  i0=i2;
  goto l3_loop;
l8:
  return;
  ;
}

OOC_INT32 OOC_SSA__ResultDesc_ResultIndex(OOC_SSA__Result result) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_SSA__Result ptr;

  i = 0;
  i0 = (OOC_INT64)result;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 16488))+16);
  ptr = (OOC_SSA__Result)i1;
  i2 = i1!=i0;
  if (i2) goto l3;
  i0=0;
  goto l9;
l3:
  i2=i1;i1=0;
l4_loop:
  i1 = i1+1;
  i = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 16556));
  ptr = (OOC_SSA__Result)i2;
  i3 = i2!=i0;
  if (i3) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SSA__ResultDesc_CalledProc(OOC_SSA__Result calledAdr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)calledAdr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 16858))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16864))+72);
  i1 = i1==3;
  if (i1) goto l7;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 16973))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 16979))+72);
  i1 = i1==1;
  if (i1) goto l5;
  return (OOC_SymbolTable__ProcDecl)(OOC_INT64)0;
  goto l8;
l5:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 17032))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17039)))), &_td_OOC_SSA__DeclRefDesc, 17039)), 17047))+80);
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17057)))), &_td_OOC_SymbolTable__ProcDeclDesc, 17057));
  goto l8;
l7:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 16917))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16924)))), &_td_OOC_SSA__AddressDesc, 16924)), 16932))+80);
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16942)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16942));
l8:
  _failed_function(16647); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__ResultDesc_IsBooleanConst(OOC_SSA__Result result, OOC_CHAR8 value) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)result;
  _assert((OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17476)))), &_td_OOC_SSA__ConstDesc)), 127, 17461);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17506)))), &_td_OOC_SSA__ConstDesc, 17506)), 17512))+80);
  _assert((OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 17519)))), &_td_Object_BigInt__BigIntDesc)), 127, 17491);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17557)))), &_td_OOC_SSA__ConstDesc, 17557)), 17563))+80);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17557)))), &_td_OOC_SSA__ConstDesc, 17557)), 17563))+80);
  i2 = (OOC_INT64)Object_BigInt__zero;
  i0 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 17569)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i0, (Object__Object)i2);
  i1 = value;
  return (i0!=i1);
  ;
}

void OOC_SSA__ResultDesc_LogId(OOC_SSA__Result result, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT64 i0,i1;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_INT32 i;

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT64)Log__writer;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17722)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (void*)(OOC_INT64)msg, msg_0d);
  i0 = (OOC_INT64)Log__writer;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17757)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)": ", 3);
  i0 = (OOC_INT64)Log__writer;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17825)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"???", 4);
  i0 = (OOC_INT64)result;
  i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
  i = i0;
  i1 = i0!=0;
  if (!i1) goto l4;
  i1 = (OOC_INT64)Log__writer;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 18000)))), TextRider__WriterDesc_WriteChar)),TextRider__WriterDesc_WriteChar)((TextRider__Writer)i1, 46u);
  i1 = (OOC_INT64)Log__writer;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 18035)))), TextRider__WriterDesc_WriteLInt)),TextRider__WriterDesc_WriteLInt)((TextRider__Writer)i1, i0, 0);
l4:
  i0 = (OOC_INT64)Log__writer;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18078)))), TextRider__WriterDesc_WriteLn)),TextRider__WriterDesc_WriteLn)((TextRider__Writer)i0);
  return;
  ;
}

static void OOC_SSA__InitInstr(OOC_SSA__Instr instr, OOC_INT8 opcode, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1,i2;

  i0 = subclass;
  i1 = (OOC_INT64)instr;
  OOC_SSA__InitResult((OOC_SSA__Result)i1, (OOC_SSA__Instr)i1, (-1), i0);
  *(OOC_INT64*)((_check_pointer(i1, 18347))+48) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 18375))+56) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 18404))+64) = (OOC_INT64)0;
  i2 = opcode;
  *(OOC_INT8*)((_check_pointer(i1, 18433))+72) = i2;
  *(OOC_INT8*)((_check_pointer(i1, 18462))+9) = i0;
  *(OOC_INT32*)((_check_pointer(i1, 18495))+76) = (-1);
  return;
  ;
}

void OOC_SSA__InstrDesc_SetSubclass(OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = subclass;
  *(OOC_INT8*)((_check_pointer(i0, 18680))+9) = i1;
  return;
  ;
}

void OOC_SSA__InstrDesc_SetPos(OOC_SSA__Instr instr, OOC_Scanner_SymList__Symbol sym) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)sym;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 18804))+28);
  *(OOC_INT32*)((_check_pointer(i0, 18792))+76) = i1;
  return;
  ;
}

static void OOC_SSA__AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd opnd) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 19106))+24) = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 19137))+48);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 19218))+48);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 19247))+16);
  i2 = i2!=(OOC_INT64)0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 19288))+16);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 19247))+16);
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT64*)((_check_pointer(i1, 19320))+16) = i0;
  goto l13;
l12:
  *(OOC_INT64*)((_check_pointer(i1, 19171))+48) = i0;
l13:
  return;
  ;
}

void OOC_SSA__InstrDesc_AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT64 i0,i1;

  i0 = _class;
  i1 = (OOC_INT64)arg;
  i0 = (OOC_INT64)OOC_SSA__NewOpnd((OOC_SSA__Result)i1, i0);
  i1 = (OOC_INT64)instr;
  OOC_SSA__AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_AddOpndFct(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT64 i0,i1;

  i0 = _class;
  i1 = (OOC_INT64)arg;
  i0 = (OOC_INT64)OOC_SSA__NewOpnd((OOC_SSA__Result)i1, i0);
  i1 = (OOC_INT64)instr;
  OOC_SSA__AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Opnd)i0);
  return (OOC_SSA__Opnd)i0;
  ;
}

void OOC_SSA__InstrDesc_AddUniqueOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd prev;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 20289))+48);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l23;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 20435))+48);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 20464));
  i3 = (OOC_INT64)arg;
  i2 = i2!=i3;
  if (i2) goto l5;
  i2=0u;
  goto l7;
l5:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 20484))+16);
  i2 = i2!=(OOC_INT64)0;
  
l7:
  if (!i2) goto l19;
l10_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 20525))+16);
  prev = (OOC_SSA__Opnd)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 20464));
  i2 = i2!=i3;
  if (i2) goto l13;
  i2=0u;
  goto l15;
l13:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 20484))+16);
  i2 = i2!=(OOC_INT64)0;
  
l15:
  if (i2) goto l10_loop;
l19:
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 20561));
  i2 = i2!=i3;
  if (!i2) goto l24;
  i2 = _class;
  i2 = (OOC_INT64)OOC_SSA__NewOpnd((OOC_SSA__Result)i3, i2);
  opnd = (OOC_SSA__Opnd)i2;
  *(OOC_INT64*)((_check_pointer(i2, 20629))+24) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 20659))+16) = i2;
  goto l24;
l23:
  i1 = _class;
  i2 = (OOC_INT64)arg;
  i1 = (OOC_INT64)OOC_SSA__NewOpnd((OOC_SSA__Result)i2, i1);
  opnd = (OOC_SSA__Opnd)i1;
  *(OOC_INT64*)((_check_pointer(i1, 20358))+24) = i0;
  *(OOC_INT64*)((_check_pointer(i0, 20387))+48) = i1;
l24:
  return;
  ;
}

void OOC_SSA__InstrDesc_AddTypedOpnd(OOC_SSA__Instr instr, OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = passByReference;
  i1 = (OOC_INT64)type;
  i2 = _class;
  i3 = (OOC_INT64)arg;
  i0 = (OOC_INT64)OOC_SSA__NewTypedOpnd((OOC_SSA__Result)i3, i2, (OOC_SymbolTable__Type)i1, i0);
  i1 = (OOC_INT64)instr;
  OOC_SSA__AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Opnd)i0);
  return;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_AddResultSubclass(OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Result res;
  OOC_SSA__Result prev;

  i0 = subclass;
  i1 = _class;
  i2 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_SSA__NewResult((OOC_SSA__Instr)i2, i1, i0);
  res = (OOC_SSA__Result)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 21511));
  i1 = i1==0;
  if (i1) goto l12;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 21595));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 21626));
  i2 = i2!=0;
  if (!i2) goto l11;
l6_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 21669));
  prev = (OOC_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 21626));
  i2 = i2!=0;
  if (i2) goto l6_loop;
l11:
  *(OOC_INT64*)(_check_pointer(i1, 21703)) = i0;
  goto l13;
l12:
  *(OOC_INT64*)(_check_pointer(i2, 21547)) = i0;
l13:
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_AddResult(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT64 i0,i1;

  i0 = _class;
  i1 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_AddResultSubclass((OOC_SSA__Instr)i1, i0, 0);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_SizeOpndList(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 num;
  OOC_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22264))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  num = i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 22337))+16);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_CountOpndClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 num;
  OOC_SSA__Opnd opnd;

  num = 0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22640))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0;
  goto l13;
l3:
  i1 = _class;
  i2=0;
l4_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i0, 22692))+8);
  i3 = i3==i1;
  if (!i3) goto l8;
  i2 = i2+1;
  num = i2;
  
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22762))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i3 = i0!=(OOC_INT64)0;
  if (i3) goto l4_loop;
l12:
  i0=i2;
l13:
  return i0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_SizeResultList(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 num;
  OOC_SSA__Result res;

  i0 = (OOC_INT64)instr;
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  num = i0;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 23173));
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_NthOpnd(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23487))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23540))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_NthArg(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23877))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
l4_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23930))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 23982));
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_LastOpnd(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24215))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l13;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24269))+16);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l13;
l7_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24310))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24269))+16);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l7_loop;
l13:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Opnd OOC_SSA__InstrDesc_GetOpndClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24647))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 24689))+8);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24727))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 24689))+8);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  return (OOC_SSA__Opnd)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetArgClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Opnd opnd;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 25072))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 25114))+8);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 25152))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 25114))+8);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l20;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 25241));
  return (OOC_SSA__Result)i0;
  goto l21;
l20:
  return (OOC_SSA__Result)(OOC_INT64)0;
l21:
  _failed_function(24810); return 0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetArgStore(OOC_SSA__Instr instr) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 2);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_NthResult(OOC_SSA__Instr instr, OOC_INT32 nth) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Result res;

  i0 = (OOC_INT64)instr;
  res = (OOC_SSA__Result)i0;
  i1 = nth;
  i2 = i1!=0;
  if (!i2) goto l9;
  
l4_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 25818));
  res = (OOC_SSA__Result)i0;
  i1 = i1-1;
  nth = i1;
  i2 = i1!=0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetResultClass(OOC_SSA__Instr instr, OOC_INT8 _class) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Result result;

  i0 = (OOC_INT64)instr;
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26218))+8);
  i2 = _class;
  i1 = i1!=i2;
  
l5:
  if (!i1) goto l17;
  i1 = _class;
  
l8_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 26260));
  result = (OOC_SSA__Result)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 26218))+8);
  i2 = i2!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetResultStore(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_SSA__Result result;

  i0 = (OOC_INT64)instr;
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26512))+8);
  i1 = i1!=2;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 26566));
  result = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26512))+8);
  i1 = i1!=2;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SSA__Result)i0;
  ;
}

void OOC_SSA__InstrDesc_GetOpcodeName(OOC_SSA__Instr instr, OOC_CHAR8 name[], OOC_LEN name_0d) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 26924))+9);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 26909))+72);
  OOC_SSA_Opcode__GetName(i0, i1, (void*)(OOC_INT64)name, name_0d);
  return;
  ;
}

OOC_INT8 OOC_SSA__InstrDesc_GetResultType(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27048))+72);
  switch (i1) {
  case 13:
    return 0;
    goto l4;
  default:
    i0 = *(OOC_INT8*)((_check_pointer(i0, 27297))+9);
    return i0;
    goto l4;
  }
l4:
  _failed_function(26990); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopEnd(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_SSA__Opnd use;
  OOC_SSA__Result res;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 27577))+72);
  switch (i1) {
  case 10:
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27631))+24);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  case 9:
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
    res = (OOC_SSA__Result)i0;
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27715))+24);
    use = (OOC_SSA__Opnd)i0;
    goto l5;
  default:
    _failed_case(i1, 27567);
    goto l5;
  }
l5:
  i0 = (OOC_INT64)use;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l8;
  i0=0u;
  goto l10;
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27763))+24);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 27770))+72);
  i0 = i0!=11;
  
l10:
  if (!i0) goto l21;
l12_loop:
  i0 = (OOC_INT64)use;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27816))+32);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l15;
  i0=0u;
  goto l17;
l15:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27763))+24);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 27770))+72);
  i0 = i0!=11;
  
l17:
  if (i0) goto l12_loop;
l21:
  i0 = (OOC_INT64)use;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27850))+24);
  return (OOC_SSA__Instr)i0;
  ;
}

OOC_SSA__Result OOC_SSA__InstrDesc_GetBackwardFeed(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28132))+72);
  i1 = i1==10;
  if (!i1) goto l4;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
  instr = (OOC_SSA__Instr)i0;
  
l4:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28228))+72);
  _assert((i1==11), 127, 28215);
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 13);
  return (OOC_SSA__Result)i0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetLoopStart(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28519))+72);
  _assert((i1==11), 127, 28506);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28563))+48);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 28573));
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28579)))), &_td_OOC_SSA__InstrDesc, 28579));
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollectTarget(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_SSA__Result storeOut;
  OOC_SSA__Opnd use;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 28829))+72);
  _assert((i1==6), 127, 28816);
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  _assert((i0!=(OOC_INT64)0), 127, 28902);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28947))+24);
  _assert((i1!=(OOC_INT64)0), 127, 28931);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28985))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 28994))+32);
  _assert((i1==(OOC_INT64)0), 127, 28969);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29028))+24);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 29037))+8);
  i1 = i1==13;
  if (i1) goto l16;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29286))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 29295))+24);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 29302))+72);
  i1 = i1==9;
  if (i1) goto l5;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29696))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29705))+24);
  return (OOC_SSA__Instr)i0;
  goto l17;
l5:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29480))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29489))+24);
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  storeOut = (OOC_SSA__Result)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29537))+24);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29564))+24);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 29571))+72);
  i1 = i1!=11;
  if (!i1) goto l14;
l9_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29619))+32);
  use = (OOC_SSA__Opnd)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29564))+24);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 29571))+72);
  i1 = i1!=11;
  if (i1) goto l9_loop;
l14:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29657))+24);
  return (OOC_SSA__Instr)i0;
  goto l17;
l16:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29233))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29242))+24);
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopStart((OOC_SSA__Instr)i0);
  return (OOC_SSA__Instr)i0;
l17:
  _failed_function(28633); return 0;
  ;
}

OOC_INT32 OOC_SSA__InstrDesc_NumberOfPaths(OOC_SSA__Instr select) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)select;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 30019))+72);
  switch (i1) {
  case 5:
    i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 16);
    i1 = i1==(OOC_INT64)0;
    if (i1) goto l5;
    i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 16);
    return i0;
    goto l10;
l5:
    i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 1);
    return (i0>>1);
    goto l10;
  case 10:
    return 2;
    goto l10;
  case 11:
    i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 11);
    return i0;
    goto l10;
  default:
    _failed_case(i1, 30008);
    goto l10;
  }
l10:
  _failed_function(29774); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__InstrDesc_GetCollect(OOC_SSA__Instr select, OOC_SSA__ProcBlock pb, OOC_INT32 pathNum) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Instr loopEnd;
  OOC_SSA__Instr collect;

  i0 = (OOC_INT64)select;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31036))+72);
  switch (i1) {
  case 5:
    i1 = pathNum;
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, (2+i1*2));
    opnd = (OOC_SSA__Opnd)i0;
    goto l10;
  case 11:
    i1 = pathNum;
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, (i1+2));
    opnd = (OOC_SSA__Opnd)i0;
    i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31242));
    i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31246))+16);
    i1 = *(OOC_INT8*)((_check_pointer(i1, 31252))+72);
    _assert((i1==9), 127, 31231);
    i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31294));
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31298))+16);
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31304))+48);
    opnd = (OOC_SSA__Opnd)i0;
    goto l10;
  case 10:
    i1 = pathNum;
    i2 = i1==0;
    if (i2) goto l7;
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
    loopEnd = (OOC_SSA__Instr)i0;
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 13);
    opnd = (OOC_SSA__Opnd)i0;
    
    goto l10;
l7:
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, i1);
    opnd = (OOC_SSA__Opnd)i0;
    
    goto l10;
  default:
    _failed_case(i1, 31025);
    goto l10;
  }
l10:
  i0 = (OOC_INT64)opnd;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31565));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31569))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 31575))+72);
  i1 = i1==6;
  if (i1) goto l13;
  i1 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 6, 0);
  collect = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31726));
  i3 = (OOC_INT64)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i0, (OOC_SSA__Result)i3);
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  return (OOC_SSA__Instr)i1;
  goto l14;
l13:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 31623));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31627))+16);
  return (OOC_SSA__Instr)i0;
l14:
  _failed_function(30564); return 0;
  ;
}

void OOC_SSA__InstrDesc_LogOpcode(OOC_SSA__Instr instr, const OOC_CHAR8 msg__ref[], OOC_LEN msg_0d) {
  register OOC_INT64 i0;
  OOC_ALLOCATE_VPAR(msg,OOC_CHAR8 ,msg_0d)
  OOC_CHAR8 name[64];

  OOC_INITIALIZE_VPAR(msg__ref,msg,OOC_CHAR8 ,msg_0d)
  i0 = (OOC_INT64)instr;
  OOC_SSA__InstrDesc_GetOpcodeName((OOC_SSA__Instr)i0, (void*)(OOC_INT64)name, 64);
  Log__String((void*)(OOC_INT64)msg, msg_0d, (void*)(OOC_INT64)name, 64);
  return;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsConst(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32415))+72);
  i1 = i1==57;
  if (i1) goto l3;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 32467)))), &_td_OOC_SSA__ConstDesc);
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 32487)))), &_td_OOC_SSA__DeclRefDesc);
  
  goto l9;
l7:
  i1=1u;
l9:
  if (i1) goto l11;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 32517)))), &_td_OOC_SSA__TypeRefDesc);
  
  goto l13;
l11:
  i1=1u;
l13:
  if (i1) goto l15;
  i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 32539)))), &_td_OOC_SSA__AddressDesc);
  
  goto l16;
l15:
  i0=1u;
l16:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_UniqueResult(OOC_SSA__Instr instr) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 32875))+72);
  switch (i0) {
  case 59:
  case 9:
  case 7:
    return 1u;
    goto l4;
  default:
    return 0u;
    goto l4;
  }
l4:
  _failed_function(32593); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSync(OOC_SSA__Instr instr) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)instr;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 33476))+72);
  switch (i0) {
  case 7:
  case 9:
  case 12:
  case 59:
  case 64:
  case 65:
  case 66:
  case 67:
  case 68:
  case 69:
  case 70:
  case 71:
    return 1u;
    goto l4;
  default:
    return 0u;
    goto l4;
  }
l4:
  _failed_function(33062); return 0;
  ;
}

OOC_CHAR8 OOC_SSA__InstrDesc_IsSwitchStatm(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 34075))+72);
  _assert((i1==5), 127, 34062);
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 16);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l3;
  i0 = OOC_SSA__InstrDesc_CountOpndClass((OOC_SSA__Instr)i0, 1);
  i0 = i0<4;
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

static void OOC_SSA__InitConst(OOC_SSA__Const _const, OOC_INT8 subclass, Object_Boxed__Object value, OOC_SymbolTable__Type stringType) {
  register OOC_INT64 i0,i1;

  i0 = subclass;
  i1 = (OOC_INT64)_const;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i1, 0, i0);
  i0 = (OOC_INT64)value;
  _assert((i0!=(OOC_INT64)0), 127, 34644);
  *(OOC_INT64*)((_check_pointer(i1, 34675))+80) = i0;
  i0 = (OOC_INT64)stringType;
  *(OOC_INT64*)((_check_pointer(i1, 34702))+88) = i0;
  return;
  ;
}

static void OOC_SSA__InitDeclRef(OOC_SSA__DeclRef declRef, OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)declRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 1, 0);
  i1 = (OOC_INT64)decl;
  *(OOC_INT64*)((_check_pointer(i0, 34888))+80) = i1;
  return;
  ;
}

static void OOC_SSA__InitTypeRef(OOC_SSA__TypeRef typeRef, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)typeRef;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, 2, 0);
  i1 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i0, 35057))+80) = i1;
  return;
  ;
}

static void OOC_SSA__InitAddress(OOC_SSA__Address address, OOC_INT8 opcode, OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1;

  i0 = opcode;
  i1 = (OOC_INT64)address;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i1, i0, 9);
  i0 = (OOC_INT64)decl;
  *(OOC_INT64*)((_check_pointer(i1, 35273))+80) = i0;
  return;
  ;
}

static OOC_SSA__Address OOC_SSA__NewAddress(OOC_INT8 opcode, OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__Address.baseTypes[0]);
  i1 = (OOC_INT64)decl;
  i2 = opcode;
  OOC_SSA__InitAddress((OOC_SSA__Address)i0, i2, (OOC_SymbolTable__Declaration)i1);
  return (OOC_SSA__Address)i0;
  ;
}

static void OOC_SSA__InitProcBlock(OOC_SSA__ProcBlock pb, OOC_SymbolTable__ProcDecl procDecl, OOC_CHAR8 checkFunctionResult) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr enter;
  OOC_SSA__Result initialStore;
  OOC_INT32 i;

  i0 = (OOC_INT64)pb;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT64*)((_check_pointer(i0, 35819))+24) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 35845))+32) = (OOC_INT64)0;
  i1 = (OOC_INT64)procDecl;
  *(OOC_INT64*)((_check_pointer(i0, 35871))+40) = i1;
  i1 = checkFunctionResult;
  *(OOC_UINT8*)((_check_pointer(i0, 35901))+48) = i1;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 8, 0);
  *(OOC_INT64*)(_check_pointer(i0, 35958)) = i1;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 4, 0);
  enter = (OOC_SSA__Instr)i1;
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_AddResult((OOC_SSA__Instr)i1, 2);
  initialStore = (OOC_SSA__Result)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 36148));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i1, 10);
  *(OOC_INT64*)((_check_pointer(i0, 36221))+8) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 36249))+16) = (OOC_INT64)0;
  i = 0;
  i1=0;
l1_loop:
  *(OOC_INT64*)(((_check_pointer(i0, 36318))+56)+(_check_index(i1, 12, OOC_UINT32, 36328))*8) = (OOC_INT64)0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=11;
  if (i2) goto l1_loop;
l5:
  i1 = (OOC_INT64)ADT_Dictionary__New();
  *(OOC_INT64*)((_check_pointer(i0, 36355))+152) = i1;
  i1 = (OOC_INT64)ADT_Dictionary__New();
  *(OOC_INT64*)((_check_pointer(i0, 36391))+160) = i1;
  return;
  ;
}

OOC_SSA__ProcBlock OOC_SSA__NewProcBlock(OOC_IR__Procedure proc) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__ProcBlock pb;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__ProcBlock.baseTypes[0]);
  pb = (OOC_SSA__ProcBlock)i0;
  i1 = (OOC_INT64)proc;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 36638))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36626))+8);
  OOC_SSA__InitProcBlock((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__ProcDecl)i1, i2);
  return (OOC_SSA__ProcBlock)i0;
  ;
}

static void OOC_SSA__AppendInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 36824))+56) = (OOC_INT64)0;
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36870))+32);
  *(OOC_INT64*)((_check_pointer(i0, 36853))+64) = i2;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36893))+24);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l3;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 37095))+32);
  *(OOC_INT64*)((_check_pointer(i2, 37106))+56) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 37136))+32) = i0;
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 36967))+24) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 36997))+32) = i0;
l4:
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddInstr(OOC_SSA__ProcBlock pb, OOC_INT8 opcode, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__Instr.baseTypes[0]);
  i1 = subclass;
  i2 = opcode;
  OOC_SSA__InitInstr((OOC_SSA__Instr)i0, i2, i1);
  i1 = (OOC_INT64)pb;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
  return (OOC_SSA__Instr)i0;
  ;
}

void OOC_SSA__ProcBlockDesc_DeleteInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38208)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38272)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l12;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38401)))), &_td_OOC_SSA__DeclRefDesc);
  if (i1) goto l10;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38465)))), &_td_OOC_SSA__TypeRefDesc);
  if (!i1) goto l18;
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38509))+80);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38486))+152);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  goto l18;
l10:
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38445))+80);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38422))+152);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  goto l18;
l12:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38298))+88);
  i1 = i1==(OOC_INT64)0;
  if (!i1) goto l18;
  i1 = (OOC_INT64)pb;
  i2 = *(OOC_INT8*)((_check_pointer(i0, 38347))+9);
  i1 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i1, 38332))+56)+(_check_index(i2, 12, OOC_UINT8, 38341))*8);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38370))+80);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  goto l18;
l17:
  i1 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38229))+160);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38252))+80);
  ADT_Dictionary__DictionaryDesc_Delete((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
l18:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38644))+48);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l26;
l21_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38676))+48);
  OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38644))+48);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l21_loop;
l26:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38725))+64);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l29;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38809))+64);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38840))+56);
  *(OOC_INT64*)((_check_pointer(i1, 38820))+56) = i2;
  goto l30;
l29:
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38777))+56);
  *(OOC_INT64*)((_check_pointer(i1, 38757))+24) = i2;
l30:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38874))+56);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l33;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38958))+56);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38989))+64);
  *(OOC_INT64*)((_check_pointer(i1, 38969))+64) = i2;
  goto l34;
l33:
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38926))+64);
  *(OOC_INT64*)((_check_pointer(i1, 38906))+32) = i2;
l34:
  *(OOC_INT64*)((_check_pointer(i0, 39019))+56) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 39048))+64) = (OOC_INT64)0;
  return;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConst(OOC_SSA__ProcBlock pb, Object_Boxed__Object value, OOC_INT8 subclass, OOC_SymbolTable__Type stringType) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  Object__Object obj;
  OOC_SSA__Const _const;

  i0 = (OOC_INT64)pb;
  i1 = subclass;
  i2 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i0, 40012))+56)+(_check_index(i1, 12, OOC_UINT8, 40022))*8);
  i2 = i2==(OOC_INT64)0;
  if (!i2) goto l3;
  i2 = (OOC_INT64)ADT_Dictionary__New();
  *(OOC_INT64*)(((_check_pointer(i0, 40053))+56)+(_check_index(i1, 12, OOC_UINT8, 40063))*8) = i2;
l3:
  i2 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i0, 40118))+56)+(_check_index(i1, 12, OOC_UINT8, 40127))*8);
  i3 = (OOC_INT64)value;
  i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i2, (Object__Object)i3);
  if (i2) goto l9;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__Const.baseTypes[0]);
  _const = (OOC_SSA__Const)i2;
  i4 = (OOC_INT64)stringType;
  OOC_SSA__InitConst((OOC_SSA__Const)i2, i1, (Object_Boxed__Object)i3, (OOC_SymbolTable__Type)i4);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i2);
  i4 = i4==(OOC_INT64)0;
  if (!i4) goto l8;
  i0 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i0, 40501))+56)+(_check_index(i1, 12, OOC_UINT8, 40511))*8);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i2);
l8:
  return (OOC_SSA__Const)i2;
  goto l10;
l9:
  i0 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i0, 40172))+56)+(_check_index(i1, 12, OOC_UINT8, 40182))*8);
  i0 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  obj = (Object__Object)i0;
  return (OOC_SSA__Const)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 40224)))), &_td_OOC_SSA__ConstDesc, 40224));
l10:
  _failed_function(39116); return 0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstInt(OOC_SSA__ProcBlock pb, OOC_INT32 _int) {
  register OOC_INT64 i0,i1,i2;

  i0 = _int;
  i0 = (OOC_INT64)Object_BigInt__NewInt(i0);
  i1 = (OOC_INT64)OOC_SymbolTable_Predef__SmallestIntType((Object_BigInt__BigInt)i0);
  i1 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i1);
  i2 = (OOC_INT64)pb;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i2, (Object_Boxed__Object)i0, i1, (OOC_SymbolTable__Type)(OOC_INT64)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstBool(OOC_SSA__ProcBlock pb, OOC_CHAR8 b) {
  register OOC_INT64 i0,i1;

  i0 = b;
  if (i0) goto l3;
  i0 = (OOC_INT64)Object_BigInt__zero;
  
  goto l4;
l3:
  i0 = (OOC_INT64)Object_BigInt__one;
  
l4:
  i1 = (OOC_INT64)pb;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, 5, (OOC_SymbolTable__Type)(OOC_INT64)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__Const OOC_SSA__ProcBlockDesc_GetConstNil(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)OOC_SymbolTable_Predef__GetType(16);
  i0 = OOC_SSA_Opcode__TypeToSubclass((OOC_SymbolTable__Type)i0);
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)OOC_SSA__nil;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i2, i0, (OOC_SymbolTable__Type)(OOC_INT64)0);
  return (OOC_SSA__Const)i0;
  ;
}

OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_GetDeclRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;
  OOC_SSA__DeclRef declRef;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41628))+152);
  i2 = (OOC_INT64)decl;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__DeclRef.baseTypes[0]);
  declRef = (OOC_SSA__DeclRef)i1;
  OOC_SSA__InitDeclRef((OOC_SSA__DeclRef)i1, (OOC_SymbolTable__Declaration)i2);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41827))+152);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)i1);
  return (OOC_SSA__DeclRef)i1;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41672))+152);
  i0 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  obj = (Object__Object)i0;
  return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 41711)))), &_td_OOC_SSA__DeclRefDesc, 41711));
l4:
  _failed_function(41367); return 0;
  ;
}

OOC_SSA__TypeRef OOC_SSA__ProcBlockDesc_GetTypeRef(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;
  OOC_SSA__TypeRef typeRef;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42173))+152);
  i2 = (OOC_INT64)type;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA__TypeRef.baseTypes[0]);
  typeRef = (OOC_SSA__TypeRef)i1;
  OOC_SSA__InitTypeRef((OOC_SSA__TypeRef)i1, (OOC_SymbolTable__Type)i2);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42372))+152);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i2, (Object__Object)i1);
  return (OOC_SSA__TypeRef)i1;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42217))+152);
  i0 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  obj = (Object__Object)i0;
  return (OOC_SSA__TypeRef)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 42256)))), &_td_OOC_SSA__TypeRefDesc, 42256));
l4:
  _failed_function(41933); return 0;
  ;
}

void OOC_SSA__ProcBlockDesc_SetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl, OOC_SSA__Address address) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42584))+160);
  i1 = (OOC_INT64)decl;
  i2 = (OOC_INT64)address;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i1, (Object__Object)i2);
  return;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_GetAddress(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42921))+160);
  i2 = (OOC_INT64)decl;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  if (i1) goto l3;
  i1 = (OOC_INT64)OOC_SSA__NewAddress(3, (OOC_SymbolTable__Declaration)i2);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  OOC_SSA__ProcBlockDesc_SetAddress((OOC_SSA__ProcBlock)i0, (OOC_SymbolTable__Declaration)i2, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42965))+160);
  i0 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  obj = (Object__Object)i0;
  return (OOC_SSA__Address)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 43004)))), &_td_OOC_SSA__AddressDesc, 43004));
l4:
  _failed_function(42660); return 0;
  ;
}

OOC_SSA__Address OOC_SSA__ProcBlockDesc_AddCopyParameter(OOC_SSA__ProcBlock pb, OOC_SymbolTable__VarDecl param, OOC_SSA__Result storeIn, OOC_SSA__Result length, OOC_SSA__Result size) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)param;
  i1 = (OOC_INT64)OOC_SSA__NewAddress(58, (OOC_SymbolTable__Declaration)i0);
  i2 = (OOC_INT64)storeIn;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 2);
  i2 = (OOC_INT64)length;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT64)size;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
  i2 = (OOC_INT64)pb;
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i2, (OOC_SSA__Instr)i1);
  OOC_SSA__ProcBlockDesc_SetAddress((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i0, (OOC_SSA__Address)i1);
  return (OOC_SSA__Address)i1;
  ;
}

void OOC_SSA__ProcBlockDesc_SetMarkers(OOC_SSA__ProcBlock pb, OOC_SSA__Node newInfo, OOC_INT32 newMarker) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_SSA__Instr instr;
  OOC_SSA__Result res;

  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44260))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l16;
  i2 = (OOC_INT64)newInfo;
  i3 = newMarker;
  
l3_loop:
  res = (OOC_SSA__Result)i0;
  if (!i1) goto l11;
  i1=i0;
l6_loop:
  *(OOC_INT64*)((_check_pointer(i1, 44358))+32) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 44388))+40) = i3;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 44429));
  res = (OOC_SSA__Result)i1;
  i4 = i1!=(OOC_INT64)0;
  if (i4) goto l6_loop;
l11:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44473))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l16:
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddSetInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr get, OOC_SSA__Result sourceValue) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA__Instr set;
  OOC_SSA__Opnd opnd;
  auto OOC_INT8 OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(OOC_INT8 _class);
    
    OOC_INT8 OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(OOC_INT8 _class) {
      register OOC_INT64 i0;

      i0 = _class;
      switch (i0) {
      case 4:
        return 6;
        goto l5;
      case 5:
        return 7;
        goto l5;
      default:
        return i0;
        goto l5;
      }
l5:
      _failed_function(44822); return 0;
      ;
    }


  i0 = (OOC_INT64)get;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 45111))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 45118))+72);
  _assert((i1==12), 127, 45100);
  i1 = *(OOC_INT8*)((_check_pointer(i0, 45182))+9);
  i2 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 13, i1);
  set = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 45210))+48);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT64)0;
  if (!i2) goto l8;
l3_loop:
  i2 = *(OOC_INT8*)((_check_pointer(i0, 45297))+8);
  i2 = OOC_SSA__ProcBlockDesc_AddSetInstr_MapOpndClass(i2);
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 45272));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, i2);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 45326))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l3_loop;
l8:
  i0 = (OOC_INT64)sourceValue;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 8);
  return (OOC_SSA__Instr)i1;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr get, OOC_INT32 dim, OOC_SymbolTable__Array dimType) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_SSA__Instr dimension;
  OOC_SSA__DeclRef paramRef;
  OOC_SSA__Instr getLength;
  OOC_INT8 opcode;
  OOC_SSA__Opnd opnd;
  auto OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray(OOC_SSA__Instr get);
  auto OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength(OOC_SSA__Instr varParam, OOC_SSA__Instr dimension);
    
    OOC_SSA__DeclRef OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray(OOC_SSA__Instr get) {
      register OOC_INT64 i0,i1;
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT64)get;
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46195))+16);
      i1 = i1==(OOC_INT64)0;
      if (i1) goto l3;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46231))+16);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 46241))+8);
      i1 = i1!=5;
      
      goto l5;
l3:
      i1=1u;
l5:
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46290));
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 46296)))), &_td_OOC_SSA__DeclRefDesc);
      
l9:
      if (i1) goto l11;
      i1=0u;
      goto l13;
l11:
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46323));
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 46329)))), &_td_OOC_SSA__DeclRefDesc, 46329)), 46337))+80);
      i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 46348)))), &_td_OOC_SymbolTable__VarDeclDesc, 46348)), 46356))+104);
      
l13:
      if (i1) goto l15;
      return (OOC_SSA__DeclRef)(OOC_INT64)0;
      goto l16;
l15:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46394));
      return (OOC_SSA__DeclRef)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 46400)))), &_td_OOC_SSA__DeclRefDesc, 46400));
l16:
      _failed_function(45921); return 0;
      ;
    }

    
    OOC_SSA__Instr OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength(OOC_SSA__Instr varParam, OOC_SSA__Instr dimension) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT64)varParam;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l18;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46776))+24);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l18;
      i1 = (OOC_INT64)dimension;
      
l5_loop:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46833))+24);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 46840))+72);
      i2 = i2==57;
      if (i2) goto l8;
      i2=0u;
      goto l10;
l8:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46893))+24);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 46900))+48);
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 46910));
      i2 = i2==i1;
      
l10:
      if (!i2) goto l12;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46956))+24);
      return (OOC_SSA__Instr)i2;
l12:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47000))+32);
      use = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT64)0;
      if (i2) goto l5_loop;
l18:
      return (OOC_SSA__Instr)(OOC_INT64)0;
      ;
    }


  i0 = (OOC_INT64)get;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47106))+16);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 47113))+72);
  _assert((i1==12), 127, 47095);
  i1 = (OOC_INT64)dimType;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 47151))+72);
  if (i2) goto l3;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 47938))+96);
  i1 = (OOC_INT64)pb;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i1, i0);
  return (OOC_SSA__Instr)i0;
  goto l24;
l3:
  i1 = dim;
  i2 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetConstInt((OOC_SSA__ProcBlock)i2, i1);
  dimension = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_VarParamArray((OOC_SSA__Instr)i0);
  paramRef = (OOC_SSA__DeclRef)i0;
  i1 = (OOC_INT64)dimension;
  i2 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddGetLengthInstr_ExistingGetLength((OOC_SSA__Instr)i0, (OOC_SSA__Instr)i1);
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l6;
  i0=i2;
  goto l23;
l6:
  i0 = i0!=(OOC_INT64)0;
  if (i0) goto l9;
  opcode = 56;
  i0=56;
  goto l10;
l9:
  opcode = 57;
  i0=57;
l10:
  i2 = (OOC_INT64)pb;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, i0, 3);
  getLength = (OOC_SSA__Instr)i0;
  i2 = (OOC_INT64)get;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 47567))+48);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT64)0;
  if (!i3) goto l23;
l13_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i2, 47627))+8);
  i3 = i3==2;
  if (i3) goto l16;
  i3 = *(OOC_INT8*)((_check_pointer(i2, 47785))+8);
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 47774));
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i4, i3);
  goto l17;
l16:
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 15);
l17:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 47832))+16);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT64)0;
  if (i3) goto l13_loop;
l23:
  return (OOC_SSA__Instr)i0;
l24:
  _failed_function(45462); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_SetLoopContext(OOC_SSA__ProcBlock pb, OOC_SSA__Instr loopContext) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr old;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48098))+8);
  old = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT64)loopContext;
  *(OOC_INT64*)((_check_pointer(i0, 48119))+8) = i2;
  return (OOC_SSA__Instr)i1;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_SetTryContext(OOC_SSA__ProcBlock pb, OOC_SSA__Instr tryContext) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr old;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48299))+16);
  old = (OOC_SSA__Instr)i1;
  i2 = (OOC_INT64)tryContext;
  *(OOC_INT64*)((_check_pointer(i0, 48319))+16) = i2;
  return (OOC_SSA__Instr)i1;
  ;
}

OOC_SSA__Result OOC_SSA__ProcBlockDesc_FixSubclass(OOC_SSA__ProcBlock pb, OOC_SSA__Result arg, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)arg;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 48725))+9);
  i2 = subclass;
  i1 = i1!=i2;
  if (i1) goto l3;
  return (OOC_SSA__Result)i0;
  goto l12;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 48766)))), &_td_OOC_SSA__ConstDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 48792))+9);
  i1 = (i1<10)==(i2<10);
  
l8:
  if (i1) goto l10;
  i1 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i1, 42, i2);
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
  return (OOC_SSA__Result)i1;
  goto l12;
l10:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 48889)))), &_td_OOC_SSA__ConstDesc, 48889)), 48895))+80);
  i1 = (OOC_INT64)pb;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetConst((OOC_SSA__ProcBlock)i1, (Object_Boxed__Object)i0, i2, (OOC_SymbolTable__Type)(OOC_INT64)0);
  return (OOC_SSA__Result)i0;
l12:
  _failed_function(48410); return 0;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_FixSubclassInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr, OOC_INT8 subclass) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Result res;

  i0 = subclass;
  i1 = (OOC_INT64)instr;
  i2 = (OOC_INT64)pb;
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_FixSubclass((OOC_SSA__ProcBlock)i2, (OOC_SSA__Result)i1, i0);
  res = (OOC_SSA__Result)i0;
  return (OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49348)))), &_td_OOC_SSA__InstrDesc, 49348));
  ;
}

static void OOC_SSA__Add(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 49446))+64) = (OOC_INT64)0;
  i1 = (OOC_INT64)*list;
  *(OOC_INT64*)((_check_pointer(i0, 49475))+56) = i1;
  i1 = (OOC_INT64)*list;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l4;
  *(OOC_INT64*)((_check_pointer(i1, 49531))+64) = i0;
l4:
  *list = (OOC_SSA__Instr)i0;
  return;
  ;
}

static void OOC_SSA__Remove(OOC_SSA__Instr *list, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49662))+64);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49737))+64);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49768))+56);
  *(OOC_INT64*)((_check_pointer(i1, 49748))+56) = i2;
  goto l4;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49705))+56);
  *list = (OOC_SSA__Instr)i1;
l4:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49802))+56);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l7;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49837))+56);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49868))+64);
  *(OOC_INT64*)((_check_pointer(i1, 49848))+64) = i0;
l7:
  return;
  ;
}

OOC_CHAR8 OOC_SSA__ProcBlockDesc_TopSort(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_SSA__Instr ready;
  OOC_SSA__Instr waiting;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;
  OOC_INT32 opndCount;
  OOC_SSA__Result res;
  OOC_SSA__Opnd use;

  ready = (OOC_SSA__Instr)(OOC_INT64)0;
  waiting = (OOC_SSA__Instr)(OOC_INT64)0;
  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50279))+24);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l12;
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50338))+56);
  next = (OOC_SSA__Instr)i2;
  i3 = OOC_SSA__InstrDesc_SizeOpndList((OOC_SSA__Instr)i1);
  opndCount = i3;
  *(OOC_INT32*)((_check_pointer(i1, 50405))+40) = i3;
  i3 = i3==0;
  if (i3) goto l6;
  OOC_SSA__Add((void*)(OOC_INT64)&waiting, (OOC_SSA__Instr)i1);
  goto l7;
l6:
  OOC_SSA__Add((void*)(OOC_INT64)&ready, (OOC_SSA__Instr)i1);
l7:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT64)0;
  if (!i1) goto l12;
  i1=i2;
  goto l3_loop;
l12:
  *(OOC_INT64*)((_check_pointer(i0, 50572))+24) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 50598))+32) = (OOC_INT64)0;
  i1 = (OOC_INT64)ready;
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l39;
l15_loop:
  i1 = (OOC_INT64)ready;
  instr = (OOC_SSA__Instr)i1;
  OOC_SSA__Remove((void*)(OOC_INT64)&ready, (OOC_SSA__Instr)i1);
  OOC_SSA__AppendInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l34;
l18_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50905))+24);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT64)0;
  if (!i3) goto l29;
l21_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 50963))+24);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 50963))+24);
  i4 = *(OOC_INT32*)((_check_pointer(i4, 50970))+40);
  *(OOC_INT32*)((_check_pointer(i3, 50970))+40) = (i4-1);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 50998))+24);
  i3 = *(OOC_INT32*)((_check_pointer(i3, 51005))+40);
  i3 = i3==0;
  if (!i3) goto l24;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 51056))+24);
  OOC_SSA__Remove((void*)(OOC_INT64)&waiting, (OOC_SSA__Instr)i3);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 51093))+24);
  OOC_SSA__Add((void*)(OOC_INT64)&ready, (OOC_SSA__Instr)i3);
l24:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 51137))+32);
  use = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT64)0;
  if (i3) goto l21_loop;
l29:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 51178));
  res = (OOC_SSA__Result)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l18_loop;
l34:
  i1 = (OOC_INT64)ready;
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l15_loop;
l39:
  i0 = (OOC_INT64)waiting;
  return (i0==(OOC_INT64)0);
  ;
}

void OOC_SSA__ProcBlockDesc_Reverse(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr newList;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;

  newList = (OOC_SSA__Instr)(OOC_INT64)0;
  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 51436))+24);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l8;
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 51495))+56);
  next = (OOC_SSA__Instr)i2;
  OOC_SSA__Add((void*)(OOC_INT64)&newList, (OOC_SSA__Instr)i1);
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=(OOC_INT64)0;
  if (!i1) goto l8;
  i1=i2;
  goto l3_loop;
l8:
  i1 = (OOC_INT64)newList;
  *(OOC_INT64*)((_check_pointer(i0, 51571))+24) = i1;
  return;
  ;
}

OOC_SSA__Instr OOC_SSA__ProcBlockDesc_GetEnter(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 51704))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 51749))+72);
  i1 = i1!=4;
  
l5:
  if (!i1) goto l17;
l8_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 51797))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 51749))+72);
  i1 = i1!=4;
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SSA__Instr)i0;
  ;
}

void OOC_SSA__ProcBlockDesc_Destroy(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr nextInstr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd nextOpnd;
  OOC_SSA__Result res;
  OOC_SSA__Result nextResult;
  OOC_INT32 i;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 52135))+24);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l27;
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52198))+56);
  nextInstr = (OOC_SSA__Instr)i3;
  i4 = *(OOC_INT8*)((_check_pointer(i1, 52225))+72);
  i4 = i4!=81;
  if (!i4) goto l22;
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52361))+48);
  opnd = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT64)0;
  if (!i5) goto l13;
l8_loop:
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 52428))+16);
  nextOpnd = (OOC_SSA__Opnd)i5;
  *(OOC_INT64*)(_check_pointer(i4, 52453)) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i4, 52480))+16) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i4, 52512))+24) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i4, 52541))+32) = (OOC_INT64)0;
  opnd = (OOC_SSA__Opnd)i5;
  i4 = i5!=(OOC_INT64)0;
  if (!i4) goto l13;
  i4=i5;
  goto l8_loop;
l13:
  res = (OOC_SSA__Result)i1;
  if (!i2) goto l21;
  i2=i1;
l16_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 52686));
  nextResult = (OOC_SSA__Result)i4;
  *(OOC_INT64*)(_check_pointer(i2, 52712)) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 52745))+16) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 52773))+24) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 52803))+32) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i2, 52830))+40) = 0;
  res = (OOC_SSA__Result)i4;
  i2 = i4!=(OOC_INT64)0;
  if (!i2) goto l21;
  i2=i4;
  goto l16_loop;
l21:
  *(OOC_INT64*)((_check_pointer(i1, 52908))+48) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 52939))+56) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 52971))+64) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 53003))+76) = 0;
l22:
  instr = (OOC_SSA__Instr)i3;
  i1 = i3!=(OOC_INT64)0;
  if (!i1) goto l27;
  i2=i1;i1=i3;
  goto l3_loop;
l27:
  *(OOC_INT64*)(_check_pointer(i0, 53071)) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 53099))+8) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 53126))+24) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 53151))+32) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i0, 53176))+40) = (OOC_INT64)0;
  i = 0;
  i1=0;
l28_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i0, 53246))+56)+(_check_index(i1, 12, OOC_UINT32, 53255))*8);
  i2 = i2!=(OOC_INT64)0;
  if (!i2) goto l31;
  i2 = (OOC_INT64)*(OOC_INT64*)(((_check_pointer(i0, 53281))+56)+(_check_index(i1, 12, OOC_UINT32, 53290))*8);
  ADT_Dictionary__DictionaryDesc_Destroy((ADT_Dictionary__Dictionary)i2);
  *(OOC_INT64*)(((_check_pointer(i0, 53307))+56)+(_check_index(i1, 12, OOC_UINT32, 53316))*8) = (OOC_INT64)0;
l31:
  i1 = i1+1;
  i = i1;
  i2 = i1<=11;
  if (i2) goto l28_loop;
l35:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53358))+152);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l38;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53386))+152);
  ADT_Dictionary__DictionaryDesc_Destroy((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT64*)((_check_pointer(i0, 53407))+152) = (OOC_INT64)0;
l38:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53442))+160);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l41;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53470))+160);
  ADT_Dictionary__DictionaryDesc_Destroy((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT64*)((_check_pointer(i0, 53491))+160) = (OOC_INT64)0;
l41:
  return;
  ;
}

void OOC_OOC_SSA_init(void) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)Object_BigInt__zero;
  i0 = (OOC_INT64)Object_BigInt__BigIntDesc_Add((Object_BigInt__BigInt)i0, (Object_BigInt__BigInt)i0);
  i1 = (OOC_INT64)Object_BigInt__zero;
  OOC_SSA__nil = (Object_BigInt__BigInt)i0;
  _assert((i0!=i1), 127, 53608);
  return;
  ;
}

void OOC_OOC_SSA_destroy(void) {
}

/* --- */
