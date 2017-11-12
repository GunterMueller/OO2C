#include <XML/Regexp.oh>
#include <LongStrings.oh>
#define XML_Regexp__endOfRegexp (-1)
static XML_Regexp__Set XML_Regexp__NewSet(void);
static void XML_Regexp__Include(XML_Regexp__Set set, OOC_INT32 element);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_XML_Regexp__Regexp = { (RT0__Struct[]){&_td_XML_Regexp__RegexpDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Regexp", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Regexp__1057 = { (RT0__Struct[]){&_td_XML_Regexp__1057}, (void*[]){}, NULL, &_mid, NULL, 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Regexp__1048 = { (RT0__Struct[]){&_td_XML_Regexp__1057}, NULL, NULL, &_mid, NULL, 12, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_XML_Regexp__States = { (RT0__Struct[]){&_td_XML_Regexp__1048}, NULL, NULL, &_mid, (OOC_CHAR8*)"States", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Regexp__RegexpDesc = { (RT0__Struct[]){&_td_XML_DTD__RegexpInfoDesc,&_td_XML_Regexp__RegexpDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"RegexpDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Regexp__Set = { (RT0__Struct[]){&_td_XML_Regexp__SetDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Set", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Regexp__1291 = { (RT0__Struct[]){&RT0__longint}, NULL, NULL, &_mid, NULL, 4, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_XML_Regexp__Members = { (RT0__Struct[]){&_td_XML_Regexp__1291}, NULL, NULL, &_mid, (OOC_CHAR8*)"Members", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Regexp__SetDesc = { (RT0__Struct[]){&_td_XML_Regexp__SetDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"SetDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_XML_Regexp__Matcher = { (RT0__Struct[]){&_td_XML_Regexp__MatcherDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Matcher", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_XML_Regexp__MatcherDesc = { (RT0__Struct[]){&_td_XML_Regexp__MatcherDesc}, (void*[]){(void*)XML_Regexp__MatcherDesc_Matches,(void*)XML_Regexp__MatcherDesc_EndOfRegexp,(void*)XML_Regexp__MatcherDesc_ExpectedTags}, NULL, &_mid, (OOC_CHAR8*)"MatcherDesc", 8, 0, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"XML:Regexp", (RT0__Struct[]) { &_td_XML_Regexp__Regexp, &_td_XML_Regexp__States, &_td_XML_Regexp__RegexpDesc, &_td_XML_Regexp__Set, &_td_XML_Regexp__Members, &_td_XML_Regexp__SetDesc, &_td_XML_Regexp__Matcher, &_td_XML_Regexp__MatcherDesc, NULL }, 0 };

extern void OOC_XML_Regexp_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_LongStrings_open(&_mid);
    OOC_XML_DTD_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_XML_Regexp_init();
  }
  _mid.openCount++;
}
extern void OOC_XML_Regexp_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_XML_Regexp_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_LongStrings_close(&_mid);
    OOC_XML_DTD_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
