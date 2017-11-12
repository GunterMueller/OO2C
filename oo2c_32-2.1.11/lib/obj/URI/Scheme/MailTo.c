#include <URI/Scheme/MailTo.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Scheme_MailTo__Init(URI_Scheme_MailTo__URI mailto, Object__String schemeId, Object__String opaque) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)opaque;
  i1 = (OOC_INT32)schemeId;
  i2 = (OOC_INT32)mailto;
  URI_Scheme_Opaque__Init((URI_Scheme_Opaque__Generic)i2, (Object__String)i1, (Object__String)i0);
  return;
  ;
}

URI_Scheme_MailTo__URI URI_Scheme_MailTo__New(Object__String schemeId, Object__String opaque) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_MailTo__URI.baseTypes[0]);
  i1 = (OOC_INT32)opaque;
  i2 = (OOC_INT32)schemeId;
  URI_Scheme_MailTo__Init((URI_Scheme_MailTo__URI)i0, (Object__String)i2, (Object__String)i1);
  return (URI_Scheme_MailTo__URI)i0;
  ;
}

URI_Scheme_MailTo__URI URI_Scheme_MailTo__URIDesc_Clone(URI_Scheme_MailTo__URI mailto) {
  register OOC_INT32 i0,i1;
  URI_Scheme_MailTo__URI copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_MailTo__URI.baseTypes[0]);
  copy = (URI_Scheme_MailTo__URI)i0;
  i1 = (OOC_INT32)mailto;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1542)))), URI_Scheme_Opaque__GenericDesc_Copy)),URI_Scheme_Opaque__GenericDesc_Copy)((URI_Scheme_Opaque__Generic)i1, (URI__URI)i0);
  return (URI_Scheme_MailTo__URI)i0;
  ;
}

URI_Scheme_MailTo__URI URI_Scheme_MailTo__NewPrototype(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Scheme_MailTo__New((Object__String)((OOC_INT32)_c0), (Object__String)((OOC_INT32)_c1));
  return (URI_Scheme_MailTo__URI)i0;
  ;
}

void OOC_URI_Scheme_MailTo_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"mailto", 7, 0, 6);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  return;
  ;
}

void OOC_URI_Scheme_MailTo_destroy(void) {
}

/* --- */
