#include <OOC/IR/ConstFold.oh>
#include <OOC/SymbolTable.oh>
#include <OOC/SymbolTable/Predef.oh>
#include <OOC/SymbolTable/TypeRules.oh>
#include <Object.oh>
#include <Object/BigInt.oh>
#define OOC_IR_ConstFold__foldReals OOC_TRUE
static void OOC_IR_ConstFold__InitConstFold(OOC_IR_ConstFold__ConstFold c);
static OOC_SymbolTable__Type OOC_IR_ConstFold__SmallestType(Object_Boxed__Object value);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_IR_ConstFold__ConstFold = { (RT0__Struct[]){&_td_OOC_IR_ConstFold__ConstFoldDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ConstFold", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_IR_ConstFold__ConstFoldDesc = { (RT0__Struct[]){&_td_OOC_IR__VisitorDesc,&_td_OOC_IR__ConstFoldDesc,&_td_OOC_IR_ConstFold__ConstFoldDesc}, (void*[]){(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitConst,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitAbs,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitAdr,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitAsh,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitBinaryArith,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitBooleanOp,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCap,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitChangeElement,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCompare,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitConcat,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitConstructor,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCurrentException,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitDeref,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitEntier,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitIndex,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitLen,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitNegate,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitNewBlock,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitNewObject,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitNot,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitOdd,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitSelectField,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitSelectProc,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitSetMember,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitSetOp,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitSetRange,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitShift,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTypeCast,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTypeConv,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTypeTag,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTypeTest,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTypeGuard,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitModuleRef,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitPredefProc,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitProcedureRef,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTypeRef,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitVar,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitAssert,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitAssignment,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitAssignOp,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCall,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCopy,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCopyParameter,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCopyString,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitExit,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitForStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitIterateArrayStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitIterateObjectStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitIfStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCase,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCaseStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitLoopStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitMoveBlock,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitRaise,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitRepeatStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitReturn,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitCatchClause,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitTryStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitWhileStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitWithStatm,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitProcedure,(void*)OOC_IR_ConstFold__ConstFoldDesc_VisitModule,(void*)OOC_IR__ConstFoldDesc_TryConstFold,(void*)OOC_IR_ConstFold__ConstFoldDesc_ValueConst,(void*)OOC_IR_ConstFold__ConstFoldDesc_BooleanConst,(void*)OOC_IR_ConstFold__ConstFoldDesc_ValidEval}, NULL, &_mid, (OOC_CHAR8*)"ConstFoldDesc", 8, 2, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_IR_ConstFold__8440 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 2, 2, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:IR:ConstFold", (RT0__Struct[]) { &_td_OOC_IR_ConstFold__ConstFold, &_td_OOC_IR_ConstFold__ConstFoldDesc, NULL }, 0 };

extern void OOC_OOC_IR_ConstFold_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_OOC_SymbolTable_open(&_mid);
    OOC_OOC_IR_open(&_mid);
    OOC_OOC_SymbolTable_Predef_open(&_mid);
    OOC_OOC_SymbolTable_TypeRules_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_Object_BigInt_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_OOC_IR_ConstFold_init();
  }
  _mid.openCount++;
}
extern void OOC_OOC_IR_ConstFold_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_OOC_IR_ConstFold_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_OOC_SymbolTable_close(&_mid);
    OOC_OOC_IR_close(&_mid);
    OOC_OOC_SymbolTable_Predef_close(&_mid);
    OOC_OOC_SymbolTable_TypeRules_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_Object_BigInt_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
