static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
#include <oowhereis.oh>
#include <Out.oh>
#include <Object.oh>
#include <ADT/StringBuffer.oh>
#include <IO/StdChannels.oh>
#include <URI.oh>
#include <URI/Scheme/File.oh>
#include <Config.oh>
#include <Config/Section/Options.oh>
#include <OOC/Config.oh>
#include <OOC/Config/CCompiler.oh>
#include <OOC/Error.oh>
#include <OOC/Repository.oh>
#define oowhereis__moduleSeparator (OOC_CHAR8)':'
#define oowhereis__dirSeparator (OOC_CHAR8)'/'
#define oowhereis__moduleExtension (OOC_CHAR8[])".Mod"
#define oowhereis__symbolFileExtension (OOC_CHAR8[])".Sym"
static OOC_Error__List oowhereis__cfgErrList;
static Config_Section_Options__Option oowhereis__help;
static void oowhereis__WriteHelp(void);
static OOC_INT32 oowhereis__GetExt(Object__String path);
static OOC_CHAR8 oowhereis__Query(void);
static void oowhereis__NewConfig(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"oowhereis", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_oowhereis_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Out_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_Scheme_File_open(&_mid);
    OOC_Config_open(&_mid);
    OOC_Config_Section_Options_open(&_mid);
    OOC_OOC_Config_open(&_mid);
    OOC_OOC_Config_CCompiler_open(&_mid);
    OOC_OOC_Error_open(&_mid);
    OOC_OOC_Repository_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_oowhereis_init();
  }
  _mid.openCount++;
}
extern void OOC_oowhereis_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_oowhereis_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Out_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_Scheme_File_close(&_mid);
    OOC_Config_close(&_mid);
    OOC_Config_Section_Options_close(&_mid);
    OOC_OOC_Config_close(&_mid);
    OOC_OOC_Config_CCompiler_close(&_mid);
    OOC_OOC_Error_close(&_mid);
    OOC_OOC_Repository_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
