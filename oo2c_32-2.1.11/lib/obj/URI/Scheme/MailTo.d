static void* _c0;
static void* _c1;
#include <URI/Scheme/MailTo.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Scheme_MailTo__URI = { (RT0__Struct[]){&_td_URI_Scheme_MailTo__URIDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"URI", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_URI_Scheme_MailTo__URIDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_URI__URIDesc,&_td_URI__OpaqueURIDesc,&_td_URI_Scheme_Opaque__GenericDesc,&_td_URI_Scheme_MailTo__URIDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)URI_Scheme_Opaque__GenericDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)URI_Scheme_MailTo__URIDesc_Clone,(void*)URI_Scheme_Opaque__GenericDesc_Copy,(void*)URI__URIDesc_SetSchemeId,(void*)URI_Scheme_Opaque__GenericDesc_WriteXML,(void*)URI__URIDesc_AppendScheme,(void*)URI__URIDesc_MakeRelative,(void*)URI__URIDesc_GetChannel,(void*)URI_Scheme_Opaque__GenericDesc_ParseOpaquePart}, NULL, &_mid, (OOC_CHAR8*)"URIDesc", 8, 5, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Scheme:MailTo", (RT0__Struct[]) { &_td_URI_Scheme_MailTo__URI, &_td_URI_Scheme_MailTo__URIDesc, NULL }, 0 };

extern void OOC_URI_Scheme_MailTo_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_URI_Scheme_Opaque_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_URI_Scheme_MailTo_init();
  }
  _mid.openCount++;
}
extern void OOC_URI_Scheme_MailTo_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_URI_Scheme_MailTo_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_URI_Scheme_Opaque_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
