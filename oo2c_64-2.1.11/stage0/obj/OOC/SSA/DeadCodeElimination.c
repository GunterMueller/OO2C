#include <OOC/SSA/DeadCodeElimination.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_SSA_DeadCodeElimination__MarkLive(OOC_SSA__Result res) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SSA__Instr instr;
  OOC_SSA__Opnd opnd;
  OOC_INT32 i;
  OOC_SSA__Instr loopEnd;
  auto void OOC_SSA_DeadCodeElimination__MarkLive_MarkStore(OOC_SSA__Opnd opnd, OOC_INT32 index);
    
    void OOC_SSA_DeadCodeElimination__MarkLive_MarkStore(OOC_SSA__Opnd opnd, OOC_INT32 index) {
      register OOC_INT64 i0,i1,i2;

      i0 = index;
      i1 = i0<1;
      if (i1) goto l7;
      i1 = i0==1;
      if (i1) goto l5;
      i1=0u;
      goto l9;
l5:
      i1 = (OOC_INT64)opnd;
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 1261));
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 1265))+16);
      i1 = *(OOC_INT8*)((_check_pointer(i1, 1271))+72);
      i1 = i1!=6;
      
      goto l9;
l7:
      i1=1u;
l9:
      if (i1) goto l11;
      i1 = (OOC_INT64)opnd;
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 1360));
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 1364))+16);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 1370))+72);
      _assert((i2==6), 127, 1349);
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 1409));
      *(OOC_INT32*)((_check_pointer(i2, 1413))+40) = 1;
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 1451));
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 1455))+16);
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthArg((OOC_SSA__Instr)i1, (i0-1));
      OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Result)i0);
      goto l12;
l11:
      i0 = (OOC_INT64)opnd;
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 1323));
      OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Result)i0);
l12:
      return;
      ;
    }


  i0 = (OOC_INT64)res;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 1537))+16);
  instr = (OOC_SSA__Instr)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 1563))+40);
  i2 = i2==0;
  if (!i2) goto l18;
  *(OOC_INT32*)((_check_pointer(i1, 1595))+40) = 1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 1632))+48);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = *(OOC_INT8*)((_check_pointer(i1, 1659))+72);
  i3 = i3!=6;
  if (i3) goto l5;
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 2095));
  OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Result)i2);
  goto l18;
l5:
  i3 = i2!=(OOC_INT64)0;
  if (!i3) goto l18;
l8_loop:
  i3 = *(OOC_INT8*)((_check_pointer(i2, 1738))+8);
  i3 = i3!=11;
  if (!i3) goto l11;
  i3 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 1926));
  OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Result)i3);
l11:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 1971))+16);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT64)0;
  if (i3) goto l8_loop;
l18:
  i2 = *(OOC_INT8*)((_check_pointer(i1, 2142))+72);
  switch (i2) {
  case 5:
    i2 = *(OOC_INT32*)((_check_pointer(i0, 2187))+40);
    i2 = i2==0;
    if (!i2) goto l69;
    *(OOC_INT32*)((_check_pointer(i0, 2219))+40) = 1;
    i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
    i = i0;
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, 2);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = i0!=(OOC_INT64)0;
    if (i1) goto l25;
    i1=0u;
    goto l27;
l25:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 2345))+8);
    i1 = i1==1;
    
l27:
    if (!i1) goto l69;
l29_loop:
    i1 = i;
    OOC_SSA_DeadCodeElimination__MarkLive_MarkStore((OOC_SSA__Opnd)i0, i1);
    i0 = (OOC_INT64)opnd;
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2419))+16);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = i0!=(OOC_INT64)0;
    if (!i1) goto l33;
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2485))+16);
    opnd = (OOC_SSA__Opnd)i0;
    
l33:
    i1 = i0!=(OOC_INT64)0;
    if (i1) goto l36;
    i1=0u;
    goto l38;
l36:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 2345))+8);
    i1 = i1==1;
    
l38:
    if (i1) goto l29_loop;
    goto l69;
  case 10:
    i2 = *(OOC_INT32*)((_check_pointer(i0, 2579))+40);
    i2 = i2==0;
    if (!i2) goto l69;
    *(OOC_INT32*)((_check_pointer(i0, 2611))+40) = 1;
    i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
    i = i0;
    i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2692))+48);
    OOC_SSA_DeadCodeElimination__MarkLive_MarkStore((OOC_SSA__Opnd)i1, i0);
    i0 = (OOC_INT64)instr;
    i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
    loopEnd = (OOC_SSA__Instr)i1;
    i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2768))+48);
    i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 2777));
    _assert((i2==i0), 127, 2754);
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 2817))+48);
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2826))+16);
    i1 = i;
    OOC_SSA_DeadCodeElimination__MarkLive_MarkStore((OOC_SSA__Opnd)i0, i1);
    goto l69;
  case 11:
    i2 = *(OOC_INT32*)((_check_pointer(i0, 2894))+40);
    i2 = i2==0;
    if (!i2) goto l69;
    *(OOC_INT32*)((_check_pointer(i0, 2926))+40) = 1;
    i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
    i = i0;
    i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, 2);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = i0!=(OOC_INT64)0;
    if (i1) goto l53;
    i1=0u;
    goto l55;
l53:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 3052))+8);
    i1 = i1==11;
    
l55:
    if (!i1) goto l69;
l57_loop:
    i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 3101));
    i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3105))+16);
    i1 = *(OOC_INT8*)((_check_pointer(i1, 3111))+72);
    _assert((i1==9), 127, 3090);
    i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 3159));
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3163))+16);
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3169))+48);
    i1 = i;
    OOC_SSA_DeadCodeElimination__MarkLive_MarkStore((OOC_SSA__Opnd)i0, i1);
    i0 = (OOC_INT64)opnd;
    i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3206))+16);
    opnd = (OOC_SSA__Opnd)i0;
    i1 = i0!=(OOC_INT64)0;
    if (i1) goto l60;
    i1=0u;
    goto l62;
l60:
    i1 = *(OOC_INT8*)((_check_pointer(i0, 3052))+8);
    i1 = i1==11;
    
l62:
    if (i1) goto l57_loop;
    goto l69;
  default:
    goto l69;
  }
l69:
  return;
  ;
}

static void OOC_SSA_DeadCodeElimination__DeleteDeadCode(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2;
  OOC_SSA__Instr instr;
  OOC_SSA__Instr next;
  OOC_SSA__Opnd use;
  OOC_SSA__Opnd nextUse;
  OOC_SSA__Result res;
  OOC_SSA__Result nextResult;
  OOC_INT32 i;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Instr loopEnd;
  auto void OOC_SSA_DeadCodeElimination__DeleteDeadCode_DeleteStore(OOC_SSA__Opnd opnd, OOC_INT32 index);
    
    void OOC_SSA_DeadCodeElimination__DeleteDeadCode_DeleteStore(OOC_SSA__Opnd opnd, OOC_INT32 index) {
      register OOC_INT64 i0,i1,i2;

      i0 = index;
      _assert((i0>1), 127, 3536);
      i1 = (OOC_INT64)opnd;
      i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 3572));
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 3576))+16);
      i2 = *(OOC_INT8*)((_check_pointer(i2, 3582))+72);
      _assert((i2==6), 127, 3561);
      i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 3627));
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3631))+16);
      i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i1, (i0-1));
      OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i0);
      return;
      ;
    }


  i0 = (OOC_INT64)pb;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3728))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l104;
l3_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3787))+56);
  next = (OOC_SSA__Instr)i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3814))+40);
  i1 = i1==0;
  if (i1) goto l86;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4277))+72);
  i1 = i1==5;
  if (i1) goto l53;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 5036))+72);
  i1 = i1==10;
  if (i1) goto l40;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 5655))+72);
  i1 = i1==11;
  if (!i1) goto l99;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 5706));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l99;
l14_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 5775));
  nextResult = (OOC_SSA__Result)i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5805))+40);
  i1 = i1==0;
  if (!i1) goto l33;
  i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
  i = i0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l19;
  i1=0u;
  goto l21;
l19:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 6093))+8);
  i1 = i1==11;
  
l21:
  if (!i1) goto l32;
l23_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 6151));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6155))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6161))+48);
  i1 = i;
  OOC_SSA_DeadCodeElimination__DeleteDeadCode_DeleteStore((OOC_SSA__Opnd)i0, i1);
  i0 = (OOC_INT64)opnd;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6202))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l26;
  i1=0u;
  goto l28;
l26:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 6093))+8);
  i1 = i1==11;
  
l28:
  if (i1) goto l23_loop;
l32:
  i0 = (OOC_INT64)res;
  OOC_SSA__ResultDesc_DeleteResult((OOC_SSA__Result)i0);
l33:
  i0 = (OOC_INT64)nextResult;
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l14_loop;
  goto l99;
l40:
  i1 = (OOC_INT64)OOC_SSA__InstrDesc_GetLoopEnd((OOC_SSA__Instr)i0);
  loopEnd = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 5128));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l99;
l43_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 5197));
  nextResult = (OOC_SSA__Result)i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5227))+40);
  i1 = i1==0;
  if (!i1) goto l46;
  i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
  i = i0;
  i1 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5477))+48);
  OOC_SSA_DeadCodeElimination__DeleteDeadCode_DeleteStore((OOC_SSA__Opnd)i1, i0);
  i0 = (OOC_INT64)loopEnd;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5523))+48);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5532))+16);
  i1 = i;
  OOC_SSA_DeadCodeElimination__DeleteDeadCode_DeleteStore((OOC_SSA__Opnd)i0, i1);
  i0 = (OOC_INT64)res;
  OOC_SSA__ResultDesc_DeleteResult((OOC_SSA__Result)i0);
l46:
  i0 = (OOC_INT64)nextResult;
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l43_loop;
  goto l99;
l53:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 4327));
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l99;
l56_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 4396));
  nextResult = (OOC_SSA__Result)i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4426))+40);
  i1 = i1==0;
  if (!i1) goto l79;
  i0 = OOC_SSA__ResultDesc_ResultIndex((OOC_SSA__Result)i0);
  i = i0;
  i0 = (OOC_INT64)instr;
  i0 = (OOC_INT64)OOC_SSA__InstrDesc_NthOpnd((OOC_SSA__Instr)i0, 2);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l61;
  i1=0u;
  goto l63;
l61:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4715))+8);
  i1 = i1==1;
  
l63:
  if (!i1) goto l78;
l65_loop:
  i1 = i;
  OOC_SSA_DeadCodeElimination__DeleteDeadCode_DeleteStore((OOC_SSA__Opnd)i0, i1);
  i0 = (OOC_INT64)opnd;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4799))+16);
  opnd = (OOC_SSA__Opnd)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l69;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4873))+16);
  opnd = (OOC_SSA__Opnd)i0;
  
l69:
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l72;
  i1=0u;
  goto l74;
l72:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4715))+8);
  i1 = i1==1;
  
l74:
  if (i1) goto l65_loop;
l78:
  i0 = (OOC_INT64)res;
  OOC_SSA__ResultDesc_DeleteResult((OOC_SSA__Result)i0);
l79:
  i0 = (OOC_INT64)nextResult;
  res = (OOC_SSA__Result)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l56_loop;
  goto l99;
l86:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 3854))+72);
  switch (i1) {
  case 9:
  case 7:
    i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 4036));
    i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4048))+24);
    use = (OOC_SSA__Opnd)i1;
    i2 = i1!=(OOC_INT64)0;
    if (!i2) goto l98;
l91_loop:
    i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 4116))+32);
    nextUse = (OOC_SSA__Opnd)i2;
    OOC_SSA__OpndDesc_DeleteOpnd((OOC_SSA__Opnd)i1);
    use = (OOC_SSA__Opnd)i2;
    i1 = i2!=(OOC_INT64)0;
    if (!i1) goto l98;
    i1=i2;
    goto l91_loop;
  default:
    goto l98;
  }
l98:
  i1 = (OOC_INT64)pb;
  OOC_SSA__ProcBlockDesc_DeleteInstr((OOC_SSA__ProcBlock)i1, (OOC_SSA__Instr)i0);
l99:
  i0 = (OOC_INT64)next;
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l3_loop;
l104:
  return;
  ;
}

void OOC_SSA_DeadCodeElimination__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)pb;
  OOC_SSA__ProcBlockDesc_SetMarkers((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT64)0, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 6772));
  OOC_SSA_DeadCodeElimination__MarkLive((OOC_SSA__Result)i1);
  OOC_SSA_DeadCodeElimination__DeleteDeadCode((OOC_SSA__ProcBlock)i0);
  return;
  ;
}

void OOC_SSA_DeadCodeElimination__RemoveDesignators(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_SSA__Instr repl;
  OOC_SSA__Instr instr;
  OOC_SSA__Opnd opnd;
  OOC_SSA__Opnd next;

  i0 = (OOC_INT64)pb;
  i1 = (OOC_INT64)OOC_SSA__ProcBlockDesc_AddInstr((OOC_SSA__ProcBlock)i0, 84, 0);
  repl = (OOC_SSA__Instr)i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7665))+24);
  instr = (OOC_SSA__Instr)i0;
  i2 = i0!=(OOC_INT64)0;
  if (!i2) goto l31;
l3_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7723))+48);
  opnd = (OOC_SSA__Opnd)i2;
  i3 = i2!=(OOC_INT64)0;
  if (!i3) goto l26;
l6_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 7782))+16);
  next = (OOC_SSA__Opnd)i3;
  i4 = *(OOC_INT8*)((_check_pointer(i2, 7810))+8);
  i4 = i4==5;
  if (i4) goto l9;
  i4 = *(OOC_INT8*)((_check_pointer(i2, 7842))+8);
  i4 = i4==7;
  
  goto l11;
l9:
  i4=1u;
l11:
  if (i4) goto l13;
  i4=0u;
  goto l19;
l13:
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 7888));
  i4 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i4, 7893)))), &_td_OOC_SSA__DeclRefDesc);
  if (i4) goto l16;
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 7917));
  i4 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i4, 7922)))), &_td_OOC_SSA__TypeRefDesc);
  
  goto l17;
l16:
  i4=1u;
l17:
  i4 = !i4;
  
l19:
  if (!i4) goto l21;
  OOC_SSA__OpndDesc_ReplaceArg((OOC_SSA__Opnd)i2, (OOC_SSA__Result)i1);
l21:
  opnd = (OOC_SSA__Opnd)i3;
  i2 = i3!=(OOC_INT64)0;
  if (!i2) goto l26;
  i2=i3;
  goto l6_loop;
l26:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8043))+56);
  instr = (OOC_SSA__Instr)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l3_loop;
l31:
  return;
  ;
}

void OOC_OOC_SSA_DeadCodeElimination_init(void) {

  return;
  ;
}

void OOC_OOC_SSA_DeadCodeElimination_destroy(void) {
}

/* --- */
