#include <URI/Scheme/NNTP.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Scheme_NNTP__Init(URI_Scheme_NNTP__URI http, Object__String schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)query;
  i1 = (OOC_INT32)authority;
  i2 = (OOC_INT32)schemeId;
  i3 = (OOC_INT32)http;
  URI_Scheme_Hierarchical__Init((URI_Scheme_Hierarchical__Generic)i3, (Object__String)i2, (URI__Authority)i1, (URI__Query)i0);
  return;
  ;
}

URI_Scheme_NNTP__URI URI_Scheme_NNTP__New(Object__String schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_NNTP__URI.baseTypes[0]);
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)authority;
  i3 = (OOC_INT32)schemeId;
  URI_Scheme_NNTP__Init((URI_Scheme_NNTP__URI)i0, (Object__String)i3, (URI__Authority)i2, (URI__Query)i1);
  return (URI_Scheme_NNTP__URI)i0;
  ;
}

URI__Authority URI_Scheme_NNTP__URIDesc_NewAuthority(URI_Scheme_NNTP__URI http) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Authority_ServerBased__New((Object__String)(OOC_INT32)0, (Object__String)((OOC_INT32)_c0), (-1), 119);
  return (URI__Authority)i0;
  ;
}

URI__Query URI_Scheme_NNTP__URIDesc_NewQuery(URI_Scheme_NNTP__URI http) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Query_Unparsed__New((Object__String)((OOC_INT32)_c1));
  return (URI__Query)i0;
  ;
}

URI_Scheme_NNTP__URI URI_Scheme_NNTP__URIDesc_Clone(URI_Scheme_NNTP__URI http) {
  register OOC_INT32 i0,i1;
  URI_Scheme_NNTP__URI copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_NNTP__URI.baseTypes[0]);
  copy = (URI_Scheme_NNTP__URI)i0;
  i1 = (OOC_INT32)http;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2547)))), URI_Scheme_Hierarchical__GenericDesc_Copy)),URI_Scheme_Hierarchical__GenericDesc_Copy)((URI_Scheme_Hierarchical__Generic)i1, (URI__URI)i0);
  return (URI_Scheme_NNTP__URI)i0;
  ;
}

URI_Scheme_NNTP__URI URI_Scheme_NNTP__NewPrototype(Object__String scheme) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)scheme;
  i0 = (OOC_INT32)URI_Scheme_NNTP__New((Object__String)i0, (URI__Authority)(OOC_INT32)0, (URI__Query)(OOC_INT32)0);
  return (URI_Scheme_NNTP__URI)i0;
  ;
}

void OOC_URI_Scheme_NNTP_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  return;
  ;
}

void OOC_URI_Scheme_NNTP_destroy(void) {
}

/* --- */
