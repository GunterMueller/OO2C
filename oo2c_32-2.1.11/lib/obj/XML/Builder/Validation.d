#include <XML/Builder/Validation.oh>
#include <Ascii.oh>
#include <Msg.oh>
#include <LongStrings.oh>
#include <XML/Error.oh>
#include <XML/Parser.oh>
typedef struct XML_Builder_Validation__IDDeclDesc *XML_Builder_Validation__IDDecl;
typedef struct XML_Builder_Validation__IDDeclDesc {
  XML_DTD__Declaration next;
  XML_UnicodeBuffer__CharArray name;
} XML_Builder_Validation__IDDeclDesc;
#define XML_Builder_Validation__attributeNotDeclared 1
#define XML_Builder_Validation__notName 2
#define XML_Builder_Validation__notNames 3
#define XML_Builder_Validation__noSuchGeneralEntity 4
#define XML_Builder_Validation__notAnUnparsedEntity 5
#define XML_Builder_Validation__multipleIDAttr 6
#define XML_Builder_Validation__multipleNOTATIONAttr 7
#define XML_Builder_Validation__emptyElemWithNOTATION 8
#define XML_Builder_Validation__notationMismatch 9
#define XML_Builder_Validation__notationAlreadyDeclared 10
#define XML_Builder_Validation__noSuchNotation 11
#define XML_Builder_Validation__notNmtoken 12
#define XML_Builder_Validation__notNmtokens 13
#define XML_Builder_Validation__notInEnumeration 14
#define XML_Builder_Validation__fixedDefaultMismatch 15
#define XML_Builder_Validation__invalidDefaultID 16
#define XML_Builder_Validation__invalidDefaultValue 17
#define XML_Builder_Validation__multipleIDs 18
#define XML_Builder_Validation__invalidIDREF 19
#define XML_Builder_Validation__invalidStandaloneWhitespace 20
#define XML_Builder_Validation__invalidStandaloneAttrNormalization 21
#define XML_Builder_Validation__invalidStandaloneAttrEntityRef 22
#define XML_Builder_Validation__invalidStandaloneDefaultAttr 23
#define XML_Builder_Validation__invalidStandaloneElemEntityRef 24
#define XML_Builder_Validation__invalidCharacterContent 25
#define XML_Builder_Validation__rootMismatch 26
#define XML_Builder_Validation__mixedTypeDuplicate 27
#define XML_Builder_Validation__unknownUnparsedEntityNotation 28
#define XML_Builder_Validation__expectedEndTag 29
#define XML_Builder_Validation__expectedElement 30
#define XML_Builder_Validation__noSuchElementType 31
#define XML_Builder_Validation__invalidContentInEMPTY 32
#define XML_Builder_Validation__multipleElemDecl 33
#define XML_Builder_Validation__invalidElementContentCDATA 34
#define XML_Builder_Validation__duplicateToken 35
static XML_Error__Context XML_Builder_Validation__validationContext;
static XML_DTD__ElementDecl XML_Builder_Validation__dummyElement;
static void XML_Builder_Validation__Err(XML_Builder_Validation__Builder b, OOC_INT32 code);
static void XML_Builder_Validation__ErrString(XML_Builder_Validation__Builder b, OOC_INT32 code, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, XML_UnicodeBuffer__CharArray value);
static void XML_Builder_Validation__ErrString2(XML_Builder_Validation__Builder b, OOC_INT32 code, const OOC_CHAR8 name1__ref[], OOC_LEN name1_0d, XML_UnicodeBuffer__CharArray value1, const OOC_CHAR8 name2__ref[], OOC_LEN name2_0d, XML_UnicodeBuffer__CharArray value2);
static void XML_Builder_Validation__ErrString3(XML_Builder_Validation__Builder b, OOC_INT32 code, const OOC_CHAR8 name1__ref[], OOC_LEN name1_0d, XML_UnicodeBuffer__CharArray value1, const OOC_CHAR8 name2__ref[], OOC_LEN name2_0d, XML_UnicodeBuffer__CharArray value2, const OOC_CHAR8 name3__ref[], OOC_LEN name3_0d, XML_UnicodeBuffer__CharArray value3);
static void XML_Builder_Validation__IncErrorPos(XML_Builder_Validation__Builder b, OOC_INT32 delta);
static OOC_CHAR8 XML_Builder_Validation__IsS(OOC_CHAR16 ch);
static OOC_CHAR8 XML_Builder_Validation__IsName(OOC_CHAR16 string[], OOC_LEN string_0d);
static OOC_CHAR8 XML_Builder_Validation__IsNames(OOC_CHAR16 string[], OOC_LEN string_0d);
static OOC_CHAR8 XML_Builder_Validation__IsNmtoken(OOC_CHAR16 string[], OOC_LEN string_0d);
static OOC_CHAR8 XML_Builder_Validation__IsNmtokens(OOC_CHAR16 string[], OOC_LEN string_0d);
static OOC_CHAR8 XML_Builder_Validation__IsStandalone(XML_Builder_Validation__Builder b);
static XML_Builder_Validation__IDDecl XML_Builder_Validation__NewIDDecl(XML_UnicodeBuffer__CharArray name);
static void XML_Builder_Validation__PushElement(XML_Builder_Validation__Builder b, XML_DTD__Declaration elemDecl);
static void XML_Builder_Validation__PopElement(XML_Builder_Validation__Builder b);
static void XML_Builder_Validation__CheckEmpty(XML_Builder_Validation__Builder b);
static void XML_Builder_Validation__SetErrorMessages(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Builder_Validation__Builder = { (RT0__Struct[]){&_td_XML_Builder_Validation__BuilderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Validation__1116 = { (RT0__Struct[]){&_td_XML_Builder_Validation__1116}, (void*[]){}, NULL, &_mid, NULL, 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Validation__1103 = { (RT0__Struct[]){&_td_XML_Builder_Validation__1116}, NULL, NULL, &_mid, NULL, 8, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__Stack = { (RT0__Struct[]){&_td_XML_Builder_Validation__1103}, NULL, NULL, &_mid, (OOC_CHAR8*)"Stack", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Validation__BuilderDesc = { (RT0__Struct[]){&_td_XML_Builder__BuilderDesc,&_td_XML_Builder_Validation__BuilderDesc}, (void*[]){(void*)XML_Builder_Validation__BuilderDesc_SetLocator,(void*)XML_Builder_Validation__BuilderDesc_SetErrorListener,(void*)XML_Builder_Validation__BuilderDesc_StartDocument,(void*)XML_Builder_Validation__BuilderDesc_EndDocument,(void*)XML_Builder_Validation__BuilderDesc_StartDTD,(void*)XML_Builder_Validation__BuilderDesc_EndDTD,(void*)XML_Builder_Validation__BuilderDesc_StartElement,(void*)XML_Builder_Validation__BuilderDesc_EndElement,(void*)XML_Builder_Validation__BuilderDesc_Attribute,(void*)XML_Builder_Validation__BuilderDesc_NamespaceDeclaration,(void*)XML_Builder_Validation__BuilderDesc_AttributesDone,(void*)XML_Builder_Validation__BuilderDesc_SkippedEntity,(void*)XML_Builder_Validation__BuilderDesc_Characters,(void*)XML_Builder_Validation__BuilderDesc_StartCDATA,(void*)XML_Builder_Validation__BuilderDesc_EndCDATA,(void*)XML_Builder_Validation__BuilderDesc_StartEntity,(void*)XML_Builder_Validation__BuilderDesc_EndEntity,(void*)XML_Builder_Validation__BuilderDesc_EntityDecl,(void*)XML_Builder_Validation__BuilderDesc_Notation,(void*)XML_Builder_Validation__BuilderDesc_ProcessingInstruction,(void*)XML_Builder_Validation__BuilderDesc_Comment}, NULL, &_mid, (OOC_CHAR8*)"BuilderDesc", 40, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Validation__IDDecl = { (RT0__Struct[]){&_td_XML_Builder_Validation__IDDeclDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"IDDecl", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Builder_Validation__IDDeclDesc = { (RT0__Struct[]){&_td_XML_DTD__DeclarationDesc,&_td_XML_Builder_Validation__IDDeclDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"IDDeclDesc", 8, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Builder_Validation__4060 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__4414 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__4478 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__4900 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__4964 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__5028 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__5786 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__6145 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__6743 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__7107 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Builder_Validation__30648 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 128, 128, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Builder:Validation", (RT0__Struct[]) { &_td_XML_Builder_Validation__Builder, &_td_XML_Builder_Validation__Stack, &_td_XML_Builder_Validation__BuilderDesc, &_td_XML_Builder_Validation__IDDecl, &_td_XML_Builder_Validation__IDDeclDesc, NULL }, 0 };

extern void OOC_XML_Builder_Validation_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_Msg_open(&_mid);
    OOC_LongStrings_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_XML_Error_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_XML_Parser_open(&_mid);
    OOC_XML_Regexp_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Builder_Validation_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Builder_Validation_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Builder_Validation_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_Msg_close(&_mid);
    OOC_LongStrings_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_XML_Error_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_XML_Parser_close(&_mid);
    OOC_XML_Regexp_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
