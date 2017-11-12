#include <OOC/Config.d>
#include <__oo2c.h>
#include <setjmp.h>

Config_Section_Options__Option OOC_Config__AddOption(Object__String name, Config__Variable init) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_Config__options;
  i1 = (OOC_INT32)name;
  i2 = (OOC_INT32)init;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 974)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i0, (Object__String)i1, (Config__Variable)i2);
  return (Config_Section_Options__Option)i0;
  ;
}

void OOC_Config__AddCmdLine(const OOC_CHAR8 options__ref[], OOC_LEN options_0d, const OOC_CHAR8 _template__ref[], OOC_LEN _template_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(options,OOC_CHAR8 ,options_0d)
  OOC_ALLOCATE_VPAR(_template,OOC_CHAR8 ,_template_0d)

  OOC_INITIALIZE_VPAR(options__ref,options,OOC_CHAR8 ,options_0d)
  OOC_INITIALIZE_VPAR(_template__ref,_template,OOC_CHAR8 ,_template_0d)
  i0 = (OOC_INT32)OOC_Config__cmdLine;
  i0 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate((Config_Source_CmdLine__CmdLine)i0, (void*)(OOC_INT32)options, options_0d, (void*)(OOC_INT32)_template, _template_0d);
  return;
  ;
}

void OOC_Config__AddRepositoryListEnv(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_Config__config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1479))+12);
  i0 = (OOC_INT32)Config_Source_Environment__EnvironmentDesc_AddListTemplate((Config_Source_Environment__Environment)i0, (Object__String8)((OOC_INT32)_c0), (Object__String8)((OOC_INT32)_c1), 58u);
  return;
  ;
}

static void OOC_Config__InitConfig(Object__String8 defaultConfigFile) {
  register OOC_INT32 i0,i1,i2;
  Config_Section_Options__Option configFile;

  i0 = (OOC_INT32)defaultConfigFile;
  i1 = (OOC_INT32)Config_Simple__New((Object__String)i0);
  OOC_Config__config = (Config_Simple__Config)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1821))+16);
  OOC_Config__cmdLine = (Config_Source_CmdLine__CmdLine)i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1855))+28);
  OOC_Config__arguments = (Config_Section_Arguments__Section)i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 1889))+24);
  OOC_Config__options = (Config_Section_Options__Section)i1;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)i0);
  i1 = (OOC_INT32)OOC_Config__options;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1926)))), Config_Section_Options__SectionDesc_Set)),Config_Section_Options__SectionDesc_Set)((Config_Section_Options__Section)i1, (Object__String)((OOC_INT32)_c2), (Config__Variable)i0);
  configFile = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)OOC_Config__cmdLine;
  i0 = (OOC_INT32)Config_Source_CmdLine__CmdLineDesc_AddOptionTemplate((Config_Source_CmdLine__CmdLine)i0, (OOC_CHAR8*)"--config", 9, (OOC_CHAR8*)"<option><set name=\047config-file\047>$1</set></option>", 50);
  i1 = (OOC_INT32)OOC_Config__config;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2031)))), Config_Simple__ConfigDesc_ConfigFileCmdLineOption)),Config_Simple__ConfigDesc_ConfigFileCmdLineOption)((Config_Simple__Config)i1, (Config_Source_CmdLine__OptionTemplate)i0);
  i0 = (OOC_INT32)OOC_Config__config;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2196))+12);
  i0 = (OOC_INT32)Config_Source_Environment__EnvironmentDesc_AddVariableTemplate((Config_Source_Environment__Environment)i0, (Object__String8)((OOC_INT32)_c3), (Object__String8)((OOC_INT32)_c4));
  i1 = (OOC_INT32)OOC_Config__config;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2171)))), Config_Simple__ConfigDesc_ConfigFileEnvVar)),Config_Simple__ConfigDesc_ConfigFileEnvVar)((Config_Simple__Config)i1, (Config_Source_Environment__VariableTemplate)i0);
  i0 = (OOC_INT32)OOC_Config_Pragmas__New();
  OOC_Config__pragmas = (OOC_Config_Pragmas__Section)i0;
  i1 = (OOC_INT32)OOC_Config__config;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2350))+32);
  Config_Section__SectionListDesc_Add((Config_Section__SectionList)i1, (Config_Section__Section)i0);
  i0 = (OOC_INT32)OOC_Config__pragmas;
  OOC_Config_StdPragmas__CreateVariables((OOC_Config_Pragmas__Section)i0);
  i0 = (OOC_INT32)OOC_Config_Repositories__New();
  OOC_Config__repositories = (OOC_Config_Repositories__Section)i0;
  i1 = (OOC_INT32)OOC_Config__config;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2472))+32);
  Config_Section__SectionListDesc_Add((Config_Section__SectionList)i1, (Config_Section__Section)i0);
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c5));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c6), (Config__Variable)i0);
  OOC_Config__xsltproc = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--xsltproc", 11, (OOC_CHAR8*)"<options><set name=\047xsltproc\047>$1</set></options>", 49);
  return;
  ;
}

void OOC_Config__Read(Msg__MsgList errList) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_Config__config;
  i1 = (OOC_INT32)errList;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2772)))), Config_Simple__ConfigDesc_Read)),Config_Simple__ConfigDesc_Read)((Config_Simple__Config)i0, (Msg__MsgList)i1);
  return;
  ;
}

OOC_CHAR8 OOC_Config__HaveXsltProc(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_Config__xsltproc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2867))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2867))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2881)))), &_td_Config__StringVarDesc, 2881)), 2891));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2881)))), &_td_Config__StringVarDesc, 2881)), 2891));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2898)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i1, (Object__Object)((OOC_INT32)_c7));
  return (!i0);
  ;
}

void OOC_OOC_Config_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"OOC_REPS", 9, 0, 8);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"<repositories><file-system>$1</file-system></repositories>", 59, 0, 58);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"config-file", 12, 0, 11);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"OO2CRC", 7, 0, 6);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"<option><set name=\047config-file\047>$1</set></option>", 50, 0, 49);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)"xsltproc", 9, 0, 8);
  _c6 = Object__NewLatin1Region((OOC_CHAR8*)"xsltproc", 9, 0, 8);
  _c7 = Object__NewLatin1Region((OOC_CHAR8*)"no", 3, 0, 2);
  _c8 = Object__NewLatin1Region((OOC_CHAR8*)"/usr/home/ooc-devel/local-ooc2/lib/oo2c/oo2crc.xml", 51, 0, 50);

  OOC_Config__InitConfig((Object__String8)((OOC_INT32)_c8));
  RT0__poisonHeap = 85;
  return;
  ;
}

void OOC_OOC_Config_destroy(void) {
}

/* --- */
