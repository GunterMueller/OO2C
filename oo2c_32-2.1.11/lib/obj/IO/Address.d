#include <IO/Address.oh>
IO_Address__Inet4 IO_Address__inet4Loopback;
IO_Address__Inet4 IO_Address__inet4Any;
IO_Address__Inet4 IO_Address__inet4Broadcast;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_Address__Inet = { (RT0__Struct[]){&_td_IO_Address__InetDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Inet", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Address__InetDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_IO_Address__InetDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode}, NULL, &_mid, (OOC_CHAR8*)"InetDesc", 0, 2, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_IO_Address__Inet4 = { (RT0__Struct[]){&_td_IO_Address__Inet4Desc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Inet4", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Address__Inet4Desc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_IO_Address__InetDesc,&_td_IO_Address__Inet4Desc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)IO_Address__Inet4Desc_ToString,(void*)IO_Address__Inet4Desc_Equals,(void*)IO_Address__Inet4Desc_HashCode}, NULL, &_mid, (OOC_CHAR8*)"Inet4Desc", 4, 3, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_IO_Address__Socket = { (RT0__Struct[]){&_td_IO_Address__SocketDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Socket", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Address__SocketDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_IO_Address__SocketDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)IO_Address__SocketDesc_GetSockAddr}, NULL, &_mid, (OOC_CHAR8*)"SocketDesc", 0, 2, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_IO_Address__SocketInet = { (RT0__Struct[]){&_td_IO_Address__SocketInetDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"SocketInet", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Address__SocketInetDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_IO_Address__SocketDesc,&_td_IO_Address__SocketInetDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)IO_Address__SocketInetDesc_ToString,(void*)IO_Address__SocketInetDesc_Equals,(void*)IO_Address__SocketInetDesc_HashCode,(void*)IO_Address__SocketInetDesc_GetSockAddr}, NULL, &_mid, (OOC_CHAR8*)"SocketInetDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_IO_Address__2025 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_IO_Address__SockAddr = { (RT0__Struct[]){&_td_IO_Address__2025}, NULL, NULL, &_mid, (OOC_CHAR8*)"SockAddr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Address__UnknownHostException = { (RT0__Struct[]){&_td_IO_Address__UnknownHostExceptionDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"UnknownHostException", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Address__UnknownHostExceptionDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_Exception__CheckedDesc,&_td_IO__ErrorDesc,&_td_IO_Address__UnknownHostExceptionDesc}, (void*[]){(void*)IO__ErrorDesc_INIT,(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_WriteBacktrace,(void*)Exception__ExceptionDesc_Name}, NULL, &_mid, (OOC_CHAR8*)"UnknownHostExceptionDesc", 92, 3, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:Address", (RT0__Struct[]) { &_td_IO_Address__Inet, &_td_IO_Address__InetDesc, &_td_IO_Address__Inet4, &_td_IO_Address__Inet4Desc, &_td_IO_Address__Socket, &_td_IO_Address__SocketDesc, &_td_IO_Address__SocketInet, &_td_IO_Address__SocketInetDesc, &_td_IO_Address__SockAddr, &_td_IO_Address__UnknownHostException, &_td_IO_Address__UnknownHostExceptionDesc, NULL }, 0 };

extern void OOC_IO_Address_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_RT0_open(&_mid);
    OOC_Exception_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_IO_Address_init();
  }
  _mid.openCount++;
}
extern void OOC_IO_Address_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_IO_Address_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_RT0_close(&_mid);
    OOC_Exception_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
