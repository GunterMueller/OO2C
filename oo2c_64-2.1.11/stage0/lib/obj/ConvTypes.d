#include <ConvTypes.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ConvTypes__ScanState = { (RT0__Struct[]){&_td_ConvTypes__ScanDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ScanState", 8, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ConvTypes__ScanDesc = { (RT0__Struct[]){&_td_ConvTypes__ScanDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"ScanDesc", 8, 0, (1<<RT0__flagAtomic), RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ConvTypes", (RT0__Struct[]) { &_td_ConvTypes__ScanState, &_td_ConvTypes__ScanDesc, NULL }, 0 };

extern void OOC_ConvTypes_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_ConvTypes_init();
  }
  _mid.openCount++;
}
extern void OOC_ConvTypes_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_ConvTypes_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
