#include <OOC/SSA/Destore.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_CHAR8 OOC_SSA_Destore__IsLocalVariable(OOC_SSA__ProcBlock pb, OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 4530)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 4553)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
  i1 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4571))+40);
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

static void OOC_SSA_Destore__InitState(OOC_SSA_Destore__State *s, OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2;
  ADT_Dictionary__Dictionary localVarWithAdr;
  OOC_SSA__Instr instr;
  auto OOC_CHAR8 OOC_SSA_Destore__InitState_UsesAreVarAccess(OOC_SSA__Result res);
    
    OOC_CHAR8 OOC_SSA_Destore__InitState_UsesAreVarAccess(OOC_SSA__Result res) {
      register OOC_INT64 i0,i1;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT64)res;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4852))+24);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l19;
l3_loop:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4905))+8);
      i1 = i1!=4;
      if (i1) goto l6;
      i1=0u;
      goto l8;
l6:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 4946))+8);
      i1 = i1!=6;
      
l8:
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i0);
      i1 = !i1;
      
l12:
      if (!i1) goto l14;
      return 0u;
l14:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5067))+32);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l19:
      return 1u;
      ;
    }


  i0 = (OOC_INT64)*s;
  i1 = (OOC_INT64)pb;
  *(OOC_INT64*)(_check_pointer(i0, 5150)) = i1;
  i0 = (OOC_INT64)ADT_Dictionary__New();
  localVarWithAdr = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5409))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l19;
l3_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 5465)))), &_td_OOC_SSA__AddressDesc);
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 5523)))), &_td_OOC_SSA__AddressDesc, 5523)), 5531))+80);
  i2 = (OOC_INT64)pb;
  i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i1);
  
l8:
  if (i1) goto l10;
  i0=0u;
  goto l11;
l10:
  i0 = OOC_SSA_Destore__InitState_UsesAreVarAccess((OOC_SSA__Result)i0);
  i0 = !i0;
  
l11:
  i1 = (OOC_INT64)instr;
  if (!i0) goto l14;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 5621)))), &_td_OOC_SSA__AddressDesc, 5621)), 5629))+80);
  i2 = (OOC_INT64)localVarWithAdr;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i0, (Object__Object)0);
l14:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5674))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l3_loop;
l19:
  i0 = (OOC_INT64)*s;
  i1 = (OOC_INT64)localVarWithAdr;
  *(OOC_INT64*)((_check_pointer(i0, 5701))+8) = i1;
  return;
  ;
}

OOC_SSA_Destore__State OOC_SSA_Destore__New(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0;
  OOC_SSA_Destore__State s;

  s = (OOC_SSA_Destore__State)((OOC_INT64)RT0__NewObject(_td_OOC_SSA_Destore__State.baseTypes[0]));
  i0 = (OOC_INT64)pb;
  OOC_SSA_Destore__InitState((void*)(OOC_INT64)&s, (OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT64)s;
  return (OOC_SSA_Destore__State)i0;
  ;
}

static OOC_CHAR8 OOC_SSA_Destore__AccessedByCall(OOC_SSA_Destore__State s, OOC_SSA__Result calledAdr, OOC_SSA__Opnd design, OOC_INT8 mode) {
  register OOC_INT64 i0,i1;
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr(OOC_SSA__Opnd design);
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl);
  auto OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NonlocalWrites(OOC_SSA__Result calledAdr);
    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr(OOC_SSA__Opnd design) {
      register OOC_INT64 i0,i1,i2;

      i0 = (OOC_INT64)design;
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 7091));
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7097)))), &_td_OOC_SSA__DeclRefDesc);
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 7154));
      i2 = (OOC_INT64)s;
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 7142));
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7164)))), &_td_OOC_SSA__DeclRefDesc, 7164)), 7172))+80);
      i1 = OOC_SSA_Destore__IsLocalVariable((OOC_SSA__ProcBlock)i2, (OOC_SymbolTable__Declaration)i1);
      
l5:
      if (i1) goto l7;
      return 0u;
      goto l8;
l7:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 7235));
      i1 = (OOC_INT64)s;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 7202))+8);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7245)))), &_td_OOC_SSA__DeclRefDesc, 7245)), 7253))+80);
      i0 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      return (!i0);
l8:
      _failed_function(7017); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NestedProc(OOC_SSA__Result calledAdr, OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT64 i0,i1,i2;
      OOC_SymbolTable__ProcDecl proc;

      i0 = (OOC_INT64)calledAdr;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7481))+16);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 7488))+72);
      i1 = i1==3;
      if (i1) goto l3;
      return 0u;
      goto l13;
l3:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7545))+16);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7557)))), &_td_OOC_SSA__AddressDesc, 7557)), 7565))+80);
      i0 = _type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7576)))), &_td_OOC_SymbolTable__ProcDeclDesc, 7576);
      i1 = (OOC_INT64)procDecl;
      proc = (OOC_SymbolTable__ProcDecl)i0;
      
l4_loop:
      i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7624)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i2 = i0==(OOC_INT64)0;
      if (i2) goto l7;
      i2 = i0==i1;
      
      goto l9;
l7:
      i2=1u;
l9:
      if (!i2) goto l4_loop;
l12:
      return (i0!=(OOC_INT64)0);
l13:
      _failed_function(7349); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__AccessedByCall_NonlocalWrites(OOC_SSA__Result calledAdr) {
      register OOC_INT64 i0,i1;
      OOC_SymbolTable__ProcDecl proc;

      i0 = (OOC_INT64)calledAdr;
      i0 = (OOC_INT64)OOC_SSA__ResultDesc_CalledProc((OOC_SSA__Result)i0);
      proc = (OOC_SymbolTable__ProcDecl)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3;
      return 1u;
      goto l4;
l3:
      i0 = *(OOC_UINT8*)((_check_pointer(i0, 8155))+92);
      return i0;
l4:
      _failed_function(7979); return 0;
      ;
    }


  i0 = mode;
  i0 = i0==1;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = (OOC_INT64)calledAdr;
  i0 = OOC_SSA_Destore__AccessedByCall_NonlocalWrites((OOC_SSA__Result)i0);
  i0 = !i0;
  
l5:
  if (i0) goto l11;
  i0 = (OOC_INT64)s;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 8394));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8398))+40);
  i1 = (OOC_INT64)calledAdr;
  i0 = OOC_SSA_Destore__AccessedByCall_NestedProc((OOC_SSA__Result)i1, (OOC_SymbolTable__ProcDecl)i0);
  if (i0) goto l9;
  i0 = (OOC_INT64)design;
  i0 = OOC_SSA_Destore__AccessedByCall_LocalVarWithoutAdr((OOC_SSA__Opnd)i0);
  i0 = !i0;
  
  goto l10;
l9:
  i0=1u;
l10:
  return i0;
  goto l12;
l11:
  return 0u;
l12:
  _failed_function(5900); return 0;
  ;
}

OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy(OOC_SSA_Destore__State s, OOC_SSA__Opnd readDesign, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable(OOC_SSA__Result adr, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d);
    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable(OOC_SSA__Result adr, const OOC_CHAR8 moduleName__ref[], OOC_LEN moduleName_0d) {
      register OOC_INT64 i0,i1,i2;
      OOC_ALLOCATE_VPAR(moduleName,OOC_CHAR8 ,moduleName_0d)
      OOC_SymbolTable__Module module;

      OOC_INITIALIZE_VPAR(moduleName__ref,moduleName,OOC_CHAR8 ,moduleName_0d)
      i0 = (OOC_INT64)adr;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8908)))), &_td_OOC_SSA__AddressDesc);
      if (i1) goto l3;
      return 0u;
      goto l8;
l3:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8946))+80);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8946))+80);
      i1 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 8951)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i2);
      module = (OOC_SymbolTable__Module)i1;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8981))+80);
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8987)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i0) goto l6;
      i0=0u;
      goto l7;
l6:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9012))+40);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9017))+16);
      i0 = (
      _cmp8((const void*)(_check_pointer(i0, 9021)),(const void*)(OOC_INT64)moduleName))==0;
      
l7:
      return i0;
l8:
      _failed_function(8781); return 0;
      ;
    }


  i0 = (OOC_INT64)instr;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 9207))+72);
  switch (i1) {
  case 13:
  case 14:
  case 15:
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 7);
    i1 = (OOC_INT64)readDesign;
    i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
    return (i0!=0);
    goto l8;
  case 4:
  case 12:
  case 5:
  case 10:
  case 11:
  case 6:
  case 59:
  case 60:
  case 58:
  case 9:
  case 7:
  case 65:
  case 64:
  case 66:
  case 67:
  case 68:
  case 71:
  case 70:
  case 69:
  case 74:
  case 72:
  case 73:
  case 80:
  case 78:
  case 79:
    return 0u;
    goto l8;
  case 55:
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10053))+48);
    i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 10063));
    i1 = (OOC_INT64)s;
    i2 = (OOC_INT64)readDesign;
    i0 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i1, (OOC_SSA__Result)i0, (OOC_SSA__Opnd)i2, 1);
    return i0;
    goto l8;
  case 77:
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10153))+48);
    i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 10162));
    i0 = OOC_SSA_Destore__StateDesc_ClobberedBy_ModuleVariable((OOC_SSA__Result)i0, (OOC_CHAR8*)"Exception", 10);
    return i0;
    goto l8;
  case 18:
    return 1u;
    goto l8;
  default:
    _failed_case(i1, 9197);
    goto l8;
  }
l8:
  _failed_function(8506); return 0;
  ;
}

void OOC_SSA_Destore__StateDesc_Transform(OOC_SSA_Destore__State s) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_SSA__ProcBlock pb;
  ADT_ArrayList__ArrayList unknownList;
  OOC_SSA__Instr instr;
  OOC_SSA__Result value;
  OOC_INT32 i;
  OOC_SSA_Destore__Worklist worklist;
  OOC_SSA__Instr next;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;
  OOC_SSA__Opnd opnd;
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_UnknownValue(OOC_SSA__Result res);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get);
  auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect(OOC_SSA__Result store, OOC_SSA__Instr set);
  auto void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn);
  auto void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr);
  auto void OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist(OOC_SSA__Result res);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement(OOC_SSA__Instr dgate);
  auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate);
    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_UnknownValue(OOC_SSA__Result res) {
      register OOC_INT64 i0;

      i0 = (OOC_INT64)res;
      i0 = *(OOC_INT8*)((_check_pointer(i0, 11054))+8);
      return (i0==2);
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue(OOC_SSA__Result store, OOC_SSA__Instr get) {
      register OOC_INT64 i0,i1,i2,i3,i4;
      OOC_SSA__Instr instr;
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache(OOC_SSA__Instr instr, OOC_SSA__Result *value);
      auto OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value);
      auto void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate);
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue(OOC_SSA__Instr select);
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue(OOC_SSA__Instr loopStart);
        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache(OOC_SSA__Instr instr, OOC_SSA__Result *value) {
          register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
          OOC_SSA_Destore__CacheEntry ptr;
          OOC_SSA__Opnd readDesign;
          OOC_SSA__Opnd opnd1;
          OOC_SSA__Opnd opnd2;

          i0 = (OOC_INT64)instr;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11826))+32);
          i1 = i1!=(OOC_INT64)0;
          if (!i1) goto l51;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11867))+32);
          i0 = _type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 11874)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 11874);
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT64)get;
          i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 5);
          readDesign = (OOC_SSA__Opnd)i1;
          i2 = i0!=(OOC_INT64)0;
          if (!i2) goto l51;
          i2 = i1!=(OOC_INT64)0;
          
l5_loop:
          opnd1 = (OOC_SSA__Opnd)i1;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12024))+8);
          opnd2 = (OOC_SSA__Opnd)i3;
          i4 = *(OOC_INT8*)((_check_pointer(i1, 12059))+8);
          _assert((i4==5), 127, 12046);
          i4 = *(OOC_INT8*)((_check_pointer(i3, 12112))+8);
          _assert((i4==5), 127, 12099);
          if (i2) goto l8;
          i4=0u;
          goto l10;
l8:
          i4 = i3!=(OOC_INT64)0;
          
l10:
          if (i4) goto l12;
          i4=0u;
          goto l14;
l12:
          i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 12227));
          i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 12214));
          i4 = i5==i4;
          
l14:
          if (i4) goto l16;
          i4=i3;i3=i1;
          goto l30;
l16:
          i4=i3;i3=i1;
l17_loop:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 12265))+16);
          opnd1 = (OOC_SSA__Opnd)i3;
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 12291))+16);
          opnd2 = (OOC_SSA__Opnd)i4;
          i5 = i3!=(OOC_INT64)0;
          if (i5) goto l20;
          i5=0u;
          goto l22;
l20:
          i5 = i4!=(OOC_INT64)0;
          
l22:
          if (i5) goto l24;
          i5=0u;
          goto l26;
l24:
          i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 12227));
          i6 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 12214));
          i5 = i6==i5;
          
l26:
          if (i5) goto l17_loop;
l30:
          i5 = i3!=(OOC_INT64)0;
          if (i5) goto l33;
          i3=0u;
          goto l35;
l33:
          i3 = *(OOC_INT8*)((_check_pointer(i3, 12357))+8);
          i3 = i3==5;
          
l35:
          if (i3) goto l41;
          i3 = i4!=(OOC_INT64)0;
          if (i3) goto l39;
          i3=0u;
          goto l43;
l39:
          i3 = *(OOC_INT8*)((_check_pointer(i4, 12424))+8);
          i3 = i3==5;
          
          goto l43;
l41:
          i3=1u;
l43:
          if (i3) goto l45;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12634))+16);
          *value = (OOC_SSA__Result)i3;
          return 1u;
l45:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 12709));
          ptr = (OOC_SSA_Destore__CacheEntry)i0;
          i3 = i0!=(OOC_INT64)0;
          if (i3) goto l5_loop;
l51:
          *value = (OOC_SSA__Result)(OOC_INT64)0;
          return 0u;
          ;
        }

        
        OOC_SSA_Destore__CacheEntry OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache(OOC_SSA__Instr instr, OOC_SSA__Result value) {
          register OOC_INT64 i0,i1,i2;
          OOC_SSA_Destore__CacheEntry entry;

          i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Destore__CacheEntry.baseTypes[0]);
          entry = (OOC_SSA_Destore__CacheEntry)i0;
          i1 = (OOC_INT64)get;
          i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 5);
          *(OOC_INT64*)((_check_pointer(i0, 12994))+8) = i1;
          i1 = (OOC_INT64)value;
          *(OOC_INT64*)((_check_pointer(i0, 13056))+16) = i1;
          i1 = (OOC_INT64)instr;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 13091))+32);
          i2 = i2==(OOC_INT64)0;
          if (i2) goto l3;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 13183))+32);
          *(OOC_INT64*)(_check_pointer(i0, 13168)) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 13190)))), &_td_OOC_SSA_Destore__CacheEntryDesc, 13190));
          goto l4;
l3:
          *(OOC_INT64*)(_check_pointer(i0, 13125)) = (OOC_INT64)0;
l4:
          *(OOC_INT64*)((_check_pointer(i1, 13229))+32) = i0;
          return (OOC_SSA_Destore__CacheEntry)i0;
          ;
        }

        
        void OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement(OOC_SSA__Instr dgate) {
          register OOC_INT64 i0,i1;

          i0 = (OOC_INT64)dgate;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 13476))+9);
          i1 = (OOC_INT64)OOC_SSA__InstrDesc_AddResultSubclass((OOC_SSA__Instr)i0, 23, i1);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1, 1);
          return;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue(OOC_SSA__Instr select) {
          register OOC_INT64 i0,i1,i2,i3,i4;
          OOC_SSA__Result res;
          OOC_SSA__Instr dgate;
          OOC_SSA_Destore__CacheEntry dummy;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT64)select;
          i1 = OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache((OOC_SSA__Instr)i0, (void*)(OOC_INT64)&res);
          if (i1) goto l32;
          i1 = (OOC_INT64)get;
          i1 = *(OOC_INT8*)((_check_pointer(i1, 14281))+9);
          i2 = (OOC_INT64)pb;
          i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 83, i1);
          dgate = (OOC_SSA__Instr)i1;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = *(OOC_INT8*)((_check_pointer(i0, 14458))+72);
          switch (i2) {
          case 5:
            i2 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          case 11:
            i2 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
            opnd = (OOC_SSA__Opnd)i2;
            goto l7;
          default:
            _failed_case(i2, 14447);
            goto l7;
          }
l7:
          i2 = (OOC_INT64)opnd;
          i3 = i2!=(OOC_INT64)0;
          if (i3) goto l10;
          i2=0u;
          goto l12;
l10:
          i2 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l12:
          if (!i2) goto l31;
l14_loop:
          i2 = (OOC_INT64)opnd;
          i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 14700));
          i4 = (OOC_INT64)get;
          i3 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i3, (OOC_SSA__Instr)i4);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i3, 1);
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 14748))+16);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i0, 14782))+72);
          i3 = i3==5;
          if (i3) goto l17;
          i3=0u;
          goto l19;
l17:
          i3 = i2!=(OOC_INT64)0;
          
l19:
          if (!i3) goto l22;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 14854))+16);
          opnd = (OOC_SSA__Opnd)i2;
          
l22:
          i3 = i2!=(OOC_INT64)0;
          if (i3) goto l25;
          i2=0u;
          goto l27;
l25:
          i2 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i2);
          i2 = !i2;
          
l27:
          if (i2) goto l14_loop;
l31:
          return (OOC_SSA__Result)i1;
          goto l33;
l32:
          i0 = (OOC_INT64)res;
          return (OOC_SSA__Result)i0;
l33:
          _failed_function(13610); return 0;
          ;
        }

        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue(OOC_SSA__Instr loopStart) {
          register OOC_INT64 i0,i1,i2,i3;
          OOC_SSA__Result res;
          OOC_SSA__Instr dgate;
          OOC_SSA_Destore__CacheEntry dummy;

          i0 = (OOC_INT64)loopStart;
          i1 = OOC_SSA_Destore__StateDesc_Transform_GetValue_InCache((OOC_SSA__Instr)i0, (void*)(OOC_INT64)&res);
          if (i1) goto l3;
          i1 = (OOC_INT64)get;
          i1 = *(OOC_INT8*)((_check_pointer(i1, 15513))+9);
          i2 = (OOC_INT64)pb;
          i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i2, 83, i1);
          dgate = (OOC_SSA__Instr)i1;
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 21);
          OOC_SSA_Destore__StateDesc_Transform_GetValue_InitialReplacement((OOC_SSA__Instr)i1);
          i2 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue_AddToCache((OOC_SSA__Instr)i0, (OOC_SSA__Result)i1);
          dummy = (OOC_SSA_Destore__CacheEntry)i2;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15708))+48);
          i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 15717));
          i3 = (OOC_INT64)get;
          i2 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i2, (OOC_SSA__Instr)i3);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2, 1);
          i2 = (OOC_INT64)get;
          i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetBackwardFeed((OOC_SSA__Instr)i0);
          i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 1);
          return (OOC_SSA__Result)i1;
          goto l4;
l3:
          i0 = (OOC_INT64)res;
          return (OOC_SSA__Result)i0;
l4:
          _failed_function(14976); return 0;
          ;
        }


      i0 = (OOC_INT64)store;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15911))+16);
      instr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 15936))+72);
      switch (i2) {
      case 13:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 7);
        i2 = (OOC_INT64)get;
        i3 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 5);
        i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i3, (OOC_SSA__Opnd)i0);
        i3 = i0==1;
        if (i3) goto l9;
        i0 = i0!=0;
        if (i0) goto l7;
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        return (OOC_SSA__Result)i0;
        goto l40;
l7:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
l9:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 8);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 12:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 2);
        i2 = (OOC_INT64)get;
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        i3 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
        if (!i3) goto l17;
        i3 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 5);
        i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 5);
        i2 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i3);
        i2 = i2==1;
        if (!i2) goto l17;
        return (OOC_SSA__Result)i1;
l17:
        return (OOC_SSA__Result)i0;
        goto l40;
      case 14:
      case 15:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 7);
        i2 = (OOC_INT64)get;
        i3 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 5);
        i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i3, (OOC_SSA__Opnd)i0);
        i0 = i0!=0;
        if (i0) goto l21;
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i2);
        return (OOC_SSA__Result)i0;
        goto l40;
l21:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 4:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 5:
      case 11:
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetSelectValue((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 6:
      case 59:
      case 60:
      case 58:
      case 9:
      case 7:
      case 65:
      case 64:
      case 66:
      case 67:
      case 68:
      case 71:
      case 70:
      case 69:
      case 74:
      case 77:
      case 80:
      case 78:
      case 79:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT64)get;
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 72:
        i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
        i0 = i0==2;
        if (i0) goto l29;
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 2);
        i1 = (OOC_INT64)get;
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
l29:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 73:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 10:
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue_GetLoopValue((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 55:
        i0 = (OOC_INT64)get;
        i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
        i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 19654))+48);
        i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 19664));
        i4 = (OOC_INT64)s;
        i2 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i4, (OOC_SSA__Result)i3, (OOC_SSA__Opnd)i2, 1);
        if (i2) goto l36;
        i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i1, 2);
        i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
        return (OOC_SSA__Result)i0;
        goto l40;
l36:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      case 18:
        i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
        return (OOC_SSA__Result)i0;
        goto l40;
      default:
        _failed_case(i2, 15926);
        goto l40;
      }
l40:
      _failed_function(11116); return 0;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect(OOC_SSA__Result store, OOC_SSA__Instr set) {
      register OOC_INT64 i0,i1;
      OOC_SSA__Opnd use;
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse(OOC_SSA__Opnd use);
        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse(OOC_SSA__Opnd use) {
          register OOC_INT64 i0,i1,i2,i3;
          OOC_SSA__Instr instr;
          auto OOC_SymbolTable__VarDecl OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar(OOC_SSA__Instr instr);
          auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var);
            
            OOC_SymbolTable__VarDecl OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar(OOC_SSA__Instr instr) {
              register OOC_INT64 i0,i1;
              OOC_INT8 _class;
              OOC_SSA__Opnd opnd;

              i0 = (OOC_INT64)instr;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 21182))+72);
              switch (i1) {
              case 12:
                _class = 5;
                goto l5;
              case 13:
                _class = 7;
                goto l5;
              default:
                _failed_case(i1, 21172);
                goto l5;
              }
l5:
              i1 = _class;
              i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, i1);
              opnd = (OOC_SSA__Opnd)i0;
              i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 21374));
              i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 21380)))), &_td_OOC_SSA__DeclRefDesc));
              if (i1) goto l8;
              i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 21418));
              i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 21428)))), &_td_OOC_SSA__DeclRefDesc, 21428)), 21436))+80);
              i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 21443)))), &_td_OOC_SymbolTable__VarDeclDesc));
              
              goto l10;
l8:
              i1=1u;
l10:
              if (i1) goto l12;
              i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 21585));
              i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 21595)))), &_td_OOC_SSA__DeclRefDesc, 21595)), 21603))+80);
              return (OOC_SymbolTable__VarDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 21614)))), &_td_OOC_SymbolTable__VarDeclDesc, 21614));
              goto l13;
l12:
              return (OOC_SymbolTable__VarDecl)(OOC_INT64)0;
l13:
              _failed_function(20869); return 0;
              ;
            }

            
            OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility(OOC_SymbolTable__VarDecl var) {
              register OOC_INT64 i0,i1;

              i0 = (OOC_INT64)var;
              i1 = i0==(OOC_INT64)0;
              if (i1) goto l3;
              i1 = *(OOC_UINT8*)((_check_pointer(i0, 21913))+107);
              
              goto l5;
l3:
              i1=1u;
l5:
              if (i1) goto l7;
              i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 21980)))), OOC_SymbolTable__ItemDesc_Procedure)),OOC_SymbolTable__ItemDesc_Procedure)((OOC_SymbolTable__Item)i0);
              i1 = (OOC_INT64)pb;
              i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 21998))+40);
              i0 = i0!=i1;
              
              goto l8;
l7:
              i0=1u;
l8:
              return i0;
              ;
            }


          i0 = (OOC_INT64)use;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 22100))+8);
          i1 = i1==13;
          if (i1) goto l45;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22279))+24);
          instr = (OOC_SSA__Instr)i0;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 22308))+72);
          switch (i1) {
          case 12:
            i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
            i2 = (OOC_INT64)set;
            i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 7);
            i0 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i0);
            i0 = i0!=0;
            if (i0) goto l11;
            i0 = i1!=(OOC_INT64)0;
            if (i0) goto l9;
            i0=0u;
            goto l10;
l9:
            i0 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
            
l10:
            return i0;
            goto l46;
l11:
            return 1u;
            goto l46;
          case 13:
            i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 7);
            i2 = (OOC_INT64)set;
            i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
            i2 = i1==1;
            if (i2) goto l20;
            i1 = i1!=0;
            if (i1) goto l18;
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i1 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l18:
            return 1u;
            goto l46;
l20:
            return 0u;
            goto l46;
          case 15:
          case 14:
            i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 7);
            i2 = (OOC_INT64)set;
            i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
            i1 = i1>=2;
            if (i1) goto l33;
            i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
            i2 = i1==(OOC_INT64)0;
            if (i2) goto l31;
            i2 = (OOC_INT64)set;
            i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i2, 7);
            i1 = OOC_SSA_Aliasing__DesignatorAlias((OOC_SSA__Opnd)i2, (OOC_SSA__Opnd)i1);
            i1 = i1!=0;
            if (i1) goto l29;
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i1 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l29:
            return 1u;
            goto l46;
l31:
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i1 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l33:
            return 1u;
            goto l46;
          case 7:
          case 8:
            i0 = (OOC_INT64)set;
            i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_GetVar((OOC_SSA__Instr)i0);
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse_ExternalVisibility((OOC_SymbolTable__VarDecl)i0);
            return i0;
            goto l46;
          case 9:
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i1 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 10:
          case 11:
          case 6:
          case 5:
          case 59:
          case 60:
          case 64:
          case 66:
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i1 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
          case 55:
            i1 = (OOC_INT64)set;
            i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i1, 7);
            i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 25918))+48);
            i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 25928));
            i3 = (OOC_INT64)s;
            i1 = OOC_SSA_Destore__AccessedByCall((OOC_SSA_Destore__State)i3, (OOC_SSA__Result)i2, (OOC_SSA__Opnd)i1, 0);
            if (i1) goto l41;
            i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
            i1 = (OOC_INT64)set;
            i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
            return i0;
            goto l46;
l41:
            return 1u;
            goto l46;
          default:
            return 1u;
            goto l46;
          }
l45:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22156))+24);
          i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopStart((OOC_SSA__Instr)i0);
          i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
          i1 = (OOC_INT64)set;
          i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i0, (OOC_SSA__Instr)i1);
          return i0;
l46:
          _failed_function(20680); return 0;
          ;
        }


      i0 = (OOC_INT64)store;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 26385))+16);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 26392))+40);
      i1 = i1==0;
      if (i1) goto l3;
      return 0u;
      goto l20;
l3:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 26424))+16);
      *(OOC_INT32*)((_check_pointer(i1, 26431))+40) = 1;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 26466))+24);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l6;
      i0=0u;
      goto l8;
l6:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l8:
      if (!i0) goto l19;
l10_loop:
      i0 = (OOC_INT64)use;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 26546))+32);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l13;
      i0=0u;
      goto l15;
l13:
      i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect_ReadingUse((OOC_SSA__Opnd)i0);
      i0 = !i0;
      
l15:
      if (i0) goto l10_loop;
l19:
      i0 = (OOC_INT64)store;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 26583))+16);
      i1 = (OOC_INT64)use;
      *(OOC_INT32*)((_check_pointer(i0, 26590))+40) = 0;
      return (i1!=(OOC_INT64)0);
l20:
      _failed_function(20340); return 0;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses(OOC_SSA__Result storeOut, OOC_SSA__Result storeIn) {
      register OOC_INT64 i0,i1;

      i0 = (OOC_INT64)storeIn;
      i1 = (OOC_INT64)storeOut;
      OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
      OOC_SSA__ResultDesc_DeleteResult((OOC_SSA__Result)i1);
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddToWorklist(OOC_SSA__Instr instr) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA_Destore__Worklist wl;

      i0 = (OOC_INT64)instr;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 26968))+40);
      i1 = i1==(-1);
      if (!i1) goto l4;
      *(OOC_INT32*)((_check_pointer(i0, 27012))+40) = 0;
      i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Destore__Worklist.baseTypes[0]);
      wl = (OOC_SSA_Destore__Worklist)i1;
      i2 = (OOC_INT64)worklist;
      *(OOC_INT64*)(_check_pointer(i1, 27073)) = i2;
      *(OOC_INT64*)((_check_pointer(i1, 27103))+8) = i0;
      worklist = (OOC_SSA_Destore__Worklist)i1;
l4:
      return;
      ;
    }

    
    void OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist(OOC_SSA__Result res) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr useInstr;

      i0 = (OOC_INT64)res;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27311))+24);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l11;
l3_loop:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27372))+24);
      useInstr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 27401))+72);
      i2 = i2==83;
      if (!i2) goto l6;
      OOC_SSA_Destore__StateDesc_Transform_AddToWorklist((OOC_SSA__Instr)i1);
l6:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27497))+32);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l11:
      return;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_CHAR8 allTheSame;
      OOC_CHAR8 haveUnknownValue;
      OOC_SSA__Result firstValue;
      OOC_SSA__Result value;
      auto OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue(OOC_SSA__Opnd opnd);
      auto OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res);
        
        OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue(OOC_SSA__Opnd opnd) {
          register OOC_INT64 i0,i1;
          OOC_SSA__Result value;

          i0 = (OOC_INT64)opnd;
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 27981));
          value = (OOC_SSA__Result)i0;
          i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28005)))), &_td_OOC_SSA__InstrDesc);
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28032)))), &_td_OOC_SSA__InstrDesc, 28032)), 28038))+72);
          i1 = i1==83;
          
l5:
          if (!i1) goto l8;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28134)))), &_td_OOC_SSA__InstrDesc, 28134)), 28140))+48);
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28149))+16);
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 28158));
          
l8:
          return (OOC_SSA__Result)i0;
          ;
        }

        
        OOC_CHAR8 OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr(OOC_SSA__Instr instr, OOC_SSA__Result res) {
          register OOC_INT64 i0,i1;

          i0 = (OOC_INT64)res;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28329))+16);
          i1 = (OOC_INT64)instr;
          return (i1==i0);
          ;
        }


      i0 = (OOC_INT64)dgate;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28395))+48);
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 28404));
      i1 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 28413)))), &_td_OOC_SSA__InstrDesc, 28413);
      select = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT8*)((_check_pointer(i1, 28437))+72);
      i2 = i2==10;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 3);
      i2 = i2!=0;
      
l5:
      if (i2) goto l7;
      i2=0u;
      goto l13;
l7:
      i2 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 3);
      i2 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i2);
      i2 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i1, (OOC_SSA__Result)i2);
      if (i2) goto l10;
      i2 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 3);
      i2 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i2);
      i2 = OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_SameInstr((OOC_SSA__Instr)i0, (OOC_SSA__Result)i2);
      
      goto l13;
l10:
      i2=1u;
l13:
      if (i2) goto l43;
      allTheSame = 1u;
      haveUnknownValue = 0u;
      i2 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i2;
      i3 = i2==0;
      if (i3) goto l41;
      i3 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i2);
      firstValue = (OOC_SSA__Result)i3;
      i4 = i2!=0;
      if (i4) goto l19;
      i2=1u;i4=0u;
      goto l34;
l19:
      i4=1u;i5=0u;
l20_loop:
      i6 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i2);
      value = (OOC_SSA__Result)i6;
      i7 = i6!=i3;
      if (!i7) goto l24;
      allTheSame = 0u;
      i4=0u;
l24:
      i6 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i6);
      if (!i6) goto l28;
      haveUnknownValue = 1u;
      i5=1u;
l28:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 29286))+16);
      opnd = (OOC_SSA__Opnd)i2;
      i6 = i2!=0;
      if (i6) goto l20_loop;
l32:
      i2=i4;i4=i5;
l34:
      if (i2) goto l39;
      if (i4) goto l37;
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultClass((OOC_SSA__Instr)i0, 23);
      return (OOC_SSA__Result)i0;
      goto l44;
l37:
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
      return (OOC_SSA__Result)i0;
      goto l44;
l39:
      return (OOC_SSA__Result)i3;
      goto l44;
l41:
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
      return (OOC_SSA__Result)i0;
      goto l44;
l43:
      i1 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 3);
      opnd = (OOC_SSA__Opnd)i1;
      OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
      i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement_NormValue((OOC_SSA__Opnd)i0);
      return (OOC_SSA__Result)i0;
l44:
      _failed_function(27561); return 0;
      ;
    }

    
    OOC_SSA__Result OOC_SSA_Destore__StateDesc_Transform_DGateReplacement(OOC_SSA__Instr dgate) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
      OOC_SSA__Result replacement;
      OOC_SSA__Instr select;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      OOC_SSA__Instr collect;

      i0 = (OOC_INT64)dgate;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29891))+48);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29900))+16);
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 29909));
      replacement = (OOC_SSA__Result)i0;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 29936))+8);
      i1 = i1==23;
      if (i1) goto l3;
      return (OOC_SSA__Result)i0;
      goto l13;
l3:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 30095))+16);
      dgate = (OOC_SSA__Instr)i1;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 30169))+48);
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 30178));
      i2 = _type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 30187)))), &_td_OOC_SSA__InstrDesc, 30187);
      select = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, 2);
      opnd = (OOC_SSA__Opnd)i3;
      i = 0;
      i4 = i3!=0;
      if (i4) goto l6;
      i3=0;
      goto l12;
l6:
      i4=i3;i3=0;
l7_loop:
      i5 = (OOC_INT64)pb;
      i5 = (OOC_INT64)OOC_SSA__InstrDesc_GetCollect((OOC_SSA__Instr)i2, (OOC_SSA__ProcBlock)i5, i3);
      collect = (OOC_SSA__Instr)i5;
      i6 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 30344));
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i5, (OOC_SSA__Result)i6, 1);
      i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 30383))+16);
      opnd = (OOC_SSA__Opnd)i4;
      i3 = i3+1;
      i = i3;
      i5 = i4!=0;
      if (i5) goto l7_loop;
l12:
      i4 = OOC_SSA__InstrDesc_NumberOfPaths((OOC_SSA__Instr)i2);
      _assert((i3==i4), 127, 30423);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 30527))+9);
      i1 = (OOC_INT64)OOC_SSA__InstrDesc_AddResultSubclass((OOC_SSA__Instr)i2, 14, i1);
      OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i0, (OOC_SSA__Result)i1);
      return (OOC_SSA__Result)i1;
l13:
      _failed_function(29686); return 0;
      ;
    }


  i0 = (OOC_INT64)s;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 30701));
  pb = (OOC_SSA__ProcBlock)i0;
  i1 = (OOC_INT64)ADT_ArrayList__New(8);
  unknownList = (ADT_ArrayList__ArrayList)i1;
  OOC_SSA__ProcBlockDesc_SetMarkers((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 30931))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l23;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 30986))+72);
  i1 = i1==12;
  if (!i1) goto l18;
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgStore((OOC_SSA__Instr)i0);
  i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_GetValue((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i1 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i1) goto l16;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 31203)))), &_td_OOC_SSA__InstrDesc);
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = *(OOC_INT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 31244)))), &_td_OOC_SSA__InstrDesc, 31244)), 31250))+72);
  i1 = i1==83;
  
l12:
  if (i1) goto l14;
  i1 = (OOC_INT64)instr;
  OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  goto l18;
l14:
  i1 = (OOC_INT64)instr;
  OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i1, (OOC_SSA__Result)i0, 22);
  goto l18;
l16:
  i1 = (OOC_INT64)unknownList;
  i2 = (OOC_INT64)instr;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 31129)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 31166)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
l18:
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31422))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l3_loop;
l23:
  i0 = (OOC_INT64)unknownList;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 31473))+8);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l31;
  i1=0;
l26_loop:
  i2 = (OOC_INT64)unknownList;
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 31515));
  i3 = _check_pointer(i3, 31521);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i1, i4, OOC_UINT32, 31521))*8);
  i3 = _type_guard(i3, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 31529)))), &_td_OOC_SSA__InstrDesc, 31529);
  instr = (OOC_SSA__Instr)i3;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 31563));
  i2 = _check_pointer(i2, 31569);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index((i1+1), i4, OOC_UINT32, 31569))*8);
  value = (OOC_SSA__Result)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 31579)))), &_td_OOC_SSA__ResultDesc, 31579));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 31640))+48);
  i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i3);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 31649));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i2, (OOC_SSA__Result)i1);
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 31667))+48);
  i2 = (OOC_INT64)value;
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i1, (OOC_SSA__Result)i2);
  i1 = i;
  i1 = i1+2;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l26_loop;
l31:
  worklist = (OOC_SSA_Destore__Worklist)0;
  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31830))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l49;
l34_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 31888))+56);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 31915))+72);
  i1 = i1==83;
  if (i1) goto l37;
  i1=0u;
  goto l39;
l37:
  i1 = *(OOC_INT32*)((_check_pointer(i0, 31947))+40);
  i1 = i1==(-1);
  
l39:
  if (!i1) goto l44;
  i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT64)instr;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32046))+48);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32055))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 32064));
  i2 = i0!=i2;
  if (!i2) goto l44;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32090))+48);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32099))+16);
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l44:
  i0 = (OOC_INT64)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l34_loop;
l49:
  i0 = (OOC_INT64)worklist;
  i0 = i0!=0;
  if (!i0) goto l60;
l52_loop:
  i0 = (OOC_INT64)worklist;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32316))+8);
  instr = (OOC_SSA__Instr)i1;
  *(OOC_INT32*)((_check_pointer(i1, 32335))+40) = (-1);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 32387));
  worklist = (OOC_SSA_Destore__Worklist)i0;
  i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_ComputeReplacement((OOC_SSA__Instr)i1);
  value = (OOC_SSA__Result)i0;
  i1 = (OOC_INT64)instr;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32459))+48);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32468))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 32477));
  i2 = i0!=i2;
  if (!i2) goto l55;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32501))+48);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32510))+16);
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i0);
  OOC_SSA_Destore__StateDesc_Transform_AddUsesToWorklist((OOC_SSA__Result)i1);
l55:
  i0 = (OOC_INT64)worklist;
  i0 = i0!=0;
  if (i0) goto l52_loop;
l60:
  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32707))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l99;
l63_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32765))+56);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 32792))+72);
  i1 = i1==83;
  if (!i1) goto l94;
  i0 = (OOC_INT64)OOC_SSA_Destore__StateDesc_Transform_DGateReplacement((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i0;
  i1 = OOC_SSA_Destore__StateDesc_Transform_UnknownValue((OOC_SSA__Result)i0);
  if (i1) goto l80;
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33664))+24);
  use = (OOC_SSA__Opnd)i1;
  i2 = i1!=0;
  if (!i2) goto l93;
l70_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33731))+32);
  nextUse = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 33760))+8);
  i3 = i3==22;
  if (i3) goto l73;
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i1, (OOC_SSA__Result)i0);
  goto l74;
l73:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33806))+24);
  OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i3, (OOC_SSA__Result)i0);
  OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
l74:
  use = (OOC_SSA__Opnd)i2;
  i1 = i2!=0;
  if (!i1) goto l93;
  i1=i2;
  goto l70_loop;
l80:
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32972))+24);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=0;
  if (!i1) goto l93;
l83_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33039))+32);
  nextUse = (OOC_SSA__Opnd)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 33068))+8);
  i1 = i1==22;
  if (i1) goto l86;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33452))+24);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 33458))+72);
  _assert((i0==83), 127, 33442);
  goto l87;
l86:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33121))+24);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 33127))+72);
  _assert((i1==12), 127, 33111);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33175))+24);
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 2);
  opnd = (OOC_SSA__Opnd)i0;
  _assert((i0!=0), 127, 33222);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33267))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 33273));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 33284))+8);
  _assert((i1==2), 127, 33256);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33343))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 33349));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 33366));
  OOC_SSA_Destore__StateDesc_Transform_ReplaceStoreUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
  i0 = (OOC_INT64)value;
  i1 = (OOC_INT64)opnd;
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i1, (OOC_SSA__Result)i0);
l87:
  i0 = (OOC_INT64)use;
  OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i0);
  i0 = (OOC_INT64)nextUse;
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=0;
  if (i1) goto l83_loop;
l93:
  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34010))+24);
  _assert((i1==0), 127, 33998);
  i1 = (OOC_INT64)pb;
  OOC_SSA__ProcBlockDesc_DeleteInstr((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l94:
  i0 = (OOC_INT64)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l63_loop;
l99:
  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 34778))+24);
  instr = (OOC_SSA__Instr)i1;
  i2 = i1!=0;
  if (!i2) goto l117;
l102_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 34837))+56);
  next = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 34865))+72);
  i3 = i3==12;
  if (i3) goto l105;
  i3=0u;
  goto l107;
l105:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 34896))+24);
  i3 = i3==0;
  
l107:
  if (!i3) goto l112;
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 34935));
  i3 = i3!=0;
  if (!i3) goto l111;
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 35057));
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 35069));
  _assert((i3==0), 127, 35044);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 35137))+48);
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 35105));
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 35147));
  OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i4, (OOC_SSA__Result)i3);
l111:
  OOC_SSA__ProcBlockDesc_DeleteInstr((OOC_SSA__ProcBlock)i0, (OOC_SSA__Instr)i1);
l112:
  instr = (OOC_SSA__Instr)i2;
  i1 = i2!=0;
  if (!i1) goto l117;
  i1=i2;
  goto l102_loop;
l117:
  OOC_SSA__ProcBlockDesc_SetMarkers((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35432))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (!i1) goto l132;
l120_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35491))+56);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 35519))+72);
  i1 = i1==13;
  if (i1) goto l123;
  i0=0u;
  goto l125;
l123:
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  i0 = OOC_SSA_Destore__StateDesc_Transform_VisibleEffect((OOC_SSA__Result)i1, (OOC_SSA__Instr)i0);
  i0 = !i0;
  
l125:
  if (!i0) goto l127;
  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  value = (OOC_SSA__Result)i1;
  i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetArgClass((OOC_SSA__Instr)i0, 2);
  OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35731))+24);
  _assert((i1==0), 127, 35718);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 35804));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 35816));
  _assert((i1==0), 127, 35791);
  i1 = (OOC_INT64)pb;
  OOC_SSA__ProcBlockDesc_DeleteInstr((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l127:
  i0 = (OOC_INT64)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=0;
  if (i1) goto l120_loop;
l132:
  return;
  ;
}

void OOC_OOC_SSA_Destore_init(void) {

  return;
  ;
}

void OOC_OOC_SSA_Destore_destroy(void) {
}

/* --- */
