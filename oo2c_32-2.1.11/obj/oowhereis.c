#include <oowhereis.d>
#include <__oo2c.h>
#include <setjmp.h>

static void oowhereis__WriteHelp(void) {

  Out__String((OOC_CHAR8*)"Usage: oowhereis [options] <file>", 34);
  Out__Ln();
  Out__String((OOC_CHAR8*)"Options:", 9);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--config <file>           Use <file> as primary configuration file.", 68);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--repository <directory>  Add repository.", 42);
  Out__Ln();
  Out__String((OOC_CHAR8*)"-r <directory>            Add repository.", 42);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--help, -h                Write this text and exit.", 52);
  Out__Ln();
  return;
  ;
}

static OOC_INT32 oowhereis__GetExt(Object__String path) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT32)path;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 1728));
  i = i1;
  i2 = i1!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1772)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i1-1));
  i2 = i2!=46u;
  
l5:
  if (i2) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1809)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i1-1));
  i2 = i2!=47u;
  
l9:
  if (!i2) goto l25;
l12_loop:
  i1 = i1-1;
  i = i1;
  i2 = i1!=0;
  if (i2) goto l15;
  i2=0u;
  goto l17;
l15:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1772)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i1-1));
  i2 = i2!=46u;
  
l17:
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1809)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, (i1-1));
  i2 = i2!=47u;
  
l21:
  if (i2) goto l12_loop;
l25:
  i2 = i1==0;
  if (i2) goto l32;
  i1 = i1-1;
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1916)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i1);
  i0 = i0==46u;
  if (i0) goto l30;
  return (-1);
  goto l33;
l30:
  return i1;
  goto l33;
l32:
  return (-1);
l33:
  _failed_function(1654); return 0;
  ;
}

static OOC_CHAR8 oowhereis__Query(void) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object__String arg;
  OOC_INT32 extPos;
  Object__String ext;
  OOC_INT8 fileId;
  ADT_StringBuffer__StringBuffer module;
  OOC_INT32 pos;
  Object__String8 str;
  Object__CharsLatin1 chars;
  OOC_Repository__Module m;
  URI__URI uri;

  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = (OOC_INT32)Config_Section_Arguments__SectionDesc_Get((Config_Section_Arguments__Section)i0, 0);
  arg = (Object__String)i0;
  i1 = oowhereis__GetExt((Object__String)i0);
  extPos = i1;
  i2 = i1>=0;
  if (i2) goto l3;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 2435));
  extPos = i1;
  i2 = (OOC_INT32)_c0;
  ext = (Object__String)i2;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
  goto l4;
l3:
  i2 = *(OOC_INT32*)(_check_pointer(i0, 2397));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2375)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, i1, i2);
  ext = (Object__String)i2;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l4:
  i1 = i1==((OOC_INT32)_c1);
  if (i1) goto l7;
  fileId = 0;
  i1=0;
  goto l8;
l7:
  fileId = 1;
  i1=1;
l8:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2643)))), Object__StringDesc_Substring)),Object__StringDesc_Substring)((Object__String)i0, 0, i2);
  arg = (Object__String)i0;
  i2 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c2));
  module = (ADT_StringBuffer__StringBuffer)i2;
  pos = 0;
  i3 = *(OOC_INT32*)(_check_pointer(i0, 2736));
  i3 = 0!=i3;
  if (!i3) goto l20;
  i3 = (OOC_INT32)_c3;
  i4=0;
l11_loop:
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2761)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i4);
  i5 = i5==47u;
  if (i5) goto l14;
  i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2875)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2860)))), ADT_StringBuffer__StringBufferDesc_AppendChar)),ADT_StringBuffer__StringBufferDesc_AppendChar)((ADT_StringBuffer__StringBuffer)i2, i5);
  goto l15;
l14:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2809)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i3);
l15:
  i4 = i4+1;
  pos = i4;
  i5 = *(OOC_INT32*)(_check_pointer(i0, 2736));
  i5 = i4!=i5;
  if (i5) goto l11_loop;
l20:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2944)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i2);
  arg = (Object__String)i0;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2976)))), Object__StringDesc_ToString8)),Object__StringDesc_ToString8)((Object__String)i0, 63u);
  str = (Object__String8)i2;
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i2);
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3069)), 0);
  i4 = (OOC_INT32)OOC_Config__repositories;
  i2 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i4, (void*)(_check_pointer(i2, 3069)), i3);
  m = (OOC_Repository__Module)i2;
  i3 = i2!=0;
  if (i3) goto l23;
  Out__String((OOC_CHAR8*)"Error: Can\047t find module ", 26);
  Out__Object((Object__Object)i0);
  Out__Ln();
  return 0u;
  goto l24;
l23:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3109)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i2, i1, 1u);
  uri = (URI__URI)i0;
  i0 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3159)))), &_td_URI_Scheme_File__URIDesc, 3159)));
  Out__Object((Object__Object)i0);
  Out__Ln();
  return 1u;
l24:
  _failed_function(2019); return 0;
  ;
}

static void oowhereis__NewConfig(void) {
  register OOC_INT32 i0;

  OOC_Config__AddRepositoryListEnv();
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--repository,-r", 16, (OOC_CHAR8*)"<repositories><file-system>$1</file-system></repositories>", 59);
  i0 = (OOC_INT32)Config__NewBooleanVar(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c4), (Config__Variable)i0);
  oowhereis__help = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine((OOC_CHAR8*)"-h,--help", 10, (OOC_CHAR8*)"<options><set name=\047help\047>TRUE</set></options>", 47);
  OOC_Config_CCompiler__RegisterConfig();
  return;
  ;
}

void OOC_oowhereis_init(void) {
  register OOC_INT32 i0,i1;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)".Mod", 5, 0, 4);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)".Sym", 5, 0, 4);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c3 = Object__NewLatin1Char(58u);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"help", 5, 0, 4);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  i0 = (OOC_INT32)OOC_Error__NewList((Object__String)((OOC_INT32)_c5));
  oowhereis__cfgErrList = (OOC_Error__List)i0;
  oowhereis__NewConfig();
  i0 = (OOC_INT32)oowhereis__cfgErrList;
  OOC_Config__Read((Msg__MsgList)i0);
  i0 = (OOC_INT32)oowhereis__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 3891));
  i1 = i1!=0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)IO_StdChannels__stderr;
  OOC_Error__ListDesc_Write((OOC_Error__List)i0, (IO__ByteChannel)i1);
l3:
  i0 = (OOC_INT32)oowhereis__cfgErrList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  i0 = !i0;
  if (i0) goto l18;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i0 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i0 = i0!=1;
  if (i0) goto l8;
  i0 = (OOC_INT32)oowhereis__help;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4067))+8);
  i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4082)))), &_td_Config__BooleanVarDesc, 4082)), 4093));
  
  goto l10;
l8:
  i0=1u;
l10:
  if (i0) goto l16;
  i0 = oowhereis__Query();
  if (i0) goto l14;
  _halt(1);
  goto l19;
l14:
  _halt(0);
  goto l19;
l16:
  oowhereis__WriteHelp();
  goto l19;
l18:
  _halt(1);
l19:
  return;
  ;
}

void OOC_oowhereis_destroy(void) {
}

/* --- */
