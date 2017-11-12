static void* _c0;
#include <Codec/UU.oh>
#include <Ascii.oh>
#define Codec_UU__lineLength 45
#define Codec_UU__lengthBufferPlain 48
#define Codec_UU__lengthBufferCode 63
Codec_UU__UU Codec_UU__uu;
static OOC_CHAR8 Codec_UU__LookingAt(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, const OOC_CHAR8 s__ref[], OOC_LEN s_0d);
static OOC_INT32 Codec_UU__DecodeByte(OOC_CHAR8 ch);
static OOC_CHAR8 Codec_UU__EncodeByte(OOC_INT32 b);
static void Codec_UU__EncodeLine(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, OOC_CHAR8 out[], OOC_LEN out_0d, OOC_INT32 *opos);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Codec_UU__UU = { (RT0__Struct[]){&_td_Codec_UU__UUDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"UU", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_UU__UUDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_Codec__CodecDesc,&_td_Codec_UU__UUDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Codec__CodecDesc_INIT,(void*)Codec_UU__UUDesc_NewDecoder,(void*)Codec_UU__UUDesc_NewEncoder,(void*)Codec__CodecDesc_DecodeRegion,(void*)Codec__CodecDesc_Decode,(void*)Codec__CodecDesc_EncodeRegion,(void*)Codec__CodecDesc_Encode}, NULL, &_mid, (OOC_CHAR8*)"UUDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_Codec_UU__Encoder = { (RT0__Struct[]){&_td_Codec_UU__EncoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Encoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_UU__EncoderDesc = { (RT0__Struct[]){&_td_Codec__EncoderDesc,&_td_Codec_UU__EncoderDesc}, (void*[]){(void*)Codec_UU__EncoderDesc_INIT,(void*)Codec__EncoderDesc_SetEscapeEncoder,(void*)Codec__EncoderDesc_Start,(void*)Codec_UU__EncoderDesc_EncodeLatin1,(void*)Codec_UU__EncoderDesc_EncodeUTF16,(void*)Codec__EncoderDesc_Encode,(void*)Codec_UU__EncoderDesc_Closure,(void*)Codec_UU__EncoderDesc_Reset,(void*)Codec__EncoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"EncoderDesc", 56, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Codec_UU__1382 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 48, 48, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_UU__Decoder = { (RT0__Struct[]){&_td_Codec_UU__DecoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Decoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_UU__DecoderDesc = { (RT0__Struct[]){&_td_Codec__DecoderDesc,&_td_Codec_UU__DecoderDesc}, (void*[]){(void*)Codec_UU__DecoderDesc_INIT,(void*)Codec__DecoderDesc_Start,(void*)Codec_UU__DecoderDesc_Decode,(void*)Codec_UU__DecoderDesc_Reset,(void*)Codec__DecoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"DecoderDesc", 76, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec_UU__2061 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 65, 65, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_UU__Header = { (RT0__Struct[]){&_td_Codec_UU__Header}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"Header", 260, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec_UU__2381 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 256, 256, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_UU__3097 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__3152 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__3497 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__3570 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__4095 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__6079 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__7105 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__7837 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__8039 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 4356, 4356, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_UU__10928 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__10995 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__11726 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__11917 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 4159, 4159, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_UU__13447 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_UU__13721 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 63, 63, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Codec:UU", (RT0__Struct[]) { &_td_Codec_UU__UU, &_td_Codec_UU__UUDesc, &_td_Codec_UU__Encoder, &_td_Codec_UU__EncoderDesc, &_td_Codec_UU__Decoder, &_td_Codec_UU__DecoderDesc, &_td_Codec_UU__Header, NULL }, 0 };

extern void OOC_Codec_UU_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_Codec_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Codec_UU_init();
  }
  _mid.openCount++;
}
extern void OOC_Codec_UU_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Codec_UU_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_Codec_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
