#include <XML/Basic/Parser.oh>
#include <Msg.oh>
#include <XML/Parser.oh>
#include <XML/Builder/Validation.oh>
#define XML_Basic_Parser__initialNestingDepth 4
#define XML_Basic_Parser__invalidRootElement 1
#define XML_Basic_Parser__junkAfterDocument 2
#define XML_Basic_Parser__namespacesNotSupported 3
#define XML_Basic_Parser__nestingLevelOverflow 4
#define XML_Basic_Parser__invalidAttributeName 10
#define XML_Basic_Parser__invalidAttributeValue 11
#define XML_Basic_Parser__requiredAttributeMissing 12
#define XML_Basic_Parser__invalidChildName 20
#define XML_Basic_Parser__invalidChildElement 21
#define XML_Basic_Parser__requiredChildMissing 22
#define XML_Basic_Parser__nonWhitespaceContent 23
#define XML_Basic_Parser__elementCheckFailed 24
static XML_Error__Context XML_Basic_Parser__msgParserContext;
static void XML_Basic_Parser__InitBuild(XML_Basic_Parser__Build b, XML_Basic_Element__RootFactory rootFactory, OOC_INT32 maxNestingDepth);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Basic_Parser__788 = { (RT0__Struct[]){&_td_XML_Basic_Element__Element}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Basic_Parser__ElementStack = { (RT0__Struct[]){&_td_XML_Basic_Parser__788}, NULL, NULL, &_mid, (OOC_CHAR8*)"ElementStack", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Parser__Build = { (RT0__Struct[]){&_td_XML_Basic_Parser__BuildDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Build", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Basic_Parser__BuildDesc = { (RT0__Struct[]){&_td_XML_Builder__BuilderDesc,&_td_XML_Basic_Parser__BuildDesc}, (void*[]){(void*)XML_Basic_Parser__BuildDesc_SetLocator,(void*)XML_Basic_Parser__BuildDesc_SetErrorListener,(void*)XML_Builder__BuilderDesc_StartDocument,(void*)XML_Builder__BuilderDesc_EndDocument,(void*)XML_Builder__BuilderDesc_StartDTD,(void*)XML_Builder__BuilderDesc_EndDTD,(void*)XML_Basic_Parser__BuildDesc_StartElement,(void*)XML_Basic_Parser__BuildDesc_EndElement,(void*)XML_Basic_Parser__BuildDesc_Attribute,(void*)XML_Builder__BuilderDesc_NamespaceDeclaration,(void*)XML_Basic_Parser__BuildDesc_AttributesDone,(void*)XML_Builder__BuilderDesc_SkippedEntity,(void*)XML_Basic_Parser__BuildDesc_Characters,(void*)XML_Builder__BuilderDesc_StartCDATA,(void*)XML_Builder__BuilderDesc_EndCDATA,(void*)XML_Builder__BuilderDesc_StartEntity,(void*)XML_Builder__BuilderDesc_EndEntity,(void*)XML_Builder__BuilderDesc_EntityDecl,(void*)XML_Builder__BuilderDesc_Notation,(void*)XML_Builder__BuilderDesc_ProcessingInstruction,(void*)XML_Builder__BuilderDesc_Comment,(void*)XML_Basic_Parser__BuildDesc_Error,(void*)XML_Basic_Parser__BuildDesc_ErrorName,(void*)XML_Basic_Parser__BuildDesc_ErrorString}, NULL, &_mid, (OOC_CHAR8*)"BuildDesc", 32, 1, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Basic:Parser", (RT0__Struct[]) { &_td_XML_Basic_Parser__ElementStack, &_td_XML_Basic_Parser__Build, &_td_XML_Basic_Parser__BuildDesc, NULL }, 0 };

extern void OOC_XML_Basic_Parser_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Msg_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_XML_Error_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_XML_UnicodeCodec_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_XML_Parser_open(&_mid);
    OOC_XML_Builder_Validation_open(&_mid);
    OOC_XML_Error_open(&_mid);
    OOC_XML_Basic_Element_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Basic_Parser_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Basic_Parser_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Basic_Parser_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Msg_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_XML_Error_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_XML_UnicodeCodec_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_XML_Parser_close(&_mid);
    OOC_XML_Builder_Validation_close(&_mid);
    OOC_XML_Error_close(&_mid);
    OOC_XML_Basic_Element_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
