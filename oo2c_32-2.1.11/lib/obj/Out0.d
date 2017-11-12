#include <Out0.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Out0__212 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Out0__251 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Out0__294 = { (RT0__Struct[]){&RT0__ucs4char}, NULL, NULL, &_mid, NULL, 4, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Out0", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_Out0_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_RT0_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Out0_init();
  }
  _mid.openCount++;
}
extern void OOC_Out0_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Out0_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_RT0_close(&_mid);
  }
}

/* --- */
