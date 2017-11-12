#include <XML/Builder/ParserProtocol.oh>
#include <IntStr.oh>
#include <URI/Scheme/File.oh>
static void XML_Builder_ParserProtocol__String(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, XML_UnicodeBuffer__CharArray string);
static void XML_Builder_ParserProtocol__Int(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, OOC_INT32 value);
static void XML_Builder_ParserProtocol__Boolean(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, OOC_CHAR8 value);
static void XML_Builder_ParserProtocol__WriteURI(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, URI__URI uri);
static void XML_Builder_ParserProtocol__WritePos(XML_Builder_ParserProtocol__Builder b);
static void XML_Builder_ParserProtocol__Notation(XML_Builder_ParserProtocol__Builder b, XML_DTD__Notation notation, OOC_CHAR8 writePos);
static void XML_Builder_ParserProtocol__Entity(XML_Builder_ParserProtocol__Builder b, XML_DTD__Entity entity, OOC_CHAR8 writePos);
static void XML_Builder_ParserProtocol__NamespaceDeclaration(XML_Writer__Writer w, XML_DTD__NamespaceDeclaration namespaceDecl);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Builder_ParserProtocol__Builder = { (RT0__Struct[]){&_td_XML_Builder_ParserProtocol__BuilderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_ParserProtocol__BuilderDesc = { (RT0__Struct[]){&_td_XML_Builder__BuilderDesc,&_td_XML_Builder_ParserProtocol__BuilderDesc}, (void*[]){(void*)XML_Builder_ParserProtocol__BuilderDesc_SetLocator,(void*)XML_Builder__BuilderDesc_SetErrorListener,(void*)XML_Builder_ParserProtocol__BuilderDesc_StartDocument,(void*)XML_Builder_ParserProtocol__BuilderDesc_EndDocument,(void*)XML_Builder_ParserProtocol__BuilderDesc_StartDTD,(void*)XML_Builder_ParserProtocol__BuilderDesc_EndDTD,(void*)XML_Builder_ParserProtocol__BuilderDesc_StartElement,(void*)XML_Builder_ParserProtocol__BuilderDesc_EndElement,(void*)XML_Builder_ParserProtocol__BuilderDesc_Attribute,(void*)XML_Builder_ParserProtocol__BuilderDesc_NamespaceDeclaration,(void*)XML_Builder_ParserProtocol__BuilderDesc_AttributesDone,(void*)XML_Builder_ParserProtocol__BuilderDesc_SkippedEntity,(void*)XML_Builder_ParserProtocol__BuilderDesc_Characters,(void*)XML_Builder_ParserProtocol__BuilderDesc_StartCDATA,(void*)XML_Builder_ParserProtocol__BuilderDesc_EndCDATA,(void*)XML_Builder_ParserProtocol__BuilderDesc_StartEntity,(void*)XML_Builder_ParserProtocol__BuilderDesc_EndEntity,(void*)XML_Builder_ParserProtocol__BuilderDesc_EntityDecl,(void*)XML_Builder_ParserProtocol__BuilderDesc_Notation,(void*)XML_Builder_ParserProtocol__BuilderDesc_ProcessingInstruction,(void*)XML_Builder_ParserProtocol__BuilderDesc_Comment}, NULL, &_mid, (OOC_CHAR8*)"BuilderDesc", 8, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_ParserProtocol__1380 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_ParserProtocol__1591 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_ParserProtocol__1642 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 32, 32, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_XML_Builder_ParserProtocol__1827 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_ParserProtocol__2056 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Builder:ParserProtocol", (RT0__Struct[]) { &_td_XML_Builder_ParserProtocol__Builder, &_td_XML_Builder_ParserProtocol__BuilderDesc, NULL }, 0 };

extern void OOC_XML_Builder_ParserProtocol_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_IntStr_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_Scheme_File_open(&_mid);
    OOC_XML_UnicodeCodec_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_XML_Writer_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Builder_ParserProtocol_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Builder_ParserProtocol_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Builder_ParserProtocol_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_IntStr_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_Scheme_File_close(&_mid);
    OOC_XML_UnicodeCodec_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_XML_Writer_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
