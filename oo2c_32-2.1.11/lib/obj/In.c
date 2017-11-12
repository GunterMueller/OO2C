#include <In.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_CHAR8 In__Done(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 1312));
  return (i0==0);
  ;
}

void In__ClearError(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1390)))), TextRider__ReaderDesc_ClearError)),TextRider__ReaderDesc_ClearError)((TextRider__Reader)i0);
  return;
  ;
}

void In__SetReader(TextRider__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  In__reader = (TextRider__Reader)i0;
  goto l4;
l3:
  i0 = (OOC_INT32)StdChannels__stdin;
  i0 = (OOC_INT32)TextRider__ConnectReader((Channel__Channel)i0);
  In__reader = (TextRider__Reader)i0;
l4:
  return;
  ;
}

void In__Char(OOC_CHAR8 *ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1855)))), TextRider__ReaderDesc_ReadChar)),TextRider__ReaderDesc_ReadChar)((TextRider__Reader)i0, (void*)(OOC_INT32)ch);
  return;
  ;
}

void In__Line(OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1943)))), TextRider__ReaderDesc_ReadLine)),TextRider__ReaderDesc_ReadLine)((TextRider__Reader)i0, (void*)(OOC_INT32)s, s_0d);
  return;
  ;
}

void In__String(OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2034)))), TextRider__ReaderDesc_ReadString)),TextRider__ReaderDesc_ReadString)((TextRider__Reader)i0, (void*)(OOC_INT32)s, s_0d);
  return;
  ;
}

void In__Identifier(OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2137)))), TextRider__ReaderDesc_ReadIdentifier)),TextRider__ReaderDesc_ReadIdentifier)((TextRider__Reader)i0, (void*)(OOC_INT32)s, s_0d);
  return;
  ;
}

void In__Bool(OOC_CHAR8 *_bool) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2235)))), TextRider__ReaderDesc_ReadBool)),TextRider__ReaderDesc_ReadBool)((TextRider__Reader)i0, (void*)(OOC_INT32)_bool);
  return;
  ;
}

void In__ShortInt(OOC_INT8 *_int) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2330)))), TextRider__ReaderDesc_ReadSInt)),TextRider__ReaderDesc_ReadSInt)((TextRider__Reader)i0, (void*)(OOC_INT32)_int);
  return;
  ;
}

void In__Int(OOC_INT16 *_int) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2422)))), TextRider__ReaderDesc_ReadInt)),TextRider__ReaderDesc_ReadInt)((TextRider__Reader)i0, (void*)(OOC_INT32)_int);
  return;
  ;
}

void In__LongInt(OOC_INT32 *lint) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2510)))), TextRider__ReaderDesc_ReadLInt)),TextRider__ReaderDesc_ReadLInt)((TextRider__Reader)i0, (void*)(OOC_INT32)lint);
  return;
  ;
}

void In__Hex(OOC_INT32 *lint) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2600)))), TextRider__ReaderDesc_ReadHex)),TextRider__ReaderDesc_ReadHex)((TextRider__Reader)i0, (void*)(OOC_INT32)lint);
  return;
  ;
}

void In__LongReal(OOC_REAL64 *lreal) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2693)))), TextRider__ReaderDesc_ReadLReal)),TextRider__ReaderDesc_ReadLReal)((TextRider__Reader)i0, (void*)(OOC_INT32)lreal);
  return;
  ;
}

void In__Real(OOC_REAL32 *real) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2786)))), TextRider__ReaderDesc_ReadReal)),TextRider__ReaderDesc_ReadReal)((TextRider__Reader)i0, (void*)(OOC_INT32)real);
  return;
  ;
}

void In__Set(OOC_UINT32 *s) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)In__reader;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2869)))), TextRider__ReaderDesc_ReadSet)),TextRider__ReaderDesc_ReadSet)((TextRider__Reader)i0, (void*)(OOC_INT32)s);
  return;
  ;
}

void OOC_In_init(void) {

  In__SetReader((TextRider__Reader)(OOC_INT32)0);
  return;
  ;
}

void OOC_In_destroy(void) {
}

/* --- */
