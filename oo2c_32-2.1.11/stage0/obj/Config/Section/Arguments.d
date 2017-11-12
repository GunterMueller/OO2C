#include <Config/Section/Arguments.oh>
#include <Object.oh>
#include <TextRider.oh>
#include <LongStrings.oh>
#include <XML/Builder.oh>
#define Config_Section_Arguments__invalidContent 1
#define Config_Section_Arguments__invalidAttribute 2
#define Config_Section_Arguments__requireCharDataContent 5
static Config_Section_Arguments__ErrorContext Config_Section_Arguments__argumentsContext;
static void Config_Section_Arguments__Init(Config_Section_Arguments__Section s, const Config_Parser__String id__ref, OOC_LEN id_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Config_Section_Arguments__Section = { (RT0__Struct[]){&_td_Config_Section_Arguments__SectionDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Section", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Config_Section_Arguments__243 = { (RT0__Struct[]){&_td_Object__String}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_Config_Section_Arguments__ArgumentArray = { (RT0__Struct[]){&_td_Config_Section_Arguments__243}, NULL, NULL, &_mid, (OOC_CHAR8*)"ArgumentArray", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Config_Section_Arguments__SectionDesc = { (RT0__Struct[]){&_td_Config_Section__SectionDesc,&_td_Config_Section_Arguments__SectionDesc}, (void*[]){(void*)Config_Section_Arguments__SectionDesc_ProcessElements,(void*)Config_Section_Arguments__SectionDesc_DumpContent,(void*)Config_Section_Arguments__SectionDesc_ArgNumber,(void*)Config_Section_Arguments__SectionDesc_Get}, NULL, &_mid, (OOC_CHAR8*)"SectionDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Config_Section_Arguments__ErrorContext = { (RT0__Struct[]){&_td_Config_Section_Arguments__ErrorContextDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ErrorContext", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Config_Section_Arguments__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_XML_Error__ContextDesc,&_td_Config_Section__ErrorContextDesc,&_td_Config_Section_Arguments__ErrorContextDesc}, (void*[]){(void*)Config_Section_Arguments__ErrorContextDesc_GetTemplate,(void*)XML_Error__ContextDesc_WriteTemplate,(void*)XML_Error__ContextDesc_SetString}, NULL, &_mid, (OOC_CHAR8*)"ErrorContextDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_Config_Section_Arguments__720 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 256, 128, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Config_Section_Arguments__3559 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 2048, 2048, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Config:Section:Arguments", (RT0__Struct[]) { &_td_Config_Section_Arguments__Section, &_td_Config_Section_Arguments__ArgumentArray, &_td_Config_Section_Arguments__SectionDesc, &_td_Config_Section_Arguments__ErrorContext, &_td_Config_Section_Arguments__ErrorContextDesc, NULL }, 0 };

extern void OOC_Config_Section_Arguments_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_Msg_open(&_mid);
    OOC_Channel_open(&_mid);
    OOC_TextRider_open(&_mid);
    OOC_LongStrings_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_Config_Parser_open(&_mid);
    OOC_Config_Section_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Config_Section_Arguments_init();
  }
  _mid.openCount++;
}
extern void OOC_Config_Section_Arguments_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Config_Section_Arguments_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_Msg_close(&_mid);
    OOC_Channel_close(&_mid);
    OOC_TextRider_close(&_mid);
    OOC_LongStrings_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_Config_Parser_close(&_mid);
    OOC_Config_Section_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
