#include <XML/UnicodeCodec/ImportAll.oh>
#include <XML/UnicodeCodec/ASCII.oh>
#include <XML/UnicodeCodec/Latin1.oh>
#include <XML/UnicodeCodec/UTF16.oh>
#include <XML/UnicodeCodec/UTF8.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:UnicodeCodec:ImportAll", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_XML_UnicodeCodec_ImportAll_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_XML_UnicodeCodec_ASCII_open(&_mid);
    OOC_XML_UnicodeCodec_Latin1_open(&_mid);
    OOC_XML_UnicodeCodec_UTF16_open(&_mid);
    OOC_XML_UnicodeCodec_UTF8_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_UnicodeCodec_ImportAll_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_UnicodeCodec_ImportAll_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_UnicodeCodec_ImportAll_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_XML_UnicodeCodec_ASCII_close(&_mid);
    OOC_XML_UnicodeCodec_Latin1_close(&_mid);
    OOC_XML_UnicodeCodec_UTF16_close(&_mid);
    OOC_XML_UnicodeCodec_UTF8_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
