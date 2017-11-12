#include <Msg.oh>
#include <Strings.oh>
#include <LongStrings.oh>
#include <IntStr.oh>

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_Msg__String = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, (OOC_CHAR8*)"String", 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Msg__StringPtr = { (RT0__Struct[]){&_td_Msg__String}, NULL, NULL, &_mid, (OOC_CHAR8*)"StringPtr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__LString = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, (OOC_CHAR8*)"LString", 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_Msg__LStringPtr = { (RT0__Struct[]){&_td_Msg__LString}, NULL, NULL, &_mid, (OOC_CHAR8*)"LStringPtr", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__Attribute = { (RT0__Struct[]){&_td_Msg__AttributeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Attribute", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__AttributeDesc = { (RT0__Struct[]){&_td_Msg__AttributeDesc}, (void*[]){(void*)Msg__AttributeDesc_ReplacementText}, NULL, &_mid, (OOC_CHAR8*)"AttributeDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__Context = { (RT0__Struct[]){&_td_Msg__ContextDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Context", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__ContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc}, (void*[]){(void*)Msg__ContextDesc_GetTemplate}, NULL, &_mid, (OOC_CHAR8*)"ContextDesc", 4, 0, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__Msg = { (RT0__Struct[]){&_td_Msg__MsgDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Msg", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__MsgDesc = { (RT0__Struct[]){&_td_Msg__MsgDesc}, (void*[]){(void*)Msg__MsgDesc_SetAttribute,(void*)Msg__MsgDesc_GetAttribute,(void*)Msg__MsgDesc_GetLText,(void*)Msg__MsgDesc_GetText,(void*)Msg__MsgDesc_SetIntAttrib,(void*)Msg__MsgDesc_SetStringAttrib,(void*)Msg__MsgDesc_SetLStringAttrib,(void*)Msg__MsgDesc_SetMsgAttrib}, NULL, &_mid, (OOC_CHAR8*)"MsgDesc", 20, 0, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__MsgList = { (RT0__Struct[]){&_td_Msg__MsgListDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"MsgList", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__MsgListDesc = { (RT0__Struct[]){&_td_Msg__MsgListDesc}, (void*[]){(void*)Msg__MsgListDesc_Append,(void*)Msg__MsgListDesc_AppendList}, NULL, &_mid, (OOC_CHAR8*)"MsgListDesc", 12, 0, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__IntAttribute = { (RT0__Struct[]){&_td_Msg__IntAttributeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"IntAttribute", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__IntAttributeDesc = { (RT0__Struct[]){&_td_Msg__AttributeDesc,&_td_Msg__IntAttributeDesc}, (void*[]){(void*)Msg__IntAttributeDesc_ReplacementText}, NULL, &_mid, (OOC_CHAR8*)"IntAttributeDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__StringAttribute = { (RT0__Struct[]){&_td_Msg__StringAttributeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"StringAttribute", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__StringAttributeDesc = { (RT0__Struct[]){&_td_Msg__AttributeDesc,&_td_Msg__StringAttributeDesc}, (void*[]){(void*)Msg__StringAttributeDesc_ReplacementText}, NULL, &_mid, (OOC_CHAR8*)"StringAttributeDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__LStringAttribute = { (RT0__Struct[]){&_td_Msg__LStringAttributeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"LStringAttribute", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__LStringAttributeDesc = { (RT0__Struct[]){&_td_Msg__AttributeDesc,&_td_Msg__LStringAttributeDesc}, (void*[]){(void*)Msg__LStringAttributeDesc_ReplacementText}, NULL, &_mid, (OOC_CHAR8*)"LStringAttributeDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__MsgAttribute = { (RT0__Struct[]){&_td_Msg__MsgAttributeDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"MsgAttribute", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_Msg__MsgAttributeDesc = { (RT0__Struct[]){&_td_Msg__AttributeDesc,&_td_Msg__MsgAttributeDesc}, (void*[]){(void*)Msg__MsgAttributeDesc_ReplacementText}, NULL, &_mid, (OOC_CHAR8*)"MsgAttributeDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_Msg__7793 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 32768, 16384, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Msg__11704 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 262, 131, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Msg__11750 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 32768, 16384, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Msg__11843 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 48, 48, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Msg__13285 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 65534, 32767, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_Msg__15658 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 48, 48, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"Msg", (RT0__Struct[]) { &_td_Msg__String, &_td_Msg__StringPtr, &_td_Msg__LString, &_td_Msg__LStringPtr, &_td_Msg__Attribute, &_td_Msg__AttributeDesc, &_td_Msg__Context, &_td_Msg__ContextDesc, &_td_Msg__Msg, &_td_Msg__MsgDesc, &_td_Msg__MsgList, &_td_Msg__MsgListDesc, &_td_Msg__IntAttribute, &_td_Msg__IntAttributeDesc, &_td_Msg__StringAttribute, &_td_Msg__StringAttributeDesc, &_td_Msg__LStringAttribute, &_td_Msg__LStringAttributeDesc, &_td_Msg__MsgAttribute, &_td_Msg__MsgAttributeDesc, NULL }, 0 };

extern void OOC_Msg_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_CharClass_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_LongStrings_open(&_mid);
    OOC_IntStr_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_Msg_init();
  }
  _mid.openCount++;
}
extern void OOC_Msg_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_Msg_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_CharClass_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_LongStrings_close(&_mid);
    OOC_IntStr_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
