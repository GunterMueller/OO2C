#include <OOC/Config/Assembler.d>
#include <__oo2c.h>
#include <setjmp.h>

Object__String OOC_Config_Assembler__AssembleFileCmd(URI__URI in, URI__URI out) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c0));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  i1 = (OOC_INT32)in;
  i1 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1156)))), &_td_URI_Scheme_File__URIDesc, 1156)));
  i1 = (OOC_INT32)OS_Path__QuoteForShell((Object__String)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1121)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1180)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c1));
  i1 = (OOC_INT32)out;
  i1 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1239)))), &_td_URI_Scheme_File__URIDesc, 1239)));
  i1 = (OOC_INT32)OS_Path__QuoteForShell((Object__String)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1203)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1270)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

void OOC_OOC_Config_Assembler_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"as ", 4, 0, 3);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)" -o ", 5, 0, 4);

  return;
  ;
}

void OOC_OOC_Config_Assembler_destroy(void) {
}

/* --- */
