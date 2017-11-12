#include <OOC/SymbolTable/InterfaceDescr.oh>
#include <Strings.oh>
#include <Object.oh>
#include <ADT/Dictionary.oh>
#include <ADT/ArrayList.oh>
#include <XML/Writer.oh>
#include <XML/UnicodeCodec/Latin1.oh>
#include <OOC/Repository.oh>
#include <OOC/SymbolTable/GetClass.oh>
#include <OOC/SymbolTable/Namespace.oh>
#include <OOC/Doc/Output/XML.oh>
#define OOC_SymbolTable_InterfaceDescr__dtdPackageName (OOC_CHAR8[])"OOC"
#define OOC_SymbolTable_InterfaceDescr__dtdResourcePath (OOC_CHAR8[])"xml/interface-description.dtd"
static URI__URI OOC_SymbolTable_InterfaceDescr__dtdSystemId;
OOC_CHAR8 OOC_SymbolTable_InterfaceDescr__absoluteDtdSystemId;
static URI__URI OOC_SymbolTable_InterfaceDescr__GetSystemId(OOC_Config_Repositories__Section repositories);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__2743 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__2894 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 2048, 2048, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__6521 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__6636 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__7075 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__7291 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 2048, 2048, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__11253 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_InterfaceDescr__17920 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 2048, 2048, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SymbolTable:InterfaceDescr", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_OOC_SymbolTable_InterfaceDescr_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Strings_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_ADT_ArrayList_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_XML_Writer_open(&_mid);
    OOC_XML_UnicodeCodec_Latin1_open(&_mid);
    OOC_OOC_Repository_open(&_mid);
    OOC_OOC_Config_Repositories_open(&_mid);
    OOC_OOC_SymbolTable_open(&_mid);
    OOC_OOC_SymbolTable_GetClass_open(&_mid);
    OOC_OOC_SymbolTable_Namespace_open(&_mid);
    OOC_OOC_Doc_Output_XML_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_OOC_SymbolTable_InterfaceDescr_init();
  }
  _mid.openCount++;
}
extern void OOC_OOC_SymbolTable_InterfaceDescr_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_OOC_SymbolTable_InterfaceDescr_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Strings_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_ADT_ArrayList_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_XML_Writer_close(&_mid);
    OOC_XML_UnicodeCodec_Latin1_close(&_mid);
    OOC_OOC_Repository_close(&_mid);
    OOC_OOC_Config_Repositories_close(&_mid);
    OOC_OOC_SymbolTable_close(&_mid);
    OOC_OOC_SymbolTable_GetClass_close(&_mid);
    OOC_OOC_SymbolTable_Namespace_close(&_mid);
    OOC_OOC_Doc_Output_XML_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
