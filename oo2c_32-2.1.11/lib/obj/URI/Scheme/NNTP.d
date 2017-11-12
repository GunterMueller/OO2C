static void* _c0;
static void* _c1;
#include <URI/Scheme/NNTP.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_NNTP__URI = { (RT0__Struct[]){&_td_URI_Scheme_NNTP__URIDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"URI", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_NNTP__URIDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_URI__URIDesc,&_td_URI__HierarchicalURIDesc,&_td_URI_Scheme_Hierarchical__GenericDesc,&_td_URI_Scheme_NNTP__URIDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)URI_Scheme_Hierarchical__GenericDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)URI_Scheme_NNTP__URIDesc_Clone,(void*)URI_Scheme_Hierarchical__GenericDesc_Copy,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_Hierarchical__GenericDesc_WriteXML,(void*)URI__URIDesc_AppendScheme,(void*)URI_Scheme_Hierarchical__GenericDesc_MakeRelative,(void*)URI__URIDesc_GetChannel,(void*)URI__HierarchicalURIDesc_AuthorityMandatory,(void*)URI_Scheme_NNTP__URIDesc_NewAuthority,(void*)URI__HierarchicalURIDesc_SetAuthority,(void*)URI_Scheme_NNTP__URIDesc_NewQuery,(void*)URI__HierarchicalURIDesc_SetQuery,(void*)URI_Scheme_Hierarchical__GenericDesc_ResolveRelative,(void*)URI_Scheme_Hierarchical__GenericDesc_ClearPath,(void*)URI_Scheme_Hierarchical__GenericDesc_ParsePath,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendPath,(void*)URI_Scheme_Hierarchical__GenericDesc_AppendSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_RemoveSegment,(void*)URI_Scheme_Hierarchical__GenericDesc_StripSegments}, NULL, &_mid, (OOC_CHAR8*)"URIDesc", 20, 5, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:NNTP", (RT0__Struct[]) { &_td_URI_Scheme_NNTP__URI, &_td_URI_Scheme_NNTP__URIDesc, NULL }, 0 };

extern void OOC_URI_Scheme_NNTP_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_URI_open(&_mid);
    OOC_URI_Scheme_Hierarchical_open(&_mid);
    OOC_URI_Authority_ServerBased_open(&_mid);
    OOC_URI_Query_Unparsed_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_URI_Scheme_NNTP_init();
  }
  _mid.openCount++;
}
extern void OOC_URI_Scheme_NNTP_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_URI_Scheme_NNTP_destroy();
    RT0__UnregisterModule(&_mid);

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
