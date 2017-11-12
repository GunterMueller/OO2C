static void* _c0;
#include <Codec.oh>
#include <Strings.oh>
#include <ADT/Dictionary.oh>
static ADT_Dictionary__Dictionary Codec__reg;
Codec__ExceptionEncoder Codec__exceptionEncoder;
static Object__String Codec__Cap(Object__String str);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Codec__Codec = { (RT0__Struct[]){&_td_Codec__CodecDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Codec", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__CodecDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_Codec__CodecDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Codec__CodecDesc_INIT,(void*)Codec__CodecDesc_NewDecoder,(void*)Codec__CodecDesc_NewEncoder,(void*)Codec__CodecDesc_DecodeRegion,(void*)Codec__CodecDesc_Decode,(void*)Codec__CodecDesc_EncodeRegion,(void*)Codec__CodecDesc_Encode}, NULL, &_mid, (OOC_CHAR8*)"CodecDesc", 8, 2, 0, RT0__strRecord };
RT0__StructDesc _td_Codec__Decoder = { (RT0__Struct[]){&_td_Codec__DecoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Decoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__DecoderDesc = { (RT0__Struct[]){&_td_Codec__DecoderDesc}, (void*[]){(void*)Codec__DecoderDesc_INIT,(void*)Codec__DecoderDesc_Start,(void*)Codec__DecoderDesc_Decode,(void*)Codec__DecoderDesc_Reset,(void*)Codec__DecoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"DecoderDesc", 0, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec__Encoder = { (RT0__Struct[]){&_td_Codec__EncoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Encoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__EncoderDesc = { (RT0__Struct[]){&_td_Codec__EncoderDesc}, (void*[]){(void*)Codec__EncoderDesc_INIT,(void*)Codec__EncoderDesc_SetEscapeEncoder,(void*)Codec__EncoderDesc_Start,(void*)Codec__EncoderDesc_EncodeLatin1,(void*)Codec__EncoderDesc_EncodeUTF16,(void*)Codec__EncoderDesc_Encode,(void*)Codec__EncoderDesc_Closure,(void*)Codec__EncoderDesc_Reset,(void*)Codec__EncoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"EncoderDesc", 4, 0, 0, RT0__strRecord };
RT0__StructDesc _td_Codec__CryptoDecoder = { (RT0__Struct[]){&_td_Codec__CryptoDecoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"CryptoDecoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__CryptoDecoderDesc = { (RT0__Struct[]){&_td_Codec__DecoderDesc,&_td_Codec__CryptoDecoderDesc}, (void*[]){(void*)Codec__CryptoDecoderDesc_INIT,(void*)Codec__DecoderDesc_Start,(void*)Codec__DecoderDesc_Decode,(void*)Codec__DecoderDesc_Reset,(void*)Codec__DecoderDesc_End,(void*)Codec__CryptoDecoderDesc_SetKey}, NULL, &_mid, (OOC_CHAR8*)"CryptoDecoderDesc", 0, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec__CryptoEncoder = { (RT0__Struct[]){&_td_Codec__CryptoEncoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"CryptoEncoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__CryptoEncoderDesc = { (RT0__Struct[]){&_td_Codec__EncoderDesc,&_td_Codec__CryptoEncoderDesc}, (void*[]){(void*)Codec__CryptoEncoderDesc_INIT,(void*)Codec__EncoderDesc_SetEscapeEncoder,(void*)Codec__EncoderDesc_Start,(void*)Codec__EncoderDesc_EncodeLatin1,(void*)Codec__EncoderDesc_EncodeUTF16,(void*)Codec__EncoderDesc_Encode,(void*)Codec__EncoderDesc_Closure,(void*)Codec__EncoderDesc_Reset,(void*)Codec__EncoderDesc_End,(void*)Codec__CryptoEncoderDesc_SetKey}, NULL, &_mid, (OOC_CHAR8*)"CryptoEncoderDesc", 4, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Codec__BufferLatin1 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, (OOC_CHAR8*)"BufferLatin1", 4096, 4096, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec__BufferUCS4 = { (RT0__Struct[]){&RT0__ucs4char}, NULL, NULL, &_mid, (OOC_CHAR8*)"BufferUCS4", 4096, 1024, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec__EncodingError = { (RT0__Struct[]){&_td_Codec__EncodingErrorDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"EncodingError", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__EncodingErrorDesc = { (RT0__Struct[]){&_td_Exception__ExceptionDesc,&_td_Exception__CheckedDesc,&_td_IO__ErrorDesc,&_td_Codec__EncodingErrorDesc}, (void*[]){(void*)Codec__EncodingErrorDesc_INIT,(void*)Exception__ExceptionDesc_GetMessage,(void*)Exception__ExceptionDesc_WriteBacktrace,(void*)Exception__ExceptionDesc_Name}, NULL, &_mid, (OOC_CHAR8*)"EncodingErrorDesc", 100, 3, 0, RT0__strRecord };
RT0__StructDesc _td_Codec__ExceptionEncoder = { (RT0__Struct[]){&_td_Codec__ExceptionEncoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ExceptionEncoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec__ExceptionEncoderDesc = { (RT0__Struct[]){&_td_Codec__EncoderDesc,&_td_Codec__ExceptionEncoderDesc}, (void*[]){(void*)Codec__EncoderDesc_INIT,(void*)Codec__EncoderDesc_SetEscapeEncoder,(void*)Codec__EncoderDesc_Start,(void*)Codec__ExceptionEncoderDesc_EncodeLatin1,(void*)Codec__ExceptionEncoderDesc_EncodeUTF16,(void*)Codec__EncoderDesc_Encode,(void*)Codec__EncoderDesc_Closure,(void*)Codec__EncoderDesc_Reset,(void*)Codec__EncoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"ExceptionEncoderDesc", 4, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Codec__5939 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__8293 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__9218 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__11293 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__11948 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__13642 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__14484 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__15241 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__16713 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__17028 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec__17807 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 128, 128, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Codec", (RT0__Struct[]) { &_td_Codec__Codec, &_td_Codec__CodecDesc, &_td_Codec__Decoder, &_td_Codec__DecoderDesc, &_td_Codec__Encoder, &_td_Codec__EncoderDesc, &_td_Codec__CryptoDecoder, &_td_Codec__CryptoDecoderDesc, &_td_Codec__CryptoEncoder, &_td_Codec__CryptoEncoderDesc, &_td_Codec__BufferLatin1, &_td_Codec__BufferUCS4, &_td_Codec__EncodingError, &_td_Codec__EncodingErrorDesc, &_td_Codec__ExceptionEncoder, &_td_Codec__ExceptionEncoderDesc, NULL }, 0 };

extern void OOC_Codec_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Strings_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Codec_init();
  }
  _mid.openCount++;
}
extern void OOC_Codec_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Codec_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Strings_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
