#include <OOC/SymbolTable/ImportModules.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable_ImportModules__ErrorContextDesc_GetTemplate(OOC_SymbolTable_ImportModules__ErrorContext context, Msg__Msg msg, Msg__LString templ, OOC_LEN templ_0d) {
  register OOC_INT64 i0,i1;
  OOC_CHAR16 t[128];

  i0 = (OOC_INT64)msg;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 1410))+16);
  switch (i1) {
  case 1:
    _copy_16((const void*)((OOC_CHAR16[]){67,97,110,110,111,116,32,108,111,99,97,116,101,32,109,111,100,117,108,101,32,96,36,123,110,97,109,101,125,39,0}),(void*)(OOC_INT64)t,128);
    goto l5;
  case 2:
    _copy_16((const void*)((OOC_CHAR16[]){70,97,105,108,101,100,32,116,111,32,114,101,97,100,32,115,121,109,98,111,108,32,102,105,108,101,58,32,36,123,114,101,97,115,111,110,125,0}),(void*)(OOC_INT64)t,128);
    goto l5;
  default:
    _failed_case(i1, 1402);
    goto l5;
  }
l5:
  i1 = (OOC_INT64)context;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 1582)))), OOC_Error__ContextDesc_BaseTemplate)),OOC_Error__ContextDesc_BaseTemplate)((OOC_Error__Context)i1, (Msg__Msg)i0, (void*)(OOC_INT64)t, 128, (void*)(OOC_INT64)templ, templ_0d);
  return;
  ;
}

void OOC_SymbolTable_ImportModules__ImportModules(OOC_SymbolTable__Module systemModule, OOC_SymbolTable__Module symTab, OOC_Error__List errList) {
  register OOC_INT64 i0,i1;
  Msg__Msg lastError;
  OOC_SymbolTable__Item ptr;
  auto void OOC_SymbolTable_ImportModules__ImportModules_Err(OOC_INT32 code, OOC_SymbolTable__Name name);
  auto void OOC_SymbolTable_ImportModules__ImportModules_ReadSymbolFile(OOC_SymbolTable__Import import);
    
    void OOC_SymbolTable_ImportModules__ImportModules_Err(OOC_INT32 code, OOC_SymbolTable__Name name) {
      register OOC_INT64 i0,i1,i2;

      i0 = code;
      i1 = (OOC_INT64)OOC_SymbolTable_ImportModules__importModulesContext;
      i0 = (OOC_INT64)OOC_Error__New((OOC_Error__Context)i1, i0);
      lastError = (Msg__Msg)i0;
      i1 = (OOC_INT64)name;
      i2 = *(OOC_INT32*)(_check_pointer(i1, 2015));
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 1988)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, (OOC_CHAR8*)"pos", 4, i2);
      i0 = (OOC_INT64)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 2066))+4);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 2038)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, (OOC_CHAR8*)"line", 5, i2);
      i0 = (OOC_INT64)lastError;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 2120))+8);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 2090)))), Msg__MsgDesc_SetIntAttrib)),Msg__MsgDesc_SetIntAttrib)((Msg__Msg)i0, (OOC_CHAR8*)"column", 7, i2);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2195))+16);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2195))+16);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2200)), 0);
      i0 = (OOC_INT64)Msg__GetStringPtr((void*)(_check_pointer(i1, 2200)), i0);
      i1 = (OOC_INT64)lastError;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2146)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i1, (OOC_CHAR8*)"name", 5, (Msg__StringPtr)i0);
      i0 = (OOC_INT64)errList;
      i1 = (OOC_INT64)lastError;
      OOC_Error__ListDesc_Append((OOC_Error__List)i0, (Msg__Msg)i1);
      return;
      ;
    }

    
    void OOC_SymbolTable_ImportModules__ImportModules_ReadSymbolFile(OOC_SymbolTable__Import import) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_Repository__Module m;

      i0 = (OOC_INT64)import;
      i1 = OOC_SymbolTable__ImportDesc_IsInternalImport((OOC_SymbolTable__Import)i0);
      if (i1) goto l11;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2520))+88);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2532))+16);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2520))+88);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 2532))+16);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2537)), 0);
      i3 = (OOC_INT64)OOC_Config__repositories;
      i1 = (OOC_INT64)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i2, 2537)), i1);
      m = (OOC_Repository__Module)i1;
      i2 = i1==(OOC_INT64)0;
      if (i2) goto l9;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 2644))+32);
      i2 = i2==3;
      if (i2) goto l7;
      i2 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 2893)))), OOC_Repository__ModuleDesc_ReadSymbolFile)),OOC_Repository__ModuleDesc_ReadSymbolFile)((OOC_Repository__Module)i1);
      symTab = (OOC_SymbolTable__Module)i2;
      
      goto l8;
l7:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2846))+24);
      symTab = (OOC_SymbolTable__Module)i2;
      
l8:
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3159)))), OOC_Repository__ModuleDesc_SetInterfaceData)),OOC_Repository__ModuleDesc_SetInterfaceData)((OOC_Repository__Module)i1, (OOC_SymbolTable__Module)i2, 4, 1u);
      i2 = (OOC_INT64)symTab;
      i2 = *(OOC_INT32*)((_check_pointer(i2, 3255))+128);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3233)))), OOC_Repository__ModuleDesc_SetFingerprint)),OOC_Repository__ModuleDesc_SetFingerprint)((OOC_Repository__Module)i1, i2);
      i1 = (OOC_INT64)symTab;
      OOC_SymbolTable__ImportDesc_SetExternalSymTab((OOC_SymbolTable__Import)i0, (OOC_SymbolTable__Module)i1);
      goto l12;
l9:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2602))+88);
      OOC_SymbolTable_ImportModules__ImportModules_Err(1, (OOC_SymbolTable__Name)i0);
      goto l12;
l11:
      i1 = (OOC_INT64)systemModule;
      OOC_SymbolTable__ImportDesc_SetExternalSymTab((OOC_SymbolTable__Import)i0, (OOC_SymbolTable__Module)i1);
l12:
      return;
      ;
    }


  lastError = (Msg__Msg)(OOC_INT64)0;
  i0 = (OOC_INT64)symTab;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3412))+16);
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l11;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 3466)))), &_td_OOC_SymbolTable__ImportDesc);
  if (!i1) goto l6;
  OOC_SymbolTable_ImportModules__ImportModules_ReadSymbolFile((OOC_SymbolTable__Import)i0);
l6:
  i0 = (OOC_INT64)ptr;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 3549));
  ptr = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l11:
  return;
  ;
}

void OOC_OOC_SymbolTable_ImportModules_init(void) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable_ImportModules__ErrorContext.baseTypes[0]);
  OOC_SymbolTable_ImportModules__importModulesContext = (OOC_SymbolTable_ImportModules__ErrorContext)i0;
  OOC_Error__InitContext((OOC_Error__Context)i0, (OOC_CHAR8*)"OOC:SymbolTable:ImportModules", 30);
  return;
  ;
}

void OOC_OOC_SymbolTable_ImportModules_destroy(void) {
}

/* --- */
