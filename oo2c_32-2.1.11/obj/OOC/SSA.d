#include <OOC/SSA.oh>
#include <Log.oh>
#include <OOC/SymbolTable/Predef.oh>
Object_BigInt__BigInt OOC_SSA__nil;
static void OOC_SSA__SetUse(OOC_SSA__Result arg, OOC_SSA__Opnd opnd);
static void OOC_SSA__DeleteUse(OOC_SSA__Opnd opnd);
static void OOC_SSA__InitOpnd(OOC_SSA__Opnd opnd, OOC_SSA__Result arg, OOC_INT8 _class);
static OOC_SSA__Opnd OOC_SSA__NewOpnd(OOC_SSA__Result arg, OOC_INT8 _class);
static void OOC_SSA__InitTypedOpnd(OOC_SSA__TypedOpnd opnd, OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference);
static OOC_SSA__Opnd OOC_SSA__NewTypedOpnd(OOC_SSA__Result arg, OOC_INT8 _class, OOC_SymbolTable__Type type, OOC_CHAR8 passByReference);
static void OOC_SSA__InitResult(OOC_SSA__Result res, OOC_SSA__Instr instr, OOC_INT8 _class, OOC_INT8 subclass);
static void OOC_SSA__InitInstr(OOC_SSA__Instr instr, OOC_INT8 opcode, OOC_INT8 subclass);
static void OOC_SSA__AddOpnd(OOC_SSA__Instr instr, OOC_SSA__Opnd opnd);
static void OOC_SSA__InitConst(OOC_SSA__Const _const, OOC_INT8 subclass, Object_Boxed__Object value, OOC_SymbolTable__Type stringType);
static void OOC_SSA__InitDeclRef(OOC_SSA__DeclRef declRef, OOC_SymbolTable__Declaration decl);
static void OOC_SSA__InitTypeRef(OOC_SSA__TypeRef typeRef, OOC_SymbolTable__Type type);
static void OOC_SSA__InitAddress(OOC_SSA__Address address, OOC_INT8 opcode, OOC_SymbolTable__Declaration decl);
static OOC_SSA__Address OOC_SSA__NewAddress(OOC_INT8 opcode, OOC_SymbolTable__Declaration decl);
static void OOC_SSA__InitProcBlock(OOC_SSA__ProcBlock pb, OOC_SymbolTable__ProcDecl procDecl, OOC_CHAR8 checkFunctionResult);
static void OOC_SSA__AppendInstr(OOC_SSA__ProcBlock pb, OOC_SSA__Instr instr);
static void OOC_SSA__Add(OOC_SSA__Instr *list, OOC_SSA__Instr instr);
static void OOC_SSA__Remove(OOC_SSA__Instr *list, OOC_SSA__Instr instr);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SSA__Node = { (RT0__Struct[]){&_td_OOC_SSA__NodeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Node", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__Opnd = { (RT0__Struct[]){&_td_OOC_SSA__OpndDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Opnd", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__Result = { (RT0__Struct[]){&_td_OOC_SSA__ResultDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Result", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__Instr = { (RT0__Struct[]){&_td_OOC_SSA__InstrDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Instr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__Const = { (RT0__Struct[]){&_td_OOC_SSA__ConstDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Const", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__DeclRef = { (RT0__Struct[]){&_td_OOC_SSA__DeclRefDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"DeclRef", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__TypeRef = { (RT0__Struct[]){&_td_OOC_SSA__TypeRefDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"TypeRef", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__Address = { (RT0__Struct[]){&_td_OOC_SSA__AddressDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Address", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__NodeDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode}, NULL, &_mid, (OOC_CHAR8*)"NodeDesc", 0, 2, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__OpndDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__OpndDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__OpndDesc_DeleteOpnd,(void*)OOC_SSA__OpndDesc_ReplaceArg,(void*)OOC_SSA__OpndDesc_OpndIndex,(void*)OOC_SSA__OpndDesc_GetIntConst,(void*)OOC_SSA__OpndDesc_IsScheduleOpnd,(void*)OOC_SSA__OpndDesc_IsValueOpnd,(void*)OOC_SSA__OpndDesc_IsValueOpndHere}, NULL, &_mid, (OOC_CHAR8*)"OpndDesc", 20, 3, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__TypedOpnd = { (RT0__Struct[]){&_td_OOC_SSA__TypedOpndDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"TypedOpnd", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__TypedOpndDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__OpndDesc,&_td_OOC_SSA__TypedOpndDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__OpndDesc_DeleteOpnd,(void*)OOC_SSA__OpndDesc_ReplaceArg,(void*)OOC_SSA__OpndDesc_OpndIndex,(void*)OOC_SSA__OpndDesc_GetIntConst,(void*)OOC_SSA__OpndDesc_IsScheduleOpnd,(void*)OOC_SSA__OpndDesc_IsValueOpnd,(void*)OOC_SSA__OpndDesc_IsValueOpndHere}, NULL, &_mid, (OOC_CHAR8*)"TypedOpndDesc", 28, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__ResultDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ResultDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ResultDesc_DeleteResult,(void*)OOC_SSA__ResultDesc_ReplaceUses,(void*)OOC_SSA__ResultDesc_ResultIndex,(void*)OOC_SSA__ResultDesc_CalledProc,(void*)OOC_SSA__ResultDesc_IsBooleanConst,(void*)OOC_SSA__ResultDesc_LogId}, NULL, &_mid, (OOC_CHAR8*)"ResultDesc", 24, 3, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__InstrDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ResultDesc,&_td_OOC_SSA__InstrDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ResultDesc_DeleteResult,(void*)OOC_SSA__ResultDesc_ReplaceUses,(void*)OOC_SSA__ResultDesc_ResultIndex,(void*)OOC_SSA__ResultDesc_CalledProc,(void*)OOC_SSA__ResultDesc_IsBooleanConst,(void*)OOC_SSA__ResultDesc_LogId,(void*)OOC_SSA__InstrDesc_SetSubclass,(void*)OOC_SSA__InstrDesc_SetPos,(void*)OOC_SSA__InstrDesc_AddOpnd,(void*)OOC_SSA__InstrDesc_AddOpndFct,(void*)OOC_SSA__InstrDesc_AddUniqueOpnd,(void*)OOC_SSA__InstrDesc_AddTypedOpnd,(void*)OOC_SSA__InstrDesc_AddResultSubclass,(void*)OOC_SSA__InstrDesc_AddResult,(void*)OOC_SSA__InstrDesc_SizeOpndList,(void*)OOC_SSA__InstrDesc_CountOpndClass,(void*)OOC_SSA__InstrDesc_SizeResultList,(void*)OOC_SSA__InstrDesc_NthOpnd,(void*)OOC_SSA__InstrDesc_NthArg,(void*)OOC_SSA__InstrDesc_LastOpnd,(void*)OOC_SSA__InstrDesc_GetOpndClass,(void*)OOC_SSA__InstrDesc_GetArgClass,(void*)OOC_SSA__InstrDesc_GetArgStore,(void*)OOC_SSA__InstrDesc_NthResult,(void*)OOC_SSA__InstrDesc_GetResultClass,(void*)OOC_SSA__InstrDesc_GetResultStore,(void*)OOC_SSA__InstrDesc_GetOpcodeName,(void*)OOC_SSA__InstrDesc_GetResultType,(void*)OOC_SSA__InstrDesc_GetLoopEnd,(void*)OOC_SSA__InstrDesc_GetBackwardFeed,(void*)OOC_SSA__InstrDesc_GetLoopStart,(void*)OOC_SSA__InstrDesc_GetCollectTarget,(void*)OOC_SSA__InstrDesc_NumberOfPaths,(void*)OOC_SSA__InstrDesc_GetCollect,(void*)OOC_SSA__InstrDesc_LogOpcode,(void*)OOC_SSA__InstrDesc_IsConst,(void*)OOC_SSA__InstrDesc_UniqueResult,(void*)OOC_SSA__InstrDesc_IsSync,(void*)OOC_SSA__InstrDesc_IsSwitchStatm}, NULL, &_mid, (OOC_CHAR8*)"InstrDesc", 44, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__ConstDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ResultDesc,&_td_OOC_SSA__InstrDesc,&_td_OOC_SSA__ConstDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ResultDesc_DeleteResult,(void*)OOC_SSA__ResultDesc_ReplaceUses,(void*)OOC_SSA__ResultDesc_ResultIndex,(void*)OOC_SSA__ResultDesc_CalledProc,(void*)OOC_SSA__ResultDesc_IsBooleanConst,(void*)OOC_SSA__ResultDesc_LogId,(void*)OOC_SSA__InstrDesc_SetSubclass,(void*)OOC_SSA__InstrDesc_SetPos,(void*)OOC_SSA__InstrDesc_AddOpnd,(void*)OOC_SSA__InstrDesc_AddOpndFct,(void*)OOC_SSA__InstrDesc_AddUniqueOpnd,(void*)OOC_SSA__InstrDesc_AddTypedOpnd,(void*)OOC_SSA__InstrDesc_AddResultSubclass,(void*)OOC_SSA__InstrDesc_AddResult,(void*)OOC_SSA__InstrDesc_SizeOpndList,(void*)OOC_SSA__InstrDesc_CountOpndClass,(void*)OOC_SSA__InstrDesc_SizeResultList,(void*)OOC_SSA__InstrDesc_NthOpnd,(void*)OOC_SSA__InstrDesc_NthArg,(void*)OOC_SSA__InstrDesc_LastOpnd,(void*)OOC_SSA__InstrDesc_GetOpndClass,(void*)OOC_SSA__InstrDesc_GetArgClass,(void*)OOC_SSA__InstrDesc_GetArgStore,(void*)OOC_SSA__InstrDesc_NthResult,(void*)OOC_SSA__InstrDesc_GetResultClass,(void*)OOC_SSA__InstrDesc_GetResultStore,(void*)OOC_SSA__InstrDesc_GetOpcodeName,(void*)OOC_SSA__InstrDesc_GetResultType,(void*)OOC_SSA__InstrDesc_GetLoopEnd,(void*)OOC_SSA__InstrDesc_GetBackwardFeed,(void*)OOC_SSA__InstrDesc_GetLoopStart,(void*)OOC_SSA__InstrDesc_GetCollectTarget,(void*)OOC_SSA__InstrDesc_NumberOfPaths,(void*)OOC_SSA__InstrDesc_GetCollect,(void*)OOC_SSA__InstrDesc_LogOpcode,(void*)OOC_SSA__InstrDesc_IsConst,(void*)OOC_SSA__InstrDesc_UniqueResult,(void*)OOC_SSA__InstrDesc_IsSync,(void*)OOC_SSA__InstrDesc_IsSwitchStatm}, NULL, &_mid, (OOC_CHAR8*)"ConstDesc", 52, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__DeclRefDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ResultDesc,&_td_OOC_SSA__InstrDesc,&_td_OOC_SSA__DeclRefDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ResultDesc_DeleteResult,(void*)OOC_SSA__ResultDesc_ReplaceUses,(void*)OOC_SSA__ResultDesc_ResultIndex,(void*)OOC_SSA__ResultDesc_CalledProc,(void*)OOC_SSA__ResultDesc_IsBooleanConst,(void*)OOC_SSA__ResultDesc_LogId,(void*)OOC_SSA__InstrDesc_SetSubclass,(void*)OOC_SSA__InstrDesc_SetPos,(void*)OOC_SSA__InstrDesc_AddOpnd,(void*)OOC_SSA__InstrDesc_AddOpndFct,(void*)OOC_SSA__InstrDesc_AddUniqueOpnd,(void*)OOC_SSA__InstrDesc_AddTypedOpnd,(void*)OOC_SSA__InstrDesc_AddResultSubclass,(void*)OOC_SSA__InstrDesc_AddResult,(void*)OOC_SSA__InstrDesc_SizeOpndList,(void*)OOC_SSA__InstrDesc_CountOpndClass,(void*)OOC_SSA__InstrDesc_SizeResultList,(void*)OOC_SSA__InstrDesc_NthOpnd,(void*)OOC_SSA__InstrDesc_NthArg,(void*)OOC_SSA__InstrDesc_LastOpnd,(void*)OOC_SSA__InstrDesc_GetOpndClass,(void*)OOC_SSA__InstrDesc_GetArgClass,(void*)OOC_SSA__InstrDesc_GetArgStore,(void*)OOC_SSA__InstrDesc_NthResult,(void*)OOC_SSA__InstrDesc_GetResultClass,(void*)OOC_SSA__InstrDesc_GetResultStore,(void*)OOC_SSA__InstrDesc_GetOpcodeName,(void*)OOC_SSA__InstrDesc_GetResultType,(void*)OOC_SSA__InstrDesc_GetLoopEnd,(void*)OOC_SSA__InstrDesc_GetBackwardFeed,(void*)OOC_SSA__InstrDesc_GetLoopStart,(void*)OOC_SSA__InstrDesc_GetCollectTarget,(void*)OOC_SSA__InstrDesc_NumberOfPaths,(void*)OOC_SSA__InstrDesc_GetCollect,(void*)OOC_SSA__InstrDesc_LogOpcode,(void*)OOC_SSA__InstrDesc_IsConst,(void*)OOC_SSA__InstrDesc_UniqueResult,(void*)OOC_SSA__InstrDesc_IsSync,(void*)OOC_SSA__InstrDesc_IsSwitchStatm}, NULL, &_mid, (OOC_CHAR8*)"DeclRefDesc", 48, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__TypeRefDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ResultDesc,&_td_OOC_SSA__InstrDesc,&_td_OOC_SSA__TypeRefDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ResultDesc_DeleteResult,(void*)OOC_SSA__ResultDesc_ReplaceUses,(void*)OOC_SSA__ResultDesc_ResultIndex,(void*)OOC_SSA__ResultDesc_CalledProc,(void*)OOC_SSA__ResultDesc_IsBooleanConst,(void*)OOC_SSA__ResultDesc_LogId,(void*)OOC_SSA__InstrDesc_SetSubclass,(void*)OOC_SSA__InstrDesc_SetPos,(void*)OOC_SSA__InstrDesc_AddOpnd,(void*)OOC_SSA__InstrDesc_AddOpndFct,(void*)OOC_SSA__InstrDesc_AddUniqueOpnd,(void*)OOC_SSA__InstrDesc_AddTypedOpnd,(void*)OOC_SSA__InstrDesc_AddResultSubclass,(void*)OOC_SSA__InstrDesc_AddResult,(void*)OOC_SSA__InstrDesc_SizeOpndList,(void*)OOC_SSA__InstrDesc_CountOpndClass,(void*)OOC_SSA__InstrDesc_SizeResultList,(void*)OOC_SSA__InstrDesc_NthOpnd,(void*)OOC_SSA__InstrDesc_NthArg,(void*)OOC_SSA__InstrDesc_LastOpnd,(void*)OOC_SSA__InstrDesc_GetOpndClass,(void*)OOC_SSA__InstrDesc_GetArgClass,(void*)OOC_SSA__InstrDesc_GetArgStore,(void*)OOC_SSA__InstrDesc_NthResult,(void*)OOC_SSA__InstrDesc_GetResultClass,(void*)OOC_SSA__InstrDesc_GetResultStore,(void*)OOC_SSA__InstrDesc_GetOpcodeName,(void*)OOC_SSA__InstrDesc_GetResultType,(void*)OOC_SSA__InstrDesc_GetLoopEnd,(void*)OOC_SSA__InstrDesc_GetBackwardFeed,(void*)OOC_SSA__InstrDesc_GetLoopStart,(void*)OOC_SSA__InstrDesc_GetCollectTarget,(void*)OOC_SSA__InstrDesc_NumberOfPaths,(void*)OOC_SSA__InstrDesc_GetCollect,(void*)OOC_SSA__InstrDesc_LogOpcode,(void*)OOC_SSA__InstrDesc_IsConst,(void*)OOC_SSA__InstrDesc_UniqueResult,(void*)OOC_SSA__InstrDesc_IsSync,(void*)OOC_SSA__InstrDesc_IsSwitchStatm}, NULL, &_mid, (OOC_CHAR8*)"TypeRefDesc", 48, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__AddressDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ResultDesc,&_td_OOC_SSA__InstrDesc,&_td_OOC_SSA__AddressDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ResultDesc_DeleteResult,(void*)OOC_SSA__ResultDesc_ReplaceUses,(void*)OOC_SSA__ResultDesc_ResultIndex,(void*)OOC_SSA__ResultDesc_CalledProc,(void*)OOC_SSA__ResultDesc_IsBooleanConst,(void*)OOC_SSA__ResultDesc_LogId,(void*)OOC_SSA__InstrDesc_SetSubclass,(void*)OOC_SSA__InstrDesc_SetPos,(void*)OOC_SSA__InstrDesc_AddOpnd,(void*)OOC_SSA__InstrDesc_AddOpndFct,(void*)OOC_SSA__InstrDesc_AddUniqueOpnd,(void*)OOC_SSA__InstrDesc_AddTypedOpnd,(void*)OOC_SSA__InstrDesc_AddResultSubclass,(void*)OOC_SSA__InstrDesc_AddResult,(void*)OOC_SSA__InstrDesc_SizeOpndList,(void*)OOC_SSA__InstrDesc_CountOpndClass,(void*)OOC_SSA__InstrDesc_SizeResultList,(void*)OOC_SSA__InstrDesc_NthOpnd,(void*)OOC_SSA__InstrDesc_NthArg,(void*)OOC_SSA__InstrDesc_LastOpnd,(void*)OOC_SSA__InstrDesc_GetOpndClass,(void*)OOC_SSA__InstrDesc_GetArgClass,(void*)OOC_SSA__InstrDesc_GetArgStore,(void*)OOC_SSA__InstrDesc_NthResult,(void*)OOC_SSA__InstrDesc_GetResultClass,(void*)OOC_SSA__InstrDesc_GetResultStore,(void*)OOC_SSA__InstrDesc_GetOpcodeName,(void*)OOC_SSA__InstrDesc_GetResultType,(void*)OOC_SSA__InstrDesc_GetLoopEnd,(void*)OOC_SSA__InstrDesc_GetBackwardFeed,(void*)OOC_SSA__InstrDesc_GetLoopStart,(void*)OOC_SSA__InstrDesc_GetCollectTarget,(void*)OOC_SSA__InstrDesc_NumberOfPaths,(void*)OOC_SSA__InstrDesc_GetCollect,(void*)OOC_SSA__InstrDesc_LogOpcode,(void*)OOC_SSA__InstrDesc_IsConst,(void*)OOC_SSA__InstrDesc_UniqueResult,(void*)OOC_SSA__InstrDesc_IsSync,(void*)OOC_SSA__InstrDesc_IsSwitchStatm}, NULL, &_mid, (OOC_CHAR8*)"AddressDesc", 48, 5, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__ProcBlock = { (RT0__Struct[]){&_td_OOC_SSA__ProcBlockDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ProcBlock", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SSA__ProcBlockDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_OOC_SSA__NodeDesc,&_td_OOC_SSA__ProcBlockDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)OOC_SSA__ProcBlockDesc_AddInstr,(void*)OOC_SSA__ProcBlockDesc_DeleteInstr,(void*)OOC_SSA__ProcBlockDesc_GetConst,(void*)OOC_SSA__ProcBlockDesc_GetConstInt,(void*)OOC_SSA__ProcBlockDesc_GetConstBool,(void*)OOC_SSA__ProcBlockDesc_GetConstNil,(void*)OOC_SSA__ProcBlockDesc_GetDeclRef,(void*)OOC_SSA__ProcBlockDesc_GetTypeRef,(void*)OOC_SSA__ProcBlockDesc_SetAddress,(void*)OOC_SSA__ProcBlockDesc_GetAddress,(void*)OOC_SSA__ProcBlockDesc_AddCopyParameter,(void*)OOC_SSA__ProcBlockDesc_SetMarkers,(void*)OOC_SSA__ProcBlockDesc_AddSetInstr,(void*)OOC_SSA__ProcBlockDesc_AddGetLengthInstr,(void*)OOC_SSA__ProcBlockDesc_SetLoopContext,(void*)OOC_SSA__ProcBlockDesc_SetTryContext,(void*)OOC_SSA__ProcBlockDesc_FixSubclass,(void*)OOC_SSA__ProcBlockDesc_FixSubclassInstr,(void*)OOC_SSA__ProcBlockDesc_TopSort,(void*)OOC_SSA__ProcBlockDesc_Reverse,(void*)OOC_SSA__ProcBlockDesc_GetEnter,(void*)OOC_SSA__ProcBlockDesc_Destroy}, NULL, &_mid, (OOC_CHAR8*)"ProcBlockDesc", 84, 3, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SSA__7836 = { (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary}, NULL, NULL, &_mid, NULL, 48, 12, 0, RT0__strArray };
RT0__StructDesc _td_OOC_SSA__17662 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA__26681 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA__31935 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SSA__31967 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 64, 64, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SSA", (RT0__Struct[]) { &_td_OOC_SSA__Node, &_td_OOC_SSA__Opnd, &_td_OOC_SSA__Result, &_td_OOC_SSA__Instr, &_td_OOC_SSA__Const, &_td_OOC_SSA__DeclRef, &_td_OOC_SSA__TypeRef, &_td_OOC_SSA__Address, &_td_OOC_SSA__NodeDesc, &_td_OOC_SSA__OpndDesc, &_td_OOC_SSA__TypedOpnd, &_td_OOC_SSA__TypedOpndDesc, &_td_OOC_SSA__ResultDesc, &_td_OOC_SSA__InstrDesc, &_td_OOC_SSA__ConstDesc, &_td_OOC_SSA__DeclRefDesc, &_td_OOC_SSA__TypeRefDesc, &_td_OOC_SSA__AddressDesc, &_td_OOC_SSA__ProcBlock, &_td_OOC_SSA__ProcBlockDesc, NULL }, 0 };

extern void OOC_OOC_SSA_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Log_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_Object_BigInt_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_OOC_SymbolTable_open(&_mid);
    OOC_OOC_SymbolTable_Predef_open(&_mid);
    OOC_OOC_IR_open(&_mid);
    OOC_OOC_SSA_Opcode_open(&_mid);
    OOC_OOC_SSA_Result_open(&_mid);
    OOC_OOC_SSA_Opnd_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_OOC_SSA_init();
  }
  _mid.openCount++;
}
extern void OOC_OOC_SSA_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_OOC_SSA_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Log_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_Object_BigInt_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_OOC_SymbolTable_close(&_mid);
    OOC_OOC_SymbolTable_Predef_close(&_mid);
    OOC_OOC_IR_close(&_mid);
    OOC_OOC_SSA_Opcode_close(&_mid);
    OOC_OOC_SSA_Result_close(&_mid);
    OOC_OOC_SSA_Opnd_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
