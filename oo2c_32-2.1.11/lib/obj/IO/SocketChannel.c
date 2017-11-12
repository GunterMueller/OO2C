#include <IO/SocketChannel.d>
#include <__oo2c.h>
#include <setjmp.h>

void IO_SocketChannel__ChannelDesc_SetBlocking(IO_SocketChannel__Channel ch, OOC_CHAR8 block) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1451))+8);
  i2 = block;
  IO_Socket__SocketDesc_SetBlocking((IO_Socket__Socket)i1, i2);
  *(OOC_UINT8*)((_check_pointer(i0, 1485))+12) = i2;
  return;
  ;
}

OOC_CHAR8 IO_SocketChannel__ChannelDesc_Connect(IO_SocketChannel__Channel ch, IO_Address__Socket endPoint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1696))+8);
  i2 = (OOC_INT32)endPoint;
  i1 = IO_Socket__SocketDesc_Connect((IO_Socket__Socket)i1, (IO_Address__Socket)i2);
  *(OOC_UINT8*)((_check_pointer(i0, 1680))+13) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 1754))+13);
  *(OOC_UINT8*)((_check_pointer(i0, 1729))+14) = (!i1);
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 1779))+13);
  return i0;
  ;
}

OOC_CHAR8 IO_SocketChannel__ChannelDesc_FinishConnect(IO_SocketChannel__Channel ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1904))+8);
  i1 = IO_Socket__SocketDesc_FinishConnect((IO_Socket__Socket)i1);
  *(OOC_UINT8*)((_check_pointer(i0, 1888))+13) = i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 1938))+13);
  if (!i1) goto l3;
  i1 = *(OOC_UINT32*)(_check_pointer(i0, 1967));
  *(OOC_UINT32*)(_check_pointer(i0, 1967)) = (_clear_bit(i1,3));
  *(OOC_UINT8*)((_check_pointer(i0, 2001))+14) = 0u;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 2052))+13);
  return i0;
  ;
}

OOC_INT32 IO_SocketChannel__ChannelDesc_Read(IO_SocketChannel__Channel ch, OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 res;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2287))+8);
  i2 = start;
  i3 = length;
  i1 = IO_Socket__Read((IO_Socket__Socket)i1, (void*)(OOC_INT32)buffer, (-1), i2, i3);
  res = i1;
  i2 = i1==0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = i3!=0;
  
l5:
  if (!i2) goto l7;
  i2 = *(OOC_UINT32*)(_check_pointer(i0, 2370));
  *(OOC_UINT32*)(_check_pointer(i0, 2370)) = (_clear_bit(i2,0));
l7:
  return i1;
  ;
}

OOC_INT32 IO_SocketChannel__ChannelDesc_Write(IO_SocketChannel__Channel ch, const OOC_CHAR8 buffer[], OOC_LEN buffer_0d, OOC_INT32 start, OOC_INT32 length) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 res;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2642))+8);
  i2 = start;
  i3 = length;
  i1 = IO_Socket__Write((IO_Socket__Socket)i1, (void*)(OOC_INT32)buffer, (-1), i2, i3);
  res = i1;
  i2 = i1==0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = i3!=0;
  
l5:
  if (!i2) goto l7;
  i2 = *(OOC_UINT32*)(_check_pointer(i0, 2725));
  *(OOC_UINT32*)(_check_pointer(i0, 2725)) = (_clear_bit(i2,1));
l7:
  return i1;
  ;
}

void IO_SocketChannel__ChannelDesc_Close(IO_SocketChannel__Channel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  IO__ChannelDesc_Close((IO__Channel)i0);
  *(OOC_UINT8*)((_check_pointer(i0, 2871))+13) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 2898))+14) = 0u;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2933))+8);
  IO_Socket__SocketDesc_Close((IO_Socket__Socket)i0);
  return;
  ;
}

IO_SocketChannel__Channel IO_SocketChannel__Open(void) {
  register OOC_INT32 i0,i1;
  IO_SocketChannel__Channel ch;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_SocketChannel__Channel.baseTypes[0]);
  ch = (IO_SocketChannel__Channel)i0;
  i1 = (OOC_INT32)IO_Socket__New();
  *(OOC_INT32*)((_check_pointer(i0, 3058))+8) = i1;
  IO__ByteChannelDesc_INIT((IO__ByteChannel)i0);
  *(OOC_UINT8*)((_check_pointer(i0, 3105))+12) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 3130))+13) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 3157))+14) = 0u;
  return (IO_SocketChannel__Channel)i0;
  ;
}

IO_SocketChannel__Channel IO_SocketChannel__Connect(IO_Address__Socket remote) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)IO_SocketChannel__Open();
  i1 = (OOC_INT32)remote;
  i1 = IO_SocketChannel__ChannelDesc_Connect((IO_SocketChannel__Channel)i0, (IO_Address__Socket)i1);
  return (IO_SocketChannel__Channel)i0;
  ;
}

OOC_INT32 IO_SocketChannel__ChannelDesc_FileDescriptor(IO_SocketChannel__Channel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3499))+8);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 3506));
  return i0;
  ;
}

IO_SocketChannel__ServerChannel IO_SocketChannel__OpenServer(void) {
  register OOC_INT32 i0,i1;
  IO_SocketChannel__ServerChannel ch;

  i0 = (OOC_INT32)RT0__NewObject(_td_IO_SocketChannel__ServerChannel.baseTypes[0]);
  ch = (IO_SocketChannel__ServerChannel)i0;
  i1 = (OOC_INT32)IO_Socket__NewServer();
  *(OOC_INT32*)((_check_pointer(i0, 3648))+8) = i1;
  IO__ChannelDesc_INIT((IO__Channel)i0);
  return (IO_SocketChannel__ServerChannel)i0;
  ;
}

void IO_SocketChannel__ServerChannelDesc_SetBlocking(IO_SocketChannel__ServerChannel ch, OOC_CHAR8 block) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3819))+8);
  i1 = block;
  IO_Socket__ServerDesc_SetBlocking((IO_Socket__Server)i0, i1);
  return;
  ;
}

IO_SocketChannel__Channel IO_SocketChannel__ServerChannelDesc_Accept(IO_SocketChannel__ServerChannel ch) {
  register OOC_INT32 i0,i1,i2;
  IO_Socket__Socket socket;
  IO_SocketChannel__Channel client;

  i0 = (OOC_INT32)ch;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4316))+8);
  i1 = (OOC_INT32)IO_Socket__ServerDesc_Accept((IO_Socket__Server)i1);
  socket = (IO_Socket__Socket)i1;
  i2 = i1==(OOC_INT32)0;
  if (i2) goto l3;
  i0 = (OOC_INT32)RT0__NewObject(_td_IO_SocketChannel__Channel.baseTypes[0]);
  client = (IO_SocketChannel__Channel)i0;
  IO__ByteChannelDesc_INIT((IO__ByteChannel)i0);
  *(OOC_INT32*)((_check_pointer(i0, 4479))+8) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 4510))+13) = 1u;
  *(OOC_UINT8*)((_check_pointer(i0, 4542))+14) = 0u;
  return (IO_SocketChannel__Channel)i0;
  goto l4;
l3:
  i1 = *(OOC_UINT32*)(_check_pointer(i0, 4374));
  *(OOC_UINT32*)(_check_pointer(i0, 4374)) = (_clear_bit(i1,2));
  return (IO_SocketChannel__Channel)(OOC_INT32)0;
l4:
  _failed_function(3897); return 0;
  ;
}

OOC_INT32 IO_SocketChannel__ServerChannelDesc_FileDescriptor(IO_SocketChannel__ServerChannel ch) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4705))+8);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 4712));
  return i0;
  ;
}

void OOC_IO_SocketChannel_init(void) {

  return;
  ;
}

void OOC_IO_SocketChannel_destroy(void) {
}

/* --- */
