#include <ADT/ArrayList.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_ArrayList__1017 = { (RT0__Struct[]){&_td_Object__Object}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_ADT_ArrayList__Array = { (RT0__Struct[]){&_td_ADT_ArrayList__1017}, NULL, NULL, &_mid, (OOC_CHAR8*)"Array", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_ArrayList__ArrayList = { (RT0__Struct[]){&_td_ADT_ArrayList__ArrayListDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ArrayList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_ArrayList__ArrayListDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_ArrayList__ArrayListDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_ArrayList__ArrayListDesc_Equals,(void*)ADT_ArrayList__ArrayListDesc_HashCode,(void*)ADT_ArrayList__ArrayListDesc_Store,(void*)ADT_ArrayList__ArrayListDesc_Load,(void*)ADT_ArrayList__ArrayListDesc_CreateArray,(void*)ADT_ArrayList__ArrayListDesc_INIT,(void*)ADT_ArrayList__ArrayListDesc_Destroy,(void*)ADT_ArrayList__ArrayListDesc_Copy,(void*)ADT_ArrayList__ArrayListDesc_EnsureCapacity,(void*)ADT_ArrayList__ArrayListDesc_Clear,(void*)ADT_ArrayList__ArrayListDesc_Append,(void*)ADT_ArrayList__ArrayListDesc_Insert,(void*)ADT_ArrayList__ArrayListDesc_Get,(void*)ADT_ArrayList__ArrayListDesc_Set,(void*)ADT_ArrayList__ArrayListDesc_RemoveRange,(void*)ADT_ArrayList__ArrayListDesc_Remove,(void*)ADT_ArrayList__ArrayListDesc_TrimToSize,(void*)ADT_ArrayList__ArrayListDesc_Size,(void*)ADT_ArrayList__ArrayListDesc_Contains,(void*)ADT_ArrayList__ArrayListDesc_IndexOf,(void*)ADT_ArrayList__ArrayListDesc_LastIndexOf,(void*)ADT_ArrayList__ArrayListDesc_IsEmpty,(void*)ADT_ArrayList__ArrayListDesc_Sort,(void*)ADT_ArrayList__ArrayListDesc_Elements,(void*)ADT_ArrayList__ArrayListDesc_IterElements}, NULL, &_mid, (OOC_CHAR8*)"ArrayListDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_ArrayList__IterElements = { (RT0__Struct[]){&_td_ADT_ArrayList__IterElementsDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"IterElements", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_ArrayList__IterElementsDesc = { (RT0__Struct[]){&_td_ADT_ArrayList__IterElementsDesc}, (void*[]){(void*)ADT_ArrayList__IterElementsDesc_INIT,(void*)ADT_ArrayList__IterElementsDesc_Next}, NULL, &_mid, (OOC_CHAR8*)"IterElementsDesc", 8, 0, 0, RT0__strRecord };
static RT0__StructDesc _td__qtd0 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd0}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_ArrayList__ArrayListDesc_Equals,(void*)ADT_ArrayList__ArrayListDesc_HashCode,(void*)ADT_ArrayList__ArrayListDesc_Store,(void*)ADT_ArrayList__ArrayListDesc_Load,(void*)ADT_ArrayList__ArrayListDesc_CreateArray,(void*)ADT_ArrayList__ArrayListDesc_INIT,(void*)ADT_ArrayList__ArrayListDesc_Destroy,(void*)ADT_ArrayList__ArrayListDesc_Copy,(void*)ADT_ArrayList__ArrayListDesc_EnsureCapacity,(void*)ADT_ArrayList__ArrayListDesc_Clear,(void*)ADT_ArrayList__ArrayListDesc_Append,(void*)ADT_ArrayList__ArrayListDesc_Insert,(void*)ADT_ArrayList__ArrayListDesc_Get,(void*)ADT_ArrayList__ArrayListDesc_Set,(void*)ADT_ArrayList__ArrayListDesc_RemoveRange,(void*)ADT_ArrayList__ArrayListDesc_Remove,(void*)ADT_ArrayList__ArrayListDesc_TrimToSize,(void*)ADT_ArrayList__ArrayListDesc_Size,(void*)ADT_ArrayList__ArrayListDesc_Contains,(void*)ADT_ArrayList__ArrayListDesc_IndexOf,(void*)ADT_ArrayList__ArrayListDesc_LastIndexOf,(void*)ADT_ArrayList__ArrayListDesc_IsEmpty,(void*)ADT_ArrayList__ArrayListDesc_Sort,(void*)ADT_ArrayList__ArrayListDesc_Elements,(void*)ADT_ArrayList__ArrayListDesc_IterElements}, (RT0__Struct[]){&_td_ADT_ArrayList__ArrayListDesc, &_td_Object__ObjectDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.ArrayListDesc(Object.Object)", 8, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd1 = { (RT0__Struct[]){&_td__qtd0}, NULL, (RT0__Struct[]){&_td_ADT_ArrayList__ArrayList, &_td_Object__ObjectDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.ArrayList(Object.Object)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd2 = { NULL, NULL, NULL, &_mid, (OOC_CHAR8*)"ADT:ArrayList.E", 4, 0, 0, RT0__strTypeVar };
static RT0__StructDesc _td__qtd3 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd3}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_ArrayList__ArrayListDesc_Equals,(void*)ADT_ArrayList__ArrayListDesc_HashCode,(void*)ADT_ArrayList__ArrayListDesc_Store,(void*)ADT_ArrayList__ArrayListDesc_Load,(void*)ADT_ArrayList__ArrayListDesc_CreateArray,(void*)ADT_ArrayList__ArrayListDesc_INIT,(void*)ADT_ArrayList__ArrayListDesc_Destroy,(void*)ADT_ArrayList__ArrayListDesc_Copy,(void*)ADT_ArrayList__ArrayListDesc_EnsureCapacity,(void*)ADT_ArrayList__ArrayListDesc_Clear,(void*)ADT_ArrayList__ArrayListDesc_Append,(void*)ADT_ArrayList__ArrayListDesc_Insert,(void*)ADT_ArrayList__ArrayListDesc_Get,(void*)ADT_ArrayList__ArrayListDesc_Set,(void*)ADT_ArrayList__ArrayListDesc_RemoveRange,(void*)ADT_ArrayList__ArrayListDesc_Remove,(void*)ADT_ArrayList__ArrayListDesc_TrimToSize,(void*)ADT_ArrayList__ArrayListDesc_Size,(void*)ADT_ArrayList__ArrayListDesc_Contains,(void*)ADT_ArrayList__ArrayListDesc_IndexOf,(void*)ADT_ArrayList__ArrayListDesc_LastIndexOf,(void*)ADT_ArrayList__ArrayListDesc_IsEmpty,(void*)ADT_ArrayList__ArrayListDesc_Sort,(void*)ADT_ArrayList__ArrayListDesc_Elements,(void*)ADT_ArrayList__ArrayListDesc_IterElements}, (RT0__Struct[]){&_td_ADT_ArrayList__ArrayListDesc, &_td__qtd2, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.ArrayListDesc(ADT:ArrayList.E)", 8, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd4 = { (RT0__Struct[]){&_td__qtd3}, NULL, (RT0__Struct[]){&_td_ADT_ArrayList__ArrayList, &_td__qtd2, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.ArrayList(ADT:ArrayList.E)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd5 = { (RT0__Struct[]){&_td__qtd5}, (void*[]){(void*)ADT_ArrayList__IterElementsDesc_INIT,(void*)ADT_ArrayList__IterElementsDesc_Next}, (RT0__Struct[]){&_td_ADT_ArrayList__IterElementsDesc, &_td__qtd2, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.IterElementsDesc(ADT:ArrayList.E)", 8, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd6 = { (RT0__Struct[]){&_td__qtd5}, NULL, (RT0__Struct[]){&_td_ADT_ArrayList__IterElements, &_td__qtd2, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.IterElements(ADT:ArrayList.E)", 4, 0, 0, RT0__strQualType };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:ArrayList", (RT0__Struct[]) { &_td_ADT_ArrayList__Array, &_td_ADT_ArrayList__ArrayList, &_td_ADT_ArrayList__ArrayListDesc, &_td_ADT_ArrayList__IterElements, &_td_ADT_ArrayList__IterElementsDesc, &_td__qtd0, &_td__qtd1, &_td__qtd2, &_td__qtd3, &_td__qtd4, &_td__qtd5, &_td__qtd6, NULL }, 0 };

extern void OOC_ADT_ArrayList_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_ADT_Storable_open(&_mid);
    OOC_ADT_Comparator_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_ADT_ArrayList_init();
  }
  _mid.openCount++;
}
extern void OOC_ADT_ArrayList_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_ADT_ArrayList_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_ADT_Storable_close(&_mid);
    OOC_ADT_Comparator_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
