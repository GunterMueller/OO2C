#include <OOC/SymbolTable/Predef.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_SymbolTable__Name OOC_SymbolTable_Predef__GetName(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_SymbolTable__Name n;
  OOC_Scanner_InputBuffer__CharArray str;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__Name.baseTypes[0]);
  n = (OOC_SymbolTable__Name)i0;
  i1 = Strings__Length((void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_Scanner_InputBuffer__CharArray.baseTypes[0], (i1+1));
  str = (OOC_Scanner_InputBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6029)), 0);
  _copy_8((const void*)(OOC_INT32)name,(void*)(_check_pointer(i1, 6029)),i2);
  OOC_SymbolTable__InitName((OOC_SymbolTable__Name)i0, (OOC_Scanner_InputBuffer__CharArray)i1, 0, 1, 0);
  return (OOC_SymbolTable__Name)i0;
  ;
}

static OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__PredefType(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT32 size, OOC_INT16 align, Object_Boxed__Object minValue, Object_Boxed__Object maxValue) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)
  OOC_SymbolTable__PredefType ptype;

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)stb;
  i1 = (OOC_INT32)module;
  i2 = id;
  i3 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6475)))), OOC_SymbolTable_Builder__BuilderDesc_NewPredefType)),OOC_SymbolTable_Builder__BuilderDesc_NewPredefType)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, i2);
  ptype = (OOC_SymbolTable__PredefType)i3;
  i4 = size;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6514)))), OOC_SymbolTable__TypeDesc_SetSize)),OOC_SymbolTable__TypeDesc_SetSize)((OOC_SymbolTable__Type)i3, i4, i4);
  i4 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i4 = _check_pointer(i4, 6568);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT16, 6568))*4) = i3;
  i4 = (OOC_INT32)minValue;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i2, 19, OOC_UINT16, 6595))*4) = i4;
  i4 = (OOC_INT32)maxValue;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i2, 19, OOC_UINT16, 6625))*4) = i4;
  i2 = (
  _cmp8((const void*)(OOC_INT32)name,(const void*)(OOC_CHAR8*)""))!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6685)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i0, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i2, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Type)i3, 0u);
l3:
  return (OOC_SymbolTable__PredefType)i3;
  ;
}

static OOC_SymbolTable__VarDecl OOC_SymbolTable_Predef__PredefVar(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)stb;
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)type;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7101)))), OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewVarDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i0, 0, 0, (OOC_Doc__Document)(OOC_INT32)0, 0u, 0u, 0u, (OOC_SymbolTable__Type)i3);
  return (OOC_SymbolTable__VarDecl)i0;
  ;
}

static void OOC_SymbolTable_Predef__TypeAlias(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_SymbolTable__PredefType baseType) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)stb;
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)baseType;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7445)))), OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewTypeDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i0, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (OOC_SymbolTable__Type)i3, 0u);
  return;
  ;
}

static void OOC_SymbolTable_Predef__PredefProc(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__Module module, OOC_INT16 id, const OOC_CHAR8 name__ref[], OOC_LEN name_0d, OOC_INT16 minArgs, OOC_INT16 maxArgs) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
  i1 = (OOC_INT32)stb;
  i2 = (OOC_INT32)module;
  i3 = id;
  i4 = minArgs;
  i5 = maxArgs;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7809)))), OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc)),OOC_SymbolTable_Builder__BuilderDesc_NewPredefProc)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i0, i3, i4, i5);
  return;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Predef__CreatePredef(OOC_SymbolTable_Builder__Builder stb, OOC_SymbolTable__VarDecl *exception) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__PredefType ptype;
  OOC_SymbolTable__Redirect redir;
  auto void OOC_SymbolTable_Predef__CreatePredef_PredefConst(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Object_Boxed__Object value, OOC_SymbolTable__PredefType type);
    
    void OOC_SymbolTable_Predef__CreatePredef_PredefConst(const OOC_CHAR8 name__ref[], OOC_LEN name_0d, Object_Boxed__Object value, OOC_SymbolTable__PredefType type) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

      OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
      i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((void*)(OOC_INT32)name, name_0d);
      i1 = (OOC_INT32)stb;
      i2 = (OOC_INT32)module;
      i3 = (OOC_INT32)value;
      i4 = (OOC_INT32)type;
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8624)))), OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)),OOC_SymbolTable_Builder__BuilderDesc_NewConstDecl)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i0, 0, 1, (OOC_Doc__Document)(OOC_INT32)0, (Object_Boxed__Object)i3, (OOC_SymbolTable__PredefType)i4, (OOC_AST__Node)(OOC_INT32)0);
      return;
      ;
    }


  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((OOC_CHAR8*)"#predef", 8);
  i1 = (OOC_INT32)stb;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8791)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Name)i0, (OOC_Doc__Document)(OOC_INT32)0, 1, 1, (OOC_AST__Node)(OOC_INT32)0);
  module = (OOC_SymbolTable__Module)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 0, (OOC_CHAR8*)"BOOLEAN", 8, 1, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i0;
  i1 = (OOC_INT32)Object_Boxed__false;
  OOC_SymbolTable_Predef__CreatePredef_PredefConst((OOC_CHAR8*)"FALSE", 6, (Object_Boxed__Object)i1, (OOC_SymbolTable__PredefType)i0);
  i0 = (OOC_INT32)Object_Boxed__true;
  i1 = (OOC_INT32)ptype;
  OOC_SymbolTable_Predef__CreatePredef_PredefConst((OOC_CHAR8*)"TRUE", 5, (Object_Boxed__Object)i0, (OOC_SymbolTable__PredefType)i1);
  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  i1 = (OOC_INT32)Object__NewLatin1Char(255u);
  Object_Boxed__StringDesc_INIT((Object_Boxed__String)i0, (Object__String)i1);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  i2 = (OOC_INT32)Object__NewLatin1Char(0u);
  Object_Boxed__StringDesc_INIT((Object_Boxed__String)i1, (Object__String)i2);
  i2 = (OOC_INT32)module;
  i3 = (OOC_INT32)stb;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 1, (OOC_CHAR8*)"CHAR", 5, 1, 1, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  i1 = (OOC_INT32)Object__NewUTF16Char(65535u);
  Object_Boxed__StringDesc_INIT((Object_Boxed__String)i0, (Object__String)i1);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  i4 = (OOC_INT32)Object__NewUTF16Char(0u);
  Object_Boxed__StringDesc_INIT((Object_Boxed__String)i1, (Object__String)i4);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 2, (OOC_CHAR8*)"LONGCHAR", 9, 2, 2, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  i1 = (OOC_INT32)Object__NewUCS4Char(1114111u);
  Object_Boxed__StringDesc_INIT((Object_Boxed__String)i0, (Object__String)i1);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__String.baseTypes[0]);
  i4 = (OOC_INT32)Object__NewUCS4Char(0u);
  Object_Boxed__StringDesc_INIT((Object_Boxed__String)i1, (Object__String)i4);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 3, (OOC_CHAR8*)"UCS4CHAR", 9, 4, 4, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)Object_BigInt__NewInt(127);
  i1 = (OOC_INT32)Object_BigInt__NewInt((-128));
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 4, (OOC_CHAR8*)"SHORTINT", 9, 1, 1, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)Object_BigInt__NewInt(32767);
  i1 = (OOC_INT32)Object_BigInt__NewInt((-32768));
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 5, (OOC_CHAR8*)"INTEGER", 8, 2, 2, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)Object_BigInt__NewInt(2147483647);
  i1 = (OOC_INT32)Object_BigInt__NewInt((-2147483647-1));
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 6, (OOC_CHAR8*)"LONGINT", 8, 4, 4, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)Object_BigInt__NewLatin1((OOC_CHAR8*)"9223372036854775807", 20, 10);
  i1 = (OOC_INT32)Object_BigInt__NewLatin1((OOC_CHAR8*)"-9223372036854775808", 21, 10);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 7, (OOC_CHAR8*)"HUGEINT", 8, 8, 8, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__LongReal.baseTypes[0]);
  Object_Boxed__LongRealDesc_INIT((Object_Boxed__LongReal)i0, 3.4028234663852886E+38);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__LongReal.baseTypes[0]);
  Object_Boxed__LongRealDesc_INIT((Object_Boxed__LongReal)i1, (-3.4028234663852886E+38));
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 8, (OOC_CHAR8*)"REAL", 5, 4, 4, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__LongReal.baseTypes[0]);
  Object_Boxed__LongRealDesc_INIT((Object_Boxed__LongReal)i0, 1.7976931348623157E+308);
  i1 = (OOC_INT32)RT0__NewObject(_td_Object_Boxed__LongReal.baseTypes[0]);
  Object_Boxed__LongRealDesc_INIT((Object_Boxed__LongReal)i1, (-1.7976931348623157E+308));
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 9, (OOC_CHAR8*)"LONGREAL", 9, 8, 8, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)Object_BigInt__NewInt(31);
  i1 = (OOC_INT32)Object_BigInt__NewInt(0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 10, (OOC_CHAR8*)"SET", 4, 4, 4, (Object_Boxed__Object)i1, (Object_Boxed__Object)i0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 13, (OOC_CHAR8*)"", 1, (-1), 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 14, (OOC_CHAR8*)"", 1, (-1), 2, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 15, (OOC_CHAR8*)"", 1, (-1), 4, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 16, (OOC_CHAR8*)"", 1, 4, 4, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 17, (OOC_CHAR8*)"", 1, 0, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 18, (OOC_CHAR8*)"", 1, 0, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i0;
  i0 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i0 = _check_pointer(i0, 11744);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(16, i1, OOC_UINT8, 11744))*4);
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__PredefVar((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, (OOC_CHAR8*)"EXCEPTION", 10, (OOC_SymbolTable__Type)i0);
  *exception = (OOC_SymbolTable__VarDecl)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringType;
  i1 = (OOC_INT32)OOC_SymbolTable_Predef__nameStringModule;
  i4 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((OOC_CHAR8*)"STRING", 7);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11773)))), OOC_SymbolTable_Builder__BuilderDesc_NewRedirect)),OOC_SymbolTable_Builder__BuilderDesc_NewRedirect)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Item)i2, (OOC_SymbolTable__Name)i4, (OOC_SymbolTable__Name)i1, (OOC_SymbolTable__Name)i0);
  redir = (OOC_SymbolTable__Redirect)i0;
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 0, (OOC_CHAR8*)"ASSERT", 7, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 1, (OOC_CHAR8*)"HALT", 5, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 2, (OOC_CHAR8*)"LEN", 4, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 3, (OOC_CHAR8*)"SIZE", 5, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 4, (OOC_CHAR8*)"INC", 4, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 5, (OOC_CHAR8*)"DEC", 4, 1, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 6, (OOC_CHAR8*)"INCL", 5, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 7, (OOC_CHAR8*)"EXCL", 5, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 8, (OOC_CHAR8*)"ABS", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 9, (OOC_CHAR8*)"ASH", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 10, (OOC_CHAR8*)"CAP", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 11, (OOC_CHAR8*)"LONG", 5, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 12, (OOC_CHAR8*)"SHORT", 6, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 13, (OOC_CHAR8*)"CHR", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 14, (OOC_CHAR8*)"LONGCHR", 8, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 15, (OOC_CHAR8*)"UCS4CHR", 8, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 16, (OOC_CHAR8*)"ENTIER", 7, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 17, (OOC_CHAR8*)"ODD", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 18, (OOC_CHAR8*)"ORD", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 19, (OOC_CHAR8*)"MAX", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 20, (OOC_CHAR8*)"MIN", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 21, (OOC_CHAR8*)"NEW", 4, 1, 32767);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 22, (OOC_CHAR8*)"COPY", 5, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2, 23, (OOC_CHAR8*)"RAISE", 6, 1, 1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 13112)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i3, (OOC_SymbolTable__Module)i2);
  return (OOC_SymbolTable__Module)i2;
  ;
}

OOC_SymbolTable__Module OOC_SymbolTable_Predef__CreateSYSTEM(OOC_SymbolTable_Builder__Builder stb) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SymbolTable__Module module;
  OOC_SymbolTable__PredefType ptype;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((OOC_CHAR8*)"SYSTEM", 7);
  i1 = (OOC_INT32)stb;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13382)))), OOC_SymbolTable_Builder__BuilderDesc_NewModule)),OOC_SymbolTable_Builder__BuilderDesc_NewModule)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Name)i0, (OOC_Doc__Document)(OOC_INT32)0, 1, 1, (OOC_AST__Node)(OOC_INT32)0);
  module = (OOC_SymbolTable__Module)i0;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i2 = _check_pointer(i2, 13552);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(6, i3, OOC_UINT8, 13552))*4);
  OOC_SymbolTable_Predef__TypeAlias((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, (OOC_CHAR8*)"ADDRESS", 8, (OOC_SymbolTable__PredefType)i2);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 11, (OOC_CHAR8*)"BYTE", 5, 1, 1, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i2;
  i2 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i3 = _check_pointer(i2, 13785);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(6, i4, OOC_UINT8, 13785))*4);
  i2 = _check_pointer(i2, 13726);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(6, i4, OOC_UINT8, 13726))*4);
  i3 = *(OOC_INT16*)((_check_pointer(i3, 13794))+36);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 13735))+32);
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__PredefType((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 12, (OOC_CHAR8*)"PTR", 4, i2, i3, (Object_Boxed__Object)(OOC_INT32)0, (Object_Boxed__Object)(OOC_INT32)0);
  ptype = (OOC_SymbolTable__PredefType)i2;
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 24, (OOC_CHAR8*)"ADR", 4, 1, 1);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 25, (OOC_CHAR8*)"LSH", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 26, (OOC_CHAR8*)"MOVE", 5, 3, 3);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 27, (OOC_CHAR8*)"NEW", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 28, (OOC_CHAR8*)"ROT", 4, 2, 2);
  OOC_SymbolTable_Predef__PredefProc((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0, 29, (OOC_CHAR8*)"VAL", 4, 2, 2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14147)))), OOC_SymbolTable_Builder__BuilderDesc_Finalize)),OOC_SymbolTable_Builder__BuilderDesc_Finalize)((OOC_SymbolTable_Builder__Builder)i1, (OOC_SymbolTable__Module)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

OOC_SymbolTable__PredefType OOC_SymbolTable_Predef__GetType(OOC_INT16 id) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)OOC_SymbolTable__predefIdToType;
  i0 = _check_pointer(i0, 14299);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = id;
  i0 = (OOC_INT32)*(OOC_INT32*)(i0+(_check_index(i2, i1, OOC_UINT16, 14299))*4);
  return (OOC_SymbolTable__PredefType)i0;
  ;
}

Object_Boxed__Object OOC_SymbolTable_Predef__GetMin(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14391)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return (Object_Boxed__Object)(OOC_INT32)0;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 14437))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i0, 19, OOC_UINT16, 14432))*4);
  return (Object_Boxed__Object)i0;
l4:
  _failed_function(14330); return 0;
  ;
}

Object_Boxed__Object OOC_SymbolTable_Predef__GetMax(OOC_SymbolTable__Type type) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)type;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14566)))), &_td_OOC_SymbolTable__PredefTypeDesc);
  if (i1) goto l3;
  return (Object_Boxed__Object)(OOC_INT32)0;
  goto l4;
l3:
  i0 = *(OOC_INT16*)((_check_pointer(i0, 14612))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i0, 19, OOC_UINT16, 14607))*4);
  return (Object_Boxed__Object)i0;
l4:
  _failed_function(14505); return 0;
  ;
}

OOC_SymbolTable__Type OOC_SymbolTable_Predef__SmallestIntType(Object_BigInt__BigInt value) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)value;
  i1=4;
l1_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i1, 19, OOC_UINT16, 14898))*4);
  i2 = Object_BigInt__BigIntDesc_Cmp((Object_BigInt__BigInt)i0, (Object__Object)i2);
  i2 = i2>=0;
  if (i2) goto l4;
  i2=0u;
  goto l6;
l4:
  i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i1, 19, OOC_UINT16, 14930))*4);
  i2 = Object_BigInt__BigIntDesc_Cmp((Object_BigInt__BigInt)i0, (Object__Object)i2);
  i2 = i2<=0;
  
l6:
  if (!i2) goto l8;
  i2 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(i1);
  return (OOC_SymbolTable__Type)i2;
l8:
  i1 = i1+1;
  i2 = i1<=7;
  if (i2) goto l1_loop;
l12:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetType(18);
  return (OOC_SymbolTable__Type)i0;
  ;
}

OOC_CHAR8 OOC_SymbolTable_Predef__IsStaticMethod(const OOC_CHAR8 name__ref[], OOC_LEN name_0d) {
  OOC_ALLOCATE_VPAR(name,OOC_CHAR8 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR8 ,name_0d)
  return ((
  _cmp8((const void*)(OOC_INT32)name,(const void*)(OOC_CHAR8*)"INIT"))==0);
  ;
}

OOC_CHAR8 OOC_SymbolTable_Predef__ImplementsFinalize(OOC_SymbolTable__Record t) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_SymbolTable__Declaration decl;
  OOC_SymbolTable__Type root;
  OOC_SymbolTable__Type impl;

  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((OOC_CHAR8*)"Finalize", 9);
  i1 = (OOC_INT32)t;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15724))+52);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15724))+52);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 15727)))), OOC_SymbolTable__NamespaceDesc_Identify)),OOC_SymbolTable__NamespaceDesc_Identify)((OOC_SymbolTable__Namespace)i3, (OOC_SymbolTable__Item)i1, (OOC_SymbolTable__Name)i0, 1u);
  decl = (OOC_SymbolTable__Declaration)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15790)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  
l5:
  if (i2) goto l7;
  return 0u;
  goto l37;
l7:
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15947)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  root = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15977)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l10;
  i2=0u;
  goto l12;
l10:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16004)))), &_td_OOC_SymbolTable__RecordDesc, 16004)), 16011))+40);
  i2 = i2!=(OOC_INT32)0;
  
l12:
  if (!i2) goto l24;
l15_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16056)))), &_td_OOC_SymbolTable__RecordDesc, 16056)), 16063))+40);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16056)))), &_td_OOC_SymbolTable__RecordDesc, 16056)), 16063))+40);
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16072)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i1);
  root = (OOC_SymbolTable__Type)i1;
  i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15977)))), &_td_OOC_SymbolTable__RecordDesc);
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16004)))), &_td_OOC_SymbolTable__RecordDesc, 16004)), 16011))+40);
  i2 = i2!=(OOC_INT32)0;
  
l20:
  if (i2) goto l15_loop;
l24:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16187)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16187)), 16196))+64);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16207))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16187)))), &_td_OOC_SymbolTable__ProcDeclDesc, 16187)), 16196))+64);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16207))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16216))+48);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 16216))+48);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16221)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i2);
  impl = (OOC_SymbolTable__Type)i0;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16256)))), &_td_OOC_SymbolTable__PointerDesc, 16256)), 16264))+40);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16256)))), &_td_OOC_SymbolTable__PointerDesc, 16256)), 16264))+40);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 16273)))), OOC_SymbolTable__TypeDesc_Deparam)),OOC_SymbolTable__TypeDesc_Deparam)((OOC_SymbolTable__Type)i0);
  impl = (OOC_SymbolTable__Type)i0;
  i0 = i0!=i1;
  if (i0) goto l27;
  i0=0u;
  goto l29;
l27:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16336))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16347))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16352))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 16356)),(const void*)(OOC_CHAR8*)"ObjectDesc"))==0;
  
l29:
  if (i0) goto l31;
  i0=0u;
  goto l33;
l31:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16384))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16395))+4);
  i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16403)))), &_td_OOC_SymbolTable__ModuleDesc);
  
l33:
  if (i0) goto l35;
  i0=0u;
  goto l36;
l35:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16435))+24);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16446))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16458)))), &_td_OOC_SymbolTable__ModuleDesc, 16458)), 16465))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16470))+12);
  i0 = (
  _cmp8((const void*)(_check_pointer(i0, 16474)),(const void*)(OOC_CHAR8*)"RT0"))==0;
  
l36:
  return i0;
l37:
  _failed_function(15309); return 0;
  ;
}

static void OOC_SymbolTable_Predef__Init(void) {
  register OOC_INT32 i0,i1;

  OOC_SymbolTable__predefIdToType = (void*)((OOC_INT32)RT0__NewObject(_td_OOC_SymbolTable__44734.baseTypes[0], 19));
  i0=0;
l1_loop:
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__minConst+(_check_index(i0, 19, OOC_UINT32, 16680))*4) = (OOC_INT32)0;
  *(OOC_INT32*)((OOC_INT32)OOC_SymbolTable_Predef__maxConst+(_check_index(i0, 19, OOC_UINT32, 16700))*4) = (OOC_INT32)0;
  i0 = i0+1;
  i1 = i0<=18;
  if (i1) goto l1_loop;
l5:
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((OOC_CHAR8*)"-Object", 8);
  OOC_SymbolTable_Predef__nameStringModule = (OOC_SymbolTable__Name)i0;
  i0 = (OOC_INT32)OOC_SymbolTable_Predef__GetName((OOC_CHAR8*)"String", 7);
  OOC_SymbolTable_Predef__nameStringType = (OOC_SymbolTable__Name)i0;
  return;
  ;
}

void OOC_OOC_SymbolTable_Predef_init(void) {

  OOC_SymbolTable_Predef__Init();
  return;
  ;
}

void OOC_OOC_SymbolTable_Predef_destroy(void) {
}

/* --- */
