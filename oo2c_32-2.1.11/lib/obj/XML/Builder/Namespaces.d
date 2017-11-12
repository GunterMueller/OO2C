static void* _c0;
#include <XML/Builder/Namespaces.oh>
#include <Msg.oh>
#include <LongStrings.oh>
#include <Object.oh>
#include <Exception.oh>
#include <URI/Parser.oh>
#include <URI/Fragment/Unparsed.oh>
#include <XML/Error.oh>
#include <XML/EntityResolver.oh>
#define XML_Builder_Namespaces__emptyURI 1
#define XML_Builder_Namespaces__malformedURIRef 2
#define XML_Builder_Namespaces__undeclaredPrefix 3
#define XML_Builder_Namespaces__nameClash 4
static XML_Error__Context XML_Builder_Namespaces__namespacesContext;
static void XML_Builder_Namespaces__SetErrorMessages(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Builder_Namespaces__1142 = { (RT0__Struct[]){&_td_XML_DTD__NamespaceDeclaration}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Namespaces__NamespaceList = { (RT0__Struct[]){&_td_XML_Builder_Namespaces__1142}, NULL, NULL, &_mid, (OOC_CHAR8*)"NamespaceList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Namespaces__ElementData = { (RT0__Struct[]){&_td_XML_Builder_Namespaces__ElementData}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"ElementData", 36, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Namespaces__1474 = { (RT0__Struct[]){&_td_XML_Builder_Namespaces__ElementData}, NULL, NULL, &_mid, NULL, 36, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Namespaces__Stack = { (RT0__Struct[]){&_td_XML_Builder_Namespaces__1474}, NULL, NULL, &_mid, (OOC_CHAR8*)"Stack", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Namespaces__Builder = { (RT0__Struct[]){&_td_XML_Builder_Namespaces__BuilderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Namespaces__BuilderDesc = { (RT0__Struct[]){&_td_XML_Builder__BuilderDesc,&_td_XML_Builder_Namespaces__BuilderDesc}, (void*[]){(void*)XML_Builder_Namespaces__BuilderDesc_SetLocator,(void*)XML_Builder_Namespaces__BuilderDesc_SetErrorListener,(void*)XML_Builder_Namespaces__BuilderDesc_StartDocument,(void*)XML_Builder_Namespaces__BuilderDesc_EndDocument,(void*)XML_Builder_Namespaces__BuilderDesc_StartDTD,(void*)XML_Builder_Namespaces__BuilderDesc_EndDTD,(void*)XML_Builder_Namespaces__BuilderDesc_StartElement,(void*)XML_Builder_Namespaces__BuilderDesc_EndElement,(void*)XML_Builder_Namespaces__BuilderDesc_Attribute,(void*)XML_Builder_Namespaces__BuilderDesc_NamespaceDeclaration,(void*)XML_Builder_Namespaces__BuilderDesc_AttributesDone,(void*)XML_Builder_Namespaces__BuilderDesc_SkippedEntity,(void*)XML_Builder_Namespaces__BuilderDesc_Characters,(void*)XML_Builder_Namespaces__BuilderDesc_StartCDATA,(void*)XML_Builder_Namespaces__BuilderDesc_EndCDATA,(void*)XML_Builder_Namespaces__BuilderDesc_StartEntity,(void*)XML_Builder_Namespaces__BuilderDesc_EndEntity,(void*)XML_Builder_Namespaces__BuilderDesc_EntityDecl,(void*)XML_Builder_Namespaces__BuilderDesc_Notation,(void*)XML_Builder_Namespaces__BuilderDesc_ProcessingInstruction,(void*)XML_Builder_Namespaces__BuilderDesc_Comment}, NULL, &_mid, (OOC_CHAR8*)"BuilderDesc", 36, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Namespaces__5435 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Namespaces__9154 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Namespaces__9447 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Namespaces__15287 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 128, 128, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Builder:Namespaces", (RT0__Struct[]) { &_td_XML_Builder_Namespaces__NamespaceList, &_td_XML_Builder_Namespaces__ElementData, &_td_XML_Builder_Namespaces__Stack, &_td_XML_Builder_Namespaces__Builder, &_td_XML_Builder_Namespaces__BuilderDesc, NULL }, 0 };

extern void OOC_XML_Builder_Namespaces_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Msg_open(&_mid);
    OOC_LongStrings_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_Parser_open(&_mid);
    OOC_URI_Fragment_Unparsed_open(&_mid);
    OOC_XML_Error_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_XML_EntityResolver_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Builder_Namespaces_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Builder_Namespaces_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Builder_Namespaces_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Msg_close(&_mid);
    OOC_LongStrings_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_Parser_close(&_mid);
    OOC_URI_Fragment_Unparsed_close(&_mid);
    OOC_XML_Error_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_XML_EntityResolver_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
