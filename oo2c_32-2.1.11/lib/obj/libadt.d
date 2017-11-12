#include <libadt.oh>
#include <ADT/Storable.oh>
#include <ADT/StringBuffer.oh>
#include <ADT/ArrayList.oh>
#include <ADT/LinkedList.oh>
#include <ADT/Dictionary.oh>
#include <ADT/Dictionary/IntValue.oh>
#include <ADT/Dictionary/AddressKey.oh>
#include <ADT/Dictionary/AddressKey/IntValue.oh>
#include <ADT/Object/Storage.oh>
#include <ADT/Comparator.oh>
#include <ADT/Arrays.oh>
#include <StringSearch.oh>
#include <StringSearch/SubstringBF.oh>
#include <StringSearch/SubstringBM.oh>
#include <StringSearch/RegexpParser.oh>
#include <StringSearch/RegexpDFA.oh>
#include <StringSearch/NoMatch.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"libadt", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_libadt_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_ADT_Storable_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_ADT_ArrayList_open(&_mid);
    OOC_ADT_LinkedList_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_ADT_Dictionary_IntValue_open(&_mid);
    OOC_ADT_Dictionary_AddressKey_open(&_mid);
    OOC_ADT_Dictionary_AddressKey_IntValue_open(&_mid);
    OOC_ADT_Object_Storage_open(&_mid);
    OOC_ADT_Comparator_open(&_mid);
    OOC_ADT_Arrays_open(&_mid);
    OOC_StringSearch_open(&_mid);
    OOC_StringSearch_SubstringBF_open(&_mid);
    OOC_StringSearch_SubstringBM_open(&_mid);
    OOC_StringSearch_RegexpParser_open(&_mid);
    OOC_StringSearch_RegexpDFA_open(&_mid);
    OOC_StringSearch_NoMatch_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_libadt_init();
  }
  _mid.openCount++;
}
extern void OOC_libadt_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_libadt_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_ADT_Storable_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_ADT_ArrayList_close(&_mid);
    OOC_ADT_LinkedList_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_ADT_Dictionary_IntValue_close(&_mid);
    OOC_ADT_Dictionary_AddressKey_close(&_mid);
    OOC_ADT_Dictionary_AddressKey_IntValue_close(&_mid);
    OOC_ADT_Object_Storage_close(&_mid);
    OOC_ADT_Comparator_close(&_mid);
    OOC_ADT_Arrays_close(&_mid);
    OOC_StringSearch_close(&_mid);
    OOC_StringSearch_SubstringBF_close(&_mid);
    OOC_StringSearch_SubstringBM_close(&_mid);
    OOC_StringSearch_RegexpParser_close(&_mid);
    OOC_StringSearch_RegexpDFA_close(&_mid);
    OOC_StringSearch_NoMatch_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
