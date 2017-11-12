#include <StringSearch/RegexpParser.oh>
#include <Ascii.oh>
#define StringSearch_RegexpParser__maxGroupCount 127
#define StringSearch_RegexpParser__matchEmpty (-2)
static StringSearch_RegexpParser__CharSet StringSearch_RegexpParser__setDigits;
static StringSearch_RegexpParser__CharSet StringSearch_RegexpParser__setWhitespace;
static StringSearch_RegexpParser__CharSet StringSearch_RegexpParser__setAlphaNum;
static StringSearch_RegexpParser__CharSet StringSearch_RegexpParser__NewSet(void);
static void StringSearch_RegexpParser__SetElement(StringSearch_RegexpParser__CharSet set, OOC_UINT32 flags, OOC_INT32 i);
static void StringSearch_RegexpParser__SetRange(StringSearch_RegexpParser__CharSet set, OOC_UINT32 flags, OOC_CHAR8 start, OOC_CHAR8 end);
static void StringSearch_RegexpParser__Union(StringSearch_RegexpParser__CharSet dest, StringSearch_RegexpParser__CharSet source);
static void StringSearch_RegexpParser__UnionComplement(StringSearch_RegexpParser__CharSet dest, StringSearch_RegexpParser__CharSet source);
static OOC_CHAR8 StringSearch_RegexpParser__Shorthand(OOC_CHAR8 ch);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_StringSearch_RegexpParser__2293 = { (RT0__Struct[]){&RT0__set32}, NULL, NULL, &_mid, NULL, 32, 8, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_StringSearch_RegexpParser__CharSet = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__2293}, NULL, NULL, &_mid, (OOC_CHAR8*)"CharSet", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpParser__Factor = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__FactorDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Factor", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpParser__Group = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__GroupDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Group", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpParser__FactorDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__FactorDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"FactorDesc", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpParser__Term = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__TermDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Term", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpParser__TermDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__TermDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"TermDesc", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpParser__Expr = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__ExprDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Expr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpParser__ExprDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__ExprDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"ExprDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpParser__GroupDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__GroupDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"GroupDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpParser__Builder = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__BuilderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpParser__BuilderDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpParser__BuilderDesc}, (void*[]){(void*)StringSearch_RegexpParser__BuilderDesc_NewGroup,(void*)StringSearch_RegexpParser__BuilderDesc_NewExpr,(void*)StringSearch_RegexpParser__BuilderDesc_NewTerm,(void*)StringSearch_RegexpParser__BuilderDesc_NewFactor}, NULL, &_mid, (OOC_CHAR8*)"BuilderDesc", 0, 0, (1<<RT0__flagAtomic), RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"StringSearch:RegexpParser", (RT0__Struct[]) { &_td_StringSearch_RegexpParser__CharSet, &_td_StringSearch_RegexpParser__Factor, &_td_StringSearch_RegexpParser__Group, &_td_StringSearch_RegexpParser__FactorDesc, &_td_StringSearch_RegexpParser__Term, &_td_StringSearch_RegexpParser__TermDesc, &_td_StringSearch_RegexpParser__Expr, &_td_StringSearch_RegexpParser__ExprDesc, &_td_StringSearch_RegexpParser__GroupDesc, &_td_StringSearch_RegexpParser__Builder, &_td_StringSearch_RegexpParser__BuilderDesc, NULL }, 0 };

extern void OOC_StringSearch_RegexpParser_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_StringSearch_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_StringSearch_RegexpParser_init();
  }
  _mid.openCount++;
}
extern void OOC_StringSearch_RegexpParser_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_StringSearch_RegexpParser_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_StringSearch_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
