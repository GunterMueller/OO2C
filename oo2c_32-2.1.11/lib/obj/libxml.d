#include <libxml.oh>
#include <OS/Files.oh>
#include <OS/Path.oh>
#include <OS/ProcessManagement.oh>
#include <OS/ProcessParameters.oh>
#include <URI/Authority/RegistryBased.oh>
#include <URI/Authority/ServerBased.oh>
#include <URI/Authority/Unparsed.oh>
#include <URI/CharClass.oh>
#include <URI/Error.oh>
#include <URI/Parser.oh>
#include <URI/String.oh>
#include <URI/Fragment/Unparsed.oh>
#include <URI/Query/Unparsed.oh>
#include <URI/Query/WWWForm.oh>
#include <URI/Scheme/CurrentDoc.oh>
#include <URI/Scheme/File.oh>
#include <URI/Scheme/HTTP.oh>
#include <URI/Scheme/Hierarchical.oh>
#include <URI/Scheme/MailTo.oh>
#include <URI/Scheme/NNTP.oh>
#include <URI/Scheme/Opaque.oh>
#include <URI.oh>
#include <XML/Builder/Canonical.oh>
#include <XML/Builder/ParserProtocol.oh>
#include <XML/Builder/Namespaces.oh>
#include <XML/Builder/Validation.oh>
#include <XML/Builder.oh>
#include <XML/Error.oh>
#include <XML/InputBuffer.oh>
#include <XML/Parser.oh>
#include <XML/UnicodeBuffer.oh>
#include <XML/UnicodeCodec.oh>
#include <XML/Writer.oh>
#include <XML/UnicodeCodec/ASCII.oh>
#include <XML/UnicodeCodec/ImportAll.oh>
#include <XML/UnicodeCodec/Latin1.oh>
#include <XML/UnicodeCodec/UTF16.oh>
#include <XML/UnicodeCodec/UTF8.oh>
#include <XML/DTD.oh>
#include <XML/Locator.oh>
#include <XML/EntityResolver.oh>
#include <XML/Basic/Element.oh>
#include <XML/Basic/Parser.oh>
#include <XML/Basic/DataType.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"libxml", (RT0__Struct[]) { NULL }, 0 };

extern void OOC_libxml_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_OS_Files_open(&_mid);
    OOC_OS_Path_open(&_mid);
    OOC_OS_ProcessManagement_open(&_mid);
    OOC_OS_ProcessParameters_open(&_mid);
    OOC_URI_Authority_RegistryBased_open(&_mid);
    OOC_URI_Authority_ServerBased_open(&_mid);
    OOC_URI_Authority_Unparsed_open(&_mid);
    OOC_URI_CharClass_open(&_mid);
    OOC_URI_Error_open(&_mid);
    OOC_URI_Parser_open(&_mid);
    OOC_URI_String_open(&_mid);
    OOC_URI_Fragment_Unparsed_open(&_mid);
    OOC_URI_Query_Unparsed_open(&_mid);
    OOC_URI_Query_WWWForm_open(&_mid);
    OOC_URI_Scheme_CurrentDoc_open(&_mid);
    OOC_URI_Scheme_File_open(&_mid);
    OOC_URI_Scheme_HTTP_open(&_mid);
    OOC_URI_Scheme_Hierarchical_open(&_mid);
    OOC_URI_Scheme_MailTo_open(&_mid);
    OOC_URI_Scheme_NNTP_open(&_mid);
    OOC_URI_Scheme_Opaque_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_XML_Builder_Canonical_open(&_mid);
    OOC_XML_Builder_ParserProtocol_open(&_mid);
    OOC_XML_Builder_Namespaces_open(&_mid);
    OOC_XML_Builder_Validation_open(&_mid);
    OOC_XML_Builder_open(&_mid);
    OOC_XML_Error_open(&_mid);
    OOC_XML_InputBuffer_open(&_mid);
    OOC_XML_Parser_open(&_mid);
    OOC_XML_UnicodeBuffer_open(&_mid);
    OOC_XML_UnicodeCodec_open(&_mid);
    OOC_XML_Writer_open(&_mid);
    OOC_XML_UnicodeCodec_ASCII_open(&_mid);
    OOC_XML_UnicodeCodec_ImportAll_open(&_mid);
    OOC_XML_UnicodeCodec_Latin1_open(&_mid);
    OOC_XML_UnicodeCodec_UTF16_open(&_mid);
    OOC_XML_UnicodeCodec_UTF8_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_XML_Locator_open(&_mid);
    OOC_XML_EntityResolver_open(&_mid);
    OOC_XML_Basic_Element_open(&_mid);
    OOC_XML_Basic_Parser_open(&_mid);
    OOC_XML_Basic_DataType_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_libxml_init();
  }
  _mid.openCount++;
}
extern void OOC_libxml_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_libxml_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_OS_Files_close(&_mid);
    OOC_OS_Path_close(&_mid);
    OOC_OS_ProcessManagement_close(&_mid);
    OOC_OS_ProcessParameters_close(&_mid);
    OOC_URI_Authority_RegistryBased_close(&_mid);
    OOC_URI_Authority_ServerBased_close(&_mid);
    OOC_URI_Authority_Unparsed_close(&_mid);
    OOC_URI_CharClass_close(&_mid);
    OOC_URI_Error_close(&_mid);
    OOC_URI_Parser_close(&_mid);
    OOC_URI_String_close(&_mid);
    OOC_URI_Fragment_Unparsed_close(&_mid);
    OOC_URI_Query_Unparsed_close(&_mid);
    OOC_URI_Query_WWWForm_close(&_mid);
    OOC_URI_Scheme_CurrentDoc_close(&_mid);
    OOC_URI_Scheme_File_close(&_mid);
    OOC_URI_Scheme_HTTP_close(&_mid);
    OOC_URI_Scheme_Hierarchical_close(&_mid);
    OOC_URI_Scheme_MailTo_close(&_mid);
    OOC_URI_Scheme_NNTP_close(&_mid);
    OOC_URI_Scheme_Opaque_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_XML_Builder_Canonical_close(&_mid);
    OOC_XML_Builder_ParserProtocol_close(&_mid);
    OOC_XML_Builder_Namespaces_close(&_mid);
    OOC_XML_Builder_Validation_close(&_mid);
    OOC_XML_Builder_close(&_mid);
    OOC_XML_Error_close(&_mid);
    OOC_XML_InputBuffer_close(&_mid);
    OOC_XML_Parser_close(&_mid);
    OOC_XML_UnicodeBuffer_close(&_mid);
    OOC_XML_UnicodeCodec_close(&_mid);
    OOC_XML_Writer_close(&_mid);
    OOC_XML_UnicodeCodec_ASCII_close(&_mid);
    OOC_XML_UnicodeCodec_ImportAll_close(&_mid);
    OOC_XML_UnicodeCodec_Latin1_close(&_mid);
    OOC_XML_UnicodeCodec_UTF16_close(&_mid);
    OOC_XML_UnicodeCodec_UTF8_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_XML_Locator_close(&_mid);
    OOC_XML_EntityResolver_close(&_mid);
    OOC_XML_Basic_Element_close(&_mid);
    OOC_XML_Basic_Parser_close(&_mid);
    OOC_XML_Basic_DataType_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
