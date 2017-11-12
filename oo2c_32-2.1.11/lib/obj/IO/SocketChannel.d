#include <IO/SocketChannel.oh>
#include <IO/FileChannel.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_SocketChannel__Channel = { (RT0__Struct[]){&_td_IO_SocketChannel__ChannelDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Channel", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_SocketChannel__ChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc,&_td_IO__ByteChannelDesc,&_td_IO_SocketChannel__ChannelDesc}, (void*[]){(void*)IO__ByteChannelDesc_INIT,(void*)IO_SocketChannel__ChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO_SocketChannel__ChannelDesc_SetBlocking,(void*)IO_SocketChannel__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO__ChannelDesc_SetPos,(void*)IO_SocketChannel__ChannelDesc_Read,(void*)IO_SocketChannel__ChannelDesc_Write,(void*)IO__ByteChannelDesc_Flush,(void*)IO__ByteChannelDesc_TransferTo,(void*)IO_SocketChannel__ChannelDesc_Connect,(void*)IO_SocketChannel__ChannelDesc_FinishConnect}, NULL, &_mid, (OOC_CHAR8*)"ChannelDesc", 16, 2, 0, RT0__strRecord };
RT0__StructDesc _td_IO_SocketChannel__ServerChannel = { (RT0__Struct[]){&_td_IO_SocketChannel__ServerChannelDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ServerChannel", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_SocketChannel__ServerChannelDesc = { (RT0__Struct[]){&_td_IO__ChannelDesc,&_td_IO_SocketChannel__ServerChannelDesc}, (void*[]){(void*)IO__ChannelDesc_INIT,(void*)IO_SocketChannel__ServerChannelDesc_FileDescriptor,(void*)IO__ChannelDesc_RegisterWithSelector,(void*)IO__ChannelDesc_KeyForSelector,(void*)IO_SocketChannel__ServerChannelDesc_SetBlocking,(void*)IO__ChannelDesc_Close,(void*)IO__ChannelDesc_CloseAndRegister,(void*)IO__ChannelDesc_SetPos,(void*)IO_SocketChannel__ServerChannelDesc_Accept}, NULL, &_mid, (OOC_CHAR8*)"ServerChannelDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_IO_SocketChannel__2128 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_IO_SocketChannel__2481 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:SocketChannel", (RT0__Struct[]) { &_td_IO_SocketChannel__Channel, &_td_IO_SocketChannel__ChannelDesc, &_td_IO_SocketChannel__ServerChannel, &_td_IO_SocketChannel__ServerChannelDesc, NULL }, 0 };

extern void OOC_IO_SocketChannel_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_IO_open(&_mid);
    OOC_IO_Address_open(&_mid);
    OOC_IO_Socket_open(&_mid);
    OOC_IO_FileChannel_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_IO_SocketChannel_init();
  }
  _mid.openCount++;
}
extern void OOC_IO_SocketChannel_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_IO_SocketChannel_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_IO_close(&_mid);
    OOC_IO_Address_close(&_mid);
    OOC_IO_Socket_close(&_mid);
    OOC_IO_FileChannel_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
