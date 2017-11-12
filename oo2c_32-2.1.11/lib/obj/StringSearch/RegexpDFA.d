#include <StringSearch/RegexpDFA.oh>
#include <Ascii.oh>
#define StringSearch_RegexpDFA__enterGroup (-3)
#define StringSearch_RegexpDFA__leaveGroup (-2)
#define StringSearch_RegexpDFA__matchEmpty (-1)
#define StringSearch_RegexpDFA__matchChar 0
#define StringSearch_RegexpDFA__matchCharIgnoreCase 1
#define StringSearch_RegexpDFA__matchAnyButNewline 3
#define StringSearch_RegexpDFA__matchAtFirstChar 4
#define StringSearch_RegexpDFA__matchAfterLastChar 5
#define StringSearch_RegexpDFA__matchSet 6
#define StringSearch_RegexpDFA__matchSetInverted 7
#define StringSearch_RegexpDFA__neverPushed (-1)
StringSearch_RegexpDFA__Factory StringSearch_RegexpDFA__factory;
static StringSearch_RegexpDFA__Node StringSearch_RegexpDFA__BuildDFA(StringSearch_RegexpParser__Group regexp);
static void StringSearch_RegexpDFA__InitMatchObject(StringSearch_RegexpDFA__MatchObject m, OOC_INT32 pos, OOC_INT32 endpos, StringSearch_RegexpDFA__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end);
static StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__NewMatchObject(OOC_INT32 pos, OOC_INT32 endpos, StringSearch_RegexpDFA__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end);
static void StringSearch_RegexpDFA__InitMatcher(StringSearch_RegexpDFA__Matcher matcher, Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups, StringSearch_RegexpDFA__Node initialState);
static StringSearch_RegexpDFA__Matcher StringSearch_RegexpDFA__NewMatcher(Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups, StringSearch_RegexpDFA__Node initialState);
static StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__Match(StringSearch_RegexpDFA__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 startpos, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s);
static StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__Search(StringSearch_RegexpDFA__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s);
static StringSearch_RegexpDFA__Factory StringSearch_RegexpDFA__NewFactory(void);
typedef struct StringSearch_RegexpDFA__Match_DequeEntryDesc *StringSearch_RegexpDFA__Match_DequeEntry;
typedef struct StringSearch_RegexpDFA__Match_DequeEntryDesc {
  StringSearch_RegexpDFA__Match_DequeEntry next;
  StringSearch_RegexpDFA__Node state;
} StringSearch_RegexpDFA__Match_DequeEntryDesc;

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_StringSearch_RegexpDFA__Node = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__NodeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Node", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpDFA__NodeDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__NodeDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"NodeDesc", 20, 0, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpDFA__Factory = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__FactoryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Factory", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpDFA__FactoryDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_StringSearch__FactoryDesc,&_td_StringSearch_RegexpDFA__FactoryDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)StringSearch__FactoryDesc_Destroy,(void*)StringSearch_RegexpDFA__FactoryDesc_Compile}, NULL, &_mid, (OOC_CHAR8*)"FactoryDesc", 0, 3, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpDFA__Matcher = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__MatcherDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Matcher", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpDFA__MatcherDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_StringSearch__MatcherDesc,&_td_StringSearch_RegexpDFA__MatcherDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)StringSearch__MatcherDesc_Destroy,(void*)StringSearch_RegexpDFA__MatcherDesc_MatchChars,(void*)StringSearch_RegexpDFA__MatcherDesc_Match,(void*)StringSearch_RegexpDFA__MatcherDesc_SearchChars,(void*)StringSearch_RegexpDFA__MatcherDesc_Search}, NULL, &_mid, (OOC_CHAR8*)"MatcherDesc", 20, 3, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpDFA__MatchObject = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__MatchObjectDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"MatchObject", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpDFA__MatchObjectDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_StringSearch__MatchObjectDesc,&_td_StringSearch_RegexpDFA__MatchObjectDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)StringSearch__MatchObjectDesc_Destroy,(void*)StringSearch_RegexpDFA__MatchObjectDesc_Start,(void*)StringSearch_RegexpDFA__MatchObjectDesc_End}, NULL, &_mid, (OOC_CHAR8*)"MatchObjectDesc", 24, 3, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpDFA__13892 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1024, 1024, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_StringSearch_RegexpDFA__15373 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_StringSearch_RegexpDFA__Match_DequeEntry = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__Match_DequeEntryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"DequeEntry", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_StringSearch_RegexpDFA__Match_DequeEntryDesc = { (RT0__Struct[]){&_td_StringSearch_RegexpDFA__Match_DequeEntryDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"DequeEntryDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_StringSearch_RegexpDFA__20479 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_StringSearch_RegexpDFA__21127 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_StringSearch_RegexpDFA__22325 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"StringSearch:RegexpDFA", (RT0__Struct[]) { &_td_StringSearch_RegexpDFA__Node, &_td_StringSearch_RegexpDFA__NodeDesc, &_td_StringSearch_RegexpDFA__Factory, &_td_StringSearch_RegexpDFA__FactoryDesc, &_td_StringSearch_RegexpDFA__Matcher, &_td_StringSearch_RegexpDFA__MatcherDesc, &_td_StringSearch_RegexpDFA__MatchObject, &_td_StringSearch_RegexpDFA__MatchObjectDesc, NULL }, 0 };

extern void OOC_StringSearch_RegexpDFA_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Ascii_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_StringSearch_open(&_mid);
    OOC_StringSearch_SubstringBM_open(&_mid);
    OOC_StringSearch_RegexpParser_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_StringSearch_RegexpDFA_init();
  }
  _mid.openCount++;
}
extern void OOC_StringSearch_RegexpDFA_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_StringSearch_RegexpDFA_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Ascii_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_StringSearch_close(&_mid);
    OOC_StringSearch_SubstringBM_close(&_mid);
    OOC_StringSearch_RegexpParser_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
