#include <OOC/SymbolTable.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SymbolTable__WriterDesc_INIT(OOC_SymbolTable__Writer w, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)chDoc;
  _assert((i0!=(OOC_INT64)0), 127, 45423);
  i1 = (OOC_INT64)w;
  i2 = (OOC_INT64)ch;
  ADT_Object_Storage__WriterDesc_INIT((ADT_Object_Storage__Writer)i1, (IO__ByteChannel)i2);
  i0 = (OOC_INT64)ADT_Object_Storage__ConnectWriter((IO__ByteChannel)i0);
  *(OOC_INT64*)((_check_pointer(i1, 45466))+304) = i0;
  return;
  ;
}

void OOC_SymbolTable__ReaderDesc_INIT(OOC_SymbolTable__Reader r, IO__ByteChannel ch, IO__ByteChannel chDoc) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)ch;
  i1 = (OOC_INT64)r;
  ADT_Object_Storage__ReaderDesc_INIT((ADT_Object_Storage__Reader)i1, (IO__ByteChannel)i0);
  i0 = (OOC_INT64)chDoc;
  i2 = i0==(OOC_INT64)0;
  if (i2) goto l3;
  i0 = (OOC_INT64)ADT_Object_Storage__ConnectReader((IO__ByteChannel)i0);
  *(OOC_INT64*)((_check_pointer(i1, 45672))+304) = i0;
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 45637))+304) = (OOC_INT64)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitNamespace(OOC_SymbolTable__Namespace ns) {

  return;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(45848); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_IdentifyLocal(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = 0u;
  i0 = (OOC_INT64)ns;
  i1 = (OOC_INT64)sourceContext;
  i2 = (OOC_INT64)name;
  i3 = ignorePosition;
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 47750)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT64)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify2(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition, OOC_CHAR8 *baseNotExported) {

  _failed_function(47880); return 0;
  ;
}

OOC_SymbolTable__Declaration OOC_SymbolTable__NamespaceDesc_Identify(OOC_SymbolTable__Namespace ns, OOC_SymbolTable__Item sourceContext, OOC_SymbolTable__Name name, OOC_CHAR8 ignorePosition) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_CHAR8 baseNotExported;

  baseNotExported = 0u;
  i0 = (OOC_INT64)ns;
  i1 = (OOC_INT64)sourceContext;
  i2 = (OOC_INT64)name;
  i3 = ignorePosition;
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 48804)))), OOC_SymbolTable__NamespaceDesc_Identify2)),OOC_SymbolTable__NamespaceDesc_Identify2)((OOC_SymbolTable__Namespace)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, i3, (void*)(OOC_INT64)&baseNotExported);
  return (OOC_SymbolTable__Declaration)i0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__NamespaceDesc_GetSuperProcByIndex(OOC_SymbolTable__Namespace ns, OOC_INT32 index) {

  _assert(0u, 127, 49072);
  _failed_function(48913); return 0;
  ;
}

static void OOC_SymbolTable__WriteType(ADT_Storable__Writer w, OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)srcCodeType;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49211)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

static void OOC_SymbolTable__ReadType(ADT_Storable__Reader r, OOC_SymbolTable__Type *type, OOC_SymbolTable__Type *srcCodeType) {
  register OOC_INT64 i0,i1;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49384)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l3;
  i0 = _type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 49505)))), &_td_OOC_SymbolTable__TypeDesc, 49505);
  *srcCodeType = (OOC_SymbolTable__Type)i0;
  *type = (OOC_SymbolTable__Type)i0;
  goto l4;
l3:
  *srcCodeType = (OOC_SymbolTable__Type)(OOC_INT64)0;
  *type = (OOC_SymbolTable__Type)(OOC_INT64)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__InitPosition(OOC_SymbolTable__Position position, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)position;
  i1 = pos;
  *(OOC_INT32*)(_check_pointer(i0, 49712)) = i1;
  i1 = line;
  *(OOC_INT32*)((_check_pointer(i0, 49738))+4) = i1;
  i1 = column;
  *(OOC_INT32*)((_check_pointer(i0, 49766))+8) = i1;
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Store(OOC_SymbolTable__Position position, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 49971));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 49951)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 50004))+4);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 49984)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 50038))+8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 50018)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  return;
  ;
}

void OOC_SymbolTable__PositionDesc_Load(OOC_SymbolTable__Position position, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 50206)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i0, 50225)));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 50238)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 50257))+4));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 50271)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i0, 50290))+8));
  return;
  ;
}

void OOC_SymbolTable__InitName(OOC_SymbolTable__Name name, OOC_Scanner_InputBuffer__CharArray str, OOC_INT32 pos, OOC_INT32 line, OOC_INT32 column) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = column;
  i1 = line;
  i2 = pos;
  i3 = (OOC_INT64)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i3, i2, i1, i0);
  i0 = (OOC_INT64)str;
  *(OOC_INT64*)((_check_pointer(i3, 50503))+16) = i0;
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Store(OOC_SymbolTable__Name name, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 len;

  i0 = (OOC_INT64)name;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50727))+16);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50727))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 50732)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i2, 50732)), i1);
  len = i1;
  i2 = (OOC_INT64)w;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 50741)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i2, i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 50782))+16);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 50764)))), IO_BinaryRider__WriterDesc_WriteBytes)),IO_BinaryRider__WriterDesc_WriteBytes)((IO_BinaryRider__Writer)i2, (void*)(_check_pointer(i0, 50787)), (-1), 0, i1);
  return;
  ;
}

void OOC_SymbolTable__NameDesc_Load(OOC_SymbolTable__Name name, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 len;
  OOC_Scanner_InputBuffer__CharArray str;

  i0 = (OOC_INT64)name;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, (-2), (-1), (-1));
  i1 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51055)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i1, (void*)(OOC_INT64)&len);
  i2 = len;
  i3 = (OOC_INT64)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i2+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i3;
  i4 = _check_pointer(i3, 51101);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 51101))) = 0u;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51119)))), IO_BinaryRider__ReaderDesc_ReadBytes)),IO_BinaryRider__ReaderDesc_ReadBytes)((IO_BinaryRider__Reader)i1, (void*)(_check_pointer(i3, 51135)), (-1), 0, i2);
  *(OOC_INT64*)((_check_pointer(i0, 51155))+16) = i3;
  return;
  ;
}

void OOC_SymbolTable__InitItem(OOC_SymbolTable__Item item, OOC_SymbolTable__Item parent) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)item;
  *(OOC_INT64*)(_check_pointer(i0, 51247)) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 51276))+16) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 51306))+24) = 0;
  i1 = (OOC_INT64)parent;
  *(OOC_INT64*)((_check_pointer(i0, 51340))+8) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 51368))+32) = 0;
  i2 = i1!=0;
  if (!i2) goto l23;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51437)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i2) goto l5;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51474)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l7;
l5:
  i2=1u;
l7:
  if (i2) goto l9;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51513)))), &_td_OOC_SymbolTable__RecordDesc);
  
  goto l11;
l9:
  i2=1u;
l11:
  if (i2) goto l13;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51550)))), &_td_OOC_SymbolTable__FormalParsDesc);
  
  goto l15;
l13:
  i2=1u;
l15:
  if (i2) goto l17;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51591)))), &_td_OOC_SymbolTable__TypeParsDesc);
  
  goto l18;
l17:
  i2=1u;
l18:
  _assert(i2, 127, 51420);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 51622))+16);
  i2 = i2==0;
  if (i2) goto l21;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 51707))+24);
  *(OOC_INT64*)(_check_pointer(i2, 51723)) = i0;
  goto l22;
l21:
  *(OOC_INT64*)((_check_pointer(i1, 51660))+16) = i0;
l22:
  *(OOC_INT64*)((_check_pointer(i1, 51767))+24) = i0;
l23:
  return;
  ;
}

static void OOC_SymbolTable__WriteItemList(ADT_Storable__Writer w, OOC_SymbolTable__Item item) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)item;
  i1 = (OOC_INT64)w;
  i2 = i0!=(OOC_INT64)0;
  if (!i2) goto l8;
  
l3_loop:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51930)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 51969));
  item = (OOC_SymbolTable__Item)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 51996)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)(OOC_INT64)0);
  return;
  ;
}

static void OOC_SymbolTable__ReadItemList(ADT_Storable__Reader r, OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object obj;

  *list = (OOC_SymbolTable__Item)(OOC_INT64)0;
  *last = (OOC_SymbolTable__Item)(OOC_INT64)0;
  i0 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 52218)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i1 = (OOC_INT64)obj;
  i2 = i1!=(OOC_INT64)0;
  if (!i2) goto l16;
  i2=(OOC_INT64)0;
l3_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 52275)))), &_td_OOC_SymbolTable__ItemDesc);
  if (i3) goto l6;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 52266)))), 52266);
  i1=i2;
  goto l11;
l6:
  i3 = i2!=(OOC_INT64)0;
  if (i3) goto l9;
  *list = (OOC_SymbolTable__Item)i1;
  goto l10;
l9:
  *(OOC_INT64*)(_check_pointer(i2, 52326)) = i1;
l10:
  *last = (OOC_SymbolTable__Item)i1;
  
l11:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 52431)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2!=(OOC_INT64)0;
  if (!i3) goto l16;
  {register OOC_INT64 h0=i1;i1=i2;i2=h0;}
  goto l3_loop;
l16:
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Store(OOC_SymbolTable__Item item, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)item;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 52579))+16);
  i2 = (OOC_INT64)w;
  OOC_SymbolTable__WriteItemList((ADT_Storable__Writer)i2, (OOC_SymbolTable__Item)i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 52618))+8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 52599)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i2, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__ItemDesc_Load(OOC_SymbolTable__Item item, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT64)item;
  *(OOC_INT64*)(_check_pointer(i0, 52794)) = 0;
  i1 = (OOC_INT64)r;
  OOC_SymbolTable__ReadItemList((ADT_Storable__Reader)i1, (void*)((_check_pointer(i0, 52839))+16), (void*)((_check_pointer(i0, 52858))+24));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 52883)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i1, (void*)(OOC_INT64)&obj);
  i1 = (OOC_INT64)obj;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT64*)((_check_pointer(i0, 52972))+8) = (_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 52988)))), &_td_OOC_SymbolTable__ItemDesc, 52988));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i0, 52937))+8) = 0;
l4:
  *(OOC_INT64*)((_check_pointer(i0, 53011))+32) = 0;
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable__ItemDesc_Module(OOC_SymbolTable__Item item) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)item;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53497))+8);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53520)))), &_td_OOC_SymbolTable__TypeDesc);
  
l5:
  if (!i1) goto l8;
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53553)))), &_td_OOC_SymbolTable__TypeDesc, 53553)), 53558)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53553)))), &_td_OOC_SymbolTable__TypeDesc, 53553)));
  item = (OOC_SymbolTable__Item)i0;
  
l8:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53632))+8);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l25;
l12_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53668))+8);
  item = (OOC_SymbolTable__Item)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53691))+8);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53714)))), &_td_OOC_SymbolTable__TypeDesc);
  
l17:
  if (!i1) goto l20;
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53749)))), &_td_OOC_SymbolTable__TypeDesc, 53749)), 53754)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53749)))), &_td_OOC_SymbolTable__TypeDesc, 53749)));
  item = (OOC_SymbolTable__Item)i0;
  
l20:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 53632))+8);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l12_loop;
l25:
  return (OOC_SymbolTable__Module)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 53841)))), &_td_OOC_SymbolTable__ModuleDesc, 53841));
  ;
}

OOC_CHAR8 OOC_SymbolTable__ItemDesc_InStandardModule(OOC_SymbolTable__Item item) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__Module module;

  i0 = (OOC_INT64)item;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54113))+8);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l3;
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 54216)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i0;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 54247))+96);
  return (i0==0);
  goto l4;
l3:
  return 1u;
l4:
  _failed_function(53887); return 0;
  ;
}

OOC_SymbolTable__ProcDecl OOC_SymbolTable__ItemDesc_Procedure(OOC_SymbolTable__Item item) {
  register OOC_INT64 i0,i1,i2;

l1_loop:
  i0 = (OOC_INT64)item;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 54532))+8);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l4;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 54573)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
  goto l6;
l4:
  i2=1u;
l6:
  if (!i2) goto l1_loop;
l10:
  if (i1) goto l12;
  return (OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 54656)))), &_td_OOC_SymbolTable__ProcDeclDesc, 54656));
  goto l13;
l12:
  return (OOC_SymbolTable__ProcDecl)(OOC_INT64)0;
l13:
  _failed_function(54328); return 0;
  ;
}

void OOC_SymbolTable__ItemDesc_AddFlag(OOC_SymbolTable__Item item, OOC_SymbolTable__Name name) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT16 id;
  OOC_SymbolTable__Flag fl;
  auto void OOC_SymbolTable__ItemDesc_AddFlag_Append(OOC_SymbolTable__Flag *list);
    
    void OOC_SymbolTable__ItemDesc_AddFlag_Append(OOC_SymbolTable__Flag *list) {
      register OOC_INT64 i0,i1;

      i0 = (OOC_INT64)*list;
      i1 = i0==(OOC_INT64)0;
      if (i1) goto l3;
      OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)(_check_pointer(i0, 55095)));
      goto l4;
l3:
      i0 = (OOC_INT64)fl;
      *(OOC_INT64*)(_check_pointer(i0, 55027)) = (OOC_INT64)0;
      *list = (OOC_SymbolTable__Flag)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT64)name;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55157))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55161)),(const void*)(OOC_CHAR8*)"NO_COPY"))==0;
  if (i1) goto l75;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55220))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55224)),(const void*)(OOC_CHAR8*)"ABSTRACT"))==0;
  if (i1) goto l73;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55286))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55290)),(const void*)(OOC_CHAR8*)"NO_LENGTH_INFO"))==0;
  if (i1) goto l71;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55362))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55366)),(const void*)(OOC_CHAR8*)"NO_DESCRIPTOR"))==0;
  if (i1) goto l69;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55437))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55441)),(const void*)(OOC_CHAR8*)"NOT_EXTENSIBLE"))==0;
  if (i1) goto l67;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55588))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55592)),(const void*)(OOC_CHAR8*)"UNCHECKED_EXCEPTION"))==0;
  if (i1) goto l65;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55675))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55679)),(const void*)(OOC_CHAR8*)"CSTRING"))==0;
  if (i1) goto l63;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55739))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55743)),(const void*)(OOC_CHAR8*)"NIL_COMPAT"))==0;
  if (i1) goto l61;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55808))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55812)),(const void*)(OOC_CHAR8*)"UNION"))==0;
  if (i1) goto l59;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55868))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55872)),(const void*)(OOC_CHAR8*)"READ_ONLY"))==0;
  if (i1) goto l57;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 55935))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 55939)),(const void*)(OOC_CHAR8*)"NO_RETURN"))==0;
  if (i1) goto l55;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56002))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56006)),(const void*)(OOC_CHAR8*)"DEPRECATED"))==0;
  if (i1) goto l53;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56072))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56076)),(const void*)(OOC_CHAR8*)"OOC_EXTENSIONS"))==0;
  if (i1) goto l51;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56149))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56153)),(const void*)(OOC_CHAR8*)"ALIGN1"))==0;
  if (i1) goto l49;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56211))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56215)),(const void*)(OOC_CHAR8*)"ALIGN2"))==0;
  if (i1) goto l47;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56273))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56277)),(const void*)(OOC_CHAR8*)"ALIGN4"))==0;
  if (i1) goto l45;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56335))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56339)),(const void*)(OOC_CHAR8*)"ALIGN8"))==0;
  if (i1) goto l43;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56397))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56401)),(const void*)(OOC_CHAR8*)"VTABLE"))==0;
  if (i1) goto l41;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 56459))+16);
  i1 = (
  _cmp8((const void*)(_check_pointer(i1, 56463)),(const void*)(OOC_CHAR8*)"NO_TRACED_POINTERS"))==0;
  if (i1) goto l39;
  id = (-1);
  i1=(-1);
  goto l76;
l39:
  id = 19;
  i1=19;
  goto l76;
l41:
  id = 17;
  i1=17;
  goto l76;
l43:
  id = 16;
  i1=16;
  goto l76;
l45:
  id = 15;
  i1=15;
  goto l76;
l47:
  id = 14;
  i1=14;
  goto l76;
l49:
  id = 13;
  i1=13;
  goto l76;
l51:
  id = 11;
  i1=11;
  goto l76;
l53:
  id = 10;
  i1=10;
  goto l76;
l55:
  id = 9;
  i1=9;
  goto l76;
l57:
  id = 8;
  i1=8;
  goto l76;
l59:
  id = 7;
  i1=7;
  goto l76;
l61:
  id = 6;
  i1=6;
  goto l76;
l63:
  id = 5;
  i1=5;
  goto l76;
l65:
  id = 18;
  i1=18;
  goto l76;
l67:
  id = 4;
  i1=4;
  goto l76;
l69:
  id = 3;
  i1=3;
  goto l76;
l71:
  id = 2;
  i1=2;
  goto l76;
l73:
  id = 1;
  i1=1;
  goto l76;
l75:
  id = 0;
  i1=0;
l76:
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__Flag.baseTypes[0]);
  fl = (OOC_SymbolTable__Flag)i2;
  *(OOC_INT16*)((_check_pointer(i2, 56585))+8) = i1;
  *(OOC_INT64*)((_check_pointer(i2, 56602))+16) = i0;
  i0 = (OOC_INT64)item;
  OOC_SymbolTable__ItemDesc_AddFlag_Append((void*)((_check_pointer(i0, 56631))+32));
  return;
  ;
}

void OOC_SymbolTable__InitDeclaration(OOC_SymbolTable__Declaration decl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)parent;
  i1 = (OOC_INT64)decl;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT64)name;
  *(OOC_INT64*)((_check_pointer(i1, 56907))+40) = i0;
  i0 = visibleFrom;
  *(OOC_INT32*)((_check_pointer(i1, 56931))+48) = i0;
  i0 = exportMark;
  *(OOC_INT8*)((_check_pointer(i1, 56969))+52) = i0;
  i0 = (OOC_INT64)docString;
  *(OOC_INT64*)((_check_pointer(i1, 57005))+56) = i0;
  *(OOC_UINT8*)((_check_pointer(i1, 57039))+64) = 0u;
  *(OOC_INT64*)((_check_pointer(i1, 57070))+72) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 57097))+80) = 0;
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Store(OOC_SymbolTable__Declaration decl, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)decl;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57269))+40);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57250)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 57340))+52);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57324)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 57367))+52);
  i2 = i2!=0;
  if (i2) goto l3;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57478)))), &_td_OOC_SymbolTable__WriterDesc, 57478)), 57485))+304);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57478)))), &_td_OOC_SymbolTable__WriterDesc, 57478)), 57485))+304);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 57495)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i3, (Object__Object)(OOC_INT64)0);
  goto l4;
l3:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57412)))), &_td_OOC_SymbolTable__WriterDesc, 57412)), 57419))+304);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 57446))+56);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57412)))), &_td_OOC_SymbolTable__WriterDesc, 57412)), 57419))+304);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 57429)))), ADT_Object_Storage__WriterDesc_WriteObject)),ADT_Object_Storage__WriterDesc_WriteObject)((ADT_Object_Storage__Writer)i4, (Object__Object)i3);
l4:
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 57545))+64);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57528)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__DeclarationDesc_Load(OOC_SymbolTable__Declaration decl, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)decl;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 57727)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  *(OOC_INT64*)((_check_pointer(i1, 57755))+40) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 57769)))), &_td_OOC_SymbolTable__NameDesc, 57769));
  *(OOC_INT32*)((_check_pointer(i1, 57938))+48) = (-3);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 58152)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&i);
  i2 = i;
  *(OOC_INT8*)((_check_pointer(i1, 58171))+52) = i2;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 58294)))), &_td_OOC_SymbolTable__ReaderDesc, 58294)), 58301))+304);
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 58514))+56) = (OOC_INT64)0;
  goto l8;
l3:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 58332)))), &_td_OOC_SymbolTable__ReaderDesc, 58332)), 58339))+304);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 58332)))), &_td_OOC_SymbolTable__ReaderDesc, 58332)), 58339))+304);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 58349)))), ADT_Object_Storage__ReaderDesc_ReadObject)),ADT_Object_Storage__ReaderDesc_ReadObject)((ADT_Object_Storage__Reader)i3, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l6;
  *(OOC_INT64*)((_check_pointer(i1, 58451))+56) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 58473)))), &_td_OOC_Doc__DocumentDesc, 58473));
  goto l8;
l6:
  *(OOC_INT64*)((_check_pointer(i1, 58407))+56) = (OOC_INT64)0;
l8:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 58552)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 58568))+64));
  *(OOC_INT64*)((_check_pointer(i1, 58590))+72) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 58617))+80) = 0;
  return;
  ;
}

Object__String OOC_SymbolTable__DeclarationDesc_Name(OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)decl;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58876))+40);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 58881))+16);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58876))+40);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 58881))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 58885)), 0);
  i0 = (OOC_INT64)Object__NewLatin1((void*)(_check_pointer(i0, 58885)), i1);
  return (Object__String)i0;
  ;
}

void OOC_SymbolTable__DeclarationDesc_IncrUsageCounter(OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)decl;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 58971))+80);
  *(OOC_INT32*)((_check_pointer(i0, 58971))+80) = (i1+1);
  return;
  ;
}

static OOC_CHAR8 OOC_SymbolTable__ExportTypePosition(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 59391)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 59410))+48);
  i0 = i0==(OOC_INT64)0;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__InitType(OOC_SymbolTable__Type type, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)parent;
  i1 = (OOC_INT64)type;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT64)position;
  *(OOC_INT64*)((_check_pointer(i1, 59571))+40) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 59603))+48) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 59632))+56) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 59659))+64) = (-2);
  *(OOC_INT16*)((_check_pointer(i1, 59690))+68) = 1;
  *(OOC_UINT8*)((_check_pointer(i1, 59712))+70) = 1u;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDesc_PreciousTypePars(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 60070))+56);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 60094))+56);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 60103))+16);
  i0 = i0!=(OOC_INT64)0;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDesc_IsCheckedException(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__Type ptr;

  i0 = (OOC_INT64)type;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60246)))), &_td_OOC_SymbolTable__PointerDesc);
  if (i1) goto l3;
  return 1u;
  goto l8;
l3:
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60280)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60309)))), &_td_OOC_SymbolTable__PointerDesc, 60309)), 60317))+72);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60309)))), &_td_OOC_SymbolTable__PointerDesc, 60309)), 60317))+72);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 60326)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  ptr = (OOC_SymbolTable__Type)i0;
  i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60357)))), &_td_OOC_SymbolTable__RecordDesc));
  if (i1) goto l6;
  i0 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60376)))), &_td_OOC_SymbolTable__RecordDesc, 60376)), 60383))+107);
  i0 = !i0;
  
  goto l7;
l6:
  i0=1u;
l7:
  return i0;
l8:
  _failed_function(60172); return 0;
  ;
}

void OOC_SymbolTable__TypeDesc_Store(OOC_SymbolTable__Type type, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)type;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 60592))+48);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60573)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i2 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 60618)))), OOC_SymbolTable__TypeDesc_PreciousTypePars)),OOC_SymbolTable__TypeDesc_PreciousTypePars)((OOC_SymbolTable__Type)i1);
  if (i2) goto l3;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60695)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)(OOC_INT64)0);
  goto l4;
l3:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 60667))+56);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60650)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
l4:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (!i2) goto l7;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 60787))+40);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60768)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
l7:
  i2 = *(OOC_INT32*)((_check_pointer(i1, 60830))+64);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60814)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i1, 60860))+68);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60844)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 60892))+70);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 60875)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_Load(OOC_SymbolTable__Type type, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object obj;
  OOC_INT32 i;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)type;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 61071)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 61164))+48) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 61184)))), &_td_OOC_SymbolTable__TypeDeclDesc, 61184));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 61125))+48) = (OOC_INT64)0;
l4:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 61208)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l7;
  *(OOC_INT64*)((_check_pointer(i1, 61299))+56) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 61317)))), &_td_OOC_SymbolTable__TypeParsDesc, 61317));
  goto l8;
l7:
  *(OOC_INT64*)((_check_pointer(i1, 61262))+56) = (OOC_INT64)0;
l8:
  i2 = OOC_SymbolTable__ExportTypePosition((OOC_SymbolTable__Type)i1);
  if (i2) goto l11;
  i2 = (OOC_INT64)OOC_SymbolTable__importPosition;
  *(OOC_INT64*)((_check_pointer(i1, 61459))+40) = i2;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 61381)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  *(OOC_INT64*)((_check_pointer(i1, 61411))+40) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 61429)))), &_td_OOC_SymbolTable__PositionDesc, 61429));
l12:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 61503)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61518))+64));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 61532)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&i);
  i2 = i;
  *(OOC_INT16*)((_check_pointer(i1, 61555))+68) = i2;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 61582)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 61598))+70));
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetNamingDecl(OOC_SymbolTable__Type type, OOC_SymbolTable__TypeDecl namingDecl) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i1 = (OOC_INT64)namingDecl;
  *(OOC_INT64*)((_check_pointer(i0, 61795))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetTypePars(OOC_SymbolTable__Type type, OOC_SymbolTable__TypePars typePars) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i1 = (OOC_INT64)typePars;
  *(OOC_INT64*)((_check_pointer(i0, 61985))+56) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeDesc_SetSize(OOC_SymbolTable__Type type, OOC_INT32 size, OOC_INT16 align) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i1 = size;
  *(OOC_INT32*)((_check_pointer(i0, 62110))+64) = i1;
  i1 = align;
  *(OOC_INT16*)((_check_pointer(i0, 62134))+68) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__TypeDesc_ArrayDimensions(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 dim;

  dim = 0;
  i0 = (OOC_INT64)type;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 62398)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=i0;i0=0;
l4_loop:
  i0 = i0+1;
  dim = i0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 62447)))), &_td_OOC_SymbolTable__ArrayDesc, 62447)), 62453))+80);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 62398)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l4_loop;
l9:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeDesc_Deparam(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)type;
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeDesc_Bound(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)type;
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeDesc_Closure(OOC_SymbolTable__Type type, OOC_SymbolTable__Type subType) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)subType;
  i0 = (OOC_INT64)OOC_SymbolTable__Expand((OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Type)i0;
  ;
}

static void OOC_SymbolTable__InitLinkDirective(OOC_SymbolTable__LinkDirective l) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)l;
  *(OOC_INT64*)(_check_pointer(i0, 63485)) = 0;
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Store(OOC_SymbolTable__LinkDirective l, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)l;
  i1 = (OOC_INT64)w;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 63629));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 63613)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i0);
  return;
  ;
}

void OOC_SymbolTable__LinkDirectiveDesc_Load(OOC_SymbolTable__LinkDirective l, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 63767)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l3;
  i1 = (OOC_INT64)l;
  *(OOC_INT64*)(_check_pointer(i1, 63848)) = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 63862)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 63862));
  goto l4;
l3:
  i0 = (OOC_INT64)l;
  *(OOC_INT64*)(_check_pointer(i0, 63818)) = (OOC_INT64)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Store(OOC_SymbolTable__LinkFile l, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri);
    
    void OOC_SymbolTable__LinkFileDesc_Store_WriteURI(ADT_Storable__Writer w, URI__HierarchicalURI uri) {
      register OOC_INT64 i0,i1,i2;
      Object__String8 str8;
      Object__CharsLatin1 chars;

      i0 = (OOC_INT64)uri;
      i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 64150)))), URI__URIDesc_ToString)),URI__URIDesc_ToString)((URI__URI)i0);
      str8 = (Object__String8)i0;
      i0 = (OOC_INT64)Object__String8Desc_CharsLatin1((Object__String8)i0);
      chars = (Object__CharsLatin1)i0;
      i1 = (OOC_INT64)w;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 64223)), 0);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 64205)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)(_check_pointer(i0, 64223)), i2);
      return;
      ;
    }


  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 64293))+8);
  OOC_SymbolTable__LinkFileDesc_Store_WriteURI((ADT_Storable__Writer)i0, (URI__HierarchicalURI)i1);
  i0 = (OOC_INT64)l;
  i1 = (OOC_INT64)w;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 64320))+16);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 64307)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i2);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 64355))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 64342)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i0);
  return;
  ;
}

static Object__String OOC_SymbolTable__ReadString8(ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;
  Object__String str;

  i0 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 64489)))), IO_BinaryRider__ReaderDesc_ReadStr)),IO_BinaryRider__ReaderDesc_ReadStr)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&str);
  i0 = (OOC_INT64)str;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l3;
  return (Object__String)i0;
  goto l4;
l3:
  return (Object__String)(OOC_INT64)0;
l4:
  _failed_function(64396); return 0;
  ;
}

void OOC_SymbolTable__LinkFileDesc_Load(OOC_SymbolTable__LinkFile l, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2;
  auto void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(volatile ADT_Storable__Reader r, volatile URI__HierarchicalURI *uri);
    
    void OOC_SymbolTable__LinkFileDesc_Load_ReadURI(volatile ADT_Storable__Reader r, volatile URI__HierarchicalURI *uri) {
      register OOC_INT64 i0,i1;
      volatile OOC_CHAR8 b[1024];
      volatile URI__URI u;
      jmp_buf _target0;
      Exception__Context _context0;

      i0 = (OOC_INT64)r;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 64832)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)b, 1024);
      {
        Exception__PushContext(&_context0, &_target0);
        if (!setjmp(_target0)) goto l7;
        Exception__PopContext(1);
        i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG(((OOC_INT64)Exception__Current()))), &_td_Exception__ParseErrorDesc);
        if (i0) goto l5;
        Exception__ActivateContext();
        goto l6;
l5:
        _assert(0u, 127, 65063);
l6:
        Exception__Clear();
        goto l8;
l7:
        i0 = (OOC_INT64)OOC_SymbolTable__emptyBaseURI;
        i0 = (OOC_INT64)URI_Parser__NewURILatin1((void*)(OOC_INT64)b, 1024, (URI__HierarchicalURI)i0);
        u = (URI__URI)i0;
        Exception__PopContext(1);
l8:;
      }
      i0 = (OOC_INT64)u;
      i1 = (OOC_INT64)OOC_SymbolTable__emptyBaseURI;
      i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65185)))), &_td_URI__HierarchicalURIDesc, 65185)), 65201)))), URI__HierarchicalURIDesc_MakeRelative)),URI__HierarchicalURIDesc_MakeRelative)((URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65185)))), &_td_URI__HierarchicalURIDesc, 65185)), (URI__HierarchicalURI)i1);
      u = (URI__URI)i0;
      *uri = (URI__HierarchicalURI)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65251)))), &_td_URI__HierarchicalURIDesc, 65251));
      return;
      ;
    }


  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__LinkFileDesc_Load_ReadURI((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 65332))+8));
  i0 = (OOC_INT64)l;
  i1 = (OOC_INT64)r;
  i2 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT64*)((_check_pointer(i0, 65346))+16) = i2;
  i1 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i1);
  *(OOC_INT64*)((_check_pointer(i0, 65384))+24) = i1;
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Store(OOC_SymbolTable__LinkLib l, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)l;
  OOC_SymbolTable__LinkDirectiveDesc_Store((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65566))+8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65553)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65600))+24);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65587)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65635))+32);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65622)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 65670))+40);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65657)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65702))+16);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 65716)), 0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65684)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65745))+16);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 65759)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 65787))+16);
  i4 = _check_pointer(i4, 65801);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 65801))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 65774)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__LinkLibDesc_Load(OOC_SymbolTable__LinkLib l, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)l;
  OOC_SymbolTable__LinkDirectiveDesc_Load((OOC_SymbolTable__LinkDirective)i1, (ADT_Storable__Reader)i0);
  i2 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 65953))+8) = i2;
  i2 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 65990))+24) = i2;
  i2 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 66028))+32) = i2;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 66066)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 66078))+40));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 66091)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&len);
  i2 = len;
  *(OOC_INT64*)((_check_pointer(i1, 66118))+16) = ((OOC_INT64)RT0__NewObject(_td_Object__StringArrayPtr.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 66174))+16);
  i4 = _check_pointer(i4, 66188);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 66188))*8) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__InitModule(OOC_SymbolTable__Module mod, OOC_SymbolTable__Name name, OOC_Doc__Document docString, OOC_INT8 _class, OOC_INT8 callConv, OOC_AST__Node moduleAST, OOC_SymbolTable__ProcDecl bodyDecl) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)docString;
  i1 = (OOC_INT64)name;
  i2 = (OOC_INT64)mod;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)(OOC_INT64)0, (OOC_SymbolTable__Name)i1, 0, 1, (OOC_Doc__Document)i0);
  *(OOC_INT64*)((_check_pointer(i2, 66516))+88) = (OOC_INT64)0;
  i0 = _class;
  *(OOC_INT8*)((_check_pointer(i2, 66536))+96) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 66561))+104) = (OOC_INT64)0;
  i0 = callConv;
  *(OOC_INT8*)((_check_pointer(i2, 66590))+112) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 66621))+120) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i2, 66653))+128) = 0;
  *(OOC_INT64*)((_check_pointer(i2, 66680))+136) = (OOC_INT64)0;
  i0 = (OOC_INT64)moduleAST;
  *(OOC_INT64*)((_check_pointer(i2, 66711))+144) = i0;
  i0 = (OOC_INT64)bodyDecl;
  *(OOC_INT64*)((_check_pointer(i2, 66744))+152) = i0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Store(OOC_SymbolTable__Module mod, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)mod;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 66934))+96);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 66918)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 66964))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 66949)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 67000))+112);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 66984)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 67036))+120);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 67018)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_Load(OOC_SymbolTable__Module mod, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)mod;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 67201))+88) = (OOC_INT64)0;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 67219)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 67234))+96));
  i2 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 67251))+104) = i2;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 67288)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 67303))+112));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 67321)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  i2 = i0==(OOC_INT64)0;
  if (i2) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 67416))+120) = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 67440)))), &_td_OOC_SymbolTable__LinkDirectiveDesc, 67440));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 67374))+120) = (OOC_INT64)0;
l4:
  *(OOC_INT64*)((_check_pointer(i1, 67471))+136) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 67502))+144) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetNamespace(OOC_SymbolTable__Module mod, OOC_SymbolTable__Namespace ns) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)mod;
  i1 = (OOC_INT64)ns;
  *(OOC_INT64*)((_check_pointer(i0, 67678))+88) = i1;
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_SetLibraryName(OOC_SymbolTable__Module mod, Object__String name) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)mod;
  i1 = (OOC_INT64)name;
  *(OOC_INT64*)((_check_pointer(i0, 67782))+104) = i1;
  return;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_ClassToString(OOC_SymbolTable__Module mod) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 67897))+96);
  switch (i0) {
  case 0:
    return (Object__String)((OOC_INT64)_c0);
    goto l7;
  case 1:
    return (Object__String)((OOC_INT64)_c1);
    goto l7;
  case 2:
    return (Object__String)((OOC_INT64)_c2);
    goto l7;
  case 3:
    return (Object__String)((OOC_INT64)_c3);
    goto l7;
  default:
    _failed_case(i0, 67889);
    goto l7;
  }
l7:
  _failed_function(67851); return 0;
  ;
}

Object__String OOC_SymbolTable__ModuleDesc_CallConvToString(OOC_SymbolTable__Module mod) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)mod;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 68159))+112);
  switch (i0) {
  case (-1):
    return (Object__String)((OOC_INT64)_c4);
    goto l9;
  case 0:
    return (Object__String)((OOC_INT64)_c5);
    goto l9;
  case 1:
    return (Object__String)((OOC_INT64)_c6);
    goto l9;
  case 2:
    return (Object__String)((OOC_INT64)_c7);
    goto l9;
  case 3:
    return (Object__String)((OOC_INT64)_c8);
    goto l9;
  case 4:
    return (Object__String)((OOC_INT64)_c9);
    goto l9;
  default:
    _failed_case(i0, 68151);
    goto l9;
  }
l9:
  _failed_function(68110); return 0;
  ;
}

static OOC_SymbolTable__LinkFile OOC_SymbolTable__NewLinkFile(URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__LinkFile l;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__LinkFile.baseTypes[0]);
  l = (OOC_SymbolTable__LinkFile)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT64)file;
  *(OOC_INT64*)((_check_pointer(i0, 68649))+8) = i1;
  i1 = (OOC_INT64)prefixOption;
  *(OOC_INT64*)((_check_pointer(i0, 68670))+16) = i1;
  i1 = (OOC_INT64)suffixOption;
  *(OOC_INT64*)((_check_pointer(i0, 68707))+24) = i1;
  return (OOC_SymbolTable__LinkFile)i0;
  ;
}

static OOC_SymbolTable__LinkLib OOC_SymbolTable__NewLinkLib(Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption, OOC_INT32 type) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__LinkLib l;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__LinkLib.baseTypes[0]);
  l = (OOC_SymbolTable__LinkLib)i0;
  OOC_SymbolTable__InitLinkDirective((OOC_SymbolTable__LinkDirective)i0);
  i1 = (OOC_INT64)libraryName;
  *(OOC_INT64*)((_check_pointer(i0, 69054))+8) = i1;
  i1 = (OOC_INT64)dependencies;
  *(OOC_INT64*)((_check_pointer(i0, 69089))+16) = i1;
  i1 = (OOC_INT64)prefixOption;
  *(OOC_INT64*)((_check_pointer(i0, 69126))+24) = i1;
  i1 = (OOC_INT64)suffixOption;
  *(OOC_INT64*)((_check_pointer(i0, 69163))+32) = i1;
  i1 = type;
  *(OOC_INT32*)((_check_pointer(i0, 69200))+40) = i1;
  return (OOC_SymbolTable__LinkLib)i0;
  ;
}

static void OOC_SymbolTable__AddLinkDirective(OOC_SymbolTable__LinkDirective *list, OOC_SymbolTable__LinkDirective l) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)*list;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l3;
  i1 = (OOC_INT64)l;
  OOC_SymbolTable__AddLinkDirective((void*)(_check_pointer(i0, 69428)), (OOC_SymbolTable__LinkDirective)i1);
  goto l4;
l3:
  i0 = (OOC_INT64)l;
  *(OOC_INT64*)(_check_pointer(i0, 69360)) = (OOC_INT64)0;
  *list = (OOC_SymbolTable__LinkDirective)i0;
l4:
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkFile(OOC_SymbolTable__Module mod, URI__HierarchicalURI file, Object__String prefixOption, Object__String suffixOption) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)file;
  _assert((i0!=(OOC_INT64)0), 127, 69622);
  i1 = (OOC_INT64)prefixOption;
  i2 = (OOC_INT64)suffixOption;
  i0 = (OOC_INT64)OOC_SymbolTable__NewLinkFile((URI__HierarchicalURI)i0, (Object__String)i1, (Object__String)i2);
  i1 = (OOC_INT64)mod;
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 69668))+120), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

void OOC_SymbolTable__ModuleDesc_AddLinkLib(OOC_SymbolTable__Module mod, Object__String libraryName, Object__StringArrayPtr dependencies, Object__String prefixOption, Object__String suffixOption, OOC_INT32 type) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)libraryName;
  _assert((i0!=(OOC_INT64)0), 127, 70046);
  i1 = (OOC_INT64)dependencies;
  i2 = (OOC_INT64)prefixOption;
  i3 = (OOC_INT64)suffixOption;
  i4 = type;
  i0 = (OOC_INT64)OOC_SymbolTable__NewLinkLib((Object__String)i0, (Object__StringArrayPtr)i1, (Object__String)i2, (Object__String)i3, i4);
  i1 = (OOC_INT64)mod;
  OOC_SymbolTable__AddLinkDirective((void*)((_check_pointer(i1, 70099))+120), (OOC_SymbolTable__LinkDirective)i0);
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ModuleDesc_NoObjectFile(OOC_SymbolTable__Module mod) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT64)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 70758))+96);
  i1 = i1==3;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 70787))+96);
  i1 = i1==2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 70968))+96);
  return (i0==1);
  goto l25;
l7:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 70826))+120);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 70871)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l12:
  if (!i1) goto l24;
l15_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 70901));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 70871)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l20:
  if (i1) goto l15_loop;
l24:
  return (i0==(OOC_INT64)0);
l25:
  _failed_function(70290); return 0;
  ;
}

URI__HierarchicalURI OOC_SymbolTable__ModuleDesc_GetExternalSource(OOC_SymbolTable__Module mod, URI__HierarchicalURI rootURI) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SymbolTable__LinkDirective l;

  i0 = (OOC_INT64)mod;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 71450))+96);
  i1 = i1==2;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 71478))+96);
  i1 = i1==3;
  
  goto l4;
l3:
  i1=1u;
l4:
  _assert(i1, 127, 71438);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 71515))+120);
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71559)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l9:
  if (!i1) goto l21;
l12_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 71587));
  l = (OOC_SymbolTable__LinkDirective)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71559)))), &_td_OOC_SymbolTable__LinkFileDesc));
  
l17:
  if (i1) goto l12_loop;
l21:
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l24;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71668)))), &_td_OOC_SymbolTable__LinkFileDesc, 71668)), 71677))+8);
  _assert((i1!=(OOC_INT64)0), 127, 71658);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71700)))), &_td_OOC_SymbolTable__LinkFileDesc, 71700)), 71709))+8);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71700)))), &_td_OOC_SymbolTable__LinkFileDesc, 71700)), 71709))+8);
  i3 = (OOC_INT64)rootURI;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 71715)))), URI__HierarchicalURIDesc_ResolveRelative)),URI__HierarchicalURIDesc_ResolveRelative)((URI__HierarchicalURI)i2, (URI__HierarchicalURI)i3);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71759)))), &_td_OOC_SymbolTable__LinkFileDesc, 71759)), 71768))+8);
  return (URI__HierarchicalURI)i0;
  goto l25;
l24:
  return (URI__HierarchicalURI)(OOC_INT64)0;
l25:
  _failed_function(71044); return 0;
  ;
}

OOC_INT8 OOC_SymbolTable__StringToCallConv(Object__String str) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)str;
  i1 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71881)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT64)_c10));
  if (i1) goto l11;
  i1 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71935)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT64)_c11));
  if (i1) goto l9;
  i0 = OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 71999)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i0, (Object__Object)((OOC_INT64)_c12));
  if (i0) goto l7;
  return (-1);
  goto l12;
l7:
  return 4;
  goto l12;
l9:
  return 3;
  goto l12;
l11:
  return 2;
l12:
  _failed_function(71821); return 0;
  ;
}

void OOC_SymbolTable__InitImport(OOC_SymbolTable__Import import, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_Doc__Document docString, OOC_SymbolTable__Name moduleName) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)docString;
  i1 = visibleFrom;
  i2 = (OOC_INT64)name;
  i3 = (OOC_INT64)parent;
  i4 = (OOC_INT64)import;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i4, (OOC_SymbolTable__Item)i3, (OOC_SymbolTable__Name)i2, i1, 0, (OOC_Doc__Document)i0);
  i0 = (OOC_INT64)moduleName;
  *(OOC_INT64*)((_check_pointer(i4, 72407))+88) = i0;
  *(OOC_INT64*)((_check_pointer(i4, 72445))+96) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_SetExternalSymTab(OOC_SymbolTable__Import import, OOC_SymbolTable__Module symTab) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)import;
  i1 = (OOC_INT64)symTab;
  *(OOC_INT64*)((_check_pointer(i0, 72571))+96) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 72632))+128);
  *(OOC_INT32*)((_check_pointer(i0, 72609))+104) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ImportDesc_IsInternalImport(OOC_SymbolTable__Import import) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)import;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 72897))+88);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 72909))+16);
  return ((
  _cmp8((const void*)(_check_pointer(i0, 72914)),(const void*)(OOC_CHAR8*)"SYSTEM"))==0);
  ;
}

void OOC_SymbolTable__ImportDesc_Store(OOC_SymbolTable__Import import, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)import;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 73085))+88);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 73064)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 73124))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 73105)))), IO_BinaryRider__WriterDesc_WriteLInt)),IO_BinaryRider__WriterDesc_WriteLInt)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ImportDesc_Load(OOC_SymbolTable__Import import, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)import;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 73291)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  *(OOC_INT64*)((_check_pointer(i1, 73321))+88) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 73341)))), &_td_OOC_SymbolTable__NameDesc, 73341));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 73353)))), IO_BinaryRider__ReaderDesc_ReadLInt)),IO_BinaryRider__ReaderDesc_ReadLInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 73371))+104));
  return;
  ;
}

void OOC_SymbolTable__InitConstDecl(OOC_SymbolTable__ConstDecl constDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, Object_Boxed__Object value, OOC_SymbolTable__PredefType type, OOC_AST__Node constExpr) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT64)docString;
  i1 = exportMark;
  i2 = visibleFrom;
  i3 = (OOC_INT64)name;
  i4 = (OOC_INT64)parent;
  i5 = (OOC_INT64)constDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i2, i1, (OOC_Doc__Document)i0);
  i0 = (OOC_INT64)value;
  *(OOC_INT64*)((_check_pointer(i5, 73838))+88) = i0;
  i0 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i5, 73869))+96) = i0;
  i0 = (OOC_INT64)constExpr;
  *(OOC_INT64*)((_check_pointer(i5, 73898))+104) = i0;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_SetValueType(OOC_SymbolTable__ConstDecl constDecl, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)constDecl;
  i1 = (OOC_INT64)value;
  *(OOC_INT64*)((_check_pointer(i0, 74057))+88) = i1;
  i1 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i0, 74087))+96) = i1;
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Store(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)constDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 74265))+88);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 74241)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 74292))+96);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l3;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 74524))+96);
  i1 = *(OOC_INT16*)((_check_pointer(i1, 74530))+72);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 74503)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i1);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 74471)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, (-1));
l4:
  return;
  ;
}

void OOC_SymbolTable__ConstDeclDesc_Load(OOC_SymbolTable__ConstDecl constDecl, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object obj;
  OOC_INT32 id;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)constDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 74721)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 74819))+88) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 74840)))), &_td_Object_Boxed__ObjectDesc, 74840));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 74780))+88) = (OOC_INT64)0;
l4:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 74862)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&id);
  i0 = id;
  i2 = i0==(-1);
  if (i2) goto l7;
  i2 = (OOC_INT64)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 75032);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(i0, i3, OOC_UINT32, 75032))*8);
  *(OOC_INT64*)((_check_pointer(i1, 75008))+96) = i0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 75061))+96);
  _assert((i0!=(OOC_INT64)0), 127, 75044);
  goto l8;
l7:
  *(OOC_INT64*)((_check_pointer(i1, 74969))+96) = (OOC_INT64)0;
l8:
  *(OOC_INT64*)((_check_pointer(i1, 75097))+104) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__InitExceptionName(OOC_SymbolTable__ExceptionName exceptionName, OOC_SymbolTable__Item parent, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)parent;
  i1 = (OOC_INT64)exceptionName;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  i0 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i1, 75310))+48) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 75350))+40) = i0;
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Store(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)exceptionName;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 75613))+48);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 75593))+40);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

void OOC_SymbolTable__ExceptionNameDesc_Load(OOC_SymbolTable__ExceptionName exceptionName, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)exceptionName;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 75794))+40), (void*)((_check_pointer(i1, 75814))+48));
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_SetType(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2,i3;
  auto OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type);
    
    OOC_CHAR8 OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference(OOC_SymbolTable__Type type) {
      register OOC_INT64 i0,i1;

      i0 = (OOC_INT64)type;
      i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 75975)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
      type = (OOC_SymbolTable__Type)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 76006)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l3;
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 76025)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l4;
l3:
      i0=1u;
l4:
      return i0;
      ;
    }


  i0 = (OOC_INT64)varDecl;
  i1 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i0, 76084))+88) = i1;
  i2 = _check_pointer(i0, 76111);
  i3 = *(OOC_UINT8*)((_check_pointer(i0, 76150))+104);
  if (i3) goto l3;
  i0=0u;
  goto l8;
l3:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 76182))+107);
  if (i0) goto l6;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i1);
  
  goto l8;
l6:
  i0=1u;
l8:
  *(OOC_UINT8*)(i2+108) = i0;
  i0 = (OOC_INT64)varDecl;
  i1 = _check_pointer(i0, 76235);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76268))+104);
  if (i2) goto l11;
  i0=0u;
  goto l13;
l11:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 76300))+107);
  i0 = !i0;
  
l13:
  if (i0) goto l15;
  i0=0u;
  goto l16;
l15:
  i0 = (OOC_INT64)type;
  i0 = OOC_SymbolTable__VarDeclDesc_SetType_PassPerReference((OOC_SymbolTable__Type)i0);
  
l16:
  *(OOC_UINT8*)(i1+109) = i0;
  i0 = (OOC_INT64)varDecl;
  i1 = _check_pointer(i0, 76359);
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76390))+108);
  if (i2) goto l19;
  i2=0u;
  goto l21;
l19:
  i2 = *(OOC_UINT8*)((_check_pointer(i0, 76429))+107);
  i2 = !i2;
  
l21:
  if (i2) goto l23;
  i0=0u;
  goto l24;
l23:
  i0 = *(OOC_UINT8*)((_check_pointer(i0, 76460))+109);
  i0 = !i0;
  
l24:
  *(OOC_UINT8*)(i1+110) = i0;
  return;
  ;
}

void OOC_SymbolTable__InitVarDecl(OOC_SymbolTable__VarDecl varDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_CHAR8 isParameter, OOC_CHAR8 isReceiver, OOC_CHAR8 isVarParam, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT64)docString;
  i1 = exportMark;
  i2 = visibleFrom;
  i3 = (OOC_INT64)name;
  i4 = (OOC_INT64)parent;
  i5 = (OOC_INT64)varDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i2, i1, (OOC_Doc__Document)i0);
  i0 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i5, 76888))+96) = i0;
  i1 = isParameter;
  *(OOC_UINT8*)((_check_pointer(i5, 76922))+104) = i1;
  i1 = isReceiver;
  *(OOC_UINT8*)((_check_pointer(i5, 76963))+105) = i1;
  *(OOC_UINT8*)((_check_pointer(i5, 77002))+106) = 0u;
  i2 = isVarParam;
  *(OOC_UINT8*)((_check_pointer(i5, 77038))+107) = i2;
  *(OOC_UINT8*)((_check_pointer(i5, 77077))+111) = 0u;
  *(OOC_UINT8*)((_check_pointer(i5, 77118))+112) = 1u;
  if (!i1) goto l3;
  *(OOC_INT64*)((_check_pointer((_type_guard(i4, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i4, 77180)))), &_td_OOC_SymbolTable__FormalParsDesc, 77180)), 77191))+72) = i5;
l3:
  OOC_SymbolTable__VarDeclDesc_SetType((OOC_SymbolTable__VarDecl)i5, (OOC_SymbolTable__Type)i0);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Store(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)varDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 77416))+96);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 77402))+88);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77456))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77436)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77497))+105);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77477)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77537))+106);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77517)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77579))+107);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77559)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77619))+108);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77599)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77667))+109);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77647)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77709))+110);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77689)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 77749))+111);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77729)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 77796))+112);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77776)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__VarDeclDesc_Load(OOC_SymbolTable__VarDecl varDecl, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)varDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 77957))+88), (void*)((_check_pointer(i1, 77971))+96));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 77991)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78010))+104));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78031)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78050))+105));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78070)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78089))+106));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78111)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78130))+107));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78150)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78169))+108));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78197)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78216))+109));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78238)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78257))+110));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78277)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78296))+111));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 78323)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 78342))+112));
  i0 = *(OOC_UINT8*)((_check_pointer(i1, 78380))+104);
  if (!i0) goto l4;
  *(OOC_INT32*)((_check_pointer(i1, 78492))+48) = (-1);
l4:
  return;
  ;
}

void OOC_SymbolTable__InitTypeDecl(OOC_SymbolTable__TypeDecl typeDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type, OOC_CHAR8 isTypeParameter) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT64)docString;
  i1 = exportMark;
  i2 = visibleFrom;
  i3 = (OOC_INT64)name;
  i4 = (OOC_INT64)parent;
  i5 = (OOC_INT64)typeDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i2, i1, (OOC_Doc__Document)i0);
  i0 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i5, 78921))+88) = i0;
  *(OOC_INT64*)((_check_pointer(i5, 78949))+96) = i0;
  i0 = isTypeParameter;
  *(OOC_UINT8*)((_check_pointer(i5, 78984))+104) = i0;
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Store(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 79193))+96);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 79178))+88);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 79234))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 79213)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__TypeDeclDesc_Load(OOC_SymbolTable__TypeDecl typeDecl, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)typeDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 79400))+88), (void*)((_check_pointer(i1, 79415))+96));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 79435)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 79455))+104));
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDeclDesc_HasTypeParameters(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT64 i0,i1,i2;
  OOC_SymbolTable__TypePars typePars;

  i0 = (OOC_INT64)typeDecl;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 79612))+88);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 79617))+56);
  typePars = (OOC_SymbolTable__TypePars)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 79667))+88);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 79672))+8);
  i0 = i0==i1;
  
l4:
  return i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeDeclDesc_IsTypeParameter(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)typeDecl;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 79807))+8);
  return (OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 79815)))), &_td_OOC_SymbolTable__TypeParsDesc));
  ;
}

OOC_SymbolTable__TypeDecl OOC_SymbolTable__TypeDeclDesc_ParametricType(OOC_SymbolTable__TypeDecl typeDecl) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SymbolTable__Item ptr;

  i0 = (OOC_INT64)typeDecl;
  i1 = OOC_SymbolTable__TypeDeclDesc_IsTypeParameter((OOC_SymbolTable__TypeDecl)i0);
  _assert(i1, 127, 80038);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 80093))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 80100))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 80107))+16);
  ptr = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 80137)))), &_td_OOC_SymbolTable__TypeDeclDesc));
  if (i2) goto l3;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 80168)))), &_td_OOC_SymbolTable__TypeDeclDesc, 80168)), 80177))+88);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 80182))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 80200))+8);
  i2 = i2!=i3;
  
  goto l5;
l3:
  i2=1u;
l5:
  if (i2) goto l8_loop;
  i0=i1;
  goto l17;
l8_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 80228));
  ptr = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 80137)))), &_td_OOC_SymbolTable__TypeDeclDesc));
  if (i2) goto l11;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 80168)))), &_td_OOC_SymbolTable__TypeDeclDesc, 80168)), 80177))+88);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 80182))+8);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 80200))+8);
  i2 = i2!=i3;
  
  goto l13;
l11:
  i2=1u;
l13:
  if (i2) goto l8_loop;
l16:
  i0=i1;
l17:
  return (OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 80265)))), &_td_OOC_SymbolTable__TypeDeclDesc, 80265));
  ;
}

void OOC_SymbolTable__InitRedirect(OOC_SymbolTable__Redirect redir, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)name;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)redir;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 0, 1, (OOC_Doc__Document)(OOC_INT64)0);
  i0 = (OOC_INT64)module;
  *(OOC_INT64*)((_check_pointer(i2, 80497))+88) = i0;
  i0 = (OOC_INT64)ident;
  *(OOC_INT64*)((_check_pointer(i2, 80526))+96) = i0;
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Store(OOC_SymbolTable__Redirect redir, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)redir;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 80694))+88);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 80674)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 80730))+96);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 80710)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RedirectDesc_Load(OOC_SymbolTable__Redirect redir, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)redir;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 80891)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  *(OOC_INT64*)((_check_pointer(i1, 80920))+88) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 80936)))), &_td_OOC_SymbolTable__NameDesc, 80936));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 80948)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  *(OOC_INT64*)((_check_pointer(i1, 80977))+96) = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 80992)))), &_td_OOC_SymbolTable__NameDesc, 80992));
  return;
  ;
}

void OOC_SymbolTable__InitFieldDecl(OOC_SymbolTable__FieldDecl fieldDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT64)docString;
  i1 = exportMark;
  i2 = visibleFrom;
  i3 = (OOC_INT64)name;
  i4 = (OOC_INT64)parent;
  i5 = (OOC_INT64)fieldDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i2, i1, (OOC_Doc__Document)i0);
  i0 = (OOC_INT64)type;
  *(OOC_INT64*)((_check_pointer(i5, 81325))+88) = i0;
  *(OOC_INT64*)((_check_pointer(i5, 81354))+96) = i0;
  *(OOC_INT32*)((_check_pointer(i5, 81390))+104) = (-1);
  *(OOC_UINT8*)((_check_pointer(i5, 81419))+108) = 0u;
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Store(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 81627))+96);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 81611))+88);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 81668))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 81647)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 81706))+108);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 81684)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_Load(OOC_SymbolTable__FieldDecl fieldDecl, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)fieldDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 81879))+88), (void*)((_check_pointer(i1, 81895))+96));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 81915)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 81935))+104));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 81951)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 81972))+108));
  return;
  ;
}

void OOC_SymbolTable__FieldDeclDesc_SetOffset(OOC_SymbolTable__FieldDecl fieldDecl, OOC_INT32 offset) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)fieldDecl;
  i1 = offset;
  *(OOC_INT32*)((_check_pointer(i0, 82092))+104) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitPredefProc(OOC_SymbolTable__PredefProc proc, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT16 id, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)name;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)proc;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 0, 1, (OOC_Doc__Document)(OOC_INT64)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i2, 82351))+88) = i0;
  i0 = minArgs;
  *(OOC_INT16*)((_check_pointer(i2, 82371))+90) = i0;
  i0 = maxArgs;
  *(OOC_INT16*)((_check_pointer(i2, 82401))+92) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefProcDesc_Store(OOC_SymbolTable__PredefProc proc, ADT_Storable__Writer w) {

  _assert(0u, 127, 82532);
  
  ;
}

void OOC_SymbolTable__PredefProcDesc_Load(OOC_SymbolTable__PredefProc proc, ADT_Storable__Reader r) {

  _assert(0u, 127, 82646);
  
  ;
}

void OOC_SymbolTable__InitProcDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Item parent, OOC_SymbolTable__Name name, OOC_INT32 visibleFrom, OOC_INT8 exportMark, OOC_Doc__Document docString, OOC_INT8 procClass, OOC_CHAR8 isForwardDecl, OOC_AST__Node procAST) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT64)docString;
  i1 = exportMark;
  i2 = visibleFrom;
  i3 = (OOC_INT64)name;
  i4 = (OOC_INT64)parent;
  i5 = (OOC_INT64)procDecl;
  OOC_SymbolTable__InitDeclaration((OOC_SymbolTable__Declaration)i5, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Name)i3, i2, i1, (OOC_Doc__Document)i0);
  i0 = procClass;
  *(OOC_INT8*)((_check_pointer(i5, 83086))+88) = i0;
  i0 = isForwardDecl;
  *(OOC_UINT8*)((_check_pointer(i5, 83124))+89) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 83170))+90) = 0u;
  *(OOC_UINT8*)((_check_pointer(i5, 83205))+91) = 0u;
  *(OOC_UINT8*)((_check_pointer(i5, 83242))+92) = 1u;
  *(OOC_INT32*)((_check_pointer(i5, 83280))+96) = (-1);
  *(OOC_INT64*)((_check_pointer(i5, 83313))+104) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i5, 83338))+112) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i5, 83371))+120) = (OOC_INT64)0;
  i0 = (OOC_INT64)procAST;
  *(OOC_INT64*)((_check_pointer(i5, 83402))+128) = i0;
  *(OOC_UINT8*)((_check_pointer(i5, 83436))+136) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Store(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)procDecl;
  OOC_SymbolTable__DeclarationDesc_Store((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 83617))+88);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83596)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 83657))+89);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83636)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 83701))+90);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83680)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 83742))+91);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83721)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 83785))+92);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83764)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 83829))+96);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83809)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 83873))+112);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83850)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 83913))+120);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 83893)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i0, (Object__String)i1);
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_Load(OOC_SymbolTable__ProcDecl procDecl, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)procDecl;
  OOC_SymbolTable__DeclarationDesc_Load((OOC_SymbolTable__Declaration)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84123)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 84143))+88));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84162)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 84182))+89));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84205)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 84225))+90));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84245)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 84265))+91));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84287)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 84307))+92));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84331)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 84350))+96));
  *(OOC_INT64*)((_check_pointer(i1, 84378))+104) = (OOC_INT64)0;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 84396)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 84497))+112) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 84517)))), &_td_OOC_SymbolTable__FormalParsDesc, 84517));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 84454))+112) = (OOC_INT64)0;
l4:
  i0 = (OOC_INT64)OOC_SymbolTable__ReadString8((ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 84550))+120) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 84591))+128) = (OOC_INT64)0;
  *(OOC_UINT8*)((_check_pointer(i1, 84621))+136) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetNamespace(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__Namespace ns) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)procDecl;
  i1 = (OOC_INT64)ns;
  *(OOC_INT64*)((_check_pointer(i0, 84820))+104) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_SetLinkName(OOC_SymbolTable__ProcDecl procDecl, Object__String name) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)procDecl;
  i1 = (OOC_INT64)name;
  *(OOC_INT64*)((_check_pointer(i0, 84933))+120) = i1;
  return;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_CopyTBProcIndex(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl redefinition) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)redefinition;
  i1 = (OOC_INT64)procDecl;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 85302))+96);
  *(OOC_INT32*)((_check_pointer(i0, 85277))+96) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsTypeBound(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)procDecl;
  i0 = *(OOC_INT8*)((_check_pointer(i0, 85424))+88);
  return (i0!=0);
  ;
}

OOC_SymbolTable__Record OOC_SymbolTable__ProcDeclDesc_Class(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__Item _class;

  i0 = (OOC_INT64)procDecl;
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
  if (i1) goto l3;
  return (OOC_SymbolTable__Record)(OOC_INT64)0;
  goto l12;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 85803))+112);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 85814))+72);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 85803))+112);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 85814))+72);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 85823))+88);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 85823))+88);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 85828)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  _class = (OOC_SymbolTable__Item)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 85856)))), &_td_OOC_SymbolTable__PointerDesc);
  if (!i1) goto l7;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 85896)))), &_td_OOC_SymbolTable__PointerDesc, 85896)), 85904))+72);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 85896)))), &_td_OOC_SymbolTable__PointerDesc, 85896)), 85904))+72);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 85913)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  _class = (OOC_SymbolTable__Item)i0;
  
l7:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 85952)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i1) goto l10;
  return (OOC_SymbolTable__Record)(OOC_INT64)0;
  goto l12;
l10:
  return (OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 85989)))), &_td_OOC_SymbolTable__RecordDesc, 85989));
l12:
  _failed_function(85503); return 0;
  ;
}

void OOC_SymbolTable__ProcDeclDesc_RegisterForwardDecl(OOC_SymbolTable__ProcDecl procDecl, OOC_SymbolTable__ProcDecl forward) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)procDecl;
  i1 = (OOC_INT64)forward;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 86345))+48);
  *(OOC_INT32*)((_check_pointer(i0, 86321))+48) = i1;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__ProcDeclDesc_IsModuleBody(OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)procDecl;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 86560))+8);
  return (i0==(OOC_INT64)0);
  ;
}

void OOC_SymbolTable__InitPredefType(OOC_SymbolTable__PredefType ptype, OOC_SymbolTable__Item parent, OOC_INT16 id) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)parent;
  i1 = (OOC_INT64)ptype;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Position)(OOC_INT64)0);
  i0 = id;
  *(OOC_INT16*)((_check_pointer(i1, 86725))+72) = i0;
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Store(OOC_SymbolTable__PredefType tname, ADT_Storable__Writer w) {

  _assert(0u, 127, 86847);
  return;
  ;
}

void OOC_SymbolTable__PredefTypeDesc_Load(OOC_SymbolTable__PredefType tname, ADT_Storable__Reader r) {

  _assert(0u, 127, 86962);
  return;
  ;
}

void OOC_SymbolTable__InitTypeName(OOC_SymbolTable__TypeName tname, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Name module, OOC_SymbolTable__Name ident) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)tname;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  i0 = (OOC_INT64)module;
  *(OOC_INT64*)((_check_pointer(i2, 87171))+72) = i0;
  i0 = (OOC_INT64)ident;
  *(OOC_INT64*)((_check_pointer(i2, 87200))+80) = i0;
  return;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeNameDesc_IsPredefReference(OOC_SymbolTable__TypeName tname) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)tname;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 87322))+72);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0u;
  goto l4;
l3:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 87345))+72);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 87352))+16);
  i0 = _check_pointer(i0, 87356);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 87356)));
  i0 = i0==0u;
  
l4:
  return i0;
  ;
}

void OOC_SymbolTable__TypeNameDesc_MarkAsPredefReference(OOC_SymbolTable__TypeName tname) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)tname;
  i1 = (OOC_INT64)OOC_SymbolTable__predefName;
  *(OOC_INT64*)((_check_pointer(i0, 87464))+72) = i1;
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Store(OOC_SymbolTable__TypeName tname, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)tname;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 87646))+72);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 87626)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 87682))+80);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 87662)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__TypeNameDesc_Load(OOC_SymbolTable__TypeName tname, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)tname;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 87842)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 87933))+72) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 87949)))), &_td_OOC_SymbolTable__NameDesc, 87949));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 87897))+72) = (OOC_INT64)0;
l4:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 87969)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  *(OOC_INT64*)((_check_pointer(i1, 87998))+80) = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 88013)))), &_td_OOC_SymbolTable__NameDesc, 88013));
  return;
  ;
}

OOC_SymbolTable__Import OOC_SymbolTable__TypeNameDesc_GetImport(OOC_SymbolTable__TypeName tname) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__Declaration decl;

  i0 = (OOC_INT64)tname;
  i1 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 88159)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
  module = (OOC_SymbolTable__Module)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 88189))+88);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 88223))+72);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 88189))+88);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 88193)))), OOC_SymbolTable__NamespaceDesc_IdentifyLocal)),OOC_SymbolTable__NamespaceDesc_IdentifyLocal)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 0u);
  decl = (OOC_SymbolTable__Declaration)i0;
  return (OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 88257)))), &_td_OOC_SymbolTable__ImportDesc, 88257));
  ;
}

void OOC_SymbolTable__InitRecord(OOC_SymbolTable__Record record, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)record;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  i0 = (OOC_INT64)baseType;
  *(OOC_INT64*)((_check_pointer(i2, 88456))+72) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 88490))+80) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 88531))+88) = (-1);
  *(OOC_INT64*)((_check_pointer(i2, 88609))+96) = (OOC_INT64)0;
  *(OOC_UINT8*)((_check_pointer(i2, 88632))+104) = 0u;
  *(OOC_UINT8*)((_check_pointer(i2, 88662))+105) = 0u;
  *(OOC_UINT8*)((_check_pointer(i2, 88695))+106) = 1u;
  *(OOC_UINT8*)((_check_pointer(i2, 88729))+107) = 0u;
  *(OOC_UINT8*)((_check_pointer(i2, 88772))+108) = 0u;
  *(OOC_UINT8*)((_check_pointer(i2, 88803))+109) = 0u;
  *(OOC_INT16*)((_check_pointer(i2, 88834))+110) = 0;
  *(OOC_INT64*)((_check_pointer(i2, 88863))+112) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Store(OOC_SymbolTable__Record record, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)record;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 89045))+80);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 89028))+72);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 89087))+88);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89069)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 89127))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89108)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 89163))+105);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89144)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 89202))+106);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89183)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 89243))+107);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89224)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 89292))+108);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89273)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 89329))+109);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89310)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT16*)((_check_pointer(i1, 89365))+110);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89347)))), IO_BinaryRider__WriterDesc_WriteInt)),IO_BinaryRider__WriterDesc_WriteInt)((IO_BinaryRider__Writer)i0, i2);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 89406))+112);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89385)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_Load(OOC_SymbolTable__Record record, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)record;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 89616))+72), (void*)((_check_pointer(i1, 89633))+80));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89657)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89674))+88));
  *(OOC_INT64*)((_check_pointer(i1, 89700))+96) = (OOC_INT64)0;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89718)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89736))+104));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89753)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89771))+105));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89791)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89809))+106));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89831)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89849))+107));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89879)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89897))+108));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89915)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89933))+109));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89951)))), IO_BinaryRider__ReaderDesc_ReadInt)),IO_BinaryRider__ReaderDesc_ReadInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 89968))+110));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 89988)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  i2 = i0==(OOC_INT64)0;
  if (i2) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 90084))+112) = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 90103)))), &_td_OOC_SymbolTable__NameDesc, 90103));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 90044))+112) = (OOC_INT64)0;
l4:
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_SetNamespace(OOC_SymbolTable__Record record, OOC_SymbolTable__Namespace ns) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)record;
  i1 = (OOC_INT64)ns;
  *(OOC_INT64*)((_check_pointer(i0, 90283))+96) = i1;
  return;
  ;
}

void OOC_SymbolTable__RecordDesc_AssignTBProcIndex(OOC_SymbolTable__Record record, OOC_SymbolTable__ProcDecl procDecl) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)procDecl;
  i1 = (OOC_INT64)record;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 90607))+88);
  *(OOC_INT32*)((_check_pointer(i0, 90584))+96) = i2;
  i0 = *(OOC_INT32*)((_check_pointer(i1, 90637))+88);
  *(OOC_INT32*)((_check_pointer(i1, 90637))+88) = (i0+1);
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__RecordDesc_ExtensionLevel(OOC_SymbolTable__Record record) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 level;

  level = 0;
  i0 = (OOC_INT64)record;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 90917))+72);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l3;
  i0=0;
  goto l9;
l3:
  i1=0;
l4_loop:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 90959))+72);
  i0 = _type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 90969)))), &_td_OOC_SymbolTable__RecordDesc, 90969);
  record = (OOC_SymbolTable__Record)i0;
  i1 = i1+1;
  level = i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 90917))+72);
  i2 = i2!=(OOC_INT64)0;
  if (i2) goto l4_loop;
l8:
  i0=i1;
l9:
  return i0;
  ;
}

void OOC_SymbolTable__InitTypeVar(OOC_SymbolTable__TypeVar typeVar, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type bound) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)typeVar;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  i0 = (OOC_INT64)bound;
  *(OOC_INT64*)((_check_pointer(i2, 91221))+72) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 91249))+80) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 91284))+88) = (-1);
  return;
  ;
}

void OOC_SymbolTable__TypeVarDesc_Store(OOC_SymbolTable__TypeVar typeVar, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)typeVar;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 91471))+80);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 91456))+72);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i2);
  return;
  ;
}

void OOC_SymbolTable__TypeVarDesc_Load(OOC_SymbolTable__TypeVar typeVar, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)typeVar;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 91627))+72), (void*)((_check_pointer(i1, 91642))+80));
  *(OOC_INT32*)((_check_pointer(i1, 91669))+88) = (-1);
  return;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeVarDesc_Bound(OOC_SymbolTable__TypeVar typeVar) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)typeVar;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 91776))+72);
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__TypeVarDesc_SetParameterIndex(OOC_SymbolTable__TypeVar typeVar, OOC_INT32 parameterIndex) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)typeVar;
  i1 = parameterIndex;
  *(OOC_INT32*)((_check_pointer(i0, 91891))+88) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitTypePars(OOC_SymbolTable__TypePars typePars, OOC_SymbolTable__Item parent) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)parent;
  i1 = (OOC_INT64)typePars;
  OOC_SymbolTable__InitItem((OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Item)i0);
  *(OOC_INT64*)((_check_pointer(i1, 92065))+40) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 92093))+48) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_Store(OOC_SymbolTable__TypePars typePars, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)typePars;
  OOC_SymbolTable__ItemDesc_Store((OOC_SymbolTable__Item)i1, (ADT_Storable__Writer)i0);
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_Load(OOC_SymbolTable__TypePars typePars, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)typePars;
  OOC_SymbolTable__ItemDesc_Load((OOC_SymbolTable__Item)i1, (ADT_Storable__Reader)i0);
  *(OOC_INT64*)((_check_pointer(i1, 92407))+40) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 92435))+48) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__TypeParsDesc_SetNamespace(OOC_SymbolTable__TypePars typePars, OOC_SymbolTable__Namespace ns) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)typePars;
  i1 = (OOC_INT64)ns;
  *(OOC_INT64*)((_check_pointer(i0, 92620))+48) = i1;
  return;
  ;
}

void OOC_SymbolTable__InitTypeRef(struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)type;
  *(OOC_INT64*)(OOC_INT64)typeRef = i0;
  *(OOC_INT64*)((OOC_INT64)typeRef+8) = i0;
  return;
  ;
}

static void OOC_SymbolTable__StoreTypeRef(ADT_Storable__Writer w, struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)*(OOC_INT64*)((OOC_INT64)typeRef+8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 92916)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i1);
  return;
  ;
}

static void OOC_SymbolTable__LoadTypeRef(ADT_Storable__Reader r, struct OOC_SymbolTable__TypeRef *typeRef, RT0__Struct typeRef__tag) {
  register OOC_INT64 i0;
  Object__Object obj;

  i0 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 93120)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i0 = (OOC_INT64)obj;
  *(OOC_INT64*)((OOC_INT64)typeRef+8) = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 93171)))), &_td_OOC_SymbolTable__TypeDesc, 93171));
  *(OOC_INT64*)(OOC_INT64)typeRef = (_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 93202)))), &_td_OOC_SymbolTable__TypeDesc, 93202));
  return;
  ;
}

void OOC_SymbolTable__InitQualType(OOC_SymbolTable__QualType qualType, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)qualType;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  i0 = (OOC_INT64)baseType;
  *(OOC_INT64*)((_check_pointer(i2, 93463))+72) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 93498))+80) = i0;
  i0 = (OOC_INT64)arguments;
  *(OOC_INT64*)((_check_pointer(i2, 93540))+88) = i0;
  return;
  ;
}

OOC_SymbolTable__QualType OOC_SymbolTable__NewQualType(OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__QualType.baseTypes[0]);
  i1 = (OOC_INT64)arguments;
  i2 = (OOC_INT64)baseType;
  i3 = (OOC_INT64)position;
  i4 = (OOC_INT64)parent;
  OOC_SymbolTable__InitQualType((OOC_SymbolTable__QualType)i0, (OOC_SymbolTable__Item)i4, (OOC_SymbolTable__Position)i3, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__TypeRefArray)i1);
  return (OOC_SymbolTable__QualType)i0;
  ;
}

void OOC_SymbolTable__QualTypeDesc_Store(OOC_SymbolTable__QualType qualType, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 i;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)qualType;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94057))+80);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94038))+72);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94103))+88);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 94113)), 0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 94081)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94148))+88);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 94158)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3 = (OOC_INT64)&_td_OOC_SymbolTable__TypeRef;
  i4=0;
l3_loop:
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94196))+88);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 94206)), 0);
  i5 = _check_index(i4, i5, OOC_UINT32, 94206);
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94196))+88);
  i5 = _check_pointer(i5, 94206);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  OOC_SymbolTable__StoreTypeRef((ADT_Storable__Writer)i0, (void*)(i5+((_check_index(i4, i6, OOC_UINT32, 94206))*16)), (RT0__Struct)i3);
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SymbolTable__QualTypeDesc_Load(OOC_SymbolTable__QualType qualType, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)qualType;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 94392))+72), (void*)((_check_pointer(i1, 94411))+80));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 94435)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&len);
  i2 = len;
  *(OOC_INT64*)((_check_pointer(i1, 94466))+88) = ((OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3 = (OOC_INT64)&_td_OOC_SymbolTable__TypeRef;
  i4=0;
l3_loop:
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94540))+88);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 94550)), 0);
  i5 = _check_index(i4, i5, OOC_UINT32, 94550);
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 94540))+88);
  i5 = _check_pointer(i5, 94550);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  OOC_SymbolTable__LoadTypeRef((ADT_Storable__Reader)i0, (void*)(i5+((_check_index(i4, i6, OOC_UINT32, 94550))*16)), (RT0__Struct)i3);
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__QualTypeDesc_Deparam(OOC_SymbolTable__QualType qualType) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)qualType;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 94654))+72);
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitPointer(OOC_SymbolTable__Pointer pointer, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)pointer;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  i0 = (OOC_INT64)baseType;
  *(OOC_INT64*)((_check_pointer(i2, 94860))+72) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 94895))+80) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 94937))+88) = 0u;
  *(OOC_UINT8*)((_check_pointer(i2, 94979))+89) = 0u;
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Store(OOC_SymbolTable__Pointer pointer, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)pointer;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 95169))+80);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 95151))+72);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__Type)i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 95213))+88);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 95193)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 95261))+89);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 95241)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__PointerDesc_Load(OOC_SymbolTable__Pointer pointer, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)pointer;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 95416))+72), (void*)((_check_pointer(i1, 95434))+80));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 95458)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 95477))+88));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 95505)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 95524))+89));
  return;
  ;
}

void OOC_SymbolTable__InitArray(OOC_SymbolTable__Array array, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position, OOC_CHAR8 isOpenArray, OOC_SymbolTable__Type elementType, OOC_AST__Node lengthExpr) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)array;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  i0 = isOpenArray;
  *(OOC_UINT8*)((_check_pointer(i2, 95786))+72) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 95825))+73) = 1u;
  *(OOC_UINT8*)((_check_pointer(i2, 95859))+74) = 0u;
  i0 = (OOC_INT64)elementType;
  *(OOC_INT64*)((_check_pointer(i2, 95895))+80) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 95934))+88) = i0;
  *(OOC_INT32*)((_check_pointer(i2, 95980))+96) = (-1);
  i0 = (OOC_INT64)lengthExpr;
  *(OOC_INT64*)((_check_pointer(i2, 96005))+104) = i0;
  *(OOC_UINT8*)((_check_pointer(i2, 96042))+112) = 0u;
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Store(OOC_SymbolTable__Array array, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)array;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 96205))+72);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96187)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 96244))+73);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96226)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 96285))+74);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96267)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 96326))+80);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 96345))+88);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 96389))+96);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96372)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 96427))+112);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96409)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i1);
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_Load(OOC_SymbolTable__Array array, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)array;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96558)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 96575))+72));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96596)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 96613))+73));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96636)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 96653))+74));
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 96693))+80), (void*)((_check_pointer(i1, 96712))+88));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96739)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 96755))+96));
  *(OOC_INT64*)((_check_pointer(i1, 96775))+104) = (OOC_INT64)0;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 96801)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 96818))+112));
  return;
  ;
}

void OOC_SymbolTable__ArrayDesc_SetLength(OOC_SymbolTable__Array array, OOC_INT32 length) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)array;
  i1 = length;
  *(OOC_INT32*)((_check_pointer(i0, 96916))+96) = i1;
  return;
  ;
}

OOC_INT32 OOC_SymbolTable__ArrayDesc_GetOpenDimensions(OOC_SymbolTable__Array array) {
  register OOC_INT64 i0,i1,i2;
  OOC_INT32 dim;
  OOC_SymbolTable__Type type;

  dim = 0;
  i0 = (OOC_INT64)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97238)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97255)))), &_td_OOC_SymbolTable__ArrayDesc, 97255)), 97261))+72);
  
l5:
  if (i1) goto l7;
  i0=0;
  goto l17;
l7:
  i1=i0;i0=0;
l8_loop:
  i0 = i0+1;
  dim = i0;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 97313)))), &_td_OOC_SymbolTable__ArrayDesc, 97313)), 97319))+80);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 97313)))), &_td_OOC_SymbolTable__ArrayDesc, 97313)), 97319))+80);
  i1 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 97331)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  type = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 97238)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 97255)))), &_td_OOC_SymbolTable__ArrayDesc, 97255)), 97261))+72);
  
l13:
  if (i2) goto l8_loop;
l17:
  return i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNonOpenElementType(OOC_SymbolTable__Array array) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT64)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97599)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97616)))), &_td_OOC_SymbolTable__ArrayDesc, 97616)), 97622))+72);
  
l5:
  if (!i1) goto l17;
l8_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97657)))), &_td_OOC_SymbolTable__ArrayDesc, 97657)), 97663))+80);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97657)))), &_td_OOC_SymbolTable__ArrayDesc, 97657)), 97663))+80);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 97675)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97599)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l11;
  i1=0u;
  goto l13;
l11:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97616)))), &_td_OOC_SymbolTable__ArrayDesc, 97616)), 97622))+72);
  
l13:
  if (i1) goto l8_loop;
l17:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetInnermostElementType(OOC_SymbolTable__Array array) {
  register OOC_INT64 i0,i1;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT64)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97945)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (!i1) goto l9;
  
l4_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97977)))), &_td_OOC_SymbolTable__ArrayDesc, 97977)), 97983))+80);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97977)))), &_td_OOC_SymbolTable__ArrayDesc, 97977)), 97983))+80);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 97995)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 97945)))), &_td_OOC_SymbolTable__ArrayDesc);
  if (i1) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__ArrayDesc_GetNthElementType(OOC_SymbolTable__Array array, OOC_INT32 dim) {
  register OOC_INT64 i0,i1,i2;
  OOC_SymbolTable__Type type;

  i0 = (OOC_INT64)array;
  type = (OOC_SymbolTable__Type)i0;
  i1 = dim;
  i2 = i1>0;
  if (!i2) goto l9;
  
l4_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 98356)))), &_td_OOC_SymbolTable__ArrayDesc, 98356)), 98362))+80);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 98356)))), &_td_OOC_SymbolTable__ArrayDesc, 98356)), 98362))+80);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 98374)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  type = (OOC_SymbolTable__Type)i0;
  i1 = i1-1;
  dim = i1;
  i2 = i1>0;
  if (i2) goto l4_loop;
l9:
  return (OOC_SymbolTable__Type)i0;
  ;
}

void OOC_SymbolTable__InitFormalPars(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Item parent, OOC_SymbolTable__Position position) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)position;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)formalPars;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Position)i0);
  *(OOC_INT64*)((_check_pointer(i2, 98636))+72) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 98669))+80) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 98704))+88) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 98746))+96) = (OOC_INT64)0;
  *(OOC_UINT8*)((_check_pointer(i2, 98777))+104) = 0u;
  *(OOC_UINT8*)((_check_pointer(i2, 98821))+105) = 0u;
  *(OOC_INT8*)((_check_pointer(i2, 98856))+106) = 0;
  *(OOC_INT64*)((_check_pointer(i2, 98901))+112) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i2, 98932))+120) = (OOC_INT64)0;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_EnableRestParameters(OOC_SymbolTable__FormalPars formalPars) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)formalPars;
  *(OOC_UINT8*)((_check_pointer(i0, 99150))+104) = 1u;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_SetResultType(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Type resultType) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)formalPars;
  i1 = (OOC_INT64)resultType;
  *(OOC_INT64*)((_check_pointer(i0, 99298))+80) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 99339))+88) = i1;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_SetNamespace(OOC_SymbolTable__FormalPars formalPars, OOC_SymbolTable__Namespace ns) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)formalPars;
  i1 = (OOC_INT64)ns;
  *(OOC_INT64*)((_check_pointer(i0, 99570))+120) = i1;
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Store(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Writer w) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)formalPars;
  OOC_SymbolTable__TypeDesc_Store((OOC_SymbolTable__Type)i1, (ADT_Storable__Writer)i0);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 99771))+72);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 99746)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 99811))+80);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 99834))+88);
  OOC_SymbolTable__WriteType((ADT_Storable__Writer)i0, (OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i3);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 99883))+104);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 99860)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 99933))+105);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 99910)))), IO_BinaryRider__WriterDesc_WriteBool)),IO_BinaryRider__WriterDesc_WriteBool)((IO_BinaryRider__Writer)i0, i2);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 99974))+106);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 99951)))), IO_BinaryRider__WriterDesc_WriteSInt)),IO_BinaryRider__WriterDesc_WriteSInt)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 100005))+112);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l11;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 100092))+112);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 100100)), 0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100065)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, i2);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 100140))+112);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 100148)), 0);
  i3 = 0<i2;
  if (!i3) goto l12;
  i3=0;
l5_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 100190))+112);
  i4 = _check_pointer(i4, 100198);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 100198))*8);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100165)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i0, (Object__Object)i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
  goto l12;
l11:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100033)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, (-1));
l12:
  return;
  ;
}

void OOC_SymbolTable__FormalParsDesc_Load(OOC_SymbolTable__FormalPars formalPars, ADT_Storable__Reader r) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  Object__Object obj;
  OOC_INT32 len;
  OOC_INT32 i;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)formalPars;
  OOC_SymbolTable__TypeDesc_Load((OOC_SymbolTable__Type)i1, (ADT_Storable__Reader)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100434)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i2 = (OOC_INT64)obj;
  i3 = i2==(OOC_INT64)0;
  if (i3) goto l3;
  *(OOC_INT64*)((_check_pointer(i1, 100537))+72) = (_type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 100555)))), &_td_OOC_SymbolTable__VarDeclDesc, 100555));
  goto l4;
l3:
  *(OOC_INT64*)((_check_pointer(i1, 100494))+72) = (OOC_INT64)0;
l4:
  OOC_SymbolTable__ReadType((ADT_Storable__Reader)i0, (void*)((_check_pointer(i1, 100599))+80), (void*)((_check_pointer(i1, 100622))+88));
  *(OOC_INT64*)((_check_pointer(i1, 100657))+96) = (OOC_INT64)0;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100679)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 100701))+104));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100728)))), IO_BinaryRider__ReaderDesc_ReadBool)),IO_BinaryRider__ReaderDesc_ReadBool)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 100750))+105));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100768)))), IO_BinaryRider__ReaderDesc_ReadSInt)),IO_BinaryRider__ReaderDesc_ReadSInt)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i1, 100790))+106));
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100813)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&len);
  i2 = len;
  i3 = i2<0;
  if (i3) goto l15;
  *(OOC_INT64*)((_check_pointer(i1, 100914))+112) = ((OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__ExceptionNameArray.baseTypes[0], i2));
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l16;
  i3=0;
l9_loop:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 100968)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT64)&obj);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 101006))+112);
  i4 = _check_pointer(i4, 101014);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)obj;
  *(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 101014))*8) = (_type_guard(i6, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 101025)))), &_td_OOC_SymbolTable__ExceptionNameDesc, 101025));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l9_loop;
  goto l16;
l15:
  *(OOC_INT64*)((_check_pointer(i1, 100868))+112) = (OOC_INT64)0;
l16:
  *(OOC_INT64*)((_check_pointer(i1, 101073))+120) = (OOC_INT64)0;
  return;
  ;
}

static void OOC_SymbolTable__InitTypeClosure(OOC_SymbolTable__TypeClosure tc, OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeVarArray params, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)params;
  i1 = (OOC_INT64)arguments;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 101334)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 101352)), 0);
  _assert((i2==i3), 127, 101317);
  i2 = (OOC_INT64)tc;
  i3 = (OOC_INT64)position;
  OOC_SymbolTable__InitType((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Item)(OOC_INT64)0, (OOC_SymbolTable__Position)i3);
  i3 = (OOC_INT64)baseType;
  *(OOC_INT64*)((_check_pointer(i2, 101396))+72) = i3;
  *(OOC_INT64*)((_check_pointer(i2, 101425))+80) = i0;
  *(OOC_INT64*)((_check_pointer(i2, 101450))+88) = i1;
  i0 = i3!=(OOC_INT64)0;
  if (i0) goto l3;
  *(OOC_INT32*)((_check_pointer(i2, 101587))+64) = (-1);
  *(OOC_INT16*)((_check_pointer(i2, 101608))+68) = (-1);
  goto l4;
l3:
  i0 = *(OOC_INT32*)((_check_pointer(i3, 101529))+64);
  *(OOC_INT32*)((_check_pointer(i2, 101512))+64) = i0;
  i0 = *(OOC_INT16*)((_check_pointer(i3, 101562))+68);
  *(OOC_INT16*)((_check_pointer(i2, 101544))+68) = i0;
l4:
  return;
  ;
}

OOC_SymbolTable__TypeClosure OOC_SymbolTable__NewTypeClosure(OOC_SymbolTable__Position position, OOC_SymbolTable__Type baseType, OOC_SymbolTable__TypeVarArray params, OOC_SymbolTable__TypeRefArray arguments) {
  register OOC_INT64 i0,i1,i2,i3,i4;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__TypeClosure.baseTypes[0]);
  i1 = (OOC_INT64)arguments;
  i2 = (OOC_INT64)params;
  i3 = (OOC_INT64)baseType;
  i4 = (OOC_INT64)position;
  OOC_SymbolTable__InitTypeClosure((OOC_SymbolTable__TypeClosure)i0, (OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)i3, (OOC_SymbolTable__TypeVarArray)i2, (OOC_SymbolTable__TypeRefArray)i1);
  return (OOC_SymbolTable__TypeClosure)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Deparam(OOC_SymbolTable__TypeClosure typeClosure) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)typeClosure;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102065))+72);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Lookup(OOC_SymbolTable__TypeClosure typeClosure, OOC_SymbolTable__TypeVar tv, OOC_SymbolTable__TypeVar _default) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT64)typeClosure;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102356))+80);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102383))+88);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 102363)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 102393)), 0);
  _assert((i1==i2), 127, 102334);
  i = 0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102440))+80);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 102447)), 0);
  i1 = 0!=i1;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102465))+80);
  i1 = _check_pointer(i1, 102472);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT32, 102472))*8);
  i2 = (OOC_INT64)tv;
  i1 = i1!=i2;
  
l5:
  if (i1) goto l7;
  i1=0;
  goto l17;
l7:
  i1 = (OOC_INT64)tv;
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102440))+80);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 102447)), 0);
  i3 = i2!=i3;
  if (i3) goto l11;
  i3=0u;
  goto l13;
l11:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102465))+80);
  i3 = _check_pointer(i3, 102472);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 102472))*8);
  i3 = i3!=i1;
  
l13:
  if (i3) goto l8_loop;
l16:
  i1=i2;
l17:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102536))+80);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 102543)), 0);
  i2 = i1==i2;
  if (i2) goto l20;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 102801))+88);
  i0 = _check_pointer(i0, 102811);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+((_check_index(i1, i2, OOC_UINT32, 102811))*16));
  return (OOC_SymbolTable__Type)i0;
  goto l21;
l20:
  i0 = (OOC_INT64)_default;
  return (OOC_SymbolTable__Type)i0;
l21:
  _failed_function(102129); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__TypeClosureDesc_Closure(OOC_SymbolTable__TypeClosure closure, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_SymbolTable__TypeRefArray args;
  OOC_INT32 i;
  OOC_SymbolTable__Type nextType;

  i0 = (OOC_INT64)type;
  i1 = i0==(OOC_INT64)0;
  if (!i1) goto l3;
  return (OOC_SymbolTable__Type)(OOC_INT64)0;
l3:
  i1 = (OOC_INT64)&_td_OOC_SymbolTable__TypeRef;
  
l4_loop:
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 103141)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i2) goto l19;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 103593)))), &_td_OOC_SymbolTable__TypeVarDesc);
  if (i2) goto l13;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103806))+56);
  i2 = i2==(OOC_INT64)0;
  if (!i2) goto l29;
  return (OOC_SymbolTable__Type)i0;
  goto l28;
l13:
  i2 = (OOC_INT64)closure;
  i2 = (OOC_INT64)OOC_SymbolTable__TypeClosureDesc_Lookup((OOC_SymbolTable__TypeClosure)i2, (OOC_SymbolTable__TypeVar)i0, (OOC_SymbolTable__TypeVar)(OOC_INT64)0);
  nextType = (OOC_SymbolTable__Type)i2;
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l16;
  i0 = (OOC_INT64)OOC_SymbolTable__emptyClosure;
  closure = (OOC_SymbolTable__TypeClosure)i0;
  goto l28;
l16:
  return (OOC_SymbolTable__Type)i0;
  goto l28;
l19:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103178))+88);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103201))+72);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 103210))+56);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 103219))+40);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 103226)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 103188)), 0);
  _assert((i2==i3), 127, 103163);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103257))+72);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 103266))+56);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 103275))+40);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 103282)), 0);
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], i2);
  args = (OOC_SymbolTable__TypeRefArray)i2;
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 103317)), 0);
  i4 = 0<i3;
  if (!i4) goto l27;
  i4 = (OOC_INT64)closure;
  i5=0;
l22_loop:
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103376))+88);
  i6 = _check_pointer(i6, 103386);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+((_check_index(i5, i7, OOC_UINT32, 103386))*16));
  i6 = (OOC_INT64)OOC_SymbolTable__TypeClosureDesc_Closure((OOC_SymbolTable__TypeClosure)i4, (OOC_SymbolTable__Type)i6);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i2, 103351)), 0);
  i7 = _check_index(i5, i7, OOC_UINT32, 103351);
  i7 = _check_pointer(i2, 103351);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  OOC_SymbolTable__InitTypeRef((void*)(i7+((_check_index(i5, i8, OOC_UINT32, 103351))*16)), (RT0__Struct)i1, (OOC_SymbolTable__Type)i6);
  i5 = i5+1;
  i = i5;
  i6 = i5<i3;
  if (i6) goto l22_loop;
l27:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103503))+72);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 103512))+56);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i3, 103521))+40);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103449))+40);
  i2 = (OOC_INT64)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i4, (OOC_SymbolTable__Type)(OOC_INT64)0, (OOC_SymbolTable__TypeVarArray)i3, (OOC_SymbolTable__TypeRefArray)i2);
  closure = (OOC_SymbolTable__TypeClosure)i2;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 103561))+72);
  nextType = (OOC_SymbolTable__Type)i0;
l28:
  i0 = (OOC_INT64)nextType;
  type = (OOC_SymbolTable__Type)i0;
  
  goto l4_loop;
l29:
  i1 = (OOC_INT64)closure;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 104115))+88);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 104099))+80);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 104049))+40);
  i0 = (OOC_INT64)OOC_SymbolTable__NewTypeClosure((OOC_SymbolTable__Position)i1, (OOC_SymbolTable__Type)i0, (OOC_SymbolTable__TypeVarArray)i3, (OOC_SymbolTable__TypeRefArray)i2);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable__TypeClosureDesc_ArgumentsInduced(OOC_SymbolTable__TypeClosure closure, OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT64)type;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 104633)))), &_td_OOC_SymbolTable__QualTypeDesc);
  if (i1) goto l5;
  i0 = (OOC_INT64)closure;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 105015))+88);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 105025)), 0);
  return (i0==0);
  goto l36;
l5:
  i1 = (OOC_INT64)closure;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 104680))+80);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 104687)), 0);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l33;
  i3=0;
l8_loop:
  j = 0;
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 104742))+88);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 104752)), 0);
  i4 = 0!=i4;
  if (i4) goto l11;
  i4=0u;
  goto l13;
l11:
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 104779))+88);
  i4 = _check_pointer(i4, 104789);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 104807))+80);
  i6 = _check_pointer(i6, 104814);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 104814))*8);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+((_check_index(0, i5, OOC_UINT32, 104789))*16));
  i4 = i4!=i6;
  
l13:
  if (i4) goto l15;
  i4=0;
  goto l25;
l15:
  i4=0;
l16_loop:
  i4 = i4+1;
  j = i4;
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 104742))+88);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 104752)), 0);
  i5 = i4!=i5;
  if (i5) goto l19;
  i5=0u;
  goto l21;
l19:
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 104779))+88);
  i5 = _check_pointer(i5, 104789);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 104807))+80);
  i7 = _check_pointer(i7, 104814);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT64)*(OOC_INT64*)(i7+(_check_index(i3, i8, OOC_UINT32, 104814))*8);
  i5 = (OOC_INT64)*(OOC_INT64*)(i5+((_check_index(i4, i6, OOC_UINT32, 104789))*16));
  i5 = i5!=i7;
  
l21:
  if (i5) goto l16_loop;
l25:
  i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 104883))+88);
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i5, 104893)), 0);
  i4 = i4==i5;
  if (!i4) goto l28;
  return 0u;
l28:
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l8_loop;
l33:
  return 1u;
  goto l36;
l35:
  i0 = (OOC_INT64)closure;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 104590))+88);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 104600)), 0);
  return (i0==0);
l36:
  _failed_function(104177); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable__Expand(OOC_SymbolTable__Type type) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)type;
  i1 = (OOC_INT64)OOC_SymbolTable__emptyClosure;
  i0 = (OOC_INT64)OOC_SymbolTable__TypeClosureDesc_Closure((OOC_SymbolTable__TypeClosure)i1, (OOC_SymbolTable__Type)i0);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ItemDesc_Namespace(OOC_SymbolTable__Item item) {

  return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ModuleDesc_Namespace(OOC_SymbolTable__Module item) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)item;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 106672))+88);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__ProcDeclDesc_Namespace(OOC_SymbolTable__ProcDecl item) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)item;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 106771))+104);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__FormalParsDesc_Namespace(OOC_SymbolTable__FormalPars item) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)item;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 106872))+120);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__RecordDesc_Namespace(OOC_SymbolTable__Record item) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)item;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 106969))+96);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__TypeParsDesc_Namespace(OOC_SymbolTable__TypePars item) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)item;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 107068))+48);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__QualTypeDesc_Namespace(OOC_SymbolTable__QualType item) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)item;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 107167))+72);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 107167))+72);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 107176)))), OOC_SymbolTable__ItemDesc_Namespace)),OOC_SymbolTable__ItemDesc_Namespace)((OOC_SymbolTable__Item)i0);
  return (OOC_SymbolTable__Namespace)i0;
  ;
}

void OOC_SymbolTable__Prune(OOC_SymbolTable__Module root, ADT_Dictionary_AddressKey__Dictionary keep) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
  ADT_ArrayList__ArrayList prunedImports;
  OOC_INT32 i;
  OOC_SymbolTable__Import import;
  OOC_SymbolTable__ModuleRef mr;
  auto void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last);
    
    void OOC_SymbolTable__Prune_PruneList(OOC_SymbolTable__Item *list, OOC_SymbolTable__Item *last) {
      register OOC_INT64 i0,i1,i2;
      OOC_SymbolTable__Item _this;

      i0 = (OOC_INT64)*list;
      _this = (OOC_SymbolTable__Item)i0;
      *last = (OOC_SymbolTable__Item)(OOC_INT64)0;
      *list = (OOC_SymbolTable__Item)(OOC_INT64)0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l23;
l3_loop:
      i1 = (OOC_INT64)keep;
      i1 = ADT_Dictionary_AddressKey__DictionaryDesc_HasKey((ADT_Dictionary_AddressKey__Dictionary)i1, (Object__Object)i0);
      if (i1) goto l13;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 108018)))), &_td_OOC_SymbolTable__ImportDesc);
      if (i1) goto l8;
      i1=0u;
      goto l10;
l8:
      i1 = OOC_SymbolTable__ImportDesc_IsInternalImport((OOC_SymbolTable__Import)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 108037)))), &_td_OOC_SymbolTable__ImportDesc, 108037)));
      i1 = !i1;
      
l10:
      if (!i1) goto l18;
      i1 = (OOC_INT64)prunedImports;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 108094)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i1, (Object__Object)i0);
      goto l18;
l13:
      OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 107754))+16), (void*)((_check_pointer(i0, 107773))+24));
      i1 = (OOC_INT64)*last;
      i2 = i1==(OOC_INT64)0;
      if (i2) goto l16;
      *(OOC_INT64*)(_check_pointer(i1, 107926)) = i0;
      goto l17;
l16:
      *list = (OOC_SymbolTable__Item)i0;
l17:
      *last = (OOC_SymbolTable__Item)i0;
l18:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 108157));
      _this = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l23:
      i0 = (OOC_INT64)*last;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l26;
      *(OOC_INT64*)(_check_pointer(i0, 108241)) = (OOC_INT64)0;
l26:
      return;
      ;
    }


  i0 = (OOC_INT64)ADT_ArrayList__New(8);
  prunedImports = (ADT_ArrayList__ArrayList)i0;
  i0 = (OOC_INT64)root;
  OOC_SymbolTable__Prune_PruneList((void*)((_check_pointer(i0, 108353))+16), (void*)((_check_pointer(i0, 108372))+24));
  i0 = (OOC_INT64)root;
  i1 = (OOC_INT64)prunedImports;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 108433))+8);
  *(OOC_INT64*)((_check_pointer(i0, 108404))+136) = ((OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__ModuleRefArray.baseTypes[0], i2));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 108472))+8);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 108512));
  i4 = _check_pointer(i4, 108518);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT64)*(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 108518))*8);
  i4 = _type_guard(i4, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i4, 108522)))), &_td_OOC_SymbolTable__ImportDesc, 108522);
  import = (OOC_SymbolTable__Import)i4;
  i5 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__ModuleRef.baseTypes[0]);
  mr = (OOC_SymbolTable__ModuleRef)i5;
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 108569))+88);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 108580))+16);
  *(OOC_INT64*)(_check_pointer(i5, 108554)) = i6;
  i4 = *(OOC_INT32*)((_check_pointer(i4, 108616))+104);
  *(OOC_INT32*)((_check_pointer(i5, 108594))+8) = i4;
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 108640))+136);
  i4 = _check_pointer(i4, 108654);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT64*)(i4+(_check_index(i3, i6, OOC_UINT32, 108654))*8) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId(OOC_SymbolTable__Declaration decl) {
  register OOC_INT64 i0,i1,i2;
  OOC_Scanner_InputBuffer__CharArray id;
  OOC_SymbolTable__Declaration declWithType;
  OOC_SymbolTable__Item ptr;
  OOC_SymbolTable__Item parent;
  auto OOC_SymbolTable__Declaration OOC_SymbolTable__DeclarationDesc_GetId_GetContainer(OOC_SymbolTable__Type type);
  auto OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b);
    
    OOC_SymbolTable__Declaration OOC_SymbolTable__DeclarationDesc_GetId_GetContainer(OOC_SymbolTable__Type type) {
      register OOC_INT64 i0,i1;
      OOC_SymbolTable__Item ptr;
      OOC_CHAR8 found;
      auto OOC_CHAR8 OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains(OOC_SymbolTable__Item ptr, OOC_SymbolTable__Item type);
        
        OOC_CHAR8 OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains(OOC_SymbolTable__Item ptr, OOC_SymbolTable__Item type) {
          register OOC_INT64 i0,i1,i2;

          i0 = (OOC_INT64)ptr;
          i1 = (OOC_INT64)type;
          i2 = i0==i1;
          if (i2) goto l11;
          i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109404)))), &_td_OOC_SymbolTable__PointerDesc);
          if (i2) goto l9;
          i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109489)))), &_td_OOC_SymbolTable__ArrayDesc);
          if (i2) goto l7;
          return 0u;
          goto l12;
l7:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 109532))+88);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l9:
          i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 109449))+80);
          i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
          return i0;
          goto l12;
l11:
          return 1u;
l12:
          _failed_function(109273); return 0;
          ;
        }


      i0 = (OOC_INT64)type;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109681)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l3;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109701)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l4;
l3:
      i1=1u;
l4:
      _assert(i1, 127, 109667);
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109733)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l7;
      i1=0u;
      goto l9;
l7:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 109755))+8);
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 109764)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
l9:
      if (i1) goto l15;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 109850))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109876)))), &_td_OOC_SymbolTable__TypeParsDesc);
      if (!i1) goto l16;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 109914))+8);
      ptr = (OOC_SymbolTable__Item)i0;
      
      goto l16;
l15:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 109801))+8);
      return (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109810)))), &_td_OOC_SymbolTable__ProcDeclDesc, 109810));
l16:
      i0 = (OOC_INT64)ptr;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109966)))), &_td_OOC_SymbolTable__ModuleDesc);
      if (i1) goto l19;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 109999)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      
      goto l21;
l19:
      i1=1u;
l21:
      if (i1) goto l23;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 110034)))), &_td_OOC_SymbolTable__RecordDesc);
      
      goto l25;
l23:
      i1=1u;
l25:
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 110067)))), &_td_OOC_SymbolTable__FormalParsDesc);
      
      goto l28;
l27:
      i1=1u;
l28:
      _assert(i1, 127, 109953);
      found = 0u;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 110122))+16);
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l55;
l31_loop:
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 110180)))), &_td_OOC_SymbolTable__VarDeclDesc);
      if (i1) goto l46;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 110259)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (i1) goto l44;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 110339)))), &_td_OOC_SymbolTable__ProcDeclDesc);
      if (i1) goto l42;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 110418)))), &_td_OOC_SymbolTable__FieldDeclDesc);
      if (i1) goto l40;
      found = 0u;
      i0=0u;
      goto l47;
l40:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 110465))+96);
      i1 = (OOC_INT64)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l42:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 110385))+112);
      i1 = (OOC_INT64)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l44:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 110305))+96);
      i1 = (OOC_INT64)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
      goto l47;
l46:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 110225))+96);
      i1 = (OOC_INT64)type;
      i0 = OOC_SymbolTable__DeclarationDesc_GetId_GetContainer_Contains((OOC_SymbolTable__Item)i0, (OOC_SymbolTable__Item)i1);
      found = i0;
      
l47:
      i1 = (OOC_INT64)ptr;
      if (!i0) goto l50;
      return (OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 110580)))), &_td_OOC_SymbolTable__DeclarationDesc, 110580));
l50:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 110624));
      ptr = (OOC_SymbolTable__Item)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l31_loop;
l55:
      _assert(0u, 127, 110654);
      _failed_function(109167); return 0;
      ;
    }

    
    OOC_Scanner_InputBuffer__CharArray OOC_SymbolTable__DeclarationDesc_GetId_Concat(OOC_Scanner_InputBuffer__CharArray a, OOC_Scanner_InputBuffer__CharArray b) {
      register OOC_INT64 i0,i1,i2,i3;
      OOC_Scanner_InputBuffer__CharArray n;

      i0 = (OOC_INT64)a;
      i1 = (
      _cmp8((const void*)(_check_pointer(i0, 110795)),(const void*)(OOC_CHAR8*)""))==0;
      if (i1) goto l3;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 110869)), 0);
      i1 = Strings__Length((void*)(_check_pointer(i0, 110869)), i1);
      i2 = (OOC_INT64)b;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 110889)), 0);
      i3 = Strings__Length((void*)(_check_pointer(i2, 110889)), i3);
      i1 = (OOC_INT64)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], ((i1+i3)+2));
      n = (OOC_Scanner_InputBuffer__CharArray)i1;
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 110915)), 0);
      _copy_8((const void*)(_check_pointer(i0, 110911)),(void*)(_check_pointer(i1, 110915)),i3);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 110949)), 0);
      Strings__Append((OOC_CHAR8*)".", 2, (void*)(_check_pointer(i1, 110949)), i0);
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 110978)), 0);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 110982)), 0);
      Strings__Append((void*)(_check_pointer(i2, 110978)), i0, (void*)(_check_pointer(i1, 110982)), i3);
      return (OOC_Scanner_InputBuffer__CharArray)i1;
      goto l4;
l3:
      i0 = (OOC_INT64)b;
      return (OOC_Scanner_InputBuffer__CharArray)i0;
l4:
      _failed_function(110706); return 0;
      ;
    }


  i0 = (OOC_INT64)decl;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 111052))+72);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l44;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111127)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l42;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111248)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l7;
  i1=0u;
  goto l9;
l7:
  i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111268)))), &_td_OOC_SymbolTable__ProcDeclDesc, 111268)));
  
l9:
  if (i1) goto l40;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111567)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l38;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111843)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l15;
  i1=0u;
  goto l17;
l15:
  i1 = *(OOC_UINT8*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111862)))), &_td_OOC_SymbolTable__VarDeclDesc, 111862)), 111870))+104);
  
l17:
  if (i1) goto l36;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 112152)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1=0u;
  goto l23;
l21:
  i1 = OOC_SymbolTable__TypeDeclDesc_IsTypeParameter((OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 112172)))), &_td_OOC_SymbolTable__TypeDeclDesc, 112172)));
  
l23:
  if (i1) goto l34;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 112476))+8);
  parent = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 112508)))), &_td_OOC_SymbolTable__DeclarationDesc));
  if (!i2) goto l33;
l28_loop:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 112553))+8);
  parent = (OOC_SymbolTable__Item)i1;
  i2 = !(OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 112508)))), &_td_OOC_SymbolTable__DeclarationDesc));
  if (i2) goto l28_loop;
l33:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 112630))+40);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 112635))+16);
  i1 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 112604)))), &_td_OOC_SymbolTable__DeclarationDesc, 112604)), 112616)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 112604)))), &_td_OOC_SymbolTable__DeclarationDesc, 112604)));
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l34:
  i1 = (OOC_INT64)OOC_SymbolTable__TypeDeclDesc_ParametricType((OOC_SymbolTable__TypeDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 112355)))), &_td_OOC_SymbolTable__TypeDeclDesc, 112355)));
  ptr = (OOC_SymbolTable__Item)i1;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 112431))+40);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 112436))+16);
  i1 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 112408)))), &_td_OOC_SymbolTable__TypeDeclDesc, 112408)), 112417)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 112408)))), &_td_OOC_SymbolTable__TypeDeclDesc, 112408)));
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i1, (OOC_Scanner_InputBuffer__CharArray)i0);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l36:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 112041)))), &_td_OOC_SymbolTable__VarDeclDesc, 112041)), 112049))+8);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 112058)))), &_td_OOC_SymbolTable__FormalParsDesc, 112058)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i1 = (OOC_INT64)decl;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 112121))+40);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 112127))+16);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 112106)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l38:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111734)))), &_td_OOC_SymbolTable__FieldDeclDesc, 111734)), 111744))+8);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111753)))), &_td_OOC_SymbolTable__RecordDesc, 111753)));
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i1 = (OOC_INT64)decl;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 111812))+40);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 111818))+16);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111797)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l40:
  i0 = (OOC_INT64)OOC_SymbolTable__ProcDeclDesc_Class((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111466)))), &_td_OOC_SymbolTable__ProcDeclDesc, 111466)));
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_GetContainer((OOC_SymbolTable__Type)i0);
  declWithType = (OOC_SymbolTable__Declaration)i0;
  i1 = (OOC_INT64)decl;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 111536))+40);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 111542))+16);
  i0 = (OOC_INT64)OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 111521)))), OOC_SymbolTable__DeclarationDesc_GetId)),OOC_SymbolTable__DeclarationDesc_GetId)((OOC_SymbolTable__Declaration)i0);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetId_Concat((OOC_Scanner_InputBuffer__CharArray)i0, (OOC_Scanner_InputBuffer__CharArray)i1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  
  goto l43;
l42:
  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  id = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = _check_pointer(i0, 111220);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_UINT8*)(i1+(_check_index(0, i2, OOC_UINT8, 111220))) = 0u;
  
l43:
  i1 = (OOC_INT64)decl;
  *(OOC_INT64*)((_check_pointer(i1, 112663))+72) = i0;
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  goto l45;
l44:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 111092))+72);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
l45:
  _failed_function(108718); return 0;
  ;
}

OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace(OOC_SymbolTable__Declaration decl, OOC_CHAR8 followTypeNames) {
  register OOC_INT64 i0,i1;
  auto OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcType);
    
    OOC_SymbolTable__Namespace OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcType) {
      register OOC_INT64 i0,i1;

      i0 = followTypeNames;
      i0 = !i0;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = (OOC_INT64)srcType;
      i0 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113112)))), &_td_OOC_SymbolTable__TypeNameDesc);
      
l5:
      if (i0) goto l39;
      i0 = (OOC_INT64)type;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113300)))), &_td_OOC_SymbolTable__PredefTypeDesc);
      if (i1) goto l37;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113351)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l35;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113450)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l33;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113550)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l31;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113660)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l29;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113764)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l27;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113816)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i1) goto l25;
      i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113899)))), &_td_OOC_SymbolTable__QualTypeDesc);
      if (i1) goto l23;
      _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 113893)))), 113893);
      goto l40;
l23:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113967))+80);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113951))+72);
      i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l25:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113867))+72);
      i1 = (OOC_INT64)srcType;
      i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l27:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113797))+96);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l29:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113728))+88);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113709))+80);
      i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l31:
      return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
      goto l40;
l33:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113517))+80);
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 113501))+72);
      i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
      return (OOC_SymbolTable__Namespace)i0;
      goto l40;
l35:
      return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
      goto l40;
l37:
      return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
      goto l40;
l39:
      return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
l40:
      _failed_function(113015); return 0;
      ;
    }


  i0 = (OOC_INT64)decl;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114057)))), &_td_OOC_SymbolTable__ModuleDesc);
  if (i1) goto l35;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114101)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l33;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114161)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l31;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114207)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l29;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114249)))), &_td_OOC_SymbolTable__PredefProcDesc);
  if (i1) goto l27;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114292)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l25;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114376)))), &_td_OOC_SymbolTable__FieldDeclDesc);
  if (i1) goto l23;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114462)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l21;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114547)))), &_td_OOC_SymbolTable__RedirectDesc);
  if (i1) goto l19;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 114541)))), 114541);
  goto l36;
l19:
  return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
  goto l36;
l21:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114522))+96);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114510))+88);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l23:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114437))+96);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114425))+88);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l25:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114351))+96);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114339))+88);
  i0 = (OOC_INT64)OOC_SymbolTable__DeclarationDesc_GetEmbeddedNamespace_NamespaceOfType((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l27:
  return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
  goto l36;
l29:
  return (OOC_SymbolTable__Namespace)(OOC_INT64)0;
  goto l36;
l31:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114192))+104);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l33:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114130))+96);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114146))+88);
  return (OOC_SymbolTable__Namespace)i0;
  goto l36;
l35:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 114086))+88);
  return (OOC_SymbolTable__Namespace)i0;
l36:
  _failed_function(112749); return 0;
  ;
}

static void OOC_SymbolTable__Init(void) {
  register OOC_INT64 i0,i1,i2;
  OOC_SymbolTable__TypeVarArray params;
  OOC_SymbolTable__TypeRefArray arguments;
  OOC_Scanner_InputBuffer__CharArray nameString;

  i0 = (OOC_INT64)URI_Scheme_File__NewPrototype();
  URI__RegisterScheme((URI__URI)i0);
  OOC_SymbolTable__predefIdToType = (void*)(OOC_INT64)0;
  i0 = (OOC_INT64)URI_Scheme_File__ToURI((OOC_CHAR8*)"/", 2);
  OOC_SymbolTable__emptyBaseURI = (URI__HierarchicalURI)i0;
  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__Position.baseTypes[0]);
  OOC_SymbolTable__importPosition = (OOC_SymbolTable__Position)i0;
  OOC_SymbolTable__InitPosition((OOC_SymbolTable__Position)i0, (-2), (-1), (-1));
  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__TypeVarArray.baseTypes[0], 0);
  params = (OOC_SymbolTable__TypeVarArray)i0;
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__TypeRefArray.baseTypes[0], 0);
  arguments = (OOC_SymbolTable__TypeRefArray)i1;
  i2 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__TypeClosure.baseTypes[0]);
  OOC_SymbolTable__emptyClosure = (OOC_SymbolTable__TypeClosure)i2;
  OOC_SymbolTable__InitTypeClosure((OOC_SymbolTable__TypeClosure)i2, (OOC_SymbolTable__Position)(OOC_INT64)0, (OOC_SymbolTable__Type)(OOC_INT64)0, (OOC_SymbolTable__TypeVarArray)i0, (OOC_SymbolTable__TypeRefArray)i1);
  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], 1);
  nameString = (OOC_Scanner_InputBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 115113)), 0);
  _copy_8((const void*)(OOC_CHAR8*)"",(void*)(_check_pointer(i0, 115113)),i1);
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  OOC_SymbolTable__predefName = (OOC_SymbolTable__Name)i1;
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i1, (OOC_Scanner_InputBuffer__CharArray)i0, 0, 0, 0);
  return;
  ;
}

void OOC_OOC_SymbolTable_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"standard", 9, 0, 8);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"internal", 9, 0, 8);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"foreign", 8, 0, 7);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"interface", 10, 0, 9);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"--invalid--", 12, 0, 11);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)"default", 8, 0, 7);
  _c6 = Object__NewLatin1Region((OOC_CHAR8*)"internal", 9, 0, 8);
  _c7 = Object__NewLatin1Char(67u);
  _c8 = Object__NewLatin1Region((OOC_CHAR8*)"Pascal", 7, 0, 6);
  _c9 = Object__NewLatin1Region((OOC_CHAR8*)"Fastcall", 9, 0, 8);
  _c10 = Object__NewLatin1Char(67u);
  _c11 = Object__NewLatin1Region((OOC_CHAR8*)"Pascal", 7, 0, 6);
  _c12 = Object__NewLatin1Region((OOC_CHAR8*)"Fastcall", 9, 0, 8);

  OOC_SymbolTable__Init();
  return;
  ;
}

void OOC_OOC_SymbolTable_destroy(void) {
}

/* --- */
