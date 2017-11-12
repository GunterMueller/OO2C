#include <IO/Select.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_IO_Select__SelectionKey = { (RT0__Struct[]){&_td_IO_Select__SelectionKeyDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"SelectionKey", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Select__SelectionKeyDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_IO__SelectionKeyDesc,&_td_IO_Select__SelectionKeyDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)IO__SelectionKeyDesc_INIT,(void*)IO__SelectionKeyDesc_Attach,(void*)IO__SelectionKeyDesc_Cancel,(void*)IO__SelectionKeyDesc_SetInterestOps}, NULL, &_mid, (OOC_CHAR8*)"SelectionKeyDesc", 28, 3, 0, RT0__strRecord };
RT0__StructDesc _td_IO_Select__Selector = { (RT0__Struct[]){&_td_IO_Select__SelectorDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Selector", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_IO_Select__SelectorDesc = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_IO__SelectorDesc,&_td_IO_Select__SelectorDesc}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)Object__ObjectDesc_Equals,(void*)Object__ObjectDesc_HashCode,(void*)IO_Select__SelectorDesc_INIT,(void*)IO_Select__SelectorDesc_Close,(void*)IO_Select__SelectorDesc_Select,(void*)IO_Select__SelectorDesc_NextKey,(void*)IO_Select__SelectorDesc_AddSelectionKey,(void*)IO_Select__SelectorDesc_RemoveSelectionKey,(void*)IO__SelectorDesc_RemoveCanceled}, NULL, &_mid, (OOC_CHAR8*)"SelectorDesc", 16, 3, 0, RT0__strRecord };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"IO:Select", (RT0__Struct[]) { &_td_IO_Select__SelectionKey, &_td_IO_Select__SelectionKeyDesc, &_td_IO_Select__Selector, &_td_IO_Select__SelectorDesc, NULL }, 0 };

extern void OOC_IO_Select_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_IO_StdChannels_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_IO_Select_init();
  }
  _mid.openCount++;
}
extern void OOC_IO_Select_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_IO_Select_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_IO_StdChannels_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
