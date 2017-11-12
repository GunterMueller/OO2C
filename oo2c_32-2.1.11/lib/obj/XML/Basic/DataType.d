#include <XML/Basic/DataType.oh>
#include <LongStrings.oh>
#include <IntStr.oh>
#include <Exception.oh>
#include <URI/Parser.oh>
#include <XML/DTD.oh>
#include <XML/EntityResolver.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Basic_DataType__258 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_XML_Basic_DataType__553 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Basic:DataType", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_XML_Basic_DataType_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_LongStrings_open(&_mid);
    OOC_IntStr_open(&_mid);
    OOC_Exception_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_Parser_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_EntityResolver_open(&_mid);
    OOC_XML_Basic_Element_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Basic_DataType_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Basic_DataType_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Basic_DataType_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_LongStrings_close(&_mid);
    OOC_IntStr_close(&_mid);
    OOC_Exception_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_Parser_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_EntityResolver_close(&_mid);
    OOC_XML_Basic_Element_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
