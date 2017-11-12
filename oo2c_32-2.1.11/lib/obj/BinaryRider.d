#include <BinaryRider.oh>
#include <Strings.oh>
static OOC_INT8 BinaryRider__systemByteOrder;
typedef struct BinaryRider__ErrorContextDesc *BinaryRider__ErrorContext;
static BinaryRider__ErrorContext BinaryRider__errorContext;
static Msg__Msg BinaryRider__GetError(OOC_INT32 code);
static void BinaryRider__SetDefaultByteOrder(OOC_CHAR8 x[], OOC_LEN x_0d);
static void BinaryRider__Init(void);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_BinaryRider__Reader = { (RT0__Struct[]){&_td_BinaryRider__ReaderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Reader", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__ReaderDesc = { (RT0__Struct[]){&_td_BinaryRider__ReaderDesc}, (void*[]){(void*)BinaryRider__ReaderDesc_Pos,(void*)BinaryRider__ReaderDesc_SetPos,(void*)BinaryRider__ReaderDesc_ClearError,(void*)BinaryRider__ReaderDesc_Available,(void*)BinaryRider__ReaderDesc_ReadBytes,(void*)BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)BinaryRider__ReaderDesc_ReadBool,(void*)BinaryRider__ReaderDesc_ReadChar,(void*)BinaryRider__ReaderDesc_ReadLChar,(void*)BinaryRider__ReaderDesc_ReadString,(void*)BinaryRider__ReaderDesc_ReadLString,(void*)BinaryRider__ReaderDesc_ReadSInt,(void*)BinaryRider__ReaderDesc_ReadInt,(void*)BinaryRider__ReaderDesc_ReadLInt,(void*)BinaryRider__ReaderDesc_ReadNum,(void*)BinaryRider__ReaderDesc_ReadReal,(void*)BinaryRider__ReaderDesc_ReadLReal,(void*)BinaryRider__ReaderDesc_ReadSet,(void*)BinaryRider__ReaderDesc_ReadStr,(void*)BinaryRider__ReaderDesc_SetByteOrder}, NULL, &_mid, (OOC_CHAR8*)"ReaderDesc", 16, 0, 0, RT0__strRecord };
RT0__StructDesc _td_BinaryRider__Writer = { (RT0__Struct[]){&_td_BinaryRider__WriterDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Writer", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__WriterDesc = { (RT0__Struct[]){&_td_BinaryRider__WriterDesc}, (void*[]){(void*)BinaryRider__WriterDesc_Pos,(void*)BinaryRider__WriterDesc_SetPos,(void*)BinaryRider__WriterDesc_ClearError,(void*)BinaryRider__WriterDesc_WriteBytes,(void*)BinaryRider__WriterDesc_WriteBytesOrdered,(void*)BinaryRider__WriterDesc_WriteBool,(void*)BinaryRider__WriterDesc_WriteChar,(void*)BinaryRider__WriterDesc_WriteLChar,(void*)BinaryRider__WriterDesc_WriteString,(void*)BinaryRider__WriterDesc_WriteLString,(void*)BinaryRider__WriterDesc_WriteSInt,(void*)BinaryRider__WriterDesc_WriteInt,(void*)BinaryRider__WriterDesc_WriteLInt,(void*)BinaryRider__WriterDesc_WriteNum,(void*)BinaryRider__WriterDesc_WriteReal,(void*)BinaryRider__WriterDesc_WriteLReal,(void*)BinaryRider__WriterDesc_WriteSet,(void*)BinaryRider__WriterDesc_WriteStr,(void*)BinaryRider__WriterDesc_SetByteOrder}, NULL, &_mid, (OOC_CHAR8*)"WriterDesc", 16, 0, 0, RT0__strRecord };
RT0__StructDesc _td_BinaryRider__ErrorContext = { (RT0__Struct[]){&_td_BinaryRider__ErrorContextDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"ErrorContext", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__ErrorContextDesc = { (RT0__Struct[]){&_td_Msg__ContextDesc,&_td_Channel__ErrorContextDesc,&_td_BinaryRider__ErrorContextDesc}, (void*[]){(void*)Channel__ErrorContextDesc_GetTemplate}, NULL, &_mid, (OOC_CHAR8*)"ErrorContextDesc", 4, 2, 0, RT0__strRecord };
RT0__StructDesc _td_BinaryRider__3730 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__4056 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__5189 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__5874 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__8515 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1024, 1024, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_BinaryRider__8569 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__8558 = { (RT0__Struct[]){&_td_BinaryRider__8569}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__8598 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 1024, 512, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_BinaryRider__8658 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__8647 = { (RT0__Struct[]){&_td_BinaryRider__8658}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_BinaryRider__10531 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__10861 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__11867 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__12142 = { (RT0__Struct[]){&RT0__longchar}, NULL, NULL, &_mid, NULL, 2, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_BinaryRider__16333 = { (RT0__Struct[]){&RT0__byte}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"BinaryRider", (RT0__Struct[]) { &_td_BinaryRider__Reader, &_td_BinaryRider__ReaderDesc, &_td_BinaryRider__Writer, &_td_BinaryRider__WriterDesc, &_td_BinaryRider__ErrorContext, &_td_BinaryRider__ErrorContextDesc, NULL }, 0 };

extern void OOC_BinaryRider_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Strings_open(&_mid);
    OOC_Channel_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Msg_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_BinaryRider_init();
  }
  _mid.openCount++;
}
extern void OOC_BinaryRider_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_BinaryRider_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Strings_close(&_mid);
    OOC_Channel_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Msg_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
