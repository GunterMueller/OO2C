#include <liboo2c.oh>
#include <RT0.oh>
#include <Out0.oh>
#include <HashCode.oh>
#include <Exception.oh>
#include <Ascii.oh>
#include <BinaryRider.oh>
#include <C.oh>
#include <Channel.oh>
#include <CharClass.oh>
#include <ConvTypes.oh>
#include <Err.oh>
#include <Files.oh>
#include <In.oh>
#include <IntConv.oh>
#include <IntStr.oh>
#include <LRealConv.oh>
#include <LRealMath.oh>
#include <LRealStr.oh>
#include <Log.oh>
#include <LongStrings.oh>
#include <Msg.oh>
#include <Out.oh>
#include <PosixFileDescr.oh>
#include <ProgramArgs.oh>
#include <RandomNumbers.oh>
#include <Real0.oh>
#include <RealConv.oh>
#include <RealMath.oh>
#include <RealStr.oh>
#include <StdChannels.oh>
#include <StringSearch.oh>
#include <Strings.oh>
#include <SysClock.oh>
#include <Termination.oh>
#include <TextRider.oh>
#include <Time.oh>
#include <Object.oh>
#include <Object/Boxed.oh>
#include <Object/BigInt.oh>
#include <ADT/Storable.oh>
#include <ADT/StringBuffer.oh>
#include <ADT/Dictionary.oh>
#include <ADT/ArrayList.oh>
#include <Logger/TimeStamp.oh>
#include <Logger.oh>
#include <IO.oh>
#include <IO/Address.oh>
#include <IO/Socket.oh>
#include <IO/FileChannel.oh>
#include <IO/SocketChannel.oh>
#include <IO/Memory.oh>
#include <IO/Buffer.oh>
#include <IO/StdChannels.oh>
#include <IO/Select.oh>
#include <IO/TextRider.oh>
#include <IO/BinaryRider.oh>
#include <libc.oh>
#include <libadt.oh>
#include <libxml.oh>
#include <Codec.oh>
#include <Codec/Ascii.oh>
#include <Codec/Latin1.oh>
#include <Codec/UU.oh>
#include <Codec/YEnc.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"liboo2c", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_liboo2c_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_RT0_open(&_mid);
    OOC_Out0_open(&_mid);
    OOC_HashCode_open(&_mid);
    OOC_Exception_open(&_mid);
    OOC_Ascii_open(&_mid);
    OOC_BinaryRider_open(&_mid);
    OOC_Channel_open(&_mid);
    OOC_CharClass_open(&_mid);
    OOC_ConvTypes_open(&_mid);
    OOC_Err_open(&_mid);
    OOC_Files_open(&_mid);
    OOC_In_open(&_mid);
    OOC_IntConv_open(&_mid);
    OOC_IntStr_open(&_mid);
    OOC_LRealConv_open(&_mid);
    OOC_LRealStr_open(&_mid);
    OOC_Log_open(&_mid);
    OOC_LongStrings_open(&_mid);
    OOC_Msg_open(&_mid);
    OOC_Out_open(&_mid);
    OOC_PosixFileDescr_open(&_mid);
    OOC_ProgramArgs_open(&_mid);
    OOC_RandomNumbers_open(&_mid);
    OOC_Real0_open(&_mid);
    OOC_RealConv_open(&_mid);
    OOC_RealStr_open(&_mid);
    OOC_StdChannels_open(&_mid);
    OOC_StringSearch_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_SysClock_open(&_mid);
    OOC_Termination_open(&_mid);
    OOC_TextRider_open(&_mid);
    OOC_Time_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_Object_BigInt_open(&_mid);
    OOC_ADT_Storable_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_ADT_ArrayList_open(&_mid);
    OOC_Logger_TimeStamp_open(&_mid);
    OOC_Logger_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_IO_Address_open(&_mid);
    OOC_IO_Socket_open(&_mid);
    OOC_IO_FileChannel_open(&_mid);
    OOC_IO_SocketChannel_open(&_mid);
    OOC_IO_Memory_open(&_mid);
    OOC_IO_Buffer_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
    OOC_IO_Select_open(&_mid);
    OOC_IO_TextRider_open(&_mid);
    OOC_IO_BinaryRider_open(&_mid);
    OOC_libadt_open(&_mid);
    OOC_libxml_open(&_mid);
    OOC_Codec_open(&_mid);
    OOC_Codec_Ascii_open(&_mid);
    OOC_Codec_Latin1_open(&_mid);
    OOC_Codec_UU_open(&_mid);
    OOC_Codec_YEnc_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_liboo2c_init();
  }
  _mid.openCount++;
}
extern void OOC_liboo2c_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_liboo2c_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_RT0_close(&_mid);
    OOC_Out0_close(&_mid);
    OOC_HashCode_close(&_mid);
    OOC_Exception_close(&_mid);
    OOC_Ascii_close(&_mid);
    OOC_BinaryRider_close(&_mid);
    OOC_Channel_close(&_mid);
    OOC_CharClass_close(&_mid);
    OOC_ConvTypes_close(&_mid);
    OOC_Err_close(&_mid);
    OOC_Files_close(&_mid);
    OOC_In_close(&_mid);
    OOC_IntConv_close(&_mid);
    OOC_IntStr_close(&_mid);
    OOC_LRealConv_close(&_mid);
    OOC_LRealStr_close(&_mid);
    OOC_Log_close(&_mid);
    OOC_LongStrings_close(&_mid);
    OOC_Msg_close(&_mid);
    OOC_Out_close(&_mid);
    OOC_PosixFileDescr_close(&_mid);
    OOC_ProgramArgs_close(&_mid);
    OOC_RandomNumbers_close(&_mid);
    OOC_Real0_close(&_mid);
    OOC_RealConv_close(&_mid);
    OOC_RealStr_close(&_mid);
    OOC_StdChannels_close(&_mid);
    OOC_StringSearch_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_SysClock_close(&_mid);
    OOC_Termination_close(&_mid);
    OOC_TextRider_close(&_mid);
    OOC_Time_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_Object_BigInt_close(&_mid);
    OOC_ADT_Storable_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_ADT_ArrayList_close(&_mid);
    OOC_Logger_TimeStamp_close(&_mid);
    OOC_Logger_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_IO_Address_close(&_mid);
    OOC_IO_Socket_close(&_mid);
    OOC_IO_FileChannel_close(&_mid);
    OOC_IO_SocketChannel_close(&_mid);
    OOC_IO_Memory_close(&_mid);
    OOC_IO_Buffer_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
    OOC_IO_Select_close(&_mid);
    OOC_IO_TextRider_close(&_mid);
    OOC_IO_BinaryRider_close(&_mid);
    OOC_libadt_close(&_mid);
    OOC_libxml_close(&_mid);
    OOC_Codec_close(&_mid);
    OOC_Codec_Ascii_close(&_mid);
    OOC_Codec_Latin1_close(&_mid);
    OOC_Codec_UU_close(&_mid);
    OOC_Codec_YEnc_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
