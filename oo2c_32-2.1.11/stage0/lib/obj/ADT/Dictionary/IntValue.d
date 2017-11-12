#include <ADT/Dictionary/IntValue.oh>
typedef OOC_UINT32 ADT_Dictionary_IntValue__HSet;
typedef struct ADT_Dictionary_IntValue__DummyDesc *ADT_Dictionary_IntValue__Dummy;
typedef struct ADT_Dictionary_IntValue__DummyDesc {
  char __dummy;
} ADT_Dictionary_IntValue__DummyDesc;
static ADT_Dictionary_IntValue__Dummy ADT_Dictionary_IntValue__dummy;
#define ADT_Dictionary_IntValue__minSize 4
#define ADT_Dictionary_IntValue__maxPoly 28
static OOC_INT32 ADT_Dictionary_IntValue__polys[29];
static OOC_CHAR8 ADT_Dictionary_IntValue__IsSet(Object__Object key);
static OOC_INT32 ADT_Dictionary_IntValue__InternalLookup(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash);
static void ADT_Dictionary_IntValue__Insert(ADT_Dictionary_IntValue__Dictionary dict, Object__Object key, OOC_INT32 hash, OOC_INT32 value);
static void ADT_Dictionary_IntValue__Resize(ADT_Dictionary_IntValue__Dictionary dict, OOC_INT32 minUsed);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Dictionary_IntValue__Entry = { (RT0__Struct[]){&_td_ADT_Dictionary_IntValue__Entry}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"Entry", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary_IntValue__2530 = { (RT0__Struct[]){&_td_ADT_Dictionary_IntValue__Entry}, NULL, NULL, &_mid, NULL, 12, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Dictionary_IntValue__Table = { (RT0__Struct[]){&_td_ADT_Dictionary_IntValue__2530}, NULL, NULL, &_mid, (OOC_CHAR8*)"Table", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary_IntValue__Dictionary = { (RT0__Struct[]){&_td_ADT_Dictionary_IntValue__DictionaryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Dictionary", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary_IntValue__DictionaryDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_Dictionary_IntValue__DictionaryDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Store,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Load,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Destroy,(void*)ADT_Dictionary_IntValue__DictionaryDesc_HasKey,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Size,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Get,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Lookup,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Set,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Copy,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Delete,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Clear,(void*)ADT_Dictionary_IntValue__DictionaryDesc_Keys}, NULL, &_mid, (OOC_CHAR8*)"DictionaryDesc", 20, 3, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary_IntValue__Dummy = { (RT0__Struct[]){&_td_ADT_Dictionary_IntValue__DummyDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Dummy", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary_IntValue__DummyDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Dictionary_IntValue__DummyDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode}, NULL, &_mid, (OOC_CHAR8*)"DummyDesc", 0, 2, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary_IntValue__3830 = { (RT0__Struct[]){&RT0__longint}, NULL, NULL, &_mid, NULL, 116, 29, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Dictionary:IntValue", (RT0__Struct[]) { &_td_ADT_Dictionary_IntValue__Entry, &_td_ADT_Dictionary_IntValue__Table, &_td_ADT_Dictionary_IntValue__Dictionary, &_td_ADT_Dictionary_IntValue__DictionaryDesc, &_td_ADT_Dictionary_IntValue__Dummy, &_td_ADT_Dictionary_IntValue__DummyDesc, NULL }, 0 };

extern void OOC_ADT_Dictionary_IntValue_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_ADT_Storable_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_ADT_Dictionary_IntValue_init();
  }
  _mid.openCount++;
}
extern void OOC_ADT_Dictionary_IntValue_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_ADT_Dictionary_IntValue_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_ADT_Storable_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
