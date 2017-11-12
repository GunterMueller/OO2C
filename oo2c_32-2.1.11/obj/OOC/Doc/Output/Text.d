#include <OOC/Doc/Output/Text.oh>
#include <IntStr.oh>
#include <Strings.oh>
#include <OOC/Doc/TextBuffer.oh>
#include <OOC/Doc/Decoration.oh>
static OOC_CHAR8 OOC_Doc_Output_Text__replacements[7][4];

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_Doc_Output_Text__1062 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 4, 4, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_Doc_Output_Text__1032 = { (RT0__Struct[]){&_td_OOC_Doc_Output_Text__1062}, NULL, NULL, &_mid, NULL, 28, 7, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_Doc_Output_Text__1717 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_Doc_Output_Text__5178 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 16, 16, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:Doc:Output:Text", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_OOC_Doc_Output_Text_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_IntStr_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_OOC_Doc_open(&_mid);
    OOC_OOC_Doc_TextBuffer_open(&_mid);
    OOC_OOC_Doc_Decoration_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_OOC_Doc_Output_Text_init();
  }
  _mid.openCount++;
}
extern void OOC_OOC_Doc_Output_Text_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_OOC_Doc_Output_Text_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_IntStr_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_OOC_Doc_close(&_mid);
    OOC_OOC_Doc_TextBuffer_close(&_mid);
    OOC_OOC_Doc_Decoration_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
