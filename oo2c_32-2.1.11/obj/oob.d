static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
#include <oob.oh>
#include <Ascii.oh>
#include <Err.oh>
#include <Out.oh>
#include <Strings.oh>
#include <Object.oh>
#include <IO.oh>
#include <IO/StdChannels.oh>
#include <OOC/Config/CCompiler.oh>
#include <Config.oh>
#include <Config/Section/Options.oh>
#include <OOC/Config.oh>
#include <OOC/Error.oh>
#include <OOC/Repository.oh>
#include <OOC/SymbolTable.oh>
#include <OOC/Logger.oh>
#include <OOC/Doc.oh>
#include <OOC/Doc/Output/Text.oh>
#include <OOC/SymbolTable/ImportModules.oh>
#include <OOC/SymbolTable/Namespace.oh>
#include <OOC/SymbolTable/CreateNamespace.oh>
#include <OOC/SymbolTable/Builder.oh>
#include <Object/Boxed.oh>
#include <Object/BigInt.oh>
static OOC_Error__List oob__cfgErrList;
static OOC_Error__List oob__errList;
static Config_Section_Options__Option oob__help;
static Config_Section_Options__Option oob__extendRecords;
static Object__String oob__arg;
static OOC_SymbolTable__Module oob__symTab;
static OOC_SymbolTable__Declaration oob__noDeclDoc;
#define oob__indentString (OOC_CHAR8[])"  "
#define oob__indentWidth 2
#define oob__screenWidth 76
static OOC_Repository__Module oob__GetModule(Object__String moduleName);
static OOC_SymbolTable__Module oob__GetSymTab(OOC_Repository__Module module);
static void oob__WriteSymTab(OOC_SymbolTable__Module symTab);
static void oob__WriteHelp(void);
static void oob__NewConfig(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"oob", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_oob_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_Err_open(&_mid);
    OOC_Out_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
    OOC_OOC_Config_CCompiler_open(&_mid);
    OOC_Config_open(&_mid);
    OOC_Config_Section_Options_open(&_mid);
    OOC_OOC_Config_open(&_mid);
    OOC_OOC_Error_open(&_mid);
    OOC_OOC_Repository_open(&_mid);
    OOC_OOC_SymbolTable_open(&_mid);
    OOC_OOC_Logger_open(&_mid);
    OOC_OOC_Doc_open(&_mid);
    OOC_OOC_Doc_Output_Text_open(&_mid);
    OOC_OOC_SymbolTable_ImportModules_open(&_mid);
    OOC_OOC_SymbolTable_Namespace_open(&_mid);
    OOC_OOC_SymbolTable_CreateNamespace_open(&_mid);
    OOC_OOC_SymbolTable_Builder_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_Object_BigInt_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_oob_init();
  }
  _mid.openCount++;
}
extern void OOC_oob_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_oob_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_Err_close(&_mid);
    OOC_Out_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
    OOC_OOC_Config_CCompiler_close(&_mid);
    OOC_Config_close(&_mid);
    OOC_Config_Section_Options_close(&_mid);
    OOC_OOC_Config_close(&_mid);
    OOC_OOC_Error_close(&_mid);
    OOC_OOC_Repository_close(&_mid);
    OOC_OOC_SymbolTable_close(&_mid);
    OOC_OOC_Logger_close(&_mid);
    OOC_OOC_Doc_close(&_mid);
    OOC_OOC_Doc_Output_Text_close(&_mid);
    OOC_OOC_SymbolTable_ImportModules_close(&_mid);
    OOC_OOC_SymbolTable_Namespace_close(&_mid);
    OOC_OOC_SymbolTable_CreateNamespace_close(&_mid);
    OOC_OOC_SymbolTable_Builder_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_Object_BigInt_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
