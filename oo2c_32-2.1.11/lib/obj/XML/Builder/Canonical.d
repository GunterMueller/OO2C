#include <XML/Builder/Canonical.oh>
#include <LongStrings.oh>
#include <Ascii.oh>
#define XML_Builder_Canonical__initAttrList 8
#define XML_Builder_Canonical__incrAttrList 8
static void XML_Builder_Canonical__WriteQuoted(XML_UnicodeBuffer__Output out, const XML_DTD__StringVar str, OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end);
static void XML_Builder_Canonical__WriteDTD(XML_Builder_Canonical__Builder b, XML_UnicodeBuffer__CharArray root);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Builder_Canonical__Attribute = { (RT0__Struct[]){&_td_XML_Builder_Canonical__Attribute}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"Attribute", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Canonical__1306 = { (RT0__Struct[]){&_td_XML_Builder_Canonical__Attribute}, NULL, NULL, &_mid, NULL, 12, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Canonical__AttributeList = { (RT0__Struct[]){&_td_XML_Builder_Canonical__1306}, NULL, NULL, &_mid, (OOC_CHAR8*)"AttributeList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Canonical__Node = { (RT0__Struct[]){&_td_XML_Builder_Canonical__NodeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Node", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Canonical__NodeDesc = { (RT0__Struct[]){&_td_XML_Builder_Canonical__NodeDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"NodeDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Canonical__Builder = { (RT0__Struct[]){&_td_XML_Builder_Canonical__BuilderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Canonical__BuilderDesc = { (RT0__Struct[]){&_td_XML_Builder__BuilderDesc,&_td_XML_Builder_Canonical__BuilderDesc}, (void*[]){(void*)XML_Builder__BuilderDesc_SetLocator,(void*)XML_Builder__BuilderDesc_SetErrorListener,(void*)XML_Builder_Canonical__BuilderDesc_StartDocument,(void*)XML_Builder_Canonical__BuilderDesc_EndDocument,(void*)XML_Builder__BuilderDesc_StartDTD,(void*)XML_Builder__BuilderDesc_EndDTD,(void*)XML_Builder_Canonical__BuilderDesc_StartElement,(void*)XML_Builder_Canonical__BuilderDesc_EndElement,(void*)XML_Builder_Canonical__BuilderDesc_Attribute,(void*)XML_Builder__BuilderDesc_NamespaceDeclaration,(void*)XML_Builder_Canonical__BuilderDesc_AttributesDone,(void*)XML_Builder__BuilderDesc_SkippedEntity,(void*)XML_Builder_Canonical__BuilderDesc_Characters,(void*)XML_Builder__BuilderDesc_StartCDATA,(void*)XML_Builder__BuilderDesc_EndCDATA,(void*)XML_Builder__BuilderDesc_StartEntity,(void*)XML_Builder__BuilderDesc_EndEntity,(void*)XML_Builder__BuilderDesc_EntityDecl,(void*)XML_Builder_Canonical__BuilderDesc_Notation,(void*)XML_Builder_Canonical__BuilderDesc_ProcessingInstruction,(void*)XML_Builder__BuilderDesc_Comment}, NULL, &_mid, (OOC_CHAR8*)"BuilderDesc", 20, 1, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Builder:Canonical", (RT0__Struct[]) { &_td_XML_Builder_Canonical__Attribute, &_td_XML_Builder_Canonical__AttributeList, &_td_XML_Builder_Canonical__Node, &_td_XML_Builder_Canonical__NodeDesc, &_td_XML_Builder_Canonical__Builder, &_td_XML_Builder_Canonical__BuilderDesc, NULL }, 0 };

extern void OOC_XML_Builder_Canonical_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_LongStrings_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_Ascii_open(&_mid);
    OOC_XML_UnicodeCodec_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_XML_UnicodeBuffer_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Builder_Canonical_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Builder_Canonical_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Builder_Canonical_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_LongStrings_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_Ascii_close(&_mid);
    OOC_XML_UnicodeCodec_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_XML_UnicodeBuffer_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
