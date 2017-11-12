#include <OOC/SSA/Blocker.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_SSA_Blocker__InitProxy(OOC_SSA_Blocker__Proxy p, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)p;
  *(OOC_INT64*)(_check_pointer(i0, 7118)) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 7143))+8) = 0;
  i1 = (OOC_INT64)instr;
  *(OOC_INT64*)((_check_pointer(i0, 7168))+16) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 7191))+24) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 7213))+32) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 7238))+40) = 0;
  *(OOC_UINT8*)((_check_pointer(i0, 7268))+48) = 0u;
  *(OOC_INT64*)((_check_pointer(i0, 7299))+56) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7332))+64) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7352))+68) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 7373))+72) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 7395))+76) = 0;
  return;
  ;
}

static OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__NewProxy(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__Proxy.baseTypes[0]);
  i1 = (OOC_INT64)instr;
  OOC_SSA_Blocker__InitProxy((OOC_SSA_Blocker__Proxy)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Proxy)i0;
  ;
}

static void OOC_SSA_Blocker__ClearMarkers(OOC_SSA_Blocker__Region r) {
  register OOC_INT64 i0,i1;
  OOC_SSA_Blocker__Proxy proxy;

  i0 = (OOC_INT64)r;
  *(OOC_INT32*)((_check_pointer(i0, 7649))+64) = 0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7678))+80);
  proxy = (OOC_SSA_Blocker__Proxy)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l11;
l3_loop:
  *(OOC_INT32*)((_check_pointer(i0, 7725))+64) = 0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7756)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i1) goto l6;
  OOC_SSA_Blocker__ClearMarkers((OOC_SSA_Blocker__Region)i0);
l6:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 7883));
  proxy = (OOC_SSA_Blocker__Proxy)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l11:
  return;
  ;
}

static void OOC_SSA_Blocker__InitRegion(OOC_SSA_Blocker__Region r, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)r;
  OOC_SSA_Blocker__InitProxy((OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Instr)i0);
  *(OOC_INT64*)((_check_pointer(i1, 8107))+80) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 8128))+88) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 8148))+96) = 0;
  *(OOC_INT32*)((_check_pointer(i1, 8174))+64) = 0;
  return;
  ;
}

static OOC_SSA_Blocker__Region OOC_SSA_Blocker__NewRegion(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__Region.baseTypes[0]);
  i1 = (OOC_INT64)instr;
  OOC_SSA_Blocker__InitRegion((OOC_SSA_Blocker__Region)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Region)i0;
  ;
}

void OOC_SSA_Blocker__RegionDesc_Append(OOC_SSA_Blocker__Region r, OOC_SSA_Blocker__Proxy p) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)p;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8418))+24);
  _assert((i1==(OOC_INT64)0), 127, 8409);
  i1 = (OOC_INT64)r;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8461))+88);
  *(OOC_INT64*)((_check_pointer(i0, 8445))+8) = i2;
  *(OOC_INT64*)(_check_pointer(i0, 8474)) = (OOC_INT64)0;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8503))+88);
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 8569))+80) = i0;
  goto l4;
l3:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8529))+88);
  *(OOC_INT64*)(_check_pointer(i2, 8535)) = i0;
l4:
  *(OOC_INT64*)((_check_pointer(i1, 8597))+88) = i0;
  *(OOC_INT64*)((_check_pointer(i0, 8620))+24) = i1;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8645)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i2) goto l7;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 8695))+96);
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8669)))), &_td_OOC_SSA_Blocker__RegionDesc, 8669)), 8676))+96) = (i1+1);
l7:
  return;
  ;
}

void OOC_SSA_Blocker__RegionDesc_Insert(OOC_SSA_Blocker__Region r, OOC_SSA_Blocker__Proxy p) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)p;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8798))+24);
  _assert((i1==(OOC_INT64)0), 127, 8789);
  *(OOC_INT64*)((_check_pointer(i0, 8825))+8) = (OOC_INT64)0;
  i1 = (OOC_INT64)r;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8866))+80);
  *(OOC_INT64*)(_check_pointer(i0, 8850)) = i2;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8884))+80);
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 8952))+88) = i0;
  goto l4;
l3:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 8911))+80);
  *(OOC_INT64*)((_check_pointer(i2, 8918))+8) = i0;
l4:
  *(OOC_INT64*)((_check_pointer(i1, 8979))+80) = i0;
  *(OOC_INT64*)((_check_pointer(i0, 9003))+24) = i1;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 9028)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i2) goto l7;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 9078))+96);
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 9052)))), &_td_OOC_SSA_Blocker__RegionDesc, 9052)), 9059))+96) = (i1+1);
l7:
  return;
  ;
}

void OOC_SSA_Blocker__RegionDesc_Remove(OOC_SSA_Blocker__Region r, OOC_SSA_Blocker__Proxy p) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)p;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9181))+24);
  i2 = (OOC_INT64)r;
  _assert((i1==i2), 127, 9172);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9205))+8);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9304));
  *(OOC_INT64*)((_check_pointer(i2, 9292))+80) = i1;
  goto l4;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9236))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9263));
  *(OOC_INT64*)(_check_pointer(i1, 9247)) = i3;
l4:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9335));
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l7;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9433))+8);
  *(OOC_INT64*)((_check_pointer(i2, 9422))+88) = i1;
  goto l8;
l7:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9366));
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9393))+8);
  *(OOC_INT64*)((_check_pointer(i1, 9377))+8) = i2;
l8:
  *(OOC_INT64*)((_check_pointer(i0, 9465))+24) = (OOC_INT64)0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 9492)))), &_td_OOC_SSA_Blocker__RegionDesc);
  if (!i1) goto l11;
  *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 9516)))), &_td_OOC_SSA_Blocker__RegionDesc, 9516)), 9523))+96) = 0;
l11:
  return;
  ;
}

static void OOC_SSA_Blocker__InitSelect(OOC_SSA_Blocker__Select r, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)r;
  OOC_SSA_Blocker__InitRegion((OOC_SSA_Blocker__Region)i1, (OOC_SSA__Instr)i0);
  i0 = OOC_SSA__InstrDesc_SizeOpndList((OOC_SSA__Instr)i0);
  *(OOC_INT64*)((_check_pointer(i1, 9777))+104) = ((OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__5556.baseTypes[0], (i0>>1)));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9840))+104);
  i = 0;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 9847)), 0);
  i2 = 0<i0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9862))+104);
  i3 = _check_pointer(i3, 9869);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 9869))*8) = (OOC_INT64)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

static OOC_SSA_Blocker__Select OOC_SSA_Blocker__NewSelect(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__Select.baseTypes[0]);
  i1 = (OOC_INT64)instr;
  OOC_SSA_Blocker__InitSelect((OOC_SSA_Blocker__Select)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Select)i0;
  ;
}

static void OOC_SSA_Blocker__InitLoop(OOC_SSA_Blocker__Loop r, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)r;
  OOC_SSA_Blocker__InitRegion((OOC_SSA_Blocker__Region)i1, (OOC_SSA__Instr)i0);
  *(OOC_INT64*)((_check_pointer(i1, 10233))+112) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 10257))+104) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 10284))+120) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 10310))+128) = (OOC_INT64)0;
  *(OOC_UINT8*)((_check_pointer(i1, 10340))+136) = 0u;
  return;
  ;
}

static OOC_SSA_Blocker__Loop OOC_SSA_Blocker__NewLoop(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__Loop.baseTypes[0]);
  i1 = (OOC_INT64)instr;
  OOC_SSA_Blocker__InitLoop((OOC_SSA_Blocker__Loop)i0, (OOC_SSA__Instr)i1);
  return (OOC_SSA_Blocker__Loop)i0;
  ;
}

void OOC_SSA_Blocker__LoopDesc_AppendLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA_Blocker__Loop nestedLoop) {
  register OOC_INT64 i0,i1;
  auto void OOC_SSA_Blocker__LoopDesc_AppendLoop_App(OOC_SSA_Blocker__Loop *list);
    
    void OOC_SSA_Blocker__LoopDesc_AppendLoop_App(OOC_SSA_Blocker__Loop *list) {
      register OOC_INT64 i0,i1,i2;

      i0 = (OOC_INT64)nestedLoop;
      i1 = (OOC_INT64)*list;
      _assert((i0!=i1), 127, 10621);
      i2 = i1==(OOC_INT64)0;
      if (i2) goto l3;
      OOC_SSA_Blocker__LoopDesc_AppendLoop_App((void*)((_check_pointer(i1, 10769))+112));
      goto l4;
l3:
      *(OOC_INT64*)((_check_pointer(i0, 10694))+112) = (OOC_INT64)0;
      *list = (OOC_SSA_Blocker__Loop)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT64)loop;
  OOC_SSA_Blocker__LoopDesc_AppendLoop_App((void*)((_check_pointer(i0, 10830))+104));
  i0 = (OOC_INT64)nestedLoop;
  i1 = (OOC_INT64)loop;
  *(OOC_INT64*)((_check_pointer(i0, 10860))+120) = i1;
  return;
  ;
}

static OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__GetProxy(OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1;
  OOC_SSA_Blocker__Proxy p;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10992))+32);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l9;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11069))+72);
  switch (i1) {
  case 8:
    i1 = (OOC_INT64)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  case 5:
    i1 = (OOC_INT64)OOC_SSA_Blocker__NewSelect((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  case 11:
    i1 = (OOC_INT64)OOC_SSA_Blocker__NewLoop((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  default:
    i1 = (OOC_INT64)OOC_SSA_Blocker__NewProxy((OOC_SSA__Instr)i0);
    p = (OOC_SSA_Blocker__Proxy)i1;
    
    goto l8;
  }
l8:
  *(OOC_INT64*)((_check_pointer(i0, 11315))+32) = i1;
  return (OOC_SSA_Blocker__Proxy)i1;
  goto l10;
l9:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11029))+32);
  return (OOC_SSA_Blocker__Proxy)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 11036)))), &_td_OOC_SSA_Blocker__ProxyDesc, 11036));
l10:
  _failed_function(10913); return 0;
  ;
}

static OOC_CHAR8 OOC_SSA_Blocker__Dominates(OOC_SSA_Blocker__Region dom, OOC_SSA_Blocker__Region child) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)child;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)dom;
  i1 = i0!=i1;
  
l5:
  if (!i1) goto l17;
  i1 = (OOC_INT64)dom;
  
l8_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11492))+24);
  child = (OOC_SSA_Blocker__Region)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = i0!=i1;
  
l13:
  if (i2) goto l8_loop;
l17:
  return (i0!=(OOC_INT64)0);
  ;
}

static void OOC_SSA_Blocker__WriteBlocks(IO__ByteChannel c, OOC_SSA__ProcBlock pb, OOC_SSA_Blocker__Region root, ADT_Dictionary__Dictionary marker) {
  register OOC_INT64 i0,i1,i2;
  ADT_Dictionary_IntValue__Dictionary idMap;
  OOC_INT32 instrCount;
  IO_TextRider__Writer w;
  auto void OOC_SSA_Blocker__WriteBlocks_AssignId(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteResultId(OOC_SSA__Result res);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteOpnd(OOC_SSA__Opnd opnd);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteInstr(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__WriteBlocks_WriteRegion(OOC_SSA_Blocker__Region r);
    
    void OOC_SSA_Blocker__WriteBlocks_AssignId(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA_Blocker__Proxy n;

      i0 = (OOC_INT64)p;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 11862)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (!i1) goto l11;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11888))+80);
      n = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT64)0;
      if (!i2) goto l11;
l5_loop:
      OOC_SSA_Blocker__WriteBlocks_AssignId((OOC_SSA_Blocker__Proxy)i1);
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 11964));
      n = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT64)0;
      if (i2) goto l5_loop;
l11:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12024))+16);
      i1 = i1!=(OOC_INT64)0;
      if (i1) goto l14;
      i1=0u;
      goto l16;
l14:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12043))+16);
      i1 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)i1);
      i1 = !i1;
      
l16:
      if (!i1) goto l18;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12088))+16);
      i1 = (OOC_INT64)idMap;
      i2 = instrCount;
      ADT_Dictionary_IntValue__DictionaryDesc_Set((ADT_Dictionary_IntValue__Dictionary)i1, (Object__Object)i0, i2);
      i0 = instrCount;
      instrCount = (i0+1);
l18:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA__Instr instr;
      OOC_INT32 d;
      OOC_SSA_Blocker__Region r;
      OOC_INT32 i;

      i0 = (OOC_INT64)p;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12303))+16);
      instr = (OOC_SSA__Instr)i1;
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 12352)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"???", 4);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 12553)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"  ", 3);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 13146))+24);
      i1 = i1!=(OOC_INT64)0;
      if (!i1) goto l24;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 13181))+24);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 13189))+96);
      d = i1;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 13219))+24);
      r = (OOC_SSA_Blocker__Region)i0;
      i2 = i0!=(OOC_INT64)0;
      if (i2) goto l6_loop;
      i0=i1;
      goto l15;
l6_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 13272)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (!i2) goto l10;
      i1 = i1-1;
      d = i1;
      
l10:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 13340))+24);
      r = (OOC_SSA_Blocker__Region)i0;
      i2 = i0!=(OOC_INT64)0;
      if (i2) goto l6_loop;
l14:
      i0=i1;
l15:
      i = 1;
      i1 = 1<=i0;
      if (!i1) goto l24;
      i1=1;
l18_loop:
      i2 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 13401)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (OOC_CHAR8*)"  ", 3);
      i1 = i1+1;
      i = i1;
      i2 = i1<=i0;
      if (i2) goto l18_loop;
l24:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteResultId(OOC_SSA__Result res) {
      register OOC_INT64 i0,i1,i2,i3;
      Object__Object obj;
      OOC_SSA__Instr instr;
      Object__String value;
      OOC_INT32 id;
      OOC_INT32 count;
      OOC_SSA__Result ptr;

      i0 = (OOC_INT64)res;
      i1 = (OOC_INT64)marker;
      i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      if (!i1) goto l3;
      i1 = (OOC_INT64)marker;
      i1 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
      obj = (Object__Object)i1;
      i2 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 13737)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 91u);
      i2 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 13765)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i2, (Object__Object)i1);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 13795)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 93u);
l3:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 13899))+16);
      instr = (OOC_SSA__Instr)i1;
      i2 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)i1);
      if (i2) goto l18;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14958))+16);
      i2 = (OOC_INT64)idMap;
      i1 = ADT_Dictionary_IntValue__DictionaryDesc_Get((ADT_Dictionary_IntValue__Dictionary)i2, (Object__Object)i1);
      id = i1;
      i2 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 14977)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 40u);
      i2 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 15005)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i2, i1, 0);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15041))+16);
      i1 = i1!=i0;
      if (!i1) goto l17;
      count = 1;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 15103))+16);
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 15110));
      ptr = (OOC_SSA__Result)i1;
      i2 = i1!=i0;
      if (i2) goto l10;
      i0=1;
      goto l16;
l10:
      i2=i1;i1=1;
l11_loop:
      i1 = i1+1;
      count = i1;
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 15202));
      ptr = (OOC_SSA__Result)i2;
      i3 = i2!=i0;
      if (i3) goto l11_loop;
l15:
      i0=i1;
l16:
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 15242)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i1, 46u);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 15272)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
l17:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 15318)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 41u);
      goto l43;
l18:
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 13957)))), &_td_OOC_SSA__ConstDesc);
      if (i0) goto l37;
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 14179)))), &_td_OOC_SSA__DeclRefDesc);
      if (i0) goto l35;
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 14263)))), &_td_OOC_SSA__TypeRefDesc);
      if (i0) goto l33;
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 14335)))), &_td_OOC_SSA__AddressDesc);
      if (i0) goto l31;
      i0 = *(OOC_INT8*)((_check_pointer(i1, 14467))+72);
      switch (i0) {
      case 56:
      case 57:
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14569))+48);
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14579))+16);
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14589))+16);
        i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 14599));
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14637)))), &_td_OOC_SSA__DeclRefDesc, 14637)), 14645))+80);
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14651))+40);
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14657))+16);
        i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14569))+48);
        i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 14579))+16);
        i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 14589))+16);
        i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 14599));
        i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 14637)))), &_td_OOC_SSA__DeclRefDesc, 14637)), 14645))+80);
        i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 14651))+40);
        i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 14657))+16);
        i3 = (OOC_INT64)w;
        i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14662)), 0);
        OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 14549)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i3, (void*)(_check_pointer(i2, 14662)), i0);
        i0 = (OOC_INT64)w;
        OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14679)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"/dim", 5);
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14734))+48);
        i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 14744));
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14754)))), &_td_OOC_SSA__ConstDesc, 14754)), 14760))+80);
        i0 = Object_BigInt__BigIntDesc_ToLongInt((Object_BigInt__BigInt)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14775)))), &_td_Object_BigInt__BigIntDesc, 14775)));
        i1 = (OOC_INT64)w;
        OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 14716)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i1, i0, 0);
        goto l43;
      default:
        OOC_SSA__InstrDesc_LogOpcode((OOC_SSA__Instr)i1, (OOC_CHAR8*)"instr.opcode", 13);
        _assert(0u, 127, 14875);
        goto l43;
      }
l31:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14363)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 38u);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14413))+80);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14419))+40);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14425))+16);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14413))+80);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14419))+40);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14425))+16);
      i2 = (OOC_INT64)w;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14430)), 0);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 14393)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(_check_pointer(i1, 14430)), i0);
      goto l43;
l33:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14291)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"<typeref>", 10);
      goto l43;
l35:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14227))+80);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14233))+40);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 14239))+16);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14227))+80);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14233))+40);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14239))+16);
      i2 = (OOC_INT64)w;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 14244)), 0);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 14207)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(_check_pointer(i1, 14244)), i0);
      goto l43;
l37:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 13991))+80);
      i2 = (OOC_INT64)OOC_SSA__nil;
      i0 = i0==i2;
      if (i0) goto l40;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14092))+80);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 14092))+80);
      i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14099)))), Object_Boxed__ObjectDesc_ToString)),Object_Boxed__ObjectDesc_ToString)((Object_Boxed__Object)i1);
      value = (Object__String)i0;
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 14126)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i1, (Object__Object)i0);
      goto l43;
l40:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 14028)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"NIL", 4);
l43:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteOpnd(OOC_SSA__Opnd opnd) {
      register OOC_INT64 i0,i1;

      i0 = (OOC_INT64)opnd;
      i1 = *(OOC_INT8*)((_check_pointer(i0, 15437))+8);
      switch (i1) {
      case 18:
        i1 = (OOC_INT64)w;
        OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 15486)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"*ad*", 5);
        goto l6;
      case 20:
        i1 = (OOC_INT64)w;
        OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 15550)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"*rd*", 5);
        goto l6;
      case 17:
        i1 = (OOC_INT64)w;
        OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 15613)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"*led*", 6);
        goto l6;
      default:
        goto l6;
      }
l6:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 15790));
      OOC_SSA_Blocker__WriteBlocks_WriteResultId((OOC_SSA__Result)i0);
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteInstr(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_SSA__Instr instr;
      OOC_INT32 resCount;
      OOC_SSA__Result res;
      OOC_CHAR8 str[64];
      OOC_SSA__Opnd opnd;

      i0 = (OOC_INT64)p;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 16019))+16);
      instr = (OOC_SSA__Instr)i1;
      i2 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)i1);
      i2 = !i2;
      if (!i2) goto l40;
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      resCount = 0;
      res = (OOC_SSA__Result)i1;
      i0 = i1!=(OOC_INT64)0;
      if (i0) goto l5;
      i0=0;
      goto l22;
l5:
      i0=i1;i2=0;
l6_loop:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 16190))+24);
      i3 = i3!=(OOC_INT64)0;
      if (i3) goto l9;
      i3 = *(OOC_INT8*)((_check_pointer(i1, 16216))+72);
      i3 = i3==8;
      
      goto l11;
l9:
      i3=1u;
l11:
      if (!i3) goto l17;
      i3 = i2!=0;
      if (!i3) goto l16;
      i3 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 16303)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i3, 44u);
l16:
      OOC_SSA_Blocker__WriteBlocks_WriteResultId((OOC_SSA__Result)i0);
      i2 = i2+1;
      resCount = i2;
      
l17:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 16435));
      res = (OOC_SSA__Result)i0;
      i3 = i0!=(OOC_INT64)0;
      if (i3) goto l6_loop;
l21:
      i0=i2;
l22:
      i0 = i0==0;
      if (!i0) goto l25;
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16504)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"(--)", 5);
l25:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16559)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)" := ", 5);
      i0 = *(OOC_INT8*)((_check_pointer(i1, 16627))+9);
      i2 = *(OOC_INT8*)((_check_pointer(i1, 16612))+72);
      OOC_SSA_Opcode__GetName(i2, i0, (void*)(OOC_INT64)str, 64);
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16654)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(OOC_INT64)str, 64);
      i0 = *(OOC_INT32*)((_check_pointer(i1, 16692))+76);
      i0 = i0>=0;
      if (!i0) goto l28;
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16720)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"@", 2);
      i0 = (OOC_INT64)w;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 16770))+76);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16752)))), IO_TextRider__WriterDesc_WriteLInt)),IO_TextRider__WriterDesc_WriteLInt)((IO_TextRider__Writer)i0, i2, 0);
l28:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 16803)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i0, 32u);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 16852))+48);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT64)0;
      if (!i2) goto l39;
l31_loop:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 16920))+48);
      i2 = i0!=i2;
      if (!i2) goto l34;
      i2 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 16950)))), IO_TextRider__WriterDesc_WriteChar)),IO_TextRider__WriterDesc_WriteChar)((IO_TextRider__Writer)i2, 44u);
l34:
      OOC_SSA_Blocker__WriteBlocks_WriteOpnd((OOC_SSA__Opnd)i0);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 17034))+16);
      opnd = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT64)0;
      if (i2) goto l31_loop;
l39:
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17067)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
l40:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__WriteBlocks_WriteRegion(OOC_SSA_Blocker__Region r) {
      register OOC_INT64 i0,i1,i2,i3,i4;
      OOC_SSA__Opnd opnd;
      OOC_INT32 i;
      auto void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody(OOC_SSA_Blocker__Proxy p);
      auto void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBranchHead(OOC_SSA__Opnd select, OOC_SSA__Opnd opnd);
        
        void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody(OOC_SSA_Blocker__Proxy p) {
          register OOC_INT64 i0,i1;

          i0 = (OOC_INT64)p;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l12;
          
l3_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17293)))), &_td_OOC_SSA_Blocker__RegionDesc);
          if (i1) goto l6;
          OOC_SSA_Blocker__WriteBlocks_WriteInstr((OOC_SSA_Blocker__Proxy)i0);
          goto l7;
l6:
          OOC_SSA_Blocker__WriteBlocks_WriteRegion((OOC_SSA_Blocker__Region)i0);
l7:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 17408));
          p = (OOC_SSA_Blocker__Proxy)i0;
          i1 = i0!=(OOC_INT64)0;
          if (i1) goto l3_loop;
l12:
          return;
          ;
        }

        
        void OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBranchHead(OOC_SSA__Opnd select, OOC_SSA__Opnd opnd) {
          register OOC_INT64 i0;

          i0 = (OOC_INT64)w;
          OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17533)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"IF ", 4);
          i0 = (OOC_INT64)select;
          OOC_SSA_Blocker__WriteBlocks_WriteOpnd((OOC_SSA__Opnd)i0);
          i0 = (OOC_INT64)w;
          OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17593)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)" = ", 4);
          i0 = (OOC_INT64)opnd;
          OOC_SSA_Blocker__WriteBlocks_WriteOpnd((OOC_SSA__Opnd)i0);
          i0 = (OOC_INT64)w;
          OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17651)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)" THEN", 6);
          return;
          ;
        }


      i0 = (OOC_INT64)r;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17730)))), &_td_OOC_SSA_Blocker__LoopDesc);
      if (i1) goto l16;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17917)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (i1) goto l5;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18453))+80);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody((OOC_SSA_Blocker__Proxy)i0);
      goto l17;
l5:
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 17960)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"SELECT", 7);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 17987)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i1);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18015))+16);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18022))+48);
      opnd = (OOC_SSA__Opnd)i1;
      i = 0;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18075))+104);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18082)), 0);
      i2 = 0!=i2;
      if (!i2) goto l14;
      {register OOC_INT64 h0=i0;i0=i1;i1=h0;}i2=0;
l9_loop:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18111))+16);
      opnd = (OOC_SSA__Opnd)i0;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18152))+104);
      i3 = _check_pointer(i3, 18159);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i2 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 18159))*8);
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i2);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18193))+16);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18200))+48);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBranchHead((OOC_SSA__Opnd)i1, (OOC_SSA__Opnd)i0);
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18230)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      i0 = (OOC_INT64)r;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18263))+104);
      i0 = _check_pointer(i0, 18270);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      i2 = i;
      i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(i2, i1, OOC_UINT32, 18270))*8);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18273))+80);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT64)opnd;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18305))+16);
      i1 = i;
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i1+1;
      i = i1;
      i2 = (OOC_INT64)r;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 18075))+104);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 18082)), 0);
      i3 = i1!=i3;
      if (!i3) goto l13;
      {register OOC_INT64 h0=i1;i1=i2;i2=h0;}
      goto l9_loop;
l13:
      i0=i2;
l14:
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18380)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"END SELECT", 11);
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18411)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
      goto l17;
l16:
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 17771)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i1, (OOC_CHAR8*)"LOOP", 5);
      i1 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 17796)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i1);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 17827))+80);
      OOC_SSA_Blocker__WriteBlocks_WriteRegion_WriteBody((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT64)r;
      OOC_SSA_Blocker__WriteBlocks_WriteInstrPrefix((OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17868)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"END LOOP", 9);
      i0 = (OOC_INT64)w;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 17897)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
l17:
      i0 = (OOC_INT64)r;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 18485))+16);
      i1 = i1!=(OOC_INT64)0;
      if (!i1) goto l20;
      OOC_SSA_Blocker__WriteBlocks_WriteInstr((OOC_SSA_Blocker__Proxy)i0);
l20:
      return;
      ;
    }


  i0 = (OOC_INT64)ADT_Dictionary_IntValue__New();
  idMap = (ADT_Dictionary_IntValue__Dictionary)i0;
  instrCount = 1;
  i0 = (OOC_INT64)root;
  OOC_SSA_Blocker__WriteBlocks_AssignId((OOC_SSA_Blocker__Proxy)i0);
  i0 = (OOC_INT64)c;
  i0 = (OOC_INT64)IO_TextRider__ConnectWriter((IO__ByteChannel)i0);
  w = (IO_TextRider__Writer)i0;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18692)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18708)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (OOC_CHAR8*)"Procedure: ", 12);
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18761))+40);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 18771))+40);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 18777))+16);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18761))+40);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18771))+40);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 18777))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 18782)), 0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18744)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i0, (void*)(_check_pointer(i1, 18782)), i2);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 18791)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  i0 = (OOC_INT64)root;
  OOC_SSA_Blocker__WriteBlocks_WriteRegion((OOC_SSA_Blocker__Region)i0);
  return;
  ;
}

static OOC_CHAR8 OOC_SSA_Blocker__AntiDepViolation(OOC_SSA__ProcBlock pb, OOC_SSA_Blocker__Region root) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA_Destore__State destore;
  OOC_INT32 violationCount;
  OOC_INT32 currentId;
  OOC_SSA__Instr get;
  OOC_SSA_Blocker__Proxy startOfScan;
  auto void OOC_SSA_Blocker__AntiDepViolation_ScanBackward(OOC_SSA_Blocker__Region region, OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign, OOC_SSA__Result storeInGet);
  auto void OOC_SSA_Blocker__AntiDepViolation_ScanForward(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign);
    
    void OOC_SSA_Blocker__AntiDepViolation_ScanBackward(OOC_SSA_Blocker__Region region, OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign, OOC_SSA__Result storeInGet) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
      OOC_SSA__Result storeOut;
      OOC_INT32 i;
      OOC_SSA__Opnd opnd;
      OOC_SSA_Blocker__Proxy x;

      i0 = (OOC_INT64)proxy;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 19799)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l5:
      if (!i1) goto l32;
      i1 = (OOC_INT64)readDesign;
      i2 = (OOC_INT64)storeInGet;
      
l8_loop:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 19838))+16);
      i3 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i3);
      storeOut = (OOC_SSA__Result)i3;
      i4 = *(OOC_INT32*)((_check_pointer(i0, 19882))+64);
      i5 = currentId;
      i4 = i4==i5;
      if (i4) goto l11;
      i4 = i3==i2;
      
      goto l13;
l11:
      i4=1u;
l13:
      if (i4) goto l22;
      i3 = i3!=(OOC_INT64)0;
      if (i3) goto l17;
      i3=0u;
      goto l19;
l17:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 20184))+16);
      i4 = (OOC_INT64)destore;
      i3 = OOC_SSA_Destore__StateDesc_ClobberedBy((OOC_SSA_Destore__State)i4, (OOC_SSA__Opnd)i1, (OOC_SSA__Instr)i3);
      
l19:
      if (!i3) goto l23;
      i3 = violationCount;
      violationCount = (i3+1);
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 20245))+16);
      i4 = (OOC_INT64)get;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i4, 18);
      goto l23;
l22:
      return;
l23:
      i3 = currentId;
      *(OOC_INT32*)((_check_pointer(i0, 20443))+64) = i3;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 20488))+8);
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      i3 = i0!=(OOC_INT64)0;
      if (i3) goto l26;
      i3=0u;
      goto l28;
l26:
      i3 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 19799)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l28:
      if (i3) goto l8_loop;
l32:
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l41;
      i0 = (OOC_INT64)region;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21675))+24);
      i1 = i1!=(OOC_INT64)0;
      if (!i1) goto l81;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21716))+24);
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 21725)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (!i1) goto l39;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21769))+24);
      region = (OOC_SSA_Blocker__Region)i0;
l39:
      i0 = (OOC_INT64)region;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21840))+8);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21824))+24);
      i2 = (OOC_INT64)storeInGet;
      i3 = (OOC_INT64)readDesign;
      OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Opnd)i3, (OOC_SSA__Result)i2);
      goto l81;
l41:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 20760))+16);
      i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i1);
      storeOut = (OOC_SSA__Result)i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 20804))+64);
      i3 = currentId;
      i2 = i2==i3;
      if (i2) goto l44;
      i2 = (OOC_INT64)storeInGet;
      i1 = i1==i2;
      
      goto l46;
l44:
      i1=1u;
l46:
      if (i1) goto l79;
      *(OOC_INT32*)((_check_pointer(i0, 20904))+64) = i3;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 20947)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (i1) goto l69;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 21217)))), &_td_OOC_SSA_Blocker__LoopDesc);
      if (!i1) goto l81;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21252))+16);
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l54;
      i1=0u;
      goto l56;
l54:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 21312))+8);
      i1 = i1==11;
      
l56:
      if (!i1) goto l81;
      i1 = (OOC_INT64)storeInGet;
      i2 = (OOC_INT64)readDesign;
      
l58_loop:
      i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 21364));
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 21369))+16);
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 21376))+32);
      i3 = _type_guard(i3, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 21383)))), &_td_OOC_SSA_Blocker__ProxyDesc, 21383);
      x = (OOC_SSA_Blocker__Proxy)i3;
      i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 21420))+24);
      OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i4, (OOC_SSA_Blocker__Proxy)i3, (OOC_SSA__Opnd)i2, (OOC_SSA__Result)i1);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21484))+16);
      opnd = (OOC_SSA__Opnd)i0;
      i3 = i0!=(OOC_INT64)0;
      if (i3) goto l61;
      i3=0u;
      goto l63;
l61:
      i3 = *(OOC_INT8*)((_check_pointer(i0, 21312))+8);
      i3 = i3==11;
      
l63:
      if (i3) goto l58_loop;
      goto l81;
l69:
      i = 0;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21012))+104);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 21019)), 0);
      i1 = 0!=i1;
      if (!i1) goto l81;
      i1 = (OOC_INT64)storeInGet;
      i2 = (OOC_INT64)readDesign;
      i3=0;
l72_loop:
      i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21076))+104);
      i4 = _check_pointer(i4, 21083);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 21083))*8);
      i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21059))+104);
      i5 = _check_pointer(i5, 21066);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 21086))+88);
      i5 = (OOC_INT64)*(OOC_INT64*)(i5+(_check_index(i3, i6, OOC_UINT32, 21066))*8);
      OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i5, (OOC_SSA_Blocker__Proxy)i4, (OOC_SSA__Opnd)i2, (OOC_SSA__Result)i1);
      i3 = i3+1;
      i = i3;
      i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 21012))+104);
      i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 21019)), 0);
      i4 = i3!=i4;
      if (i4) goto l72_loop;
      goto l81;
l79:
      return;
l81:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__AntiDepViolation_ScanForward(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd readDesign) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_SSA__Result storeOut;

      i0 = (OOC_INT64)proxy;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 22283)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l5:
      if (!i1) goto l23;
      i1 = (OOC_INT64)readDesign;
      
l7_loop:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22322))+16);
      i2 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i2);
      storeOut = (OOC_SSA__Result)i2;
      i2 = i2!=(OOC_INT64)0;
      if (i2) goto l10;
      i2=0u;
      goto l12;
l10:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22429))+16);
      i3 = (OOC_INT64)destore;
      i2 = OOC_SSA_Destore__StateDesc_ClobberedBy((OOC_SSA_Destore__State)i3, (OOC_SSA__Opnd)i1, (OOC_SSA__Instr)i2);
      
l12:
      if (!i2) goto l14;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 22458))+16);
      i3 = (OOC_INT64)get;
      OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 18);
      return;
l14:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 23113));
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      i2 = i0!=(OOC_INT64)0;
      if (i2) goto l17;
      i2=0u;
      goto l19;
l17:
      i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 22283)))), &_td_OOC_SSA_Blocker__RegionDesc));
      
l19:
      if (i2) goto l7_loop;
l23:
      return;
      ;
    }


  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA_Destore__New((OOC_SSA__ProcBlock)i0);
  destore = (OOC_SSA_Destore__State)i1;
  i1 = (OOC_INT64)root;
  OOC_SSA_Blocker__ClearMarkers((OOC_SSA_Blocker__Region)i1);
  violationCount = 0;
  currentId = 1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23288))+24);
  get = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l15;
l3_loop:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 23339))+72);
  i1 = i1==12;
  if (i1) goto l6;
  i1=0u;
  goto l8;
l6:
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  i1 = i1==(OOC_INT64)0;
  
l8:
  if (!i1) goto l10;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23494))+32);
  i1 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 23501)))), &_td_OOC_SSA_Blocker__ProxyDesc, 23501);
  startOfScan = (OOC_SSA_Blocker__Proxy)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23682))+48);
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 23585))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 23542))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 23692));
  OOC_SSA_Blocker__AntiDepViolation_ScanBackward((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Proxy)i3, (OOC_SSA__Opnd)i0, (OOC_SSA__Result)i2);
  i0 = (OOC_INT64)get;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetOpndClass((OOC_SSA__Instr)i0, 5);
  i1 = (OOC_INT64)startOfScan;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 23741));
  OOC_SSA_Blocker__AntiDepViolation_ScanForward((OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Opnd)i0);
  i0 = currentId;
  currentId = (i0+1);
l10:
  i0 = (OOC_INT64)get;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 23874))+56);
  get = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l15:
  i0 = violationCount;
  return (i0!=0);
  ;
}

void OOC_SSA_Blocker__RemoveAntiDeps(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA__Instr instr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd next;

  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24361))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l20;
l3_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24420))+48);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l15;
l6_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 24480))+16);
  next = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 24509))+8);
  switch (i3) {
  case 18:
  case 20:
    OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
    goto l10;
  default:
    goto l10;
  }
l10:
  opnd = (OOC_SSA__Opnd)i2;
  i1 = i2!=(OOC_INT64)0;
  if (!i1) goto l15;
  i1=i2;
  goto l6_loop;
l15:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24720))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l20:
  return;
  ;
}

void OOC_SSA_Blocker__RemoveRegionDeps(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA__Instr instr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd next;

  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24891))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l19;
l3_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 24950))+48);
  opnd = (OOC_SSA__Opnd)i1;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l14;
l6_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 25010))+16);
  next = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 25038))+8);
  i3 = i3==20;
  if (!i3) goto l9;
  OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
l9:
  opnd = (OOC_SSA__Opnd)i2;
  i1 = i2!=(OOC_INT64)0;
  if (!i1) goto l14;
  i1=i2;
  goto l6_loop;
l14:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 25170))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l19:
  return;
  ;
}

OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions(OOC_SSA__ProcBlock pb, OOC_CHAR8 markAntiDeps) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr enter;
  OOC_SSA_Blocker__Loop mainLoop;
  OOC_SSA_Blocker__Region ready;
  OOC_SSA_Blocker__Region waiting;
  OOC_SSA__Instr instr;
  OOC_INT32 useCount;
  OOC_SSA__Result res;
  OOC_SSA__Opnd use;
  OOC_SSA_Blocker__Proxy p;
  OOC_SSA_Blocker__Region root;
  OOC_SSA_Blocker__Region region;
  auto void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure(OOC_SSA_Blocker__Loop loop, OOC_SSA__Result storeIn, OOC_SSA__Instr endOfSearch, OOC_SSA_Blocker__Loop preceedingLoop);
  auto void OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops(OOC_SSA_Blocker__Loop loop);
  auto void OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop(OOC_SSA_Blocker__Loop loop);
  auto void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps(OOC_SSA_Blocker__Region r);
  auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse(OOC_SSA__Opnd use);
  auto void OOC_SSA_Blocker__ArrangeInstructions_UpdateDefs(OOC_SSA_Blocker__Proxy p);
  auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion(OOC_SSA_Blocker__Proxy p);
  auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion(OOC_SSA_Blocker__Region r);
  auto void OOC_SSA_Blocker__ArrangeInstructions_ClearRegion(OOC_SSA_Blocker__Region r);
    
    void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure(OOC_SSA_Blocker__Loop loop, OOC_SSA__Result storeIn, OOC_SSA__Instr endOfSearch, OOC_SSA_Blocker__Loop preceedingLoop) {
      register OOC_INT64 i0,i1,i2,i3,i4;
      OOC_SSA__Opnd use;
      OOC_SSA__Instr instr;
      OOC_SSA__Instr loopEnd;
      OOC_SSA_Blocker__Loop loopProxy;
      OOC_SSA_Blocker__Proxy dummy;
      auto void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure_RegisterPreceeding(OOC_SSA_Blocker__Loop preceeding, OOC_SSA_Blocker__Loop following);
        
        void OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure_RegisterPreceeding(OOC_SSA_Blocker__Loop preceeding, OOC_SSA_Blocker__Loop following) {
          register OOC_INT64 i0,i1,i2;
          OOC_SSA_Blocker__Preceeds pre;

          i0 = (OOC_INT64)preceeding;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l4;
          i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__Preceeds.baseTypes[0]);
          pre = (OOC_SSA_Blocker__Preceeds)i1;
          *(OOC_INT64*)((_check_pointer(i1, 27313))+8) = i0;
          i0 = (OOC_INT64)following;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27385))+128);
          *(OOC_INT64*)(_check_pointer(i1, 27358)) = i2;
          *(OOC_INT64*)((_check_pointer(i0, 27422))+128) = i1;
l4:
          return;
          ;
        }


      i0 = (OOC_INT64)storeIn;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l24;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27557))+24);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l24;
l5_loop:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 27619))+24);
      instr = (OOC_SSA__Instr)i0;
      i1 = (OOC_INT64)endOfSearch;
      i2 = i0!=i1;
      if (!i2) goto l18;
      i2 = *(OOC_INT8*)((_check_pointer(i0, 27689))+72);
      i2 = i2==10;
      if (i2) goto l13;
      i2 = (OOC_INT64)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
      p = (OOC_SSA_Blocker__Proxy)i2;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 28904))+56);
      i4 = (OOC_INT64)loop;
      i3 = i3!=i4;
      if (!i3) goto l18;
      *(OOC_INT64*)((_check_pointer(i2, 28954))+56) = i4;
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
      i2 = (OOC_INT64)preceedingLoop;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i4, (OOC_SSA__Result)i0, (OOC_SSA__Instr)i1, (OOC_SSA_Blocker__Loop)i2);
      goto l18;
l13:
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
      loopEnd = (OOC_SSA__Instr)i0;
      i0 = (OOC_INT64)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
      p = (OOC_SSA_Blocker__Proxy)i0;
      i0 = _type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 28098)))), &_td_OOC_SSA_Blocker__LoopDesc, 28098);
      loopProxy = (OOC_SSA_Blocker__Loop)i0;
      i1 = (OOC_INT64)preceedingLoop;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure_RegisterPreceeding((OOC_SSA_Blocker__Loop)i1, (OOC_SSA_Blocker__Loop)i0);
      i0 = (OOC_INT64)instr;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 28205))+32);
      i1 = i1==(OOC_INT64)0;
      if (!i1) goto l18;
      i1 = (OOC_INT64)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
      dummy = (OOC_SSA_Blocker__Proxy)i1;
      i1 = (OOC_INT64)loopProxy;
      i2 = (OOC_INT64)loop;
      OOC_SSA_Blocker__LoopDesc_AppendLoop((OOC_SSA_Blocker__Loop)i2, (OOC_SSA_Blocker__Loop)i1);
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
      i3 = (OOC_INT64)loopEnd;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i1, (OOC_SSA__Result)i0, (OOC_SSA__Instr)i3, (OOC_SSA_Blocker__Loop)(OOC_INT64)0);
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i3);
      i3 = (OOC_INT64)endOfSearch;
      OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i2, (OOC_SSA__Result)i0, (OOC_SSA__Instr)i3, (OOC_SSA_Blocker__Loop)i1);
l18:
      i0 = (OOC_INT64)use;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29232))+32);
      use = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l5_loop;
l24:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops(OOC_SSA_Blocker__Loop loop) {
      register OOC_INT64 i0,i1;
      OOC_SSA_Blocker__Loop oldNested;
      OOC_SSA_Blocker__Loop nested;
      auto OOC_SSA_Blocker__Loop OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext(OOC_SSA_Blocker__Loop *list);
        
        OOC_SSA_Blocker__Loop OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext(OOC_SSA_Blocker__Loop *list) {
          register OOC_INT64 i0,i1,i2;
          OOC_SSA_Blocker__Preceeds ptr;
          OOC_SSA_Blocker__Loop best;

          i0 = (OOC_INT64)*list;
          _assert((i0!=(OOC_INT64)0), 127, 29715);
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 29799))+128);
          ptr = (OOC_SSA_Blocker__Preceeds)i1;
          i2 = i1!=(OOC_INT64)0;
          if (i2) goto l3;
          i2=0u;
          goto l5;
l3:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 29848))+8);
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 29864))+136);
          
l5:
          if (!i2) goto l17;
l8_loop:
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 29899));
          ptr = (OOC_SSA_Blocker__Preceeds)i1;
          i2 = i1!=(OOC_INT64)0;
          if (i2) goto l11;
          i2=0u;
          goto l13;
l11:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 29848))+8);
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 29864))+136);
          
l13:
          if (i2) goto l8_loop;
l17:
          i1 = i1==(OOC_INT64)0;
          if (i1) goto l20;
          i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext((void*)((_check_pointer(i0, 30115))+112));
          return (OOC_SSA_Blocker__Loop)i0;
          goto l21;
l20:
          best = (OOC_SSA_Blocker__Loop)i0;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 30002))+112);
          *list = (OOC_SSA_Blocker__Loop)i1;
          *(OOC_UINT8*)((_check_pointer(i0, 30028))+136) = 1u;
          return (OOC_SSA_Blocker__Loop)i0;
l21:
          _failed_function(29610); return 0;
          ;
        }


      i0 = (OOC_INT64)loop;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 30198))+104);
      oldNested = (OOC_SSA_Blocker__Loop)i1;
      *(OOC_INT64*)((_check_pointer(i0, 30223))+104) = (OOC_INT64)0;
      i0 = i1!=(OOC_INT64)0;
      if (!i0) goto l8;
l3_loop:
      i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops_GetNext((void*)(OOC_INT64)&oldNested);
      nested = (OOC_SSA_Blocker__Loop)i0;
      i1 = (OOC_INT64)loop;
      OOC_SSA_Blocker__LoopDesc_AppendLoop((OOC_SSA_Blocker__Loop)i1, (OOC_SSA_Blocker__Loop)i0);
      i0 = (OOC_INT64)oldNested;
      i0 = i0!=(OOC_INT64)0;
      if (i0) goto l3_loop;
l8:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop(OOC_SSA_Blocker__Loop loop) {
      register OOC_INT64 i0,i1;
      auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA__Instr instr);
        
        OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop(OOC_SSA_Blocker__Loop loop, OOC_SSA__Instr instr) {
          register OOC_INT64 i0,i1,i2,i3,i4,i5;
          OOC_SSA_Blocker__Proxy instrProxy;
          OOC_INT32 inLoopUse;
          OOC_SSA__Result res;
          OOC_SSA__Opnd use;
          OOC_SSA_Blocker__Proxy useProxy;

          i0 = (OOC_INT64)instr;
          i1 = (OOC_INT64)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
          instrProxy = (OOC_SSA_Blocker__Proxy)i1;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32079))+40);
          i3 = (OOC_INT64)loop;
          i2 = i2==i3;
          if (i2) goto l44;
          inLoopUse = 0;
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT64)0;
          if (i2) goto l5;
          i0=0;
          goto l36;
l5:
          i2=0;
l6_loop:
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 32342))+24);
          use = (OOC_SSA__Opnd)i4;
          i5 = i4!=(OOC_INT64)0;
          if (!i5) goto l31;
          {register OOC_INT64 h0=i2;i2=i4;i4=h0;}
l10_loop:
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32424))+24);
          i5 = (OOC_INT64)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i5);
          useProxy = (OOC_SSA_Blocker__Proxy)i5;
          i5 = i5==i3;
          if (i5) goto l13;
          i5=0u;
          goto l19;
l13:
          i5 = *(OOC_INT8*)((_check_pointer(i2, 32493))+8);
          i5 = i5==13;
          if (i5) goto l16;
          i5 = OOC_SSA__OpndDesc_OpndIndex((OOC_SSA__Opnd)i2);
          i5 = i5==2;
          
          goto l19;
l16:
          i5=1u;
l19:
          if (i5) goto l21;
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32607))+24);
          i5 = OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop((OOC_SSA_Blocker__Loop)i3, (OOC_SSA__Instr)i5);
          
          goto l23;
l21:
          i5=1u;
l23:
          if (!i5) goto l26;
          i4 = i4+1;
          inLoopUse = i4;
          
l26:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 32697))+32);
          use = (OOC_SSA__Opnd)i2;
          i5 = i2!=(OOC_INT64)0;
          if (i5) goto l10_loop;
l30:
          i2=i4;
l31:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 32747));
          res = (OOC_SSA__Result)i0;
          i4 = i0!=(OOC_INT64)0;
          if (i4) goto l6_loop;
l35:
          i0=i2;
l36:
          *(OOC_INT64*)((_check_pointer(i1, 32797))+40) = i3;
          *(OOC_UINT8*)((_check_pointer(i1, 32843))+48) = (i0!=0);
          i0 = *(OOC_UINT8*)((_check_pointer(i1, 32902))+48);
          if (i0) goto l39;
          i0=0u;
          goto l41;
l39:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 32931))+32);
          i0 = i0==(OOC_INT64)0;
          
l41:
          if (!i0) goto l43;
          *(OOC_INT64*)((_check_pointer(i1, 33118))+32) = i3;
l43:
          i0 = *(OOC_UINT8*)((_check_pointer(i1, 33181))+48);
          return i0;
          goto l45;
l44:
          i0 = *(OOC_UINT8*)((_check_pointer(i1, 32209))+48);
          return i0;
l45:
          _failed_function(31059); return 0;
          ;
        }


      i0 = (OOC_INT64)loop;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l6;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33301))+112);
      OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop((OOC_SSA_Blocker__Loop)i1);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33340))+104);
      OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop((OOC_SSA_Blocker__Loop)i1);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33372))+16);
      i1 = i1!=(OOC_INT64)0;
      if (!i1) goto l6;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 33433))+16);
      i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopStart((OOC_SSA__Instr)i1);
      i0 = OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop_PartOfLoop((OOC_SSA_Blocker__Loop)i0, (OOC_SSA__Instr)i1);
l6:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps(OOC_SSA_Blocker__Region r) {
      register OOC_INT64 i0,i1;
      OOC_SSA_Blocker__Proxy proxy;
      OOC_SSA__Opnd opnd;
      auto void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd opnd);
        
        void OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep(OOC_SSA_Blocker__Proxy proxy, OOC_SSA__Opnd opnd) {
          register OOC_INT64 i0,i1,i2,i3,i4,i5;
          OOC_SSA_Blocker__Proxy argProxy;
          OOC_SSA_Blocker__Proxy a;
          OOC_SSA_Blocker__Proxy b;
          OOC_SSA_Blocker__Loop argLoop;
          OOC_SSA__Opnd exit;
          OOC_SSA__Instr exitInstr;

          i0 = (OOC_INT64)opnd;
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 33807));
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33812))+16);
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33819))+32);
          i1 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 33826)))), &_td_OOC_SSA_Blocker__ProxyDesc, 33826);
          argProxy = (OOC_SSA_Blocker__Proxy)i1;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33854))+24);
          i3 = (OOC_INT64)r;
          i2 = i2!=i3;
          if (!i2) goto l30;
          a = (OOC_SSA_Blocker__Proxy)i1;
          i2 = (OOC_INT64)proxy;
          b = (OOC_SSA_Blocker__Proxy)i2;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 33938))+24);
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 33964))+24);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 33946))+96);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 33972))+96);
          i3 = i3>i4;
          if (i3) goto l5;
          i3=i1;
          goto l11;
l5:
          i3=i1;
l6_loop:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34009))+24);
          a = (OOC_SSA_Blocker__Proxy)i3;
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 33938))+24);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 33964))+24);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 33946))+96);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 33972))+96);
          i4 = i4>i5;
          if (i4) goto l6_loop;
l11:
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34052))+24);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34078))+24);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 34060))+96);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 34086))+96);
          i4 = i4>i5;
          if (!i4) goto l20;
l15_loop:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34123))+24);
          b = (OOC_SSA_Blocker__Proxy)i2;
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34052))+24);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34078))+24);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 34060))+96);
          i5 = *(OOC_INT32*)((_check_pointer(i5, 34086))+96);
          i4 = i4>i5;
          if (i4) goto l15_loop;
l20:
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34166))+24);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34178))+24);
          i4 = i4!=i5;
          if (i4) goto l23;
          {register OOC_INT64 h0=i2;i2=i3;i3=h0;}
          goto l29;
l23:
          {register OOC_INT64 h0=i2;i2=i3;i3=h0;}
l24_loop:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34209))+24);
          a = (OOC_SSA_Blocker__Proxy)i2;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34237))+24);
          b = (OOC_SSA_Blocker__Proxy)i3;
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34166))+24);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34178))+24);
          i4 = i4!=i5;
          if (i4) goto l24_loop;
l29:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34298))+16);
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34273))+16);
          OOC_SSA__InstrDesc_AddUniqueOpnd((OOC_SSA__Instr)i3, (OOC_SSA__Result)i2, 20);
l30:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 34514))+32);
          argLoop = (OOC_SSA_Blocker__Loop)i1;
          i2 = i1!=0;
          if (i2) goto l33;
          i2=0u;
          goto l35;
l33:
          i2 = (OOC_INT64)proxy;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34582))+24);
          i2 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i2);
          i2 = !i2;
          
l35:
          if (!i2) goto l53;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 34622))+16);
          i2 = *(OOC_INT8*)((_check_pointer(i2, 34629))+72);
          _assert((i2==11), 127, 34607);
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 34682))+16);
          i1 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, 2);
          exit = (OOC_SSA__Opnd)i1;
          i2 = i1!=0;
          if (i2) goto l39;
          i2=0u;
          goto l41;
l39:
          i2 = *(OOC_INT8*)((_check_pointer(i1, 34740))+8);
          i2 = i2==11;
          
l41:
          if (!i2) goto l53;
l43_loop:
          i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 34798));
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34803))+16);
          exitInstr = (OOC_SSA__Instr)i2;
          i3 = *(OOC_INT8*)((_check_pointer(i2, 34841))+72);
          _assert((i3==9), 127, 34824);
          i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 34902));
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 34907))+16);
          OOC_SSA__InstrDesc_AddOpnd((OOC_SSA__Instr)i2, (OOC_SSA__Result)i3, 18);
          i3 = (OOC_INT64)OOC_SSA__InstrDesc_LastOpnd((OOC_SSA__Instr)i2);
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 34971))+32);
          OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep((OOC_SSA_Blocker__Proxy)(_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 34978)))), &_td_OOC_SSA_Blocker__ProxyDesc, 34978)), (OOC_SSA__Opnd)i3);
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 35034))+16);
          exit = (OOC_SSA__Opnd)i1;
          i2 = i1!=0;
          if (i2) goto l46;
          i2=0u;
          goto l48;
l46:
          i2 = *(OOC_INT8*)((_check_pointer(i1, 34740))+8);
          i2 = i2==11;
          
l48:
          if (i2) goto l43_loop;
l53:
          return;
          ;
        }


      i0 = (OOC_INT64)r;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35127))+80);
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l36;
l3_loop:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35182))+16);
      i1 = i1!=(OOC_INT64)0;
      if (!i1) goto l28;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35222))+16);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 35229))+72);
      switch (i1) {
      case 5:
        i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35304))+16);
        i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 35311))+48);
        OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep((OOC_SSA_Blocker__Proxy)i0, (OOC_SSA__Opnd)i1);
        goto l28;
      case 8:
        goto l28;
      case 11:
        goto l28;
      default:
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35477))+16);
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35484))+48);
        opnd = (OOC_SSA__Opnd)i0;
        i1 = i0!=(OOC_INT64)0;
        if (i1) goto l13;
        i1=0u;
        goto l15;
l13:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 35534))+8);
        i1 = i1!=20;
        
l15:
        if (!i1) goto l28;
l17_loop:
        i1 = (OOC_INT64)proxy;
        OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps_AddOpndDep((OOC_SSA_Blocker__Proxy)i1, (OOC_SSA__Opnd)i0);
        i0 = (OOC_INT64)opnd;
        i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 35636))+16);
        opnd = (OOC_SSA__Opnd)i0;
        i1 = i0!=(OOC_INT64)0;
        if (i1) goto l20;
        i1=0u;
        goto l22;
l20:
        i1 = *(OOC_INT8*)((_check_pointer(i0, 35534))+8);
        i1 = i1!=20;
        
l22:
        if (i1) goto l17_loop;
        goto l28;
      }
l28:
      i0 = (OOC_INT64)proxy;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 35712)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (!i1) goto l31;
      OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps((OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 35759)))), &_td_OOC_SSA_Blocker__RegionDesc, 35759)));
l31:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 35804));
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l36:
      return;
      ;
    }

    
    OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse(OOC_SSA__Opnd use) {
      register OOC_INT64 i0,i1,i2;
      OOC_INT8 opcode;

      i0 = (OOC_INT64)use;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36199))+24);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 36205))+72);
      opcode = i1;
      i2 = i1==8;
      if (i2) goto l7;
      i2 = i1==11;
      if (i2) goto l5;
      i2=0u;
      goto l9;
l5:
      i2 = *(OOC_INT8*)((_check_pointer(i0, 36313))+8);
      i2 = i2==11;
      
      goto l9;
l7:
      i2=1u;
l9:
      if (i2) goto l15;
      i1 = i1==86;
      if (i1) goto l13;
      i0=0u;
      goto l16;
l13:
      i0 = OOC_SSA__OpndDesc_OpndIndex((OOC_SSA__Opnd)i0);
      i0 = i0==2;
      
      goto l16;
l15:
      i0=1u;
l16:
      return i0;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_UpdateDefs(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA__Opnd opnd;
      OOC_SSA__Instr defInstr;
      OOC_SSA_Blocker__Proxy pDef;

      i0 = (OOC_INT64)p;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36560))+16);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36567))+48);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l14;
l3_loop:
      i1 = OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse((OOC_SSA__Opnd)i0);
      i1 = !i1;
      if (!i1) goto l9;
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 36668));
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36673))+16);
      defInstr = (OOC_SSA__Instr)i1;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 36705))+40);
      *(OOC_INT32*)((_check_pointer(i1, 36705))+40) = (i2-1);
      i2 = *(OOC_INT32*)((_check_pointer(i1, 36738))+40);
      i2 = i2==0;
      if (!i2) goto l9;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 36785))+32);
      i1 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 36792)))), &_td_OOC_SSA_Blocker__ProxyDesc, 36792);
      pDef = (OOC_SSA_Blocker__Proxy)i1;
      i2 = (OOC_INT64)waiting;
      OOC_SSA_Blocker__RegionDesc_Remove((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
      i2 = (OOC_INT64)ready;
      OOC_SSA_Blocker__RegionDesc_Append((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
l9:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 36918))+16);
      opnd = (OOC_SSA__Opnd)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l14:
      return;
      ;
    }

    
    OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion(OOC_SSA_Blocker__Proxy p) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_SSA__Instr loopEnd;
      OOC_SSA_Blocker__Region region;
      OOC_SSA__Result res;
      OOC_SSA__Opnd use;
      OOC_SSA_Blocker__Region useRegion;
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_Merge(OOC_SSA_Blocker__Region a, OOC_SSA_Blocker__Region b);
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_RegionOfUse(OOC_SSA__Opnd opnd);
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_CorrectForLoop(OOC_SSA_Blocker__Region region);
      auto OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_MoveLoopInvariants(OOC_SSA_Blocker__Region region);
        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_Merge(OOC_SSA_Blocker__Region a, OOC_SSA_Blocker__Region b) {
          register OOC_INT64 i0,i1,i2,i3;

          i0 = (OOC_INT64)a;
          i1 = (OOC_INT64)b;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 37724))+96);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 37742))+96);
          i2 = i2>i3;
          if (!i2) goto l9;
l4_loop:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37777))+24);
          a = (OOC_SSA_Blocker__Region)i0;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 37724))+96);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 37742))+96);
          i2 = i2>i3;
          if (i2) goto l4_loop;
l9:
          i2 = *(OOC_INT32*)((_check_pointer(i1, 37816))+96);
          i3 = *(OOC_INT32*)((_check_pointer(i0, 37834))+96);
          i2 = i2>i3;
          if (!i2) goto l18;
l13_loop:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 37869))+24);
          b = (OOC_SSA_Blocker__Region)i1;
          i2 = *(OOC_INT32*)((_check_pointer(i1, 37816))+96);
          i3 = *(OOC_INT32*)((_check_pointer(i0, 37834))+96);
          i2 = i2>i3;
          if (i2) goto l13_loop;
l18:
          i2 = i0!=i1;
          if (!i2) goto l27;
l22_loop:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37933))+24);
          a = (OOC_SSA_Blocker__Region)i0;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 37959))+24);
          b = (OOC_SSA_Blocker__Region)i1;
          i2 = i0!=i1;
          if (i2) goto l22_loop;
l27:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 37995))+16);
          i1 = i1!=(OOC_INT64)0;
          if (i1) goto l30;
          i1=0u;
          goto l32;
l30:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38014))+16);
          i1 = *(OOC_INT8*)((_check_pointer(i1, 38021))+72);
          i1 = i1==5;
          
l32:
          if (!i1) goto l35;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38068))+24);
          
l35:
          return (OOC_SSA_Blocker__Region)i0;
          ;
        }

        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_RegionOfUse(OOC_SSA__Opnd opnd) {
          register OOC_INT64 i0,i1,i2,i3,i4;
          OOC_SSA__Instr instr;
          OOC_INT32 i;
          OOC_INT32 pathNum;
          OOC_SSA_Blocker__Select selectProxy;

          i0 = (OOC_INT64)opnd;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 38306))+24);
          instr = (OOC_SSA__Instr)i1;
          i2 = *(OOC_INT8*)((_check_pointer(i1, 38332))+72);
          i2 = i2==5;
          if (i2) goto l7;
          i0 = *(OOC_INT8*)((_check_pointer(i1, 38878))+72);
          i0 = i0==11;
          if (i0) goto l5;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38981))+32);
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38988)))), &_td_OOC_SSA_Blocker__ProxyDesc, 38988)), 38994))+24);
          return (OOC_SSA_Blocker__Region)i0;
          goto l19;
l5:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38932))+32);
          return (OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38939)))), &_td_OOC_SSA_Blocker__LoopDesc, 38939));
          goto l19;
l7:
          i2 = OOC_SSA__OpndDesc_OpndIndex((OOC_SSA__Opnd)i0);
          i = i2;
          i3 = i2==0;
          if (i3) goto l10;
          i0 = OOC_SSA__OpndDesc_IsScheduleOpnd((OOC_SSA__Opnd)i0);
          
          goto l12;
l10:
          i0=1u;
l12:
          if (i0) goto l17;
          i0 = (i2-1)>>1;
          pathNum = i0;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38579))+32);
          i1 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 38586)))), &_td_OOC_SSA_Blocker__SelectDesc, 38586);
          selectProxy = (OOC_SSA_Blocker__Select)i1;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38622))+104);
          i2 = _check_pointer(i2, 38629);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(i0, i3, OOC_UINT32, 38629))*8);
          i2 = i2==(OOC_INT64)0;
          if (!i2) goto l16;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38676))+104);
          i2 = _check_pointer(i2, 38683);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i4 = (OOC_INT64)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)(OOC_INT64)0);
          *(OOC_INT64*)(i2+(_check_index(i0, i3, OOC_UINT32, 38683))*8) = i4;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38759))+104);
          i2 = _check_pointer(i2, 38766);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(i0, i3, OOC_UINT32, 38766))*8);
          OOC_SSA_Blocker__RegionDesc_Append((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Proxy)i2);
l16:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38825))+104);
          i1 = _check_pointer(i1, 38832);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i0 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(i0, i2, OOC_UINT32, 38832))*8);
          return (OOC_SSA_Blocker__Region)i0;
          goto l19;
l17:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 38473))+32);
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 38480)))), &_td_OOC_SSA_Blocker__ProxyDesc, 38480)), 38486))+24);
          return (OOC_SSA_Blocker__Region)i0;
l19:
          _failed_function(38141); return 0;
          ;
        }

        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_CorrectForLoop(OOC_SSA_Blocker__Region region) {
          register OOC_INT64 i0,i1,i2;
          OOC_SSA_Blocker__Loop loopProxy;
          OOC_SSA_Blocker__Proxy ptr;

          i0 = (OOC_INT64)p;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 39185))+32);
          loopProxy = (OOC_SSA_Blocker__Loop)i0;
          i1 = (OOC_INT64)region;
          i2 = i0!=(OOC_INT64)0;
          if (!i2) goto l11;
l3_loop:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 39259))+24);
          ptr = (OOC_SSA_Blocker__Proxy)i2;
          i2 = i2==i1;
          if (!i2) goto l6;
          return (OOC_SSA_Blocker__Region)i0;
l6:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 39379))+120);
          loopProxy = (OOC_SSA_Blocker__Loop)i0;
          i2 = i0!=(OOC_INT64)0;
          if (i2) goto l3_loop;
l11:
          return (OOC_SSA_Blocker__Region)i1;
          ;
        }

        
        OOC_SSA_Blocker__Region OOC_SSA_Blocker__ArrangeInstructions_GetRegion_MoveLoopInvariants(OOC_SSA_Blocker__Region region) {
          register OOC_INT64 i0,i1,i2,i3,i4;
          OOC_SSA_Blocker__Region ptr;
          OOC_SSA_Blocker__Region lowerBound;
          OOC_SSA_Blocker__Loop lastLoop;

          i0 = (OOC_INT64)region;
          ptr = (OOC_SSA_Blocker__Region)i0;
          i1 = i0!=(OOC_INT64)0;
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 39651)))), &_td_OOC_SSA_Blocker__LoopDesc));
          
l5:
          if (i1) goto l7;
          i1=i0;
          goto l17;
l7:
          i1=i0;
l8_loop:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 39683))+24);
          ptr = (OOC_SSA_Blocker__Region)i1;
          i2 = i1!=(OOC_INT64)0;
          if (i2) goto l11;
          i2=0u;
          goto l13;
l11:
          i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 39651)))), &_td_OOC_SSA_Blocker__LoopDesc));
          
l13:
          if (i2) goto l8_loop;
l17:
          i2 = (OOC_INT64)p;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 39833))+32);
          lowerBound = (OOC_SSA_Blocker__Region)i3;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 39859))+32);
          i2 = i2==(OOC_INT64)0;
          if (i2) goto l20;
          i2=i3;
          goto l21;
l20:
          i2 = (OOC_INT64)root;
          lowerBound = (OOC_SSA_Blocker__Region)i2;
          
l21:
          i3 = i1!=(OOC_INT64)0;
          if (i3) goto l24;
          i4=0u;
          goto l26;
l24:
          i4 = i1!=i2;
          
l26:
          if (!i4) goto l50;
          i0 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 40151)))), &_td_OOC_SSA_Blocker__LoopDesc, 40151);
          lastLoop = (OOC_SSA_Blocker__Loop)i0;
          if (i3) goto l31;
          i3=0u;
          goto l33;
l31:
          i3 = i1!=i2;
          
l33:
          if (!i3) goto l49;
          {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l36_loop:
          i3 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 40230)))), &_td_OOC_SSA_Blocker__LoopDesc);
          if (!i3) goto l40;
          i1 = _type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 40274)))), &_td_OOC_SSA_Blocker__LoopDesc, 40274);
          lastLoop = (OOC_SSA_Blocker__Loop)i1;
          
l40:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40320))+24);
          ptr = (OOC_SSA_Blocker__Region)i0;
          i3 = i0!=(OOC_INT64)0;
          if (i3) goto l43;
          i3=0u;
          goto l45;
l43:
          i3 = i0!=i2;
          
l45:
          if (i3) goto l36_loop;
l48:
          i0=i1;
l49:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40491))+24);
          
l50:
          return (OOC_SSA_Blocker__Region)i0;
          ;
        }


      i0 = (OOC_INT64)p;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40589))+16);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 40596))+72);
      i1 = i1==10;
      if (i1) goto l43;
      region = (OOC_SSA_Blocker__Region)(OOC_INT64)0;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40869))+16);
      res = (OOC_SSA__Result)i1;
      i2 = i1!=(OOC_INT64)0;
      if (!i2) goto l35;
      {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l6_loop:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40927))+24);
      use = (OOC_SSA__Opnd)i0;
      i2 = i0!=(OOC_INT64)0;
      if (i2) goto l10_loop;
      i0=i1;
      goto l30;
l10_loop:
      i2 = OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse((OOC_SSA__Opnd)i0);
      i2 = !i2;
      if (i2) goto l13;
      i0=i1;
      goto l25;
l13:
      i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_RegionOfUse((OOC_SSA__Opnd)i0);
      useRegion = (OOC_SSA_Blocker__Region)i0;
      i1 = (OOC_INT64)p;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 41072))+32);
      i2 = i2==(OOC_INT64)0;
      if (i2) goto l16;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 41123))+32);
      i2 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Region)i0);
      
      goto l18;
l16:
      i2=1u;
l18:
      if (!i2) goto l24;
      i2 = (OOC_INT64)region;
      i3 = i2==(OOC_INT64)0;
      if (i3) goto l22;
      i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_Merge((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Region)i0);
      region = (OOC_SSA_Blocker__Region)i0;
      
      goto l24;
l22:
      region = (OOC_SSA_Blocker__Region)i0;
      
l24:
      i0=i1;
l25:
      i1 = (OOC_INT64)use;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 41661))+32);
      use = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT64)0;
      if (!i2) goto l30;
      {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
      goto l10_loop;
l30:
      i1 = (OOC_INT64)res;
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 41707));
      res = (OOC_SSA__Result)i1;
      i2 = i1!=(OOC_INT64)0;
      if (!i2) goto l35;
      {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
      goto l6_loop;
l35:
      i1 = (OOC_INT64)region;
      i2 = i1==(OOC_INT64)0;
      if (i2) goto l41;
      i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 41830)))), &_td_OOC_SSA_Blocker__SelectDesc);
      if (!i2) goto l44;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 41906))+24);
      region = (OOC_SSA_Blocker__Region)i1;
      goto l44;
l41:
      i1 = (OOC_INT64)root;
      region = (OOC_SSA_Blocker__Region)i1;
      goto l44;
l43:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 40758))+16);
      i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i1);
      loopEnd = (OOC_SSA__Instr)i1;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 40803))+32);
      return (OOC_SSA_Blocker__Region)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 40810)))), &_td_OOC_SSA_Blocker__RegionDesc, 40810));
      
l44:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 41952))+16);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 41959))+72);
      i0 = i0==82;
      if (i0) goto l47;
      i0 = (OOC_INT64)region;
      i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_CorrectForLoop((OOC_SSA_Blocker__Region)i0);
      i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_GetRegion_MoveLoopInvariants((OOC_SSA_Blocker__Region)i0);
      return (OOC_SSA_Blocker__Region)i0;
      goto l48;
l47:
      i0 = (OOC_INT64)region;
      return (OOC_SSA_Blocker__Region)i0;
l48:
      _failed_function(36974); return 0;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_SortRegion(OOC_SSA_Blocker__Region r) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA_Blocker__Proxy ready;
      OOC_SSA_Blocker__Proxy waiting;
      OOC_SSA_Blocker__Proxy proxy;
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy);
      auto OOC_INT32 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength(OOC_SSA_Blocker__Proxy proxy);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight(OOC_SSA_Blocker__Proxy *list);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CountLocalUses(OOC_SSA_Blocker__Proxy *head);
      auto void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_UpdateUses(OOC_SSA__Instr instr);
      auto OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__ArrangeInstructions_SortRegion_NextInstr(OOC_SSA_Blocker__Proxy ready);
        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy) {
          register OOC_INT64 i0,i1,i2;

          i0 = (OOC_INT64)proxy;
          *(OOC_INT64*)((_check_pointer(i0, 42678))+8) = (OOC_INT64)0;
          i1 = (OOC_INT64)*list;
          *(OOC_INT64*)(_check_pointer(i0, 42711)) = i1;
          i1 = (OOC_INT64)*list;
          i2 = i1!=(OOC_INT64)0;
          if (!i2) goto l4;
          *(OOC_INT64*)((_check_pointer(i1, 42775))+8) = i0;
l4:
          *list = (OOC_SSA_Blocker__Proxy)i0;
          return;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove(OOC_SSA_Blocker__Proxy *list, OOC_SSA_Blocker__Proxy proxy) {
          register OOC_INT64 i0,i1,i2;

          i0 = (OOC_INT64)proxy;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 42932))+8);
          i1 = i1==(OOC_INT64)0;
          if (i1) goto l3;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43018))+8);
          i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 43047));
          *(OOC_INT64*)(_check_pointer(i1, 43028)) = i2;
          goto l4;
l3:
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 42978));
          *list = (OOC_SSA_Blocker__Proxy)i1;
l4:
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 43089));
          i1 = i1!=(OOC_INT64)0;
          if (!i1) goto l7;
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 43127));
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43156))+8);
          *(OOC_INT64*)((_check_pointer(i1, 43137))+8) = i0;
l7:
          return;
          ;
        }

        
        OOC_INT32 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength(OOC_SSA_Blocker__Proxy proxy) {
          register OOC_INT64 i0,i1,i2;
          OOC_INT32 l;
          auto OOC_INT32 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_RegionLength(OOC_SSA_Blocker__Region region);
          auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsEmpty(OOC_SSA_Blocker__Region region);
          auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsExit(OOC_SSA_Blocker__Region region);
            
            OOC_INT32 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_RegionLength(OOC_SSA_Blocker__Region region) {
              register OOC_INT64 i0,i1,i2;
              OOC_INT32 l;
              OOC_SSA_Blocker__Proxy p;

              l = 1;
              i0 = (OOC_INT64)region;
              i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43442))+80);
              p = (OOC_SSA_Blocker__Proxy)i0;
              i1 = i0!=(OOC_INT64)0;
              if (i1) goto l3;
              i0=1;
              goto l9;
l3:
              i1=i0;i0=1;
l4_loop:
              i2 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength((OOC_SSA_Blocker__Proxy)i1);
              i0 = i0+i2;
              l = i0;
              i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 43534));
              p = (OOC_SSA_Blocker__Proxy)i1;
              i2 = i1!=(OOC_INT64)0;
              if (i2) goto l4_loop;
l9:
              return i0;
              ;
            }

            
            OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsEmpty(OOC_SSA_Blocker__Region region) {
              register OOC_INT64 i0;

              i0 = (OOC_INT64)region;
              i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43697))+80);
              return (i0==(OOC_INT64)0);
              ;
            }

            
            OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsExit(OOC_SSA_Blocker__Region region) {
              register OOC_INT64 i0,i1;

              i0 = (OOC_INT64)region;
              i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43827))+80);
              i1 = i1!=(OOC_INT64)0;
              if (i1) goto l3;
              i1=0u;
              goto l5;
l3:
              i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43864))+80);
              i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 43870));
              i1 = i1==(OOC_INT64)0;
              
l5:
              if (i1) goto l7;
              i0=0u;
              goto l8;
l7:
              i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43911))+80);
              i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 43917))+16);
              i0 = *(OOC_INT8*)((_check_pointer(i0, 43923))+72);
              i0 = i0==9;
              
l8:
              return i0;
              ;
            }


          i0 = (OOC_INT64)proxy;
          i1 = *(OOC_INT32*)((_check_pointer(i0, 44003))+68);
          i1 = i1<0;
          if (!i1) goto l36;
          i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44042)))), &_td_OOC_SSA_Blocker__SelectDesc);
          if (i1) goto l14;
          i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 44625)))), &_td_OOC_SSA_Blocker__RegionDesc);
          if (i1) goto l12;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44712))+16);
          i0 = *(OOC_INT8*)((_check_pointer(i0, 44719))+72);
          switch (i0) {
          case 6:
            l = (-1);
            i0=(-1);
            goto l35;
          case 55:
            l = 20;
            i0=20;
            goto l35;
          default:
            l = 1;
            i0=1;
            goto l35;
          }
l12:
          i0 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_RegionLength((OOC_SSA_Blocker__Region)i0);
          l = i0;
          
          goto l35;
l14:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44079))+104);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 44085)), 0);
          i1 = i1==2;
          if (i1) goto l17;
          i1=0u;
          goto l31;
l17:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44125))+104);
          i1 = _check_pointer(i1, 44131);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 44131))*8);
          i1 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsEmpty((OOC_SSA_Blocker__Region)i1);
          if (i1) goto l20;
          i1=0u;
          goto l22;
l20:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44150))+104);
          i1 = _check_pointer(i1, 44156);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(1, i2, OOC_UINT8, 44156))*8);
          i1 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsExit((OOC_SSA_Blocker__Region)i1);
          
l22:
          if (i1) goto l28;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44195))+104);
          i1 = _check_pointer(i1, 44201);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(1, i2, OOC_UINT8, 44201))*8);
          i1 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsEmpty((OOC_SSA_Blocker__Region)i1);
          if (i1) goto l26;
          i1=0u;
          goto l31;
l26:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 44220))+104);
          i1 = _check_pointer(i1, 44226);
          i2 = OOC_ARRAY_LENGTH(i1, 0);
          i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 44226))*8);
          i1 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_IsExit((OOC_SSA_Blocker__Region)i1);
          
          goto l31;
l28:
          i1=1u;
l31:
          if (i1) goto l33;
          i0 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength_RegionLength((OOC_SSA_Blocker__Region)i0);
          l = i0;
          
          goto l35;
l33:
          l = 0;
          i0=0;
l35:
          i1 = (OOC_INT64)proxy;
          *(OOC_INT32*)((_check_pointer(i1, 44895))+68) = i0;
l36:
          i0 = (OOC_INT64)proxy;
          i0 = *(OOC_INT32*)((_check_pointer(i0, 44943))+68);
          return i0;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight(OOC_SSA_Blocker__Proxy *list) {
          register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
          OOC_SSA_Blocker__Proxy ready;
          OOC_SSA_Blocker__Proxy waiting;
          OOC_SSA_Blocker__Proxy proxy;
          OOC_INT32 degreeDiff;
          OOC_SSA__Result res;
          OOC_SSA__Opnd opnd;
          OOC_SSA__Opnd use;
          OOC_CHAR8 selectingValue;
          OOC_INT32 max;
          OOC_SSA_Blocker__Proxy useProxy;
          OOC_SSA_Blocker__Proxy defProxy;
          auto OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister(OOC_SSA__Result arg);
            
            OOC_CHAR8 OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister(OOC_SSA__Result arg) {
              register OOC_INT64 i0,i1;

              i0 = (OOC_INT64)arg;
              i1 = *(OOC_INT8*)((_check_pointer(i0, 45309))+9);
              i1 = i1==0;
              if (i1) goto l3;
              i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 45356))+16);
              i1 = *(OOC_INT8*)((_check_pointer(i1, 45362))+72);
              i1 = i1==13;
              
              goto l5;
l3:
              i1=1u;
l5:
              if (i1) goto l11;
              i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 45612)))), &_td_OOC_SSA__InstrDesc));
              if (i1) goto l9;
              i0 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 45638)))), &_td_OOC_SSA__InstrDesc, 45638)));
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
              _failed_function(45234); return 0;
              ;
            }


          ready = (OOC_SSA_Blocker__Proxy)(OOC_INT64)0;
          waiting = (OOC_SSA_Blocker__Proxy)(OOC_INT64)0;
          i0 = (OOC_INT64)*list;
          i0 = i0!=(OOC_INT64)0;
          if (!i0) goto l60;
l3_loop:
          i0 = (OOC_INT64)*list;
          proxy = (OOC_SSA_Blocker__Proxy)i0;
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 45843));
          *list = (OOC_SSA_Blocker__Proxy)i1;
          degreeDiff = 0;
          useCount = 0;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 45939))+16);
          i1 = i1!=(OOC_INT64)0;
          if (!i1) goto l51;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46045))+16);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l16;
l8_loop:
          i0 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister((OOC_SSA__Result)i0);
          if (!i0) goto l11;
          i0 = degreeDiff;
          degreeDiff = (i0+1);
l11:
          i0 = (OOC_INT64)res;
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46208));
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT64)0;
          if (i1) goto l8_loop;
l16:
          i0 = (OOC_INT64)proxy;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46264))+16);
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46271))+48);
          opnd = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l31;
l19_loop:
          i1 = OOC_SSA__OpndDesc_IsValueOpndHere((OOC_SSA__Opnd)i0);
          if (i1) goto l22;
          i0=0u;
          goto l24;
l22:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46381));
          i0 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight_CountAsRegister((OOC_SSA__Result)i0);
          
l24:
          if (!i0) goto l26;
          i0 = degreeDiff;
          degreeDiff = (i0-1);
l26:
          i0 = (OOC_INT64)opnd;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46472))+16);
          opnd = (OOC_SSA__Opnd)i0;
          i1 = i0!=(OOC_INT64)0;
          if (i1) goto l19_loop;
l31:
          i0 = (OOC_INT64)proxy;
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46604))+16);
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l51;
          i1 = (OOC_INT64)r;
          
l34_loop:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 46670))+24);
          use = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT64)0;
          if (!i3) goto l45;
l37_loop:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 46739))+24);
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 46746))+32);
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i3, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 46753)))), &_td_OOC_SSA_Blocker__ProxyDesc, 46753)), 46759))+24);
          i3 = i3==i1;
          if (!i3) goto l40;
          i3 = useCount;
          useCount = (i3+1);
l40:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 46859))+32);
          use = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT64)0;
          if (i3) goto l37_loop;
l45:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 46913));
          res = (OOC_SSA__Result)i0;
          i2 = i0!=(OOC_INT64)0;
          if (i2) goto l34_loop;
l51:
          i0 = (OOC_INT64)proxy;
          i1 = degreeDiff;
          *(OOC_INT32*)((_check_pointer(i0, 46974))+76) = i1;
          i1 = useCount;
          *(OOC_INT32*)((_check_pointer(i0, 47017))+64) = i1;
          i1 = i1==0;
          if (i1) goto l54;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT64)&waiting, (OOC_SSA_Blocker__Proxy)i0);
          goto l55;
l54:
          i1 = *(OOC_INT32*)((_check_pointer(i0, 47108))+68);
          *(OOC_INT32*)((_check_pointer(i0, 47089))+72) = i1;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT64)&ready, (OOC_SSA_Blocker__Proxy)i0);
l55:
          i0 = (OOC_INT64)*list;
          i0 = i0!=(OOC_INT64)0;
          if (i0) goto l3_loop;
l60:
          i0 = (OOC_INT64)ready;
          i0 = i0!=(OOC_INT64)0;
          if (!i0) goto l124;
l63_loop:
          i0 = (OOC_INT64)ready;
          proxy = (OOC_SSA_Blocker__Proxy)i0;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT64)&ready, (OOC_SSA_Blocker__Proxy)i0);
          selectingValue = 0u;
          max = 0;
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47393))+16);
          i1 = i1!=(OOC_INT64)0;
          if (i1) goto l66;
          i1=0u;i2=0;
          goto l115;
l66:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 47437))+16);
          res = (OOC_SSA__Result)i1;
          i2 = i1!=(OOC_INT64)0;
          if (i2) goto l69;
          i1=0u;i2=0;
          goto l100;
l69:
          i2 = (OOC_INT64)r;
          i3=0;i4=0u;
l70_loop:
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 47503))+24);
          use = (OOC_SSA__Opnd)i5;
          i6 = i5!=(OOC_INT64)0;
          if (!i6) goto l95;
          {register OOC_INT64 h0=i3;i3=i5;i5=i4;i4=h0;}
l74_loop:
          i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 47580))+24);
          i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 47587))+32);
          i6 = _type_guard(i6, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 47594)))), &_td_OOC_SSA_Blocker__ProxyDesc, 47594);
          useProxy = (OOC_SSA_Blocker__Proxy)i6;
          i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 47630))+24);
          i7 = i7==i2;
          if (i7) goto l77;
          i7=0u;
          goto l79;
l77:
          i7 = *(OOC_INT32*)((_check_pointer(i6, 47655))+72);
          i7 = i7>i4;
          
l79:
          if (!i7) goto l82;
          i4 = *(OOC_INT32*)((_check_pointer(i6, 47711))+72);
          max = i4;
          
l82:
          i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 47767))+24);
          i6 = *(OOC_INT8*)((_check_pointer(i6, 47773))+72);
          i6 = i6==5;
          if (i6) goto l85;
          i6=0u;
          goto l87;
l85:
          i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 47823))+24);
          i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 47829))+48);
          i6 = i6==i3;
          
l87:
          if (!i6) goto l90;
          selectingValue = 1u;
          i5=1u;
l90:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 47940))+32);
          use = (OOC_SSA__Opnd)i3;
          i6 = i3!=(OOC_INT64)0;
          if (i6) goto l74_loop;
l94:
          i3=i4;i4=i5;
l95:
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 47994));
          res = (OOC_SSA__Result)i1;
          i5 = i1!=(OOC_INT64)0;
          if (i5) goto l70_loop;
l99:
          i1=i4;i2=i3;
l100:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 48067))+16);
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 48074))+48);
          opnd = (OOC_SSA__Opnd)i3;
          i4 = i3!=(OOC_INT64)0;
          if (!i4) goto l115;
l103_loop:
          i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 48150));
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 48155))+16);
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 48162))+32);
          i4 = _type_guard(i4, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i4, 48169)))), &_td_OOC_SSA_Blocker__ProxyDesc, 48169);
          defProxy = (OOC_SSA_Blocker__Proxy)i4;
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 48203))+24);
          i6 = (OOC_INT64)r;
          i5 = i5==i6;
          if (!i5) goto l109;
          i5 = *(OOC_INT32*)((_check_pointer(i4, 48251))+64);
          *(OOC_INT32*)((_check_pointer(i4, 48251))+64) = (i5-1);
          i5 = *(OOC_INT32*)((_check_pointer(i4, 48290))+64);
          i5 = i5==0;
          if (!i5) goto l109;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT64)&waiting, (OOC_SSA_Blocker__Proxy)i4);
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT64)&ready, (OOC_SSA_Blocker__Proxy)i4);
l109:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 48462))+16);
          opnd = (OOC_SSA__Opnd)i3;
          i4 = i3!=(OOC_INT64)0;
          if (i4) goto l103_loop;
l115:
          i1 = !i1;
          if (i1) goto l118;
          i1=i2;
          goto l119;
l118:
          i1 = OOC_SSA_Blocker__ArrangeInstructions_SortRegion_GetLength((OOC_SSA_Blocker__Proxy)i0);
          i1 = i2+i1;
          max = i1;
          
l119:
          *(OOC_INT32*)((_check_pointer(i0, 48781))+72) = i1;
          i1 = (OOC_INT64)*list;
          *(OOC_INT64*)(_check_pointer(i0, 48826)) = i1;
          *list = (OOC_SSA_Blocker__Proxy)i0;
          i0 = (OOC_INT64)ready;
          i0 = i0!=(OOC_INT64)0;
          if (i0) goto l63_loop;
l124:
          i0 = (OOC_INT64)waiting;
          _assert((i0==(OOC_INT64)0), 127, 48893);
          return;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CountLocalUses(OOC_SSA_Blocker__Proxy *head) {
          register OOC_INT64 i0,i1,i2,i3,i4,i5;
          OOC_SSA_Blocker__Proxy proxy;
          OOC_INT32 opndCount;
          OOC_SSA__Opnd opnd;

          i0 = (OOC_INT64)*head;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l29;
          
l3_loop:
          proxy = (OOC_SSA_Blocker__Proxy)i0;
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 49170));
          *head = (OOC_SSA_Blocker__Proxy)i1;
          opndCount = 0;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49363))+16);
          i2 = i2!=(OOC_INT64)0;
          if (i2) goto l6;
          i2=0;
          goto l20;
l6:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49408))+16);
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 49415))+48);
          opnd = (OOC_SSA__Opnd)i2;
          i3 = i2!=(OOC_INT64)0;
          if (i3) goto l9;
          i2=0;
          goto l19;
l9:
          i3 = (OOC_INT64)r;
          i4=0;
l10_loop:
          i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 49483));
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i5, 49488))+16);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i5, 49495))+32);
          i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i5, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i5, 49502)))), &_td_OOC_SSA_Blocker__ProxyDesc, 49502)), 49508))+24);
          i5 = i5==i3;
          if (!i5) goto l14;
          i4 = i4+1;
          opndCount = i4;
          
l14:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 49605))+16);
          opnd = (OOC_SSA__Opnd)i2;
          i5 = i2!=(OOC_INT64)0;
          if (i5) goto l10_loop;
l18:
          i2=i4;
l19:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49651))+16);
          *(OOC_INT32*)((_check_pointer(i3, 49658))+40) = i2;
          
l20:
          i2 = i2==0;
          if (i2) goto l23;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 49802))+16);
          _assert((i2!=(OOC_INT64)0), 127, 49789);
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT64)&waiting, (OOC_SSA_Blocker__Proxy)i0);
          goto l24;
l23:
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT64)&ready, (OOC_SSA_Blocker__Proxy)i0);
l24:
          i0 = i1!=(OOC_INT64)0;
          if (!i0) goto l29;
          i0=i1;
          goto l3_loop;
l29:
          return;
          ;
        }

        
        void OOC_SSA_Blocker__ArrangeInstructions_SortRegion_UpdateUses(OOC_SSA__Instr instr) {
          register OOC_INT64 i0,i1,i2,i3,i4;
          OOC_SSA__Result res;
          OOC_SSA__Opnd use;
          OOC_SSA_Blocker__Proxy useProxy;

          i0 = (OOC_INT64)instr;
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT64)0;
          if (!i1) goto l22;
          
l3_loop:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50121))+24);
          use = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT64)0;
          if (!i2) goto l17;
l6_loop:
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50190))+24);
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 50197))+32);
          i2 = _type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 50204)))), &_td_OOC_SSA_Blocker__ProxyDesc, 50204);
          useProxy = (OOC_SSA_Blocker__Proxy)i2;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 50236))+24);
          i4 = (OOC_INT64)r;
          i3 = i3==i4;
          if (!i3) goto l12;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50277))+24);
          i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50277))+24);
          i4 = *(OOC_INT32*)((_check_pointer(i4, 50284))+40);
          *(OOC_INT32*)((_check_pointer(i3, 50284))+40) = (i4-1);
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50316))+24);
          i3 = *(OOC_INT32*)((_check_pointer(i3, 50323))+40);
          i3 = i3==0;
          if (!i3) goto l12;
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT64)&waiting, (OOC_SSA_Blocker__Proxy)i2);
          OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Add((void*)(OOC_INT64)&ready, (OOC_SSA_Blocker__Proxy)i2);
l12:
          i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 50483))+32);
          use = (OOC_SSA__Opnd)i1;
          i2 = i1!=(OOC_INT64)0;
          if (i2) goto l6_loop;
l17:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 50529));
          res = (OOC_SSA__Result)i0;
          i1 = i0!=(OOC_INT64)0;
          if (i1) goto l3_loop;
l22:
          return;
          ;
        }

        
        OOC_SSA_Blocker__Proxy OOC_SSA_Blocker__ArrangeInstructions_SortRegion_NextInstr(OOC_SSA_Blocker__Proxy ready) {
          register OOC_INT64 i0,i1,i2,i3;
          OOC_SSA_Blocker__Proxy best;

          i0 = (OOC_INT64)ready;
          best = (OOC_SSA_Blocker__Proxy)i0;
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 50714));
          ready = (OOC_SSA_Blocker__Proxy)i1;
          i2 = i1!=0;
          if (!i2) goto l21;
          {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l4_loop:
          i2 = *(OOC_INT32*)((_check_pointer(i0, 50777))+72);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 50794))+72);
          i2 = i2>i3;
          if (i2) goto l11;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 50828))+72);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 50845))+72);
          i2 = i2==i3;
          if (i2) goto l9;
          i2=0u;
          goto l13;
l9:
          i2 = *(OOC_INT32*)((_check_pointer(i0, 50880))+76);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 50899))+76);
          i2 = i2<i3;
          
          goto l13;
l11:
          i2=1u;
l13:
          if (!i2) goto l16;
          best = (OOC_SSA_Blocker__Proxy)i0;
          i1=i0;
l16:
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 50984));
          ready = (OOC_SSA_Blocker__Proxy)i0;
          i2 = i0!=0;
          if (i2) goto l4_loop;
l20:
          i0=i1;
l21:
          return (OOC_SSA_Blocker__Proxy)i0;
          ;
        }


      ready = (OOC_SSA_Blocker__Proxy)(OOC_INT64)0;
      waiting = (OOC_SSA_Blocker__Proxy)(OOC_INT64)0;
      i0 = (OOC_INT64)r;
      *(OOC_INT64*)((_check_pointer(i0, 51368))+88) = (OOC_INT64)0;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CalculateWeight((void*)((_check_pointer(i0, 51407))+80));
      i0 = (OOC_INT64)r;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_CountLocalUses((void*)((_check_pointer(i0, 51440))+80));
      i0 = (OOC_INT64)ready;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l8;
l3_loop:
      i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_SortRegion_NextInstr((OOC_SSA_Blocker__Proxy)i0);
      proxy = (OOC_SSA_Blocker__Proxy)i0;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_Remove((void*)(OOC_INT64)&ready, (OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT64)proxy;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 51697))+16);
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion_UpdateUses((OOC_SSA__Instr)i0);
      i0 = (OOC_INT64)proxy;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 51728))+24);
      i2 = (OOC_INT64)r;
      _assert((i1==i2), 127, 51715);
      *(OOC_INT64*)((_check_pointer(i0, 51756))+24) = (OOC_INT64)0;
      OOC_SSA_Blocker__RegionDesc_Append((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i0);
      i0 = (OOC_INT64)ready;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l8:
      i0 = (OOC_INT64)waiting;
      _assert((i0==(OOC_INT64)0), 127, 51817);
      i0 = (OOC_INT64)r;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 51858))+80);
      ready = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l19;
l11_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 51914)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (!i1) goto l14;
      OOC_SSA_Blocker__ArrangeInstructions_SortRegion((OOC_SSA_Blocker__Region)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 51958)))), &_td_OOC_SSA_Blocker__RegionDesc, 51958)));
l14:
      i0 = (OOC_INT64)ready;
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 52003));
      ready = (OOC_SSA_Blocker__Proxy)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l11_loop;
l19:
      return;
      ;
    }

    
    void OOC_SSA_Blocker__ArrangeInstructions_ClearRegion(OOC_SSA_Blocker__Region r) {
      register OOC_INT64 i0,i1,i2;
      OOC_SSA_Blocker__Proxy p;

      i0 = (OOC_INT64)r;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 52131))+80);
      p = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT64)0;
      if (!i2) goto l15;
l3_loop:
      i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 52179)))), &_td_OOC_SSA_Blocker__RegionDesc);
      if (i2) goto l6;
      *(OOC_INT64*)((_check_pointer(i1, 52328))+24) = (OOC_INT64)0;
      goto l10;
l6:
      OOC_SSA_Blocker__ArrangeInstructions_ClearRegion((OOC_SSA_Blocker__Region)i1);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 52234))+24);
      i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 52243)))), &_td_OOC_SSA_Blocker__SelectDesc));
      if (!i2) goto l10;
      *(OOC_INT64*)((_check_pointer(i1, 52272))+24) = (OOC_INT64)0;
l10:
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 52372));
      p = (OOC_SSA_Blocker__Proxy)i1;
      i2 = i1!=(OOC_INT64)0;
      if (i2) goto l3_loop;
l15:
      i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 52409)))), &_td_OOC_SSA_Blocker__SelectDesc));
      if (!i1) goto l18;
      *(OOC_INT64*)((_check_pointer(i0, 52434))+80) = (OOC_INT64)0;
      *(OOC_INT64*)((_check_pointer(i0, 52459))+88) = (OOC_INT64)0;
l18:
      return;
      ;
    }


  i0 = (OOC_INT64)pb;
  OOC_SSA_DeadCodeElimination__Transform((OOC_SSA__ProcBlock)i0);
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  OOC_SSA__ProcBlockDesc_SetMarkers((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT64)0, 0);
  i0 = (OOC_INT64)OOC_SSA__ProcBlockDesc_GetEnter((OOC_SSA__ProcBlock)i0);
  enter = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT64)OOC_SSA_Blocker__NewLoop((OOC_SSA__Instr)(OOC_INT64)0);
  mainLoop = (OOC_SSA_Blocker__Loop)i1;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_GetResultStore((OOC_SSA__Instr)i0);
  OOC_SSA_Blocker__ArrangeInstructions_DiscoverLoopStructure((OOC_SSA_Blocker__Loop)i1, (OOC_SSA__Result)i0, (OOC_SSA__Instr)(OOC_INT64)0, (OOC_SSA_Blocker__Loop)(OOC_INT64)0);
  i0 = (OOC_INT64)mainLoop;
  OOC_SSA_Blocker__ArrangeInstructions_SortNestedLoops((OOC_SSA_Blocker__Loop)i0);
  i0 = (OOC_INT64)mainLoop;
  OOC_SSA_Blocker__ArrangeInstructions_AttachToLoop((OOC_SSA_Blocker__Loop)i0);
l1_loop:
  i0 = (OOC_INT64)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)(OOC_INT64)0);
  ready = (OOC_SSA_Blocker__Region)i0;
  i0 = (OOC_INT64)OOC_SSA_Blocker__NewRegion((OOC_SSA__Instr)(OOC_INT64)0);
  waiting = (OOC_SSA_Blocker__Region)i0;
  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53345))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l32;
l4_loop:
  useCount = 0;
  res = (OOC_SSA__Result)i0;
  if (!i1) goto l23;
l7_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53481))+24);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l18;
l10_loop:
  i0 = OOC_SSA_Blocker__ArrangeInstructions_IgnoredUse((OOC_SSA__Opnd)i0);
  i0 = !i0;
  if (!i0) goto l13;
  i0 = useCount;
  useCount = (i0+1);
l13:
  i0 = (OOC_INT64)use;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53630))+32);
  use = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l10_loop;
l18:
  i0 = (OOC_INT64)res;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 53676));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l7_loop;
l23:
  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)OOC_SSA_Blocker__GetProxy((OOC_SSA__Instr)i0);
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = useCount;
  *(OOC_INT32*)((_check_pointer(i0, 53756))+40) = i2;
  i2 = i2==0;
  if (i2) goto l26;
  i2 = (OOC_INT64)waiting;
  OOC_SSA_Blocker__RegionDesc_Append((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
  goto l27;
l26:
  i2 = (OOC_INT64)ready;
  OOC_SSA_Blocker__RegionDesc_Append((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
l27:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53917))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l4_loop;
l32:
  i0 = (OOC_INT64)ready;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54110))+80);
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l35;
  i2=0u;
  goto l37;
l35:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54145))+16);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 54152))+72);
  i2 = i2!=8;
  
l37:
  if (!i2) goto l49;
l40_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 54201));
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l43;
  i2=0u;
  goto l45;
l43:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 54145))+16);
  i2 = *(OOC_INT8*)((_check_pointer(i2, 54152))+72);
  i2 = i2!=8;
  
l45:
  if (i2) goto l40_loop;
l49:
  OOC_SSA_Blocker__RegionDesc_Remove((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1);
  root = (OOC_SSA_Blocker__Region)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 54266)))), &_td_OOC_SSA_Blocker__RegionDesc, 54266));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54498))+80);
  i0 = i0!=(OOC_INT64)0;
  if (!i0) goto l56;
l51_loop:
  i0 = (OOC_INT64)ready;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54534))+80);
  p = (OOC_SSA_Blocker__Proxy)i1;
  OOC_SSA_Blocker__RegionDesc_Remove((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1);
  OOC_SSA_Blocker__ArrangeInstructions_UpdateDefs((OOC_SSA_Blocker__Proxy)i1);
  i0 = (OOC_INT64)p;
  i0 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions_GetRegion((OOC_SSA_Blocker__Proxy)i0);
  region = (OOC_SSA_Blocker__Region)i0;
  i1 = (OOC_INT64)p;
  OOC_SSA_Blocker__RegionDesc_Insert((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Proxy)i1);
  i0 = (OOC_INT64)ready;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54498))+80);
  i0 = i0!=(OOC_INT64)0;
  if (i0) goto l51_loop;
l56:
  i0 = (OOC_INT64)waiting;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54696))+80);
  _assert((i0==(OOC_INT64)0), 127, 54681);
  i0 = (OOC_INT64)root;
  OOC_SSA_Blocker__ArrangeInstructions_AddRegionDeps((OOC_SSA_Blocker__Region)i0);
  i0 = (OOC_INT64)root;
  OOC_SSA_Blocker__ArrangeInstructions_SortRegion((OOC_SSA_Blocker__Region)i0);
  i0 = markAntiDeps;
  if (i0) goto l59;
  i0=0u;
  goto l61;
l59:
  i0 = (OOC_INT64)root;
  i1 = (OOC_INT64)pb;
  i0 = OOC_SSA_Blocker__AntiDepViolation((OOC_SSA__ProcBlock)i1, (OOC_SSA_Blocker__Region)i0);
  
l61:
  if (!i0) goto l65;
  i0 = (OOC_INT64)pb;
  OOC_SSA_Blocker__RemoveRegionDeps((OOC_SSA__ProcBlock)i0);
  i0 = (OOC_INT64)root;
  OOC_SSA_Blocker__ArrangeInstructions_ClearRegion((OOC_SSA_Blocker__Region)i0);
  goto l1_loop;
l65:
  i0 = (OOC_INT64)root;
  return (OOC_SSA_Blocker__Region)i0;
  ;
}

OOC_SSA_Blocker__DependenceData OOC_SSA_Blocker__GetDependenceData(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA_Blocker__DependenceData dd;
  ADT_Dictionary__Dictionary proxyMap;
  OOC_SSA__Instr instr;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_Blocker__DependenceData.baseTypes[0]);
  dd = (OOC_SSA_Blocker__DependenceData)i0;
  i1 = (OOC_INT64)pb;
  i2 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i1, 0u);
  *(OOC_INT64*)(_check_pointer(i0, 55549)) = i2;
  i2 = (OOC_INT64)ADT_Dictionary__New();
  proxyMap = (ADT_Dictionary__Dictionary)i2;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55646))+24);
  instr = (OOC_SSA__Instr)i1;
  i3 = i1!=0;
  if (!i3) goto l8;
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55719))+32);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i2, (Object__Object)i1, (Object__Object)(_type_guard(i3, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 55726)))), &_td_OOC_SSA_Blocker__ProxyDesc, 55726)));
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 55755))+56);
  instr = (OOC_SSA__Instr)i1;
  i3 = i1!=0;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT64*)((_check_pointer(i0, 55783))+8) = i2;
  return (OOC_SSA_Blocker__DependenceData)i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_SameRegion(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)x;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56025))+32);
  i1 = (OOC_INT64)y;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 56048))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 56031)))), &_td_OOC_SSA_Blocker__ProxyDesc, 56031)), 56037))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 56054)))), &_td_OOC_SSA_Blocker__ProxyDesc, 56054)), 56060))+24);
  return (i0==i1);
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_Dominates(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)y;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56298))+32);
  i1 = (OOC_INT64)x;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 56276))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 56304)))), &_td_OOC_SSA_Blocker__ProxyDesc, 56304)), 56310))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 56282)))), &_td_OOC_SSA_Blocker__ProxyDesc, 56282)), 56288))+24);
  i0 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i0);
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_Conflict(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object p;
  OOC_SSA_Blocker__Region a;
  OOC_SSA_Blocker__Region b;

  i0 = (OOC_INT64)dd;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56472))+8);
  i2 = (OOC_INT64)x;
  i1 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i2);
  p = (Object__Object)i1;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 56504)))), &_td_OOC_SSA_Blocker__ProxyDesc, 56504)), 56510))+24);
  a = (OOC_SSA_Blocker__Region)i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56531))+8);
  i2 = (OOC_INT64)y;
  i0 = (OOC_INT64)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i2);
  p = (Object__Object)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 56563)))), &_td_OOC_SSA_Blocker__ProxyDesc, 56563)), 56569))+24);
  b = (OOC_SSA_Blocker__Region)i0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 56596))+96);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 56614))+96);
  i2 = i2>i3;
  if (!i2) goto l9;
l4_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 56645))+24);
  a = (OOC_SSA_Blocker__Region)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 56596))+96);
  i3 = *(OOC_INT32*)((_check_pointer(i0, 56614))+96);
  i2 = i2>i3;
  if (i2) goto l4_loop;
l9:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 56676))+96);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 56694))+96);
  i2 = i2>i3;
  if (!i2) goto l18;
l13_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56725))+24);
  b = (OOC_SSA_Blocker__Region)i0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 56676))+96);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 56694))+96);
  i2 = i2>i3;
  if (i2) goto l13_loop;
l18:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 56756))+24);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56768))+24);
  i2 = i2!=i3;
  if (i2) goto l21;
  {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
  goto l27;
l21:
  {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l22_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56793))+24);
  a = (OOC_SSA_Blocker__Region)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 56815))+24);
  b = (OOC_SSA_Blocker__Region)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56756))+24);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 56768))+24);
  i2 = i2!=i3;
  if (i2) goto l22_loop;
l27:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56847))+24);
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l30;
  i2=0u;
  goto l32;
l30:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56867))+24);
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 56876)))), &_td_OOC_SSA_Blocker__SelectDesc);
  
l32:
  if (i2) goto l34;
  i0=0u;
  goto l35;
l34:
  i0 = i0!=i1;
  
l35:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_DependsOn(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT64 i0,i1;
  ADT_Dictionary__Dictionary visited;
  auto OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult(OOC_SSA__Result res);
    
    OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult(OOC_SSA__Result res) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_SSA__Opnd use;

      i0 = (OOC_INT64)res;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l26;
      
l3_loop:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 57386))+24);
      use = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT64)0;
      if (!i2) goto l21;
l6_loop:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57460))+24);
      i3 = (OOC_INT64)visited;
      i2 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i3, (Object__Object)i2);
      i2 = !i2;
      if (!i2) goto l16;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57503))+24);
      i3 = (OOC_INT64)visited;
      ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i3, (Object__Object)i2, (Object__Object)(OOC_INT64)0);
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57537))+24);
      i3 = (OOC_INT64)x;
      i2 = i2==i3;
      if (i2) goto l11;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57570))+24);
      i2 = OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult((OOC_SSA__Result)i2);
      
      goto l13;
l11:
      i2=1u;
l13:
      if (!i2) goto l16;
      return 1u;
l16:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57663))+32);
      use = (OOC_SSA__Opnd)i1;
      i2 = i1!=(OOC_INT64)0;
      if (i2) goto l6_loop;
l21:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 57705));
      res = (OOC_SSA__Result)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l26:
      return 0u;
      ;
    }


  i0 = (OOC_INT64)ADT_Dictionary__New();
  visited = (ADT_Dictionary__Dictionary)i0;
  i0 = (OOC_INT64)x;
  i1 = (OOC_INT64)y;
  i0 = i0!=i1;
  if (i0) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = OOC_SSA_Blocker__DependenceDataDesc_DependsOn_PassesResult((OOC_SSA__Result)i1);
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SSA_Blocker__DependenceDataDesc_AvailableTo(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr x, OOC_SSA__Instr y) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_SSA__Instr xValue;
  OOC_SSA_Blocker__Loop xLoop;
  OOC_SSA__Opnd exit;

  i0 = (OOC_INT64)x;
  xValue = (OOC_SSA__Instr)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58370))+32);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 58377)))), &_td_OOC_SSA_Blocker__ProxyDesc, 58377)), 58383))+32);
  xLoop = (OOC_SSA_Blocker__Loop)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l3;
  i2=0u;
  goto l4;
l3:
  i2 = (OOC_INT64)y;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 58442))+32);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 58449)))), &_td_OOC_SSA_Blocker__ProxyDesc, 58449)), 58455))+24);
  i2 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i1, (OOC_SSA_Blocker__Region)i2);
  i2 = !i2;
  
l4:
  i3 = (OOC_INT64)y;
  if (!i2) goto l36;
  i2 = (OOC_INT64)dd;
  {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l8_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58487))+16);
  i4 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i4, 2);
  exit = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT64)0;
  if (i5) goto l11;
  i5=0u;
  goto l13;
l11:
  i5 = *(OOC_INT8*)((_check_pointer(i4, 58541))+8);
  i5 = i5==11;
  
l13:
  if (!i5) goto l27;
l15_loop:
  i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 58611));
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i5, 58616))+16);
  i5 = OOC_SSA_Blocker__DependenceDataDesc_AvailableTo((OOC_SSA_Blocker__DependenceData)i2, (OOC_SSA__Instr)i1, (OOC_SSA__Instr)i5);
  i5 = !i5;
  if (!i5) goto l18;
  return 0u;
l18:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 58814))+16);
  exit = (OOC_SSA__Opnd)i4;
  i5 = i4!=(OOC_INT64)0;
  if (i5) goto l21;
  i5=0u;
  goto l23;
l21:
  i5 = *(OOC_INT8*)((_check_pointer(i4, 58541))+8);
  i5 = i5==11;
  
l23:
  if (i5) goto l15_loop;
l27:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58858))+16);
  xValue = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58887))+32);
  xLoop = (OOC_SSA_Blocker__Loop)i0;
  i4 = i0!=(OOC_INT64)0;
  if (i4) goto l30;
  i4=0u;
  goto l32;
l30:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 58442))+32);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i4, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i4, 58449)))), &_td_OOC_SSA_Blocker__ProxyDesc, 58449)), 58455))+24);
  i4 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i0, (OOC_SSA_Blocker__Region)i4);
  i4 = !i4;
  
l32:
  if (i4) goto l8_loop;
l35:
  i0=i1;
l36:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 59182))+32);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59158))+32);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 59189)))), &_td_OOC_SSA_Blocker__ProxyDesc, 59189)), 59195))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 59165)))), &_td_OOC_SSA_Blocker__ProxyDesc, 59165)), 59171))+24);
  i1 = OOC_SSA_Blocker__Dominates((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Region)i1);
  if (i1) goto l39;
  i0=0u;
  goto l40;
l39:
  i1 = (OOC_INT64)dd;
  i0 = OOC_SSA_Blocker__DependenceDataDesc_DependsOn((OOC_SSA_Blocker__DependenceData)i1, (OOC_SSA__Instr)i0, (OOC_SSA__Instr)i3);
  i0 = !i0;
  
l40:
  return i0;
  ;
}

OOC_SSA__Instr OOC_SSA_Blocker__DependenceDataDesc_GetSameInstr(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr regionInstr, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  OOC_SSA_Blocker__Region region;
  OOC_SSA_Blocker__Proxy p;
  OOC_SSA__Instr instr2;
  OOC_SSA__Opnd opnd1;
  OOC_SSA__Opnd opnd2;

  i0 = (OOC_INT64)regionInstr;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59475))+32);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 59481)))), &_td_OOC_SSA_Blocker__ProxyDesc, 59481)), 59487))+24);
  region = (OOC_SSA_Blocker__Region)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59511))+80);
  p = (OOC_SSA_Blocker__Proxy)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l47;
  i1 = (OOC_INT64)instr;
  
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59559))+16);
  instr2 = (OOC_SSA__Instr)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 59582))+72);
  i4 = *(OOC_INT8*)((_check_pointer(i2, 59598))+72);
  i3 = i3==i4;
  if (i3) goto l6;
  i3=0u;
  goto l8;
l6:
  i3 = *(OOC_INT8*)((_check_pointer(i1, 59624))+9);
  i4 = *(OOC_INT8*)((_check_pointer(i2, 59642))+9);
  i3 = i3==i4;
  
l8:
  if (!i3) goto l42;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 59680))+48);
  opnd1 = (OOC_SSA__Opnd)i3;
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 59714))+48);
  opnd2 = (OOC_SSA__Opnd)i4;
  i5 = i3!=(OOC_INT64)0;
  if (i5) goto l12;
  i5=0u;
  goto l14;
l12:
  i5 = i4!=(OOC_INT64)0;
  
l14:
  if (i5) goto l16;
  i5=0u;
  goto l18;
l16:
  i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 59789));
  i6 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 59777));
  i5 = i6==i5;
  
l18:
  if (!i5) goto l34;
l21_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 59822))+16);
  opnd1 = (OOC_SSA__Opnd)i3;
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 59857))+16);
  opnd2 = (OOC_SSA__Opnd)i4;
  i5 = i3!=(OOC_INT64)0;
  if (i5) goto l24;
  i5=0u;
  goto l26;
l24:
  i5 = i4!=(OOC_INT64)0;
  
l26:
  if (i5) goto l28;
  i5=0u;
  goto l30;
l28:
  i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 59789));
  i6 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i3, 59777));
  i5 = i6==i5;
  
l30:
  if (i5) goto l21_loop;
l34:
  i3 = i3==(OOC_INT64)0;
  if (i3) goto l37;
  i3=0u;
  goto l39;
l37:
  i3 = i4==(OOC_INT64)0;
  
l39:
  if (!i3) goto l42;
  return (OOC_SSA__Instr)i2;
l42:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 60016));
  p = (OOC_SSA_Blocker__Proxy)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l3_loop;
l47:
  return (OOC_SSA__Instr)(OOC_INT64)0;
  ;
}

void OOC_SSA_Blocker__DependenceDataDesc_SetRegion(OOC_SSA_Blocker__DependenceData dd, OOC_SSA__Instr regionInstr, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA_Blocker__Proxy p;

  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)OOC_SSA_Blocker__NewProxy((OOC_SSA__Instr)i0);
  p = (OOC_SSA_Blocker__Proxy)i1;
  i2 = (OOC_INT64)regionInstr;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 60217))+32);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 60223)))), &_td_OOC_SSA_Blocker__ProxyDesc, 60223)), 60229))+24);
  OOC_SSA_Blocker__RegionDesc_Append((OOC_SSA_Blocker__Region)i2, (OOC_SSA_Blocker__Proxy)i1);
  *(OOC_INT64*)((_check_pointer(i0, 60257))+32) = i1;
  return;
  ;
}

void OOC_SSA_Blocker__Write(IO__ByteChannel c, OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i0, 0u);
  i2 = (OOC_INT64)ADT_Dictionary__New();
  i3 = (OOC_INT64)c;
  OOC_SSA_Blocker__WriteBlocks((IO__ByteChannel)i3, (OOC_SSA__ProcBlock)i0, (OOC_SSA_Blocker__Region)i1, (ADT_Dictionary__Dictionary)i2);
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_SSA_Blocker__WriteMarker(IO__ByteChannel c, OOC_SSA__ProcBlock pb, ADT_Dictionary__Dictionary marker) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA_Blocker__ArrangeInstructions((OOC_SSA__ProcBlock)i0, 0u);
  i2 = (OOC_INT64)c;
  i3 = (OOC_INT64)marker;
  OOC_SSA_Blocker__WriteBlocks((IO__ByteChannel)i2, (OOC_SSA__ProcBlock)i0, (OOC_SSA_Blocker__Region)i1, (ADT_Dictionary__Dictionary)i3);
  OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_SSA_Blocker__ToStderr(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)IO_StdChannels__stderr;
  OOC_SSA_Blocker__Write((IO__ByteChannel)i1, (OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_OOC_SSA_Blocker_init(void) {

  return;
  ;
}

void OOC_OOC_SSA_Blocker_destroy(void) {
}

/* --- */
