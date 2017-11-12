static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
static void* _c7;
static void* _c8;
static void* _c9;
static void* _c10;
static void* _c11;
#include <URI/Scheme/HTTP.oh>
#include <Ascii.oh>
#include <IntStr.oh>
#include <Object.oh>
#include <ADT/StringBuffer.oh>
#include <IO/Address.oh>
#include <IO/SocketChannel.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_HTTP__URI = { (RT0__Struct[]){&_td_URI_Scheme_HTTP__URIDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"URI", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_HTTP__URIDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_URI__URIDesc,&_td_URI__HierarchicalURIDesc,&_td_URI_Scheme_Hierarchical__GenericDesc,&_td_URI_Scheme_HTTP__URIDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)URI_Scheme_Hierarchical__GenericDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)URI_Scheme_HTTP__URIDesc_Clone,(void*)URI_Scheme_Hierarchical__GenericDesc_Copy,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_Hierarchical__GenericDesc_WriteXML,(void*)URI__URIDesc_AppendScheme,(void*)URI_Scheme_Hierarchical__GenericDesc_MakeRelative,(void*)URI_Scheme_HTTP__URIDesc_GetChannel,(void*)URI__HierarchicalURIDesc_AuthorityMandatory,(void*)URI_Scheme_HTTP__URIDesc_NewAuthority,(void*)URI__HierarchicalURIDesc_SetAuthority,(void*)URI_Scheme_HTTP__URIDesc_NewQuery,(void*)URI__HierarchicalURIDesc_SetQuery,(void*)URI_Scheme_Hierarchical__GenericDesc_ResolveRelative,(void*)URI_Scheme_Hierarchical__GenericDesc_ClearPath,(void*)URI_Scheme_Hierarchical__GenericDesc_ParsePath,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendPath,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_RemoveSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_StripSegments}, NULL, &_mid, (OOC_CHAR8*)"URIDesc", 20, 5, 0, RT0__strRecord };
RT0__StructDesc _td_URI_Scheme_HTTP__2676 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_URI_Scheme_HTTP__2744 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:HTTP", (RT0__Struct[]) { &_td_URI_Scheme_HTTP__URI, &_td_URI_Scheme_HTTP__URIDesc, NULL }, 0 };

extern void OOC_URI_Scheme_HTTP_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_IntStr_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_IO_Address_open(&_mid);
    OOC_IO_SocketChannel_open(&_mid);
    OOC_IO_Buffer_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_Scheme_Hierarchical_open(&_mid);
    OOC_URI_Authority_ServerBased_open(&_mid);
    OOC_URI_Query_Unparsed_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_URI_Scheme_HTTP_init();
  }
  _mid.openCount++;
}
extern void OOC_URI_Scheme_HTTP_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_URI_Scheme_HTTP_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_IntStr_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_IO_Address_close(&_mid);
    OOC_IO_SocketChannel_close(&_mid);
    OOC_IO_Buffer_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_Scheme_Hierarchical_close(&_mid);
    OOC_URI_Authority_ServerBased_close(&_mid);
    OOC_URI_Query_Unparsed_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
