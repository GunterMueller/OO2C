#include <IO/Socket.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_Socket__Socket = { (RT0__Struct[]){&_td_IO_Socket__SocketDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Socket", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Socket__SocketDesc = { (RT0__Struct[]){&_td_IO_Socket__SocketDesc}, (void*[]){(void*)IO_Socket__SocketDesc_SetBlocking,(void*)IO_Socket__SocketDesc_Bind,(void*)IO_Socket__SocketDesc_Connect,(void*)IO_Socket__SocketDesc_FinishConnect,(void*)IO_Socket__SocketDesc_RemoteAddress,(void*)IO_Socket__SocketDesc_Close}, NULL, &_mid, (OOC_CHAR8*)"SocketDesc", 4, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_IO_Socket__Server = { (RT0__Struct[]){&_td_IO_Socket__ServerDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Server", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Socket__ServerDesc = { (RT0__Struct[]){&_td_IO_Socket__ServerDesc}, (void*[]){(void*)IO_Socket__ServerDesc_SetReuseAddress,(void*)IO_Socket__ServerDesc_SetBlocking,(void*)IO_Socket__ServerDesc_Bind,(void*)IO_Socket__ServerDesc_Accept,(void*)IO_Socket__ServerDesc_Close}, NULL, &_mid, (OOC_CHAR8*)"ServerDesc", 4, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_IO_Socket__4081 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_IO_Socket__4278 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:Socket", (RT0__Struct[]) { &_td_IO_Socket__Socket, &_td_IO_Socket__SocketDesc, &_td_IO_Socket__Server, &_td_IO_Socket__ServerDesc, NULL }, 0 };

extern void OOC_IO_Socket_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_IO_open(&_mid);
    OOC_IO_Address_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_IO_Socket_init();
  }
  _mid.openCount++;
}
extern void OOC_IO_Socket_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_IO_Socket_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_IO_close(&_mid);
    OOC_IO_Address_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
