#include <XML/Basic/Element.oh>
#include <LongStrings.oh>
#define XML_Basic_Element__stringBufferSlack 8
#define XML_Basic_Element__stringBufferMinSize 24
static void XML_Basic_Element__InitRootFactory(XML_Basic_Element__RootFactory rf);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Basic_Element__StringBuffer = { (RT0__Struct[]){&_td_XML_Basic_Element__StringBufferDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"StringBuffer", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Element__StringBufferDesc = { (RT0__Struct[]){&_td_XML_Basic_Element__StringBufferDesc}, (void*[]){(void*)XML_Basic_Element__StringBufferDesc_AddCharacters}, NULL, &_mid, (OOC_CHAR8*)"StringBufferDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Basic_Element__Element = { (RT0__Struct[]){&_td_XML_Basic_Element__ElementDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Element", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Element__ElementDesc = { (RT0__Struct[]){&_td_XML_Basic_Element__ElementDesc}, (void*[]){(void*)XML_Basic_Element__ElementDesc_SetLocator,(void*)XML_Basic_Element__ElementDesc_IsChildName,(void*)XML_Basic_Element__ElementDesc_NewChild,(void*)XML_Basic_Element__ElementDesc_MissingChild,(void*)XML_Basic_Element__ElementDesc_AddChild,(void*)XML_Basic_Element__ElementDesc_IsAttributeName,(void*)XML_Basic_Element__ElementDesc_AddAttribute,(void*)XML_Basic_Element__ElementDesc_MissingAttribute,(void*)XML_Basic_Element__ElementDesc_HasMixedContent,(void*)XML_Basic_Element__ElementDesc_AddCharacters,(void*)XML_Basic_Element__ElementDesc_CheckElement,(void*)XML_Basic_Element__ElementDesc_Write}, NULL, &_mid, (OOC_CHAR8*)"ElementDesc", 4, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Basic_Element__PCData = { (RT0__Struct[]){&_td_XML_Basic_Element__PCDataDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"PCData", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Element__PCDataDesc = { (RT0__Struct[]){&_td_XML_Basic_Element__ElementDesc,&_td_XML_Basic_Element__PCDataDesc}, (void*[]){(void*)XML_Basic_Element__ElementDesc_SetLocator,(void*)XML_Basic_Element__ElementDesc_IsChildName,(void*)XML_Basic_Element__ElementDesc_NewChild,(void*)XML_Basic_Element__ElementDesc_MissingChild,(void*)XML_Basic_Element__ElementDesc_AddChild,(void*)XML_Basic_Element__ElementDesc_IsAttributeName,(void*)XML_Basic_Element__ElementDesc_AddAttribute,(void*)XML_Basic_Element__ElementDesc_MissingAttribute,(void*)XML_Basic_Element__ElementDesc_HasMixedContent,(void*)XML_Basic_Element__PCDataDesc_AddCharacters,(void*)XML_Basic_Element__ElementDesc_CheckElement,(void*)XML_Basic_Element__PCDataDesc_Write,(void*)XML_Basic_Element__PCDataDesc_Normalize}, NULL, &_mid, (OOC_CHAR8*)"PCDataDesc", 8, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Basic_Element__List = { (RT0__Struct[]){&_td_XML_Basic_Element__ListDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"List", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Element__ListDesc = { (RT0__Struct[]){&_td_XML_Basic_Element__ListDesc}, (void*[]){(void*)XML_Basic_Element__ListDesc_Append,(void*)XML_Basic_Element__ListDesc_IsEmpty,(void*)XML_Basic_Element__ListDesc_Write}, NULL, &_mid, (OOC_CHAR8*)"ListDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Basic_Element__ElementFactory = { (RT0__Struct[]){&_td_XML_Basic_Element__ElementFactoryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ElementFactory", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Element__ElementFactoryDesc = { (RT0__Struct[]){&_td_XML_Basic_Element__ElementFactoryDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"ElementFactoryDesc", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Basic_Element__RootFactory = { (RT0__Struct[]){&_td_XML_Basic_Element__RootFactoryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"RootFactory", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Element__RootFactoryDesc = { (RT0__Struct[]){&_td_XML_Basic_Element__RootFactoryDesc}, (void*[]){(void*)XML_Basic_Element__RootFactoryDesc_AddFactory,(void*)XML_Basic_Element__RootFactoryDesc_NewElement}, NULL, &_mid, (OOC_CHAR8*)"RootFactoryDesc", 4, 0, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Basic:Element", (RT0__Struct[]) { &_td_XML_Basic_Element__StringBuffer, &_td_XML_Basic_Element__StringBufferDesc, &_td_XML_Basic_Element__Element, &_td_XML_Basic_Element__ElementDesc, &_td_XML_Basic_Element__PCData, &_td_XML_Basic_Element__PCDataDesc, &_td_XML_Basic_Element__List, &_td_XML_Basic_Element__ListDesc, &_td_XML_Basic_Element__ElementFactory, &_td_XML_Basic_Element__ElementFactoryDesc, &_td_XML_Basic_Element__RootFactory, &_td_XML_Basic_Element__RootFactoryDesc, NULL }, 0 };

extern void OOC_XML_Basic_Element_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_LongStrings_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_XML_Writer_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Basic_Element_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Basic_Element_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Basic_Element_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_LongStrings_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_XML_Writer_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
