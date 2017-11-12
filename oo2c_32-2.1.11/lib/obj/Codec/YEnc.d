static void* _c0;
#include <Codec/YEnc.oh>
#include <Ascii.oh>
#include <CharClass.oh>
#include <IntStr.oh>
#include <Codec/UU.oh>
#define Codec_YEnc__lineLength 128
#define Codec_YEnc__maxLineLength 998
#define Codec_YEnc__escapeChar (OOC_CHAR8)'='
Codec_YEnc__YEnc Codec_YEnc__yenc;
static OOC_CHAR8 Codec_YEnc__LookingAt(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, const OOC_CHAR8 s__ref[], OOC_LEN s_0d);
static OOC_INT32 Codec_YEnc__GetNumber(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 *start, OOC_INT32 end);
static void Codec_YEnc__SkipWS(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 *start, OOC_INT32 end);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Codec_YEnc__YEnc = { (RT0__Struct[]){&_td_Codec_YEnc__YEncDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"YEnc", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_YEnc__YEncDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_Codec__CodecDesc,&_td_Codec_YEnc__YEncDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Codec__CodecDesc_INIT,(void*)Codec_YEnc__YEncDesc_NewDecoder,(void*)Codec_YEnc__YEncDesc_NewEncoder,(void*)Codec__CodecDesc_DecodeRegion,(void*)Codec__CodecDesc_Decode,(void*)Codec__CodecDesc_EncodeRegion,(void*)Codec__CodecDesc_Encode}, NULL, &_mid, (OOC_CHAR8*)"YEncDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_Codec_YEnc__Encoder = { (RT0__Struct[]){&_td_Codec_YEnc__EncoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Encoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_YEnc__EncoderDesc = { (RT0__Struct[]){&_td_Codec__EncoderDesc,&_td_Codec_YEnc__EncoderDesc}, (void*[]){(void*)Codec_YEnc__EncoderDesc_INIT,(void*)Codec__EncoderDesc_SetEscapeEncoder,(void*)Codec__EncoderDesc_Start,(void*)Codec_YEnc__EncoderDesc_EncodeLatin1,(void*)Codec_YEnc__EncoderDesc_EncodeUTF16,(void*)Codec__EncoderDesc_Encode,(void*)Codec_YEnc__EncoderDesc_Closure,(void*)Codec_YEnc__EncoderDesc_Reset,(void*)Codec__EncoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"EncoderDesc", 8, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Codec_YEnc__Decoder = { (RT0__Struct[]){&_td_Codec_YEnc__DecoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Decoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_YEnc__DecoderDesc = { (RT0__Struct[]){&_td_Codec__DecoderDesc,&_td_Codec_YEnc__DecoderDesc}, (void*[]){(void*)Codec_YEnc__DecoderDesc_INIT,(void*)Codec__DecoderDesc_Start,(void*)Codec_YEnc__DecoderDesc_Decode,(void*)Codec_YEnc__DecoderDesc_Reset,(void*)Codec__DecoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"DecoderDesc", 1, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec_YEnc__Header = { (RT0__Struct[]){&_td_Codec_YEnc__Header}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"Header", 304, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec_YEnc__2016 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 256, 256, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_YEnc__2967 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__3027 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__3279 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__3422 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_YEnc__4124 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__4353 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__7248 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__8449 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__10322 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__13094 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__13275 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 5097, 5097, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_YEnc__14628 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_YEnc__14819 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 4226, 4226, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Codec_YEnc__15948 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Codec:YEnc", (RT0__Struct[]) { &_td_Codec_YEnc__YEnc, &_td_Codec_YEnc__YEncDesc, &_td_Codec_YEnc__Encoder, &_td_Codec_YEnc__EncoderDesc, &_td_Codec_YEnc__Decoder, &_td_Codec_YEnc__DecoderDesc, &_td_Codec_YEnc__Header, NULL }, 0 };

extern void OOC_Codec_YEnc_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_CharClass_open(&_mid);
    OOC_Codec_open(&_mid);
    OOC_IntStr_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_Codec_UU_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Codec_YEnc_init();
  }
  _mid.openCount++;
}
extern void OOC_Codec_YEnc_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Codec_YEnc_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_CharClass_close(&_mid);
    OOC_Codec_close(&_mid);
    OOC_IntStr_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_Codec_UU_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
