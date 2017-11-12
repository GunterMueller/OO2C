#include <OOC/IR/VisitAll.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_IR_VisitAll__InitVisitor(OOC_IR_VisitAll__Visitor v) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)v;
  OOC_IR__InitVisitor((OOC_IR__Visitor)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConst(OOC_IR_VisitAll__Visitor v, OOC_IR__Const _const) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAbs(OOC_IR_VisitAll__Visitor v, OOC_IR__Abs abs) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)abs;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1553))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1553))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1562)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAdr(OOC_IR_VisitAll__Visitor v, OOC_IR__Adr adr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)adr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1656))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1656))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1664)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAsh(OOC_IR_VisitAll__Visitor v, OOC_IR__Ash ash) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)ash;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1758))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1758))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1765)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1786))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1786))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1791)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitBinaryArith(OOC_IR_VisitAll__Visitor v, OOC_IR__BinaryArith op) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1899))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1899))+24);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1905)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1925))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1925))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1932)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitBooleanOp(OOC_IR_VisitAll__Visitor v, OOC_IR__BooleanOp op) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2044))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2044))+24);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2050)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2070))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2070))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2077)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCap(OOC_IR_VisitAll__Visitor v, OOC_IR__Cap cap) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)cap;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2177))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2177))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2186)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConcat(OOC_IR_VisitAll__Visitor v, OOC_IR__Concat op) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2324))+16);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2332)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT64)v;
  i3=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2348))+16);
  i4 = _check_pointer(i4, 2356);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2348))+16);
  i6 = _check_pointer(i6, 2356);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 2356))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 2356))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 2359)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCompare(OOC_IR_VisitAll__Visitor v, OOC_IR__Compare op) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2469))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2469))+24);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2475)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2495))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2495))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2502)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitConstructor(OOC_IR_VisitAll__Visitor v, OOC_IR__Constructor cons) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)cons;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2618))+16);
  i2 = (OOC_INT64)v;
  OOC_IR__NewObjectDesc_Accept((OOC_IR__NewObject)i1, (OOC_IR__Visitor)i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2648))+24);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l4;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2676))+24);
  OOC_IR__CallDesc_Accept((OOC_IR__Call)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCurrentException(OOC_IR_VisitAll__Visitor v, OOC_IR__CurrentException ce) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitDeref(OOC_IR_VisitAll__Visitor v, OOC_IR__Deref deref) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)deref;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2908))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2908))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2917)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitEntier(OOC_IR_VisitAll__Visitor v, OOC_IR__Entier entier) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)entier;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3025))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3025))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3034)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIndex(OOC_IR_VisitAll__Visitor v, OOC_IR__Index index) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)index;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3139))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3139))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3146)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3169))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3169))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3176)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitLen(OOC_IR_VisitAll__Visitor v, OOC_IR__Len len) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)len;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3272))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3272))+24);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3279)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNegate(OOC_IR_VisitAll__Visitor v, OOC_IR__Negate neg) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)neg;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3379))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3379))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3388)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNewBlock(OOC_IR_VisitAll__Visitor v, OOC_IR__NewBlock _new) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)_new;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3495))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3495))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3500)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNewObject(OOC_IR_VisitAll__Visitor v, OOC_IR__NewObject _new) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT64)_new;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3635))+16);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l11;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3684))+16);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3692)), 0);
  i2 = 0<i1;
  if (!i2) goto l11;
  i2 = (OOC_INT64)v;
  i3=0;
l5_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3711))+16);
  i4 = _check_pointer(i4, 3719);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3711))+16);
  i6 = _check_pointer(i6, 3719);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 3719))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 3719))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 3722)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l5_loop;
l11:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitNot(OOC_IR_VisitAll__Visitor v, OOC_IR__Not neg) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)neg;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3842))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3842))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3851)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitOdd(OOC_IR_VisitAll__Visitor v, OOC_IR__Odd odd) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)odd;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3945))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3945))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3954)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSelectField(OOC_IR_VisitAll__Visitor v, OOC_IR__SelectField sf) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)sf;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4062))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4062))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4070)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSelectProc(OOC_IR_VisitAll__Visitor v, OOC_IR__SelectProc sp) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)sp;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4184))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4184))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4194)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetMember(OOC_IR_VisitAll__Visitor v, OOC_IR__SetMember range) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)range;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4311))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4311))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4320)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4343))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4343))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4348)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetOp(OOC_IR_VisitAll__Visitor v, OOC_IR__SetOp op) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4450))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4450))+24);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4456)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4476))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4476))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4483)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitSetRange(OOC_IR_VisitAll__Visitor v, OOC_IR__SetRange range) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)range;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4593))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4593))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4599)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4622))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4622))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4626)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitChangeElement(OOC_IR_VisitAll__Visitor v, OOC_IR__ChangeElement ch) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)ch;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4743))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4743))+24);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4748)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4768))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4768))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4777)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitShift(OOC_IR_VisitAll__Visitor v, OOC_IR__Shift shift) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)shift;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4889))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4889))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4896)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4919))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4919))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 4923)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeCast(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeCast op) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5027))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5027))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 5033)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeConv(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeConv op) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5140))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5140))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 5146)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeGuard(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeGuard op) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)op;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5255))+16);
  i1 = (OOC_INT64)v;
  OOC_IR__TypeTestDesc_Accept((OOC_IR__TypeTest)i0, (OOC_IR__Visitor)i1);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeTag(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeTag op) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5366))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5366))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 5374)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeTest(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeTest op) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)op;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5480))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5480))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 5486)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitModuleRef(OOC_IR_VisitAll__Visitor v, OOC_IR__ModuleRef modRef) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitPredefProc(OOC_IR_VisitAll__Visitor v, OOC_IR__PredefProc pproc) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitProcedureRef(OOC_IR_VisitAll__Visitor v, OOC_IR__ProcedureRef procRef) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTypeRef(OOC_IR_VisitAll__Visitor v, OOC_IR__TypeRef typeRef) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitVar(OOC_IR_VisitAll__Visitor v, OOC_IR__Var var) {

  return;
  ;
}

static void OOC_IR_VisitAll__VisitStatementSeq(OOC_IR_VisitAll__Visitor v, OOC_IR__StatementSeq statmSeq) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT64)statmSeq;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6069)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT64)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 6091);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i0, 6091);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 6091))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 6091))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 6094)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssert(OOC_IR_VisitAll__Visitor v, OOC_IR__Assert assert) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)assert;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6221))+16);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l4;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6257))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6257))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6268)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssignment(OOC_IR_VisitAll__Visitor v, OOC_IR__Assignment assignment) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)assignment;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6402))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6402))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6412)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6440))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6440))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6447)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitAssignOp(OOC_IR_VisitAll__Visitor v, OOC_IR__AssignOp assignOp) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)assignOp;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6568))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6568))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6578)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6604))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6604))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6611)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCall(OOC_IR_VisitAll__Visitor v, OOC_IR__Call call) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT64)call;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6736))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6736))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6744)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6785))+24);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6796)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6814))+24);
  i4 = _check_pointer(i4, 6825);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6814))+24);
  i6 = _check_pointer(i6, 6825);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i2, i7, OOC_UINT32, 6825))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i2, i5, OOC_UINT32, 6825))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 6828)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopy(OOC_IR_VisitAll__Visitor v, OOC_IR__Copy cp) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)cp;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6932))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6932))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6940)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6960))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6960))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6966)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopyParameter(OOC_IR_VisitAll__Visitor v, OOC_IR__CopyParameter cp) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)cp;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7079))+16);
  i1 = (OOC_INT64)v;
  OOC_IR__VarDesc_Accept((OOC_IR__Var)i0, (OOC_IR__Visitor)i1);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCopyString(OOC_IR_VisitAll__Visitor v, OOC_IR__CopyString cp) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)cp;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7202))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7202))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7210)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7230))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7230))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7236)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7256))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7256))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7267)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitExit(OOC_IR_VisitAll__Visitor v, OOC_IR__Exit exit) {

  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitForStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__ForStatm forStatm) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)forStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7465))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7465))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7470)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7496))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7496))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7503)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7529))+32);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7529))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7534)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7560))+40);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7560))+40);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7566)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7614))+48);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIterateArrayStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__IterateArrayStatm iterStatm) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)iterStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7748))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7748))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7753)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7780))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7780))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7787)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7836))+32);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIterateObjectStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__IterateObjectStatm iterStatm) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)iterStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7981))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7981))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7986)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8013))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8013))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 8030)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8057))+32);
  OOC_IR__CallDesc_Accept((OOC_IR__Call)i1, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8119))+40);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitIfStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__IfStatm ifStatm) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)ifStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8239))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8239))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 8246)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8293))+24);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8321))+32);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l4;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8380))+32);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCase(OOC_IR_VisitAll__Visitor v, OOC_IR__Case _case) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT64)_case;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8532))+16);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8540)), 0);
  i2 = (OOC_INT64)v;
  i3 = 0<i1;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8558))+16);
  i4 = _check_pointer(i4, 8566);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8558))+16);
  i6 = _check_pointer(i6, 8566);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 8566))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 8566))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 8569)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8622))+24);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCaseStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__CaseStatm caseStatm) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT64)caseStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8762))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8762))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 8770)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8816))+24);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8826)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8849))+24);
  i4 = _check_pointer(i4, 8859);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i2, i5, OOC_UINT32, 8859))*8);
  OOC_IR__CaseDesc_Accept((OOC_IR__Case)i4, (OOC_IR__Visitor)i3);
  i2 = i2+1;
  i = i2;
  i4 = i2<i1;
  if (i4) goto l3_loop;
l8:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8902))+32);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l11;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8961))+32);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l11:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitLoopStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__LoopStatm loopStatm) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)loopStatm;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9114))+16);
  i1 = (OOC_INT64)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitMoveBlock(OOC_IR_VisitAll__Visitor v, OOC_IR__MoveBlock move) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)move;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9223))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9223))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 9231)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9253))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9253))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 9259)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9281))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9281))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 9287)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i3);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitRaise(OOC_IR_VisitAll__Visitor v, OOC_IR__Raise raise) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)raise;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9395))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9395))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 9406)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitRepeatStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__RepeatStatm repeatStatm) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)repeatStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9556))+16);
  i2 = (OOC_INT64)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9580))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9580))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 9595)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitReturn(OOC_IR_VisitAll__Visitor v, OOC_IR__Return _return) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)_return;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9713))+16);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l4;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9746))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9746))+16);
  i2 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 9754)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i0, (OOC_IR__Visitor)i2);
l4:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitCatchClause(OOC_IR_VisitAll__Visitor v, OOC_IR__CatchClause _catch) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)_catch;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9901))+24);
  i1 = (OOC_INT64)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitTryStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__TryStatm tryStatm) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT64)tryStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10064))+16);
  i2 = (OOC_INT64)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10106))+24);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10116)), 0);
  i3 = 0<i1;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10138))+24);
  i4 = _check_pointer(i4, 10148);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 10148))*8);
  OOC_IR__CatchClauseDesc_Accept((OOC_IR__CatchClause)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitWhileStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__WhileStatm whileStatm) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)whileStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10285))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10285))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10292)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10342))+24);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitWithStatm(OOC_IR_VisitAll__Visitor v, OOC_IR__WithStatm withStatm) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)withStatm;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10462))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10462))+16);
  i3 = (OOC_INT64)v;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10469)))), OOC_IR__NodeDesc_Accept)),OOC_IR__NodeDesc_Accept)((OOC_IR__Node)i2, (OOC_IR__Visitor)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10518))+24);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10548))+32);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l4;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10609))+32);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i3, (OOC_IR__StatementSeq)i0);
l4:
  return;
  ;
}

static void OOC_IR_VisitAll__VisitProcedureList(OOC_IR_VisitAll__Visitor v, OOC_IR__ProcedureList procList) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT64)procList;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 10788)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = (OOC_INT64)v;
  i3=0;
l3_loop:
  i4 = _check_pointer(i0, 10810);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 10810))*8);
  OOC_IR__ProcedureDesc_Accept((OOC_IR__Procedure)i4, (OOC_IR__Visitor)i2);
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitProcedure(OOC_IR_VisitAll__Visitor v, OOC_IR__Procedure procedure) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)procedure;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10971))+16);
  i1 = (OOC_INT64)v;
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i1, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_IR_VisitAll__VisitorDesc_VisitModule(OOC_IR_VisitAll__Visitor v, OOC_IR__Module module) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)module;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11105))+16);
  i2 = (OOC_INT64)v;
  OOC_IR_VisitAll__VisitProcedureList((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__ProcedureList)i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11150))+24);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11162))+16);
  OOC_IR_VisitAll__VisitStatementSeq((OOC_IR_VisitAll__Visitor)i2, (OOC_IR__StatementSeq)i0);
  return;
  ;
}

void OOC_OOC_IR_VisitAll_init(void) {

  return;
  ;
}

void OOC_OOC_IR_VisitAll_destroy(void) {
}

/* --- */
