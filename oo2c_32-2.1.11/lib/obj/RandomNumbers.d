#include <RandomNumbers.oh>
static OOC_INT32 RandomNumbers__z;
static void RandomNumbers__NextRND(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"RandomNumbers", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_RandomNumbers_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_RandomNumbers_init();
  }
  _mid.openCount++;
}
extern void OOC_RandomNumbers_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_RandomNumbers_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
