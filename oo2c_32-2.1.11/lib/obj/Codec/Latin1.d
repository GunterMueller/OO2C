static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
static void* _c4;
static void* _c5;
static void* _c6;
static void* _c7;
static void* _c8;
#include <Codec/Latin1.oh>
Codec_Latin1__Latin1 Codec_Latin1__codec;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Codec_Latin1__Latin1 = { (RT0__Struct[]){&_td_Codec_Latin1__Latin1Desc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Latin1", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_Latin1__Latin1Desc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_Codec__CodecDesc,&_td_Codec_Latin1__Latin1Desc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)Codec_Latin1__Latin1Desc_INIT,(void*)Codec_Latin1__Latin1Desc_NewDecoder,(void*)Codec_Latin1__Latin1Desc_NewEncoder,(void*)Codec_Latin1__Latin1Desc_DecodeRegion,(void*)Codec__CodecDesc_Decode,(void*)Codec_Latin1__Latin1Desc_EncodeRegion,(void*)Codec__CodecDesc_Encode}, NULL, &_mid, (OOC_CHAR8*)"Latin1Desc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_Codec_Latin1__Decoder = { (RT0__Struct[]){&_td_Codec_Latin1__DecoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Decoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_Latin1__DecoderDesc = { (RT0__Struct[]){&_td_Codec__DecoderDesc,&_td_Codec_Latin1__DecoderDesc}, (void*[]){(void*)Codec__DecoderDesc_INIT,(void*)Codec__DecoderDesc_Start,(void*)Codec_Latin1__DecoderDesc_Decode,(void*)Codec__DecoderDesc_Reset,(void*)Codec__DecoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"DecoderDesc", 0, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_Codec_Latin1__Encoder = { (RT0__Struct[]){&_td_Codec_Latin1__EncoderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Encoder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_Latin1__EncoderDesc = { (RT0__Struct[]){&_td_Codec__EncoderDesc,&_td_Codec_Latin1__EncoderDesc}, (void*[]){(void*)Codec__EncoderDesc_INIT,(void*)Codec__EncoderDesc_SetEscapeEncoder,(void*)Codec__EncoderDesc_Start,(void*)Codec_Latin1__EncoderDesc_EncodeLatin1,(void*)Codec_Latin1__EncoderDesc_EncodeUTF16,(void*)Codec__EncoderDesc_Encode,(void*)Codec__EncoderDesc_Closure,(void*)Codec__EncoderDesc_Reset,(void*)Codec__EncoderDesc_End}, NULL, &_mid, (OOC_CHAR8*)"EncoderDesc", 4, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Codec_Latin1__519 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_Latin1__870 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_Latin1__1082 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_Latin1__1454 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_Latin1__1443 = { (RT0__Struct[]){&_td_Codec_Latin1__1454}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Codec_Latin1__2086 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Codec_Latin1__2351 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Codec:Latin1", (RT0__Struct[]) { &_td_Codec_Latin1__Latin1, &_td_Codec_Latin1__Latin1Desc, &_td_Codec_Latin1__Decoder, &_td_Codec_Latin1__DecoderDesc, &_td_Codec_Latin1__Encoder, &_td_Codec_Latin1__EncoderDesc, NULL }, 0 };

extern void OOC_Codec_Latin1_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_Codec_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Codec_Latin1_init();
  }
  _mid.openCount++;
}
extern void OOC_Codec_Latin1_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Codec_Latin1_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_Codec_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
