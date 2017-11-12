static void* _c0;
static void* _c1;
static void* _c2;
static void* _c3;
#include <URI/Query/WWWForm.oh>
#include <Strings.oh>
#include <CharClass.oh>
#include <URI/String.oh>
#include <URI/CharClass.oh>
#define URI_Query_WWWForm__unreservedQChar (OOC_CHAR8[])":@+$,"

/* run-time meta data */
static RT0__ModuleDesc _mid;
RT0__StructDesc _td_URI_Query_WWWForm__Query = { (RT0__Struct[]){&_td_URI_Query_WWWForm__QueryDesc}, NULL, NULL, &_mid, (OOC_CHAR8*)"Query", 4, -1, 0, RT0__strPointer };
RT0__StructDesc _td_URI_Query_WWWForm__QueryDesc = { (RT0__Struct[]){&_td_URI__QueryDesc,&_td_URI_Query_WWWForm__QueryDesc}, (void*[]){(void*)URI_Query_WWWForm__QueryDesc_Clone,(void*)URI_Query_WWWForm__QueryDesc_Copy,(void*)URI_Query_WWWForm__QueryDesc_ParseQuery,(void*)URI_Query_WWWForm__QueryDesc_WriteXML,(void*)URI_Query_WWWForm__QueryDesc_Append,(void*)URI_Query_WWWForm__QueryDesc_Add,(void*)URI_Query_WWWForm__QueryDesc_ParseString}, NULL, &_mid, (OOC_CHAR8*)"QueryDesc", 12, 1, 0, RT0__strRecord };
RT0__StructDesc _td_URI_Query_WWWForm__2904 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1, 1, (1<<RT0__flagAtomic), RT0__strOpenArray };
RT0__StructDesc _td_URI_Query_WWWForm__2996 = { (RT0__Struct[]){&RT0__char}, NULL, NULL, &_mid, NULL, 1024, 1024, (1<<RT0__flagAtomic), RT0__strArray };
static RT0__StructDesc _td__qtd0 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd0}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_ArrayList__ArrayListDesc_Equals,(void*)ADT_ArrayList__ArrayListDesc_HashCode,(void*)ADT_ArrayList__ArrayListDesc_Store,(void*)ADT_ArrayList__ArrayListDesc_Load,(void*)ADT_ArrayList__ArrayListDesc_CreateArray,(void*)ADT_ArrayList__ArrayListDesc_INIT,(void*)ADT_ArrayList__ArrayListDesc_Destroy,(void*)ADT_ArrayList__ArrayListDesc_Copy,(void*)ADT_ArrayList__ArrayListDesc_EnsureCapacity,(void*)ADT_ArrayList__ArrayListDesc_Clear,(void*)ADT_ArrayList__ArrayListDesc_Append,(void*)ADT_ArrayList__ArrayListDesc_Insert,(void*)ADT_ArrayList__ArrayListDesc_Get,(void*)ADT_ArrayList__ArrayListDesc_Set,(void*)ADT_ArrayList__ArrayListDesc_RemoveRange,(void*)ADT_ArrayList__ArrayListDesc_Remove,(void*)ADT_ArrayList__ArrayListDesc_TrimToSize,(void*)ADT_ArrayList__ArrayListDesc_Size,(void*)ADT_ArrayList__ArrayListDesc_Contains,(void*)ADT_ArrayList__ArrayListDesc_IndexOf,(void*)ADT_ArrayList__ArrayListDesc_LastIndexOf,(void*)ADT_ArrayList__ArrayListDesc_IsEmpty,(void*)ADT_ArrayList__ArrayListDesc_Sort,(void*)ADT_ArrayList__ArrayListDesc_Elements,(void*)ADT_ArrayList__ArrayListDesc_IterElements}, (RT0__Struct[]){&_td_ADT_ArrayList__ArrayListDesc, &_td_Object__StringDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.ArrayListDesc(Object.String)", 8, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd1 = { (RT0__Struct[]){&_td__qtd0}, NULL, (RT0__Struct[]){&_td_ADT_ArrayList__ArrayList, &_td_Object__StringDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:ArrayList.ArrayList(Object.String)", 4, 0, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd2 = { (RT0__Struct[]){&_td_RT0__ObjectDesc,&_td_Object__ObjectDesc,&_td_ADT_Storable__ObjectDesc,&_td__qtd2}, (void*[]){(void*)RT0__ObjectDesc_Finalize,(void*)Object__ObjectDesc_ToString,(void*)ADT_Dictionary__DictionaryDesc_Equals,(void*)ADT_Dictionary__DictionaryDesc_HashCode,(void*)ADT_Dictionary__DictionaryDesc_Store,(void*)ADT_Dictionary__DictionaryDesc_Load,(void*)ADT_Dictionary__DictionaryDesc_INIT,(void*)ADT_Dictionary__DictionaryDesc_Destroy,(void*)ADT_Dictionary__DictionaryDesc_InternalLookup,(void*)ADT_Dictionary__DictionaryDesc_Insert,(void*)ADT_Dictionary__DictionaryDesc_Resize,(void*)ADT_Dictionary__DictionaryDesc_HasKey,(void*)ADT_Dictionary__DictionaryDesc_Size,(void*)ADT_Dictionary__DictionaryDesc_Get,(void*)ADT_Dictionary__DictionaryDesc_Lookup,(void*)ADT_Dictionary__DictionaryDesc_Set,(void*)ADT_Dictionary__DictionaryDesc_Copy,(void*)ADT_Dictionary__DictionaryDesc_Delete,(void*)ADT_Dictionary__DictionaryDesc_Clear,(void*)ADT_Dictionary__DictionaryDesc_Keys,(void*)ADT_Dictionary__DictionaryDesc_Values,(void*)ADT_Dictionary__DictionaryDesc_Items,(void*)ADT_Dictionary__DictionaryDesc_IterKeys,(void*)ADT_Dictionary__DictionaryDesc_IterValues}, (RT0__Struct[]){&_td_ADT_Dictionary__DictionaryDesc, &_td_Object__StringDesc, &_td_ADT_ArrayList__ArrayListDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.DictionaryDesc(Object.String,ADT:ArrayList.ArrayList(Object.String))", 20, 3, 0, RT0__strQualType };
static RT0__StructDesc _td__qtd3 = { (RT0__Struct[]){&_td__qtd2}, NULL, (RT0__Struct[]){&_td_ADT_Dictionary__Dictionary, &_td_Object__StringDesc, &_td_ADT_ArrayList__ArrayListDesc, NULL}, &_mid, (OOC_CHAR8*)"ADT:Dictionary.Dictionary(Object.String,ADT:ArrayList.ArrayList(Object.String))", 4, 0, 0, RT0__strQualType };
static RT0__ModuleDesc _mid = { (OOC_CHAR8*)"URI:Query:WWWForm", (RT0__Struct[]) { &_td_URI_Query_WWWForm__Query, &_td_URI_Query_WWWForm__QueryDesc, &_td__qtd0, &_td__qtd1, &_td__qtd2, &_td__qtd3, NULL }, 0 };

extern void OOC_URI_Query_WWWForm_open(RT0__Module client) {
  if (_mid.openCount == 0) {
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);
    OOC_ADT_Dictionary_open(&_mid);
    OOC_ADT_ArrayList_open(&_mid);
    OOC_ADT_StringBuffer_open(&_mid);
    OOC_Strings_open(&_mid);
    OOC_TextRider_open(&_mid);
    OOC_CharClass_open(&_mid);
    OOC_URI_open(&_mid);
    OOC_URI_String_open(&_mid);
    OOC_URI_CharClass_open(&_mid);
    OOC_RT0_open(&_mid);
    OOC_Object_open(&_mid);
    OOC_Exception_open(&_mid);

    RT0__RegisterModule(&_mid);
    OOC_URI_Query_WWWForm_init();
  }
  _mid.openCount++;
}
extern void OOC_URI_Query_WWWForm_close(RT0__Module client) {
  _mid.openCount--;
  if (_mid.openCount == 0) { 
    OOC_URI_Query_WWWForm_destroy();
    RT0__UnregisterModule(&_mid);

    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
    OOC_ADT_Dictionary_close(&_mid);
    OOC_ADT_ArrayList_close(&_mid);
    OOC_ADT_StringBuffer_close(&_mid);
    OOC_Strings_close(&_mid);
    OOC_TextRider_close(&_mid);
    OOC_CharClass_close(&_mid);
    OOC_URI_close(&_mid);
    OOC_URI_String_close(&_mid);
    OOC_URI_CharClass_close(&_mid);
    OOC_RT0_close(&_mid);
    OOC_Object_close(&_mid);
    OOC_Exception_close(&_mid);
  }
}

/* --- */
