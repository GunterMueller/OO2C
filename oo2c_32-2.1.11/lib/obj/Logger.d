static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
static void* _c7;
static void* _c8;
static void* _c9;
static void* _c10;
static void* _c11;
#include <Logger.oh>
#include <IO/StdChannels.oh>
#include <Object/Boxed.oh>
#include <Logger/TimeStamp.oh>
Logger__Target Logger__nullTarget;
Logger__Target Logger__stderrTarget;
Logger__Target Logger__stdoutTarget;
Logger__Handle Logger__nullHandle;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Logger__Target = { (RT0__Struct[]){&_td_Logger__TargetDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Target", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Logger__TargetDesc = { (RT0__Struct[]){&_td_Logger__TargetDesc}, (void*[]){(void*)Logger__TargetDesc_INIT,(void*)Logger__TargetDesc_Write}, NULL, &_mid, (OOC_CHAR8*)"TargetDesc", 2, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Logger__NullTarget = { (RT0__Struct[]){&_td_Logger__NullTargetDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"NullTarget", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Logger__NullTargetDesc = { (RT0__Struct[]){&_td_Logger__TargetDesc,&_td_Logger__NullTargetDesc}, (void*[]){(void*)Logger__NullTargetDesc_INIT,(void*)Logger__NullTargetDesc_Write}, NULL, &_mid, (OOC_CHAR8*)"NullTargetDesc", 2, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Logger__ChannelTarget = { (RT0__Struct[]){&_td_Logger__ChannelTargetDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ChannelTarget", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Logger__ChannelTargetDesc = { (RT0__Struct[]){&_td_Logger__TargetDesc,&_td_Logger__ChannelTargetDesc}, (void*[]){(void*)Logger__ChannelTargetDesc_INIT,(void*)Logger__ChannelTargetDesc_Write}, NULL, &_mid, (OOC_CHAR8*)"ChannelTargetDesc", 8, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Logger__Handle = { (RT0__Struct[]){&_td_Logger__HandleDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Handle", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Logger__HandleDesc = { (RT0__Struct[]){&_td_Logger__HandleDesc}, (void*[]){(void*)Logger__HandleDesc_INIT,(void*)Logger__HandleDesc_EnableReport,(void*)Logger__HandleDesc_EnableDebug,(void*)Logger__HandleDesc_CloneTargets,(void*)Logger__HandleDesc_Debug,(void*)Logger__HandleDesc_DebugObject,(void*)Logger__HandleDesc_DebugInt,(void*)Logger__HandleDesc_DebugBool,(void*)Logger__HandleDesc_DebugLongReal,(void*)Logger__HandleDesc_Report,(void*)Logger__HandleDesc_ReportObject,(void*)Logger__HandleDesc_ReportInt,(void*)Logger__HandleDesc_ReportBool,(void*)Logger__HandleDesc_ReportLongReal}, NULL, &_mid, (OOC_CHAR8*)"HandleDesc", 20, 0, 0, RT0__strRecord };
RT0__StructDesc _td_Logger__5989 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 64, 64, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Logger", (RT0__Struct[]) { &_td_Logger__Target, &_td_Logger__TargetDesc, &_td_Logger__NullTarget, &_td_Logger__NullTargetDesc, &_td_Logger__ChannelTarget, &_td_Logger__ChannelTargetDesc, &_td_Logger__Handle, &_td_Logger__HandleDesc, NULL }, 0 };

extern void OOC_Logger_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_IO_TextRider_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_Logger_TimeStamp_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Logger_init();
  }
  _mid.openCount++;
}
extern void OOC_Logger_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Logger_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_IO_TextRider_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_Logger_TimeStamp_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
