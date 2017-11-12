#include <StringSearch/SubstringBF.oh>
StringSearch_SubstringBF__Factory StringSearch_SubstringBF__factory;
static StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__NewMatchObject(OOC_INT32 pos, OOC_INT32 endpos, StringSearch_SubstringBF__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end);
static StringSearch_SubstringBF__Matcher StringSearch_SubstringBF__NewMatcher(Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups);
static StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__Match(StringSearch_SubstringBF__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s);
static StringSearch_SubstringBF__MatchObject StringSearch_SubstringBF__Search(StringSearch_SubstringBF__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s);
static StringSearch_SubstringBF__Factory StringSearch_SubstringBF__NewFactory(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_StringSearch_SubstringBF__Factory = { (RT0__Struct[]){&_td_StringSearch_SubstringBF__FactoryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Factory", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_SubstringBF__FactoryDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_StringSearch__FactoryDesc,&_td_StringSearch_SubstringBF__FactoryDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)StringSearch__FactoryDesc_Destroy,(void*)StringSearch_SubstringBF__FactoryDesc_Compile}, NULL, &_mid, (OOC_CHAR8*)"FactoryDesc", 0, 3, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_StringSearch_SubstringBF__Matcher = { (RT0__Struct[]){&_td_StringSearch_SubstringBF__MatcherDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Matcher", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_SubstringBF__MatcherDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_StringSearch__MatcherDesc,&_td_StringSearch_SubstringBF__MatcherDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)StringSearch__MatcherDesc_Destroy,(void*)StringSearch_SubstringBF__MatcherDesc_MatchChars,(void*)StringSearch_SubstringBF__MatcherDesc_Match,(void*)StringSearch_SubstringBF__MatcherDesc_SearchChars,(void*)StringSearch_SubstringBF__MatcherDesc_Search}, NULL, &_mid, (OOC_CHAR8*)"MatcherDesc", 12, 3, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_SubstringBF__MatchObject = { (RT0__Struct[]){&_td_StringSearch_SubstringBF__MatchObjectDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"MatchObject", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_SubstringBF__MatchObjectDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_StringSearch__MatchObjectDesc,&_td_StringSearch_SubstringBF__MatchObjectDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)StringSearch__MatchObjectDesc_Destroy,(void*)StringSearch_SubstringBF__MatchObjectDesc_Start,(void*)StringSearch_SubstringBF__MatchObjectDesc_End}, NULL, &_mid, (OOC_CHAR8*)"MatchObjectDesc", 24, 3, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_SubstringBF__3137 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_StringSearch_SubstringBF__4295 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_StringSearch_SubstringBF__4934 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_StringSearch_SubstringBF__6392 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"StringSearch:SubstringBF", (RT0__Struct[]) { &_td_StringSearch_SubstringBF__Factory, &_td_StringSearch_SubstringBF__FactoryDesc, &_td_StringSearch_SubstringBF__Matcher, &_td_StringSearch_SubstringBF__MatcherDesc, &_td_StringSearch_SubstringBF__MatchObject, &_td_StringSearch_SubstringBF__MatchObjectDesc, NULL }, 0 };

extern void OOC_StringSearch_SubstringBF_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_StringSearch_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_StringSearch_SubstringBF_init();
  }
  _mid.openCount++;
}
extern void OOC_StringSearch_SubstringBF_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_StringSearch_SubstringBF_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_StringSearch_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
