#include <XML/UnicodeCodec/ASCII.oh>
XML_UnicodeCodec_ASCII__Factory XML_UnicodeCodec_ASCII__factory;
static void XML_UnicodeCodec_ASCII__Init(XML_UnicodeCodec_ASCII__Codec codec, OOC_INT8 bom);
static XML_UnicodeCodec_ASCII__Codec XML_UnicodeCodec_ASCII__New(OOC_INT8 bom);
static void XML_UnicodeCodec_ASCII__InitFactory(XML_UnicodeCodec_ASCII__Factory f);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__Codec = { (RT0__Struct[]){&_td_XML_UnicodeCodec_ASCII__CodecDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Codec", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__CodecDesc = { (RT0__Struct[]){&_td_XML_UnicodeCodec__CodecDesc,&_td_XML_UnicodeCodec_ASCII__CodecDesc}, (void*[]){(void*)XML_UnicodeCodec_ASCII__CodecDesc_Decode,(void*)XML_UnicodeCodec_ASCII__CodecDesc_Encode,(void*)XML_UnicodeCodec__CodecDesc_EncodeBOM}, NULL, &_mid, (OOC_CHAR8*)"CodecDesc", 8, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__Factory = { (RT0__Struct[]){&_td_XML_UnicodeCodec_ASCII__FactoryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Factory", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__FactoryDesc = { (RT0__Struct[]){&_td_XML_UnicodeCodec__FactoryDesc,&_td_XML_UnicodeCodec_ASCII__FactoryDesc}, (void*[]){(void*)XML_UnicodeCodec_ASCII__FactoryDesc_NewCodec,(void*)XML_UnicodeCodec_ASCII__FactoryDesc_NewCodecBOM,(void*)XML_UnicodeCodec_ASCII__FactoryDesc_GetEncodingName}, NULL, &_mid, (OOC_CHAR8*)"FactoryDesc", 1, 1, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__884 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__1010 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__1687 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__1817 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__3660 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_UnicodeCodec_ASCII__3943 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:UnicodeCodec:ASCII", (RT0__Struct[]) { &_td_XML_UnicodeCodec_ASCII__Codec, &_td_XML_UnicodeCodec_ASCII__CodecDesc, &_td_XML_UnicodeCodec_ASCII__Factory, &_td_XML_UnicodeCodec_ASCII__FactoryDesc, NULL }, 0 };

extern void OOC_XML_UnicodeCodec_ASCII_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_XML_UnicodeCodec_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_UnicodeCodec_ASCII_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_UnicodeCodec_ASCII_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_UnicodeCodec_ASCII_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_XML_UnicodeCodec_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
