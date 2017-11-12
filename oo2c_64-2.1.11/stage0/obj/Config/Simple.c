#include <Config/Simple.d>
#include <__oo2c.h>
#include <setjmp.h>

void Config_Simple__Init(Config_Simple__Config config, Object__String defaultConfigFile) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)config;
  Config__InitConfig((Config__Config)i0);
  i1 = (OOC_INT64)defaultConfigFile;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 883));
  i2 = i2==0;
  if (i2) goto l3;
  *(OOC_INT64*)(_check_pointer(i0, 951)) = i1;
  goto l4;
l3:
  *(OOC_INT64*)(_check_pointer(i0, 913)) = 0;
l4:
  *(OOC_INT64*)((_check_pointer(i0, 1001))+8) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 1035))+16) = 0;
  i1 = (OOC_INT64)Config_Source_Environment__New();
  *(OOC_INT64*)((_check_pointer(i0, 1081))+24) = i1;
  i1 = (OOC_INT64)Config_Source_CmdLine__New();
  *(OOC_INT64*)((_check_pointer(i0, 1123))+32) = i1;
  i1 = (OOC_INT64)RT0__NewObject(_td__qtd1.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT64*)((_check_pointer(i0, 1166))+40) = i1;
  i1 = (OOC_INT64)Config__NewStringVar((Object__String8)((OOC_INT64)_c0));
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1225))+40);
  Config__SetPrototype((ADT_Dictionary__Dictionary)i2, (Object__String)((OOC_INT64)_c1), (Config__Variable)i1);
  i1 = (OOC_INT64)Config__NewIntegerVar(0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1291))+40);
  Config__SetPrototype((ADT_Dictionary__Dictionary)i2, (Object__String)((OOC_INT64)_c2), (Config__Variable)i1);
  i1 = (OOC_INT64)Config__NewBooleanVar(0u);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1358))+40);
  Config__SetPrototype((ADT_Dictionary__Dictionary)i2, (Object__String)((OOC_INT64)_c3), (Config__Variable)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1461))+40);
  i1 = (OOC_INT64)Config_Section_Options__New(((OOC_CHAR16[]){111,112,116,105,111,110,115,0}), 8, (ADT_Dictionary__Dictionary)i1);
  *(OOC_INT64*)((_check_pointer(i0, 1419))+48) = i1;
  i1 = (OOC_INT64)Config_Section_Arguments__New(((OOC_CHAR16[]){97,114,103,117,109,101,110,116,115,0}), 10);
  *(OOC_INT64*)((_check_pointer(i0, 1482))+56) = i1;
  i1 = (OOC_INT64)Config_Section__NewSectionList();
  *(OOC_INT64*)((_check_pointer(i0, 1536))+64) = i1;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1615))+48);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1589))+64);
  Config_Section__SectionListDesc_Add((Config_Section__SectionList)i2, (Config_Section__Section)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1663))+56);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1637))+64);
  Config_Section__SectionListDesc_Add((Config_Section__SectionList)i2, (Config_Section__Section)i1);
  *(OOC_INT64*)((_check_pointer(i0, 1692))+72) = 0;
  return;
  ;
}

Config_Simple__Config Config_Simple__New(Object__String defaultConfigFile) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_Config_Simple__Config.baseTypes[0]);
  i1 = (OOC_INT64)defaultConfigFile;
  Config_Simple__Init((Config_Simple__Config)i0, (Object__String)i1);
  return (Config_Simple__Config)i0;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileEnvVar(Config_Simple__Config config, Config_Source_Environment__VariableTemplate envTemplate) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)config;
  i1 = (OOC_INT64)envTemplate;
  *(OOC_INT64*)((_check_pointer(i0, 2010))+8) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_ConfigFileCmdLineOption(Config_Simple__Config config, Config_Source_CmdLine__OptionTemplate optionTemplate) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)config;
  i1 = (OOC_INT64)optionTemplate;
  *(OOC_INT64*)((_check_pointer(i0, 2178))+16) = i1;
  return;
  ;
}

void Config_Simple__ConfigDesc_Read(Config_Simple__Config config, Msg__MsgList errList) {
  register OOC_INT64 i0,i1,i2,i3;
  Msg__Msg errMsg;
  Config_Source_Environment__Command cmdEnv;
  Config_Source_CmdLine__Command cmdCmdLine;
  auto void Config_Simple__ConfigDesc_Read_EvaluateFile(Object__String fileName);
  auto void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source);
    
    void Config_Simple__ConfigDesc_Read_EvaluateFile(Object__String fileName) {
      register OOC_INT64 i0,i1,i2;
      Config_Parser__Parser p;

      i0 = (OOC_INT64)fileName;
      i0 = (OOC_INT64)Config_Parser__NewFile((Object__String)i0);
      p = (Config_Parser__Parser)i0;
      Config_Parser__ParserDesc_ParseDocument((Config_Parser__Parser)i0);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2846))+16);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 2855));
      i1 = i1==0;
      if (!i1) goto l4;
      i1 = (OOC_INT64)config;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2890))+64);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2923))+24);
      Config_Section__SectionListDesc_ProcessElements((Config_Section__SectionList)i1, (Config_Parser__Element)i2, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l4:
      i1 = (OOC_INT64)errList;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2984))+16);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2969)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      return;
      ;
    }

    
    void Config_Simple__ConfigDesc_Read_EvaluateSource(Config_Source__Source source) {
      register OOC_INT64 i0,i1,i2;
      IO_Memory__Channel buffer;
      Config_Parser__Parser p;

      i0 = (OOC_INT64)IO_Memory__Open();
      buffer = (IO_Memory__Channel)i0;
      i1 = (OOC_INT64)source;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3204)))), Config_Source__SourceDesc_Write)),Config_Source__SourceDesc_Write)((Config_Source__Source)i1, (IO__ByteChannel)i0, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14);
      IO_Memory__ChannelDesc_SetPos((IO_Memory__Channel)i0, 0);
      i0 = (OOC_INT64)Config_Parser__NewChannel((IO__ByteChannel)i0);
      p = (Config_Parser__Parser)i0;
      Config_Parser__ParserDesc_ParseDocument((Config_Parser__Parser)i0);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3589))+16);
      i1 = *(OOC_INT32*)(_check_pointer(i1, 3598));
      i1 = i1==0;
      if (!i1) goto l4;
      i1 = (OOC_INT64)config;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3633))+64);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3666))+24);
      Config_Section__SectionListDesc_ProcessElements((Config_Section__SectionList)i1, (Config_Parser__Element)i2, ((OOC_CHAR16[]){99,111,110,102,105,103,117,114,97,116,105,111,110,0}), 14, (Config_Parser__Parser)i0);
l4:
      i1 = (OOC_INT64)errList;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3727))+16);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3712)))), Msg__MsgListDesc_AppendList)),Msg__MsgListDesc_AppendList)((Msg__MsgList)i1, (Msg__MsgList)i0);
      return;
      ;
    }


  i0 = (OOC_INT64)config;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3794))+24);
  i1 = (OOC_INT64)Config_Source_Environment__EnvironmentDesc_Parse((Config_Source_Environment__Environment)i1);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l3;
  i2 = (OOC_INT64)errList;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 3848)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3896))+32);
  i2 = (OOC_INT64)ProgramArgs__args;
  i1 = (OOC_INT64)Config_Source_CmdLine__CmdLineDesc_Parse((Config_Source_CmdLine__CmdLine)i1, (Channel__Channel)i2);
  errMsg = (Msg__Msg)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l6;
  i2 = (OOC_INT64)errList;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 3967)))), Msg__MsgListDesc_Append)),Msg__MsgListDesc_Append)((Msg__MsgList)i2, (Msg__Msg)i1);
l6:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4014))+8);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l33;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4273))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4282))+8);
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4333))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4352))+8);
  i2 = i2!=i3;
  
l13:
  if (!i2) goto l25;
l16_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 4396));
  cmdEnv = (Config_Source_Environment__Command)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4333))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4352))+8);
  i2 = i2!=i3;
  
l21:
  if (i2) goto l16_loop;
l25:
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l33;
  Config_Source_Environment__CommandDesc_DoNotWrite((Config_Source_Environment__Command)i1);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4503))+16);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 4512));
  i2 = i2==0;
  if (i2) goto l30;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4648))+16);
  *(OOC_INT64*)(_check_pointer(i0, 4629)) = i1;
  goto l33;
l30:
  *(OOC_INT64*)(_check_pointer(i0, 4583)) = (OOC_INT64)0;
l33:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4709))+16);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l54;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5054))+32);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5063))+16);
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l54;
l38_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5134))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5153))+16);
  i2 = i2==i3;
  if (!i2) goto l48;
  Config_Source_CmdLine__CommandDesc_DoNotWrite((Config_Source_CmdLine__Command)i1);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5245))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5254)), 0);
  i2 = i2>=1;
  if (!i2) goto l48;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5294))+16);
  i2 = _check_pointer(i2, 5302);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 5302))*8);
  i2 = *(OOC_INT32*)(_check_pointer(i2, 5305));
  i2 = i2==0;
  if (i2) goto l45;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5461))+16);
  i2 = _check_pointer(i2, 5470);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT8, 5470))*8);
  *(OOC_INT64*)(_check_pointer(i0, 5438)) = i2;
  goto l48;
l45:
  *(OOC_INT64*)(_check_pointer(i0, 5343)) = (OOC_INT64)0;
l48:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 5549));
  cmdCmdLine = (Config_Source_CmdLine__Command)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l38_loop;
l54:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 5971));
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l57;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 6019));
  Config_Simple__ConfigDesc_Read_EvaluateFile((Object__String)i0);
l57:
  i0 = (OOC_INT64)config;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6065))+24);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  i0 = (OOC_INT64)config;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6103))+32);
  Config_Simple__ConfigDesc_Read_EvaluateSource((Config_Source__Source)i0);
  return;
  ;
}

void OOC_Config_Simple_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"string", 7, 0, 6);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"integer", 8, 0, 7);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"boolean", 8, 0, 7);

  return;
  ;
}

void OOC_Config_Simple_destroy(void) {
}

/* --- */
