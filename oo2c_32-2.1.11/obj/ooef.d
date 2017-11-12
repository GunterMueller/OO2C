static void* _c0;
static void* _c1;
static void* _c2;
#include <ooef.oh>
#include <In.oh>
#include <Out.oh>
#include <Strings.oh>
#include <IntConv.oh>
#include <Channel.oh>
#include <Files.oh>
#include <Ascii.oh>
#include <CharClass.oh>
#include <IntStr.oh>
#include <Object.oh>
#include <IO/StdChannels.oh>
#include <Config.oh>
#include <Config/Section/Options.oh>
#include <OOC/Config.oh>
#include <OOC/Config/CCompiler.oh>
#include <OOC/Error.oh>
#include <OOC/Repository.oh>
#define ooef__eol (OOC_CHAR8)'\012'
#define ooef__tab 8
#define ooef__context 0
#define ooef__lineOnly 1
#define ooef__lineColumn 2
#define ooef__sizePath 256
#define ooef__sizeErrText 100
typedef OOC_CHAR8 ooef__Filename[256];
typedef struct ooef__ErrorDesc *ooef__Error;
typedef struct ooef__FileInfoDesc *ooef__FileInfo;
typedef struct ooef__ErrorDesc {
  ooef__Error next;
  OOC_INT32 pos;
  OOC_CHAR8 text[100];
} ooef__ErrorDesc;
typedef struct ooef__FileInfoDesc {
  ooef__FileInfo next;
  ooef__Filename name;
  ooef__Error errList;
} ooef__FileInfoDesc;
static OOC_Error__List ooef__cfgErrList;
static ooef__FileInfo ooef__files;
static ooef__FileInfo ooef__active;
static OOC_CHAR8 *ooef__fileBuffer;
static OOC_INT32 ooef__bufferSize;
static OOC_INT32 ooef__errorPos;
static OOC_Repository__URIBuffer ooef__dummy;
static OOC_CHAR8 ooef__echoErrors;
static OOC_CHAR8 ooef__echoText;
static Config_Section_Options__Option ooef__mode;
static Config_Section_Options__Option ooef__help;
static OOC_INT32 ooef__leadContext;
static OOC_INT32 ooef__trailContext;
static OOC_INT32 ooef__connContext;
static OOC_CHAR8 ooef__Match(const OOC_CHAR8 pat__ref[], OOC_LEN pat_0d, const OOC_CHAR8 s__ref[], OOC_LEN s_0d);
static void ooef__ActiveFile(const OOC_CHAR8 name__ref[], OOC_LEN name_0d);
static void ooef__AddError(ooef__Error *list, OOC_INT32 pos, const OOC_CHAR8 text__ref[], OOC_LEN text_0d);
static void ooef__ScanInput(void);
static void ooef__SortErrors(void);
static void ooef__PrintErrors(void);
static OOC_CHAR8 ooef__TranslateArgs(OOC_CHAR8 file[], OOC_LEN file_0d, OOC_INT32 *pos);
static void ooef__WriteHelp(void);
static void ooef__NewConfig(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ooef__Filename = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, (OOC_CHAR8*)"Filename", 256, 256, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_ooef__Error = { (RT0__Struct[]){&_td_ooef__ErrorDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Error", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ooef__FileInfo = { (RT0__Struct[]){&_td_ooef__FileInfoDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"FileInfo", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ooef__ErrorDesc = { (RT0__Struct[]){&_td_ooef__ErrorDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"ErrorDesc", 108, 0, 0, RT0__strRecord };
RT0__StructDesc _td_ooef__1711 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 100, 100, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_ooef__FileInfoDesc = { (RT0__Struct[]){&_td_ooef__FileInfoDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"FileInfoDesc", 264, 0, 0, RT0__strRecord };
RT0__StructDesc _td_ooef__1914 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_ooef__1903 = { (RT0__Struct[]){&_td_ooef__1914}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ooef__2518 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_ooef__2977 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_ooef__3040 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_ooef__4078 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_ooef__4682 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_ooef__5249 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1024, 1024, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_ooef__5281 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 16, 16, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_ooef__14893 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ooef", (RT0__Struct[]) { &_td_ooef__Filename, &_td_ooef__Error, &_td_ooef__FileInfo, &_td_ooef__ErrorDesc, &_td_ooef__FileInfoDesc, NULL }, 0 };

extern void OOC_ooef_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_In_open(&_mid);
    OOC_Out_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_IntConv_open(&_mid);
    OOC_Channel_open(&_mid);
    OOC_Files_open(&_mid);
    OOC_Ascii_open(&_mid);
    OOC_CharClass_open(&_mid);
    OOC_IntStr_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
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
    OOC_ooef_init();
  }
  _mid.openCount++;
}
extern void OOC_ooef_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_ooef_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_In_close(&_mid);
    OOC_Out_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_IntConv_close(&_mid);
    OOC_Channel_close(&_mid);
    OOC_Files_close(&_mid);
    OOC_Ascii_close(&_mid);
    OOC_CharClass_close(&_mid);
    OOC_IntStr_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
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
