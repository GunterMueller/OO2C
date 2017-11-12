#include <OOC/SymbolTable/Builder.oh>
#include <Out.oh>
#include <Strings.oh>
typedef struct OOC_SymbolTable_Builder__ReaderDesc *OOC_SymbolTable_Builder__Reader;
typedef struct OOC_SymbolTable_Builder__ReaderDesc {
  OOC_INT8 byteOrder;
  OOC_CHAR8 __pad1;
  OOC_CHAR8 __pad2;
  OOC_CHAR8 __pad3;
  IO__ByteChannel channel;
  OOC_INT32 objCounter;
  ADT_Object_Storage__ObjectArray objTab;
  OOC_INT32 typeCounter;
  ADT_Object_Storage__TypeArray typeTab;
  ADT_Object_Storage__CharBuffer name;
  ADT_Object_Storage__Reader docReader;
} OOC_SymbolTable_Builder__ReaderDesc;
typeof(OOC_SymbolTable_Builder__autoImport) OOC_SymbolTable_Builder__autoImport;
OOC_INT8 OOC_SymbolTable_Builder__doAutoImport;
typeof(OOC_SymbolTable_Builder__magicNumber) OOC_SymbolTable_Builder__magicNumber;
static void OOC_SymbolTable_Builder__EvalContext(OOC_SymbolTable_Builder__Builder b, OOC_SymbolTable__Type type);
static OOC_SymbolTable_Builder__Name OOC_SymbolTable_Builder__N(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_OOC_SymbolTable_Builder__Builder = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__BuilderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Builder", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__BuilderDesc = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__BuilderDesc}, (void*[]){(void*)OOC_SymbolTable_Builder__BuilderDesc_SetClass,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewImport,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewRedirect,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewFieldDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewProcDecl,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPredefType,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypeName,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewRecord,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewArray,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewPointer,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewTypePars,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewQualType,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewExceptionName,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewFormalPars,(void*)OOC_SymbolTable_Builder__BuilderDesc_NewModule,(void*)OOC_SymbolTable_Builder__BuilderDesc_Finalize,(void*)OOC_SymbolTable_Builder__BuilderDesc_WriteSymbolTable,(void*)OOC_SymbolTable_Builder__BuilderDesc_ReadSymbolTable}, NULL, &_mid, (OOC_CHAR8*)"BuilderDesc", 1, 0, (1<<RT0__flagAtomic), RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Writer = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__WriterDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Writer", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__WriterDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__WriterDesc,&_td_ADT_Storable__WriterDesc,&_td_ADT_Object_Storage__WriterDesc,&_td_OOC_SymbolTable__WriterDesc,&_td_OOC_SymbolTable_Builder__WriterDesc}, (void*[]){(void*)IO_BinaryRider__WriterDesc_SetPos,(void*)IO_BinaryRider__WriterDesc_WriteBytes,(void*)IO_BinaryRider__WriterDesc_WriteOrdered,(void*)IO_BinaryRider__WriterDesc_WriteChar,(void*)IO_BinaryRider__WriterDesc_WriteBool,(void*)IO_BinaryRider__WriterDesc_WriteLChar,(void*)IO_BinaryRider__WriterDesc_WriteString,(void*)IO_BinaryRider__WriterDesc_WriteLString,(void*)IO_BinaryRider__WriterDesc_WriteSInt,(void*)IO_BinaryRider__WriterDesc_WriteInt,(void*)IO_BinaryRider__WriterDesc_WriteLInt,(void*)IO_BinaryRider__WriterDesc_WriteNum,(void*)IO_BinaryRider__WriterDesc_WriteReal,(void*)IO_BinaryRider__WriterDesc_WriteLReal,(void*)IO_BinaryRider__WriterDesc_WriteSet,(void*)IO_BinaryRider__WriterDesc_WriteStr,(void*)IO_BinaryRider__WriterDesc_SetByteOrder,(void*)OOC_SymbolTable_Builder__WriterDesc_INIT,(void*)OOC_SymbolTable_Builder__WriterDesc_WriteObject,(void*)OOC_SymbolTable_Builder__WriterDesc_Disconnect}, NULL, &_mid, (OOC_CHAR8*)"WriterDesc", 288, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Reader = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__ReaderDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Reader", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__ReaderDesc = { (RT0__Struct[]){&_td_IO_BinaryRider__ReaderDesc,&_td_ADT_Storable__ReaderDesc,&_td_ADT_Object_Storage__ReaderDesc,&_td_OOC_SymbolTable__ReaderDesc,&_td_OOC_SymbolTable_Builder__ReaderDesc}, (void*[]){(void*)IO_BinaryRider__ReaderDesc_SetPos,(void*)IO_BinaryRider__ReaderDesc_ReadBytes,(void*)IO_BinaryRider__ReaderDesc_ReadBytesOrdered,(void*)IO_BinaryRider__ReaderDesc_ReadBool,(void*)IO_BinaryRider__ReaderDesc_ReadChar,(void*)IO_BinaryRider__ReaderDesc_ReadLChar,(void*)IO_BinaryRider__ReaderDesc_ReadString,(void*)IO_BinaryRider__ReaderDesc_ReadLString,(void*)IO_BinaryRider__ReaderDesc_ReadSInt,(void*)IO_BinaryRider__ReaderDesc_ReadInt,(void*)IO_BinaryRider__ReaderDesc_ReadLInt,(void*)IO_BinaryRider__ReaderDesc_ReadNum,(void*)IO_BinaryRider__ReaderDesc_ReadReal,(void*)IO_BinaryRider__ReaderDesc_ReadLReal,(void*)IO_BinaryRider__ReaderDesc_ReadSet,(void*)IO_BinaryRider__ReaderDesc_ReadStr,(void*)IO_BinaryRider__ReaderDesc_SetByteOrder,(void*)OOC_SymbolTable__ReaderDesc_INIT,(void*)ADT_Object_Storage__ReaderDesc_ReadObject,(void*)ADT_Object_Storage__ReaderDesc_Disconnect}, NULL, &_mid, (OOC_CHAR8*)"ReaderDesc", 284, 4, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__AutoImport = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImportDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"AutoImport", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2345 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__Name = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__2345}, NULL, NULL, &_mid, (OOC_CHAR8*)"Name", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__AutoImportDesc = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImportDesc}, (void*[]){}, NULL, &_mid, (OOC_CHAR8*)"AutoImportDesc", 8, 0, 0, RT0__strRecord };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2544 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__Name}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__2533 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__2544}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3219 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__AutoImport}, NULL, NULL, &_mid, NULL, 4, 1, 0, RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3208 = { (RT0__Struct[]){&_td_OOC_SymbolTable_Builder__3219}, NULL, NULL, &_mid, NULL, 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_OOC_SymbolTable_Builder__3396 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 5, 5, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__20828 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__23793 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 5, 5, (1<<RT0__flagAtomic), RT0__strArray };
RT0__StructDesc _td_OOC_SymbolTable_Builder__24861 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
static RT0__StructDesc _td__qtd0 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd0}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_InternalLookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items,(void*)ADT_Dictionary__DictionaryDesc_IterKeys,(void*)ADT_Dictionary__DictionaryDesc_IterValues}, (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc, &_td_Object__StringDesc, &_td_OOC_SymbolTable__TypeDeclDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.DictionaryDesc(Object.String,OOC:SymbolTable.TypeDecl)", 20, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd1 = { (RT0__Struct[]){&_td__qtd0}, NULL, (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary, &_td_Object__StringDesc, &_td_OOC_SymbolTable__TypeDeclDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.Dictionary(Object.String,OOC:SymbolTable.TypeDecl)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd2 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd2}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_InternalLookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items,(void*)ADT_Dictionary__DictionaryDesc_IterKeys,(void*)ADT_Dictionary__DictionaryDesc_IterValues}, (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc, &_td_Object__StringDesc, &_td_Object__ObjectDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.DictionaryDesc(Object.String,Object.Object)", 20, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd3 = { (RT0__Struct[]){&_td__qtd2}, NULL, (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary, &_td_Object__StringDesc, &_td_Object__ObjectDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.Dictionary(Object.String,Object.Object)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd4 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd4}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_InternalLookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items,(void*)ADT_Dictionary__DictionaryDesc_IterKeys,(void*)ADT_Dictionary__DictionaryDesc_IterValues}, (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc, &_td_Object__StringDesc, &_td_OOC_SymbolTable__NameDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.DictionaryDesc(Object.String,OOC:SymbolTable.Name)", 20, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd5 = { (RT0__Struct[]){&_td__qtd4}, NULL, (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary, &_td_Object__StringDesc, &_td_OOC_SymbolTable__NameDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.Dictionary(Object.String,OOC:SymbolTable.Name)", 4, 0, 0, RT0__strQualType };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"OOC:SymbolTable:Builder", (RT0__Struct[]) { &_td_OOC_SymbolTable_Builder__Builder, &_td_OOC_SymbolTable_Builder__BuilderDesc, &_td_OOC_SymbolTable_Builder__Writer, &_td_OOC_SymbolTable_Builder__WriterDesc, &_td_OOC_SymbolTable_Builder__Reader, &_td_OOC_SymbolTable_Builder__ReaderDesc, &_td_OOC_SymbolTable_Builder__AutoImport, &_td_OOC_SymbolTable_Builder__Name, &_td_OOC_SymbolTable_Builder__AutoImportDesc, &_td__qtd0, &_td__qtd1, &_td__qtd2, &_td__qtd3, &_td__qtd4, &_td__qtd5, NULL }, 0 };

extern void OOC_OOC_SymbolTable_Builder_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Out_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Object_Boxed_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_IO_open(&_mid);
    OOC_OOC_Doc_open(&_mid);
    OOC_OOC_AST_open(&_mid);
    OOC_OOC_SymbolTable_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_OOC_SymbolTable_Builder_init();
  }
  _mid.openCount++;
}
extern void OOC_OOC_SymbolTable_Builder_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_OOC_SymbolTable_Builder_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Out_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Object_Boxed_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_IO_close(&_mid);
    OOC_OOC_Doc_close(&_mid);
    OOC_OOC_AST_close(&_mid);
    OOC_OOC_SymbolTable_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
