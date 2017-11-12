#include <ADT/Dictionary/AddressKey.oh>
#include <HashCode.oh>
typedef OOC_UINT32 ADT_Dictionary_AddressKey__HSet;
static ADT_Dictionary_AddressKey__Dummy ADT_Dictionary_AddressKey__dummy;
#define ADT_Dictionary_AddressKey__minSize 4
#define ADT_Dictionary_AddressKey__maxPoly 28
static OOC_INT32 ADT_Dictionary_AddressKey__polys[29];
static OOC_CHAR8 ADT_Dictionary_AddressKey__IsSet(Object__Object key);
static OOC_INT32 ADT_Dictionary_AddressKey__InternalLookup(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key, OOC_INT32 hash);
static void ADT_Dictionary_AddressKey__Insert(ADT_Dictionary_AddressKey__Dictionary dict, Object__Object key, OOC_INT32 hash, Object__Object value);
static void ADT_Dictionary_AddressKey__Resize(ADT_Dictionary_AddressKey__Dictionary dict, OOC_INT32 minUsed);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_Dictionary_AddressKey__Entry = { (RT0__Struct[]){&_td_ADT_Dictionary_AddressKey__Entry}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"Entry", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__2641 = { (RT0__Struct[]){&_td_ADT_Dictionary_AddressKey__Entry}, NULL, NULL, &_mid, NULL, 12, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__Table = { (RT0__Struct[]){&_td_ADT_Dictionary_AddressKey__2641}, NULL, NULL, &_mid, (OOC_CHAR8*)"Table", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__Dictionary = { (RT0__Struct[]){&_td_ADT_Dictionary_AddressKey__DictionaryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Dictionary", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__DictionaryDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_Dictionary_AddressKey__DictionaryDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Equals,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_HashCode,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Store,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Load,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Destroy,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_HasKey,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Size,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Get,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Lookup,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Set,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Copy,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Delete,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Clear,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Keys,(void*)ADT_Dictionary_AddressKey__DictionaryDesc_Values}, NULL, &_mid, (OOC_CHAR8*)"DictionaryDesc", 20, 3, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__Dummy = { (RT0__Struct[]){&_td_ADT_Dictionary_AddressKey__DummyDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Dummy", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__DummyDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Dictionary_AddressKey__DummyDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)ADT_Dictionary_AddressKey__DummyDesc_Destroy}, NULL, &_mid, (OOC_CHAR8*)"DummyDesc", 0, 2, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_ADT_Dictionary_AddressKey__4113 = { (RT0__Struct[]){&RT0__longint}, NULL, NULL, &_mid, NULL, 116, 29, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:Dictionary:AddressKey", (RT0__Struct[]) { &_td_ADT_Dictionary_AddressKey__Entry, &_td_ADT_Dictionary_AddressKey__Table, &_td_ADT_Dictionary_AddressKey__Dictionary, &_td_ADT_Dictionary_AddressKey__DictionaryDesc, &_td_ADT_Dictionary_AddressKey__Dummy, &_td_ADT_Dictionary_AddressKey__DummyDesc, NULL }, 0 };

extern void OOC_ADT_Dictionary_AddressKey_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_ADT_Storable_open(&_mid);
    OOC_HashCode_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_ADT_Dictionary_AddressKey_init();
  }
  _mid.openCount++;
}
extern void OOC_ADT_Dictionary_AddressKey_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_ADT_Dictionary_AddressKey_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_ADT_Storable_close(&_mid);
    OOC_HashCode_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
