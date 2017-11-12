#include <ADT/LinkedList.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_ADT_LinkedList__Entry = { (RT0__Struct[]){&_td_ADT_LinkedList__EntryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Entry", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_LinkedList__EntryDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_LinkedList__EntryDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode}, NULL, &_mid, (OOC_CHAR8*)"EntryDesc", 12, 2, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_LinkedList__LinkedList = { (RT0__Struct[]){&_td_ADT_LinkedList__LinkedListDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"LinkedList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_LinkedList__LinkedListDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td_ADT_LinkedList__LinkedListDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_LinkedList__LinkedListDesc_Equals,(void*)ADT_LinkedList__LinkedListDesc_HashCode,(void*)ADT_LinkedList__LinkedListDesc_Store,(void*)ADT_LinkedList__LinkedListDesc_Load,(void*)ADT_LinkedList__LinkedListDesc_NewEntry,(void*)ADT_LinkedList__LinkedListDesc_INIT,(void*)ADT_LinkedList__LinkedListDesc_Destroy,(void*)ADT_LinkedList__LinkedListDesc_GetFirst,(void*)ADT_LinkedList__LinkedListDesc_GetLast,(void*)ADT_LinkedList__LinkedListDesc_RemoveEntry,(void*)ADT_LinkedList__LinkedListDesc_FindEntry,(void*)ADT_LinkedList__LinkedListDesc_RemoveFirst,(void*)ADT_LinkedList__LinkedListDesc_RemoveLast,(void*)ADT_LinkedList__LinkedListDesc_Remove,(void*)ADT_LinkedList__LinkedListDesc_RemoveRange,(void*)ADT_LinkedList__LinkedListDesc_AddBefore,(void*)ADT_LinkedList__LinkedListDesc_Prepend,(void*)ADT_LinkedList__LinkedListDesc_Append,(void*)ADT_LinkedList__LinkedListDesc_Copy,(void*)ADT_LinkedList__LinkedListDesc_Clear,(void*)ADT_LinkedList__LinkedListDesc_Insert,(void*)ADT_LinkedList__LinkedListDesc_Get,(void*)ADT_LinkedList__LinkedListDesc_Set,(void*)ADT_LinkedList__LinkedListDesc_Size,(void*)ADT_LinkedList__LinkedListDesc_Contains,(void*)ADT_LinkedList__LinkedListDesc_IndexOf,(void*)ADT_LinkedList__LinkedListDesc_LastIndexOf,(void*)ADT_LinkedList__LinkedListDesc_IsEmpty,(void*)ADT_LinkedList__LinkedListDesc_GetIterator}, NULL, &_mid, (OOC_CHAR8*)"LinkedListDesc", 8, 3, 0, RT0__strRecord };
RT0__StructDesc _td_ADT_LinkedList__Iterator = { (RT0__Struct[]){&_td_ADT_LinkedList__IteratorDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Iterator", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_ADT_LinkedList__IteratorDesc = { (RT0__Struct[]){&_td_ADT_LinkedList__IteratorDesc}, (void*[]){(void*)ADT_LinkedList__IteratorDesc_HasNext,(void*)ADT_LinkedList__IteratorDesc_Next,(void*)ADT_LinkedList__IteratorDesc_NextIndex,(void*)ADT_LinkedList__IteratorDesc_Remove,(void*)ADT_LinkedList__IteratorDesc_Set,(void*)ADT_LinkedList__IteratorDesc_Insert}, NULL, &_mid, (OOC_CHAR8*)"IteratorDesc", 16, 0, 0, RT0__strRecord };
static RT0__StructDesc _td__qtd0 = { NULL, NULL, NULL, &_mid, (OOC_CHAR8*)"ADT:LinkedList.E", 4, 0, 0, RT0__strTypeVar };
static RT0__StructDesc _td__qtd1 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td__qtd1}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode}, (RT0__Struct[]){&_td_ADT_LinkedList__EntryDesc, &_td__qtd0, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.EntryDesc(ADT:LinkedList.E)", 12, 2, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd2 = { (RT0__Struct[]){&_td__qtd1}, NULL, (RT0__Struct[]){&_td_ADT_LinkedList__Entry, &_td__qtd0, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.Entry(ADT:LinkedList.E)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd3 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd3}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_LinkedList__LinkedListDesc_Equals,(void*)ADT_LinkedList__LinkedListDesc_HashCode,(void*)ADT_LinkedList__LinkedListDesc_Store,(void*)ADT_LinkedList__LinkedListDesc_Load,(void*)ADT_LinkedList__LinkedListDesc_NewEntry,(void*)ADT_LinkedList__LinkedListDesc_INIT,(void*)ADT_LinkedList__LinkedListDesc_Destroy,(void*)ADT_LinkedList__LinkedListDesc_GetFirst,(void*)ADT_LinkedList__LinkedListDesc_GetLast,(void*)ADT_LinkedList__LinkedListDesc_RemoveEntry,(void*)ADT_LinkedList__LinkedListDesc_FindEntry,(void*)ADT_LinkedList__LinkedListDesc_RemoveFirst,(void*)ADT_LinkedList__LinkedListDesc_RemoveLast,(void*)ADT_LinkedList__LinkedListDesc_Remove,(void*)ADT_LinkedList__LinkedListDesc_RemoveRange,(void*)ADT_LinkedList__LinkedListDesc_AddBefore,(void*)ADT_LinkedList__LinkedListDesc_Prepend,(void*)ADT_LinkedList__LinkedListDesc_Append,(void*)ADT_LinkedList__LinkedListDesc_Copy,(void*)ADT_LinkedList__LinkedListDesc_Clear,(void*)ADT_LinkedList__LinkedListDesc_Insert,(void*)ADT_LinkedList__LinkedListDesc_Get,(void*)ADT_LinkedList__LinkedListDesc_Set,(void*)ADT_LinkedList__LinkedListDesc_Size,(void*)ADT_LinkedList__LinkedListDesc_Contains,(void*)ADT_LinkedList__LinkedListDesc_IndexOf,(void*)ADT_LinkedList__LinkedListDesc_LastIndexOf,(void*)ADT_LinkedList__LinkedListDesc_IsEmpty,(void*)ADT_LinkedList__LinkedListDesc_GetIterator}, (RT0__Struct[]){&_td_ADT_LinkedList__LinkedListDesc, &_td_Object__ObjectDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.LinkedListDesc(Object.Object)", 8, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd4 = { (RT0__Struct[]){&_td__qtd3}, NULL, (RT0__Struct[]){&_td_ADT_LinkedList__LinkedList, &_td_Object__ObjectDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.LinkedList(Object.Object)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd5 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd5}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_LinkedList__LinkedListDesc_Equals,(void*)ADT_LinkedList__LinkedListDesc_HashCode,(void*)ADT_LinkedList__LinkedListDesc_Store,(void*)ADT_LinkedList__LinkedListDesc_Load,(void*)ADT_LinkedList__LinkedListDesc_NewEntry,(void*)ADT_LinkedList__LinkedListDesc_INIT,(void*)ADT_LinkedList__LinkedListDesc_Destroy,(void*)ADT_LinkedList__LinkedListDesc_GetFirst,(void*)ADT_LinkedList__LinkedListDesc_GetLast,(void*)ADT_LinkedList__LinkedListDesc_RemoveEntry,(void*)ADT_LinkedList__LinkedListDesc_FindEntry,(void*)ADT_LinkedList__LinkedListDesc_RemoveFirst,(void*)ADT_LinkedList__LinkedListDesc_RemoveLast,(void*)ADT_LinkedList__LinkedListDesc_Remove,(void*)ADT_LinkedList__LinkedListDesc_RemoveRange,(void*)ADT_LinkedList__LinkedListDesc_AddBefore,(void*)ADT_LinkedList__LinkedListDesc_Prepend,(void*)ADT_LinkedList__LinkedListDesc_Append,(void*)ADT_LinkedList__LinkedListDesc_Copy,(void*)ADT_LinkedList__LinkedListDesc_Clear,(void*)ADT_LinkedList__LinkedListDesc_Insert,(void*)ADT_LinkedList__LinkedListDesc_Get,(void*)ADT_LinkedList__LinkedListDesc_Set,(void*)ADT_LinkedList__LinkedListDesc_Size,(void*)ADT_LinkedList__LinkedListDesc_Contains,(void*)ADT_LinkedList__LinkedListDesc_IndexOf,(void*)ADT_LinkedList__LinkedListDesc_LastIndexOf,(void*)ADT_LinkedList__LinkedListDesc_IsEmpty,(void*)ADT_LinkedList__LinkedListDesc_GetIterator}, (RT0__Struct[]){&_td_ADT_LinkedList__LinkedListDesc, &_td__qtd0, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.LinkedListDesc(ADT:LinkedList.E)", 8, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd6 = { (RT0__Struct[]){&_td__qtd5}, NULL, (RT0__Struct[]){&_td_ADT_LinkedList__LinkedList, &_td__qtd0, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.LinkedList(ADT:LinkedList.E)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd7 = { (RT0__Struct[]){&_td__qtd7}, (void*[]){(void*)ADT_LinkedList__IteratorDesc_HasNext,(void*)ADT_LinkedList__IteratorDesc_Next,(void*)ADT_LinkedList__IteratorDesc_NextIndex,(void*)ADT_LinkedList__IteratorDesc_Remove,(void*)ADT_LinkedList__IteratorDesc_Set,(void*)ADT_LinkedList__IteratorDesc_Insert}, (RT0__Struct[]){&_td_ADT_LinkedList__IteratorDesc, &_td__qtd0, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.IteratorDesc(ADT:LinkedList.E)", 16, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd8 = { (RT0__Struct[]){&_td__qtd7}, NULL, (RT0__Struct[]){&_td_ADT_LinkedList__Iterator, &_td__qtd0, NULL}, &_mid, (OOC_CHAR8*)"ADT:LinkedList.Iterator(ADT:LinkedList.E)", 4, 0, 0, RT0__strQualType };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"ADT:LinkedList", (RT0__Struct[]) { &_td_ADT_LinkedList__Entry, &_td_ADT_LinkedList__EntryDesc, &_td_ADT_LinkedList__LinkedList, &_td_ADT_LinkedList__LinkedListDesc, &_td_ADT_LinkedList__Iterator, &_td_ADT_LinkedList__IteratorDesc, &_td__qtd0, &_td__qtd1, &_td__qtd2, &_td__qtd3, &_td__qtd4, &_td__qtd5, &_td__qtd6, &_td__qtd7, &_td__qtd8, NULL }, 0 };

extern void OOC_ADT_LinkedList_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_ADT_Storable_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_ADT_LinkedList_init();
  }
  _mid.openCount++;
}
extern void OOC_ADT_LinkedList_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_ADT_LinkedList_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_ADT_Storable_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
