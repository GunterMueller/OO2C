static void* _c0;
static void* _c1;
static void* _c2;
#include <URI/Authority/RegistryBased.oh>
#include <CharClass.oh>
#include <URI/CharClass.oh>
#include <URI/String.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Authority_RegistryBased__Authority = { (RT0__Struct[]){&_td_URI_Authority_RegistryBased__AuthorityDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Authority", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_URI_Authority_RegistryBased__AuthorityDesc = { (RT0__Struct[]){&_td_URI__AuthorityDesc,&_td_URI_Authority_RegistryBased__AuthorityDesc}, (void*[]){(void*)URI_Authority_RegistryBased__AuthorityDesc_Clone,(void*)URI_Authority_RegistryBased__AuthorityDesc_Copy,(void*)URI_Authority_RegistryBased__AuthorityDesc_ParseAuthority,(void*)URI_Authority_RegistryBased__AuthorityDesc_WriteXML,(void*)URI_Authority_RegistryBased__AuthorityDesc_Append}, NULL, &_mid, (OOC_CHAR8*)"AuthorityDesc", 4, 1, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Authority:RegistryBased", (RT0__Struct[]) { &_td_URI_Authority_RegistryBased__Authority, &_td_URI_Authority_RegistryBased__AuthorityDesc, NULL }, 0 };

extern void OOC_URI_Authority_RegistryBased_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_CharClass_open(&_mid);
    OOC_TextRider_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_CharClass_open(&_mid);
    OOC_URI_String_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_URI_Authority_RegistryBased_init();
  }
  _mid.openCount++;
}
extern void OOC_URI_Authority_RegistryBased_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_URI_Authority_RegistryBased_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_CharClass_close(&_mid);
    OOC_TextRider_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_CharClass_close(&_mid);
    OOC_URI_String_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
