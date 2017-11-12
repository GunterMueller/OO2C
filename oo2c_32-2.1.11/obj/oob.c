#include <oob.d>
#include <__oo2c.h>
#include <setjmp.h>

static OOC_Repository__Module oob__GetModule(Object__String moduleName) {
  register OOC_INT32 i0,i1,i2,i3;
  Object__String8 str;
  Object__CharsLatin1 chars;
  OOC_Repository__Module m;

  i0 = (OOC_INT32)moduleName;
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1686)))), Object__StringDesc_ToString8)),Object__StringDesc_ToString8)((Object__String)i0, 63u);
  str = (Object__String8)i1;
  i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 1779)), 0);
  i3 = (OOC_INT32)OOC_Config__repositories;
  i1 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i3, (void*)(_check_pointer(i1, 1779)), i2);
  m = (OOC_Repository__Module)i1;
  i2 = i1==(OOC_INT32)0;
  if (!i2) goto l4;
  Err__String((OOC_CHAR8*)"Error: Cannot locate module ", 29);
  Err__Object((Object__Object)i0);
  Err__Ln();
  _halt(1);
l4:
  return (OOC_Repository__Module)i1;
  ;
}

static OOC_SymbolTable__Module oob__GetSymTab(OOC_Repository__Module module) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)module;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2051)))), OOC_Repository__ModuleDesc_ReadSymbolFile)),OOC_Repository__ModuleDesc_ReadSymbolFile)((OOC_Repository__Module)i0);
  return (OOC_SymbolTable__Module)i0;
  ;
}

static void oob__WriteSymTab(OOC_SymbolTable__Module symTab) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 indent;
  OOC_INT8 currentSection;
  OOC_CHAR8 firstImport;
  OOC_SymbolTable__Item item;
  OOC_SymbolTable__Declaration declDoc;
  auto void oob__WriteSymTab_Newline(void);
  auto void oob__WriteSymTab_SetSection(OOC_INT8 newSection);
  auto void oob__WriteSymTab_IdentDef(OOC_SymbolTable__Declaration decl);
  auto void oob__WriteSymTab_WriteDoc(OOC_SymbolTable__Declaration decl);
  auto void oob__WriteSymTab_VarDecl(OOC_SymbolTable__VarDecl varDecl);
  auto void oob__WriteSymTab_ProcDecl(OOC_SymbolTable__ProcDecl procDecl);
  auto void oob__WriteSymTab_Type(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType, OOC_SymbolTable__Declaration *declDoc);
  auto void oob__WriteSymTab_FormalPars(OOC_SymbolTable__FormalPars type);
  auto void oob__WriteSymTab_Type(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType, OOC_SymbolTable__Declaration *declDoc);
  auto void oob__WriteSymTab_Import(OOC_SymbolTable__Import import);
  auto void oob__WriteSymTab_ConstDecl(OOC_SymbolTable__ConstDecl constDecl);
  auto void oob__WriteSymTab_TypeDecl(OOC_SymbolTable__TypeDecl typeDecl);
  auto void oob__WriteSymTab_VarDecl(OOC_SymbolTable__VarDecl varDecl);
  auto void oob__WriteSymTab_ProcDecl(OOC_SymbolTable__ProcDecl procDecl);
  auto OOC_CHAR8 oob__WriteSymTab_WriteTopLevel(OOC_SymbolTable__Item item);
    
    void oob__WriteSymTab_Newline(void) {
      register OOC_INT32 i0,i1,i2;

      Out__Ln();
      i0 = indent;
      i1 = 1<=i0;
      if (!i1) goto l8;
      i1=1;
l3_loop:
      Out__String((OOC_CHAR8*)"  ", 3);
      i1 = i1+1;
      i2 = i1<=i0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }

    
    void oob__WriteSymTab_SetSection(OOC_INT8 newSection) {
      register OOC_INT32 i0,i1,i2;

      i0 = currentSection;
      i1 = newSection;
      i2 = i1!=i0;
      if (i2) goto l6;
      i0 = i0!=0;
      if (!i0) goto l27;
      oob__WriteSymTab_Newline();
      goto l27;
l6:
      i0 = i0==0;
      if (!i0) goto l9;
      Out__String((OOC_CHAR8*)";", 2);
l9:
      i0 = currentSection;
      i0 = i0!=(-1);
      if (!i0) goto l12;
      i0 = indent;
      indent = (i0-1);
l12:
      i0 = i1!=4;
      if (!i0) goto l15;
      oob__WriteSymTab_Newline();
l15:
      oob__WriteSymTab_Newline();
      switch (i1) {
      case 0:
        Out__String((OOC_CHAR8*)"IMPORT", 7);
        goto l24;
      case 1:
        Out__String((OOC_CHAR8*)"CONST", 6);
        goto l24;
      case 2:
        Out__String((OOC_CHAR8*)"TYPE", 5);
        goto l24;
      case 3:
        Out__String((OOC_CHAR8*)"VAR", 4);
        goto l24;
      case 4:
        goto l24;
      default:
        _failed_case(i1, 2911);
        goto l24;
      }
l24:
      if (!i0) goto l26;
      i0 = indent;
      indent = (i0+1);
l26:
      currentSection = i1;
      oob__WriteSymTab_Newline();
l27:
      return;
      ;
    }

    
    void oob__WriteSymTab_IdentDef(OOC_SymbolTable__Declaration decl) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3443))+20);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3448))+12);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3443))+20);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3448))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3452)), 0);
      Out__String((void*)(_check_pointer(i2, 3452)), i1);
      i0 = *(OOC_INT8*)((_check_pointer(i0, 3471))+28);
      switch (i0) {
      case 0:
        goto l6;
      case 1:
        Out__String((OOC_CHAR8*)"*", 2);
        goto l6;
      case 2:
        Out__String((OOC_CHAR8*)"-", 2);
        goto l6;
      default:
        _failed_case(i0, 3462);
        goto l6;
      }
l6:
      return;
      ;
    }

    
    void oob__WriteSymTab_WriteDoc(OOC_SymbolTable__Declaration decl) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 indentLevel;
      OOC_Scanner_InputBuffer__CharArray str;
      OOC_INT32 i;
      OOC_INT32 j;

      i0 = (OOC_INT32)decl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3771))+32);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l16;
      i1 = indent;
      i1 = 3+i1*2;
      indentLevel = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3871))+32);
      i0 = (OOC_INT32)OOC_Doc_Output_Text__Convert((OOC_Doc__Document)i0, i1, 76, 0);
      str = (OOC_Scanner_InputBuffer__CharArray)i0;
      i = 0;
      j = 0;
      i2 = _check_pointer(i0, 4006);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = *(OOC_UINT8*)(i2+(_check_index(0, i3, OOC_UINT32, 4006)));
      i2 = i2!=0u;
      if (i2) goto l5;
      i2=0;
      goto l15;
l5:
      i2=0;i3=0;
l6_loop:
      i4 = _check_pointer(i0, 4036);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 4036)));
      i4 = (OOC_UINT8)i4>(OOC_UINT8)32u;
      if (!i4) goto l10;
      j = i2;
      i3=i2;
l10:
      i2 = i2+1;
      i = i2;
      i4 = _check_pointer(i0, 4006);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = *(OOC_UINT8*)(i4+(_check_index(i2, i5, OOC_UINT32, 4006)));
      i4 = i4!=0u;
      if (i4) goto l6_loop;
l14:
      i2=i3;
l15:
      i3 = _check_pointer(i0, 4129);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      *(OOC_UINT8*)(i3+(_check_index((i2+1), i4, OOC_UINT32, 4129))) = 0u;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4168)), 0);
      Strings__Delete((void*)(_check_pointer(i0, 4168)), i2, 0, i1);
      oob__WriteSymTab_Newline();
      Out__String((OOC_CHAR8*)"(* ", 4);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4270)), 0);
      Out__String((void*)(_check_pointer(i0, 4270)), i1);
      Out__String((OOC_CHAR8*)" *)", 4);
l16:
      return;
      ;
    }

    
    void oob__WriteSymTab_FormalPars(OOC_SymbolTable__FormalPars type) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_INT32 i;

      Out__String((OOC_CHAR8*)"(", 2);
      i0 = (OOC_INT32)type;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4637))+52);
      i = 0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 4644)), 0);
      i2 = 0<i1;
      if (!i2) goto l11;
      i2=0;
l3_loop:
      i3 = i2!=0;
      if (!i3) goto l6;
      Out__String((OOC_CHAR8*)"; ", 3);
l6:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4737))+52);
      i3 = _check_pointer(i3, 4744);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 4744))*4);
      oob__WriteSymTab_VarDecl((OOC_SymbolTable__VarDecl)i3);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l3_loop;
l11:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 4774))+56);
      if (!i1) goto l14;
      Out__String((OOC_CHAR8*)"; ...", 6);
l14:
      Out__String((OOC_CHAR8*)")", 2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4875))+44);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l17;
      Out__String((OOC_CHAR8*)": ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4959))+48);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4942))+44);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&oob__noDeclDoc);
l17:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5030))+60);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5037)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l29;
      i2=0;
l20_loop:
      i3 = i2==0;
      if (i3) goto l23;
      Out__String((OOC_CHAR8*)", ", 3);
      goto l24;
l23:
      Out__String((OOC_CHAR8*)" RAISES ", 9);
l24:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5195))+60);
      i3 = _check_pointer(i3, 5202);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 5202))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5174))+60);
      i4 = _check_pointer(i4, 5181);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i2, i5, OOC_UINT32, 5181))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5205))+24);
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 5184))+20);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i3, (void*)(OOC_INT32)&oob__noDeclDoc);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l20_loop;
l29:
      return;
      ;
    }

    
    void oob__WriteSymTab_Type(OOC_SymbolTable__Type type, OOC_SymbolTable__Type srcCodeType, OOC_SymbolTable__Declaration *declDoc) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_Scanner_InputBuffer__CharArray name;
      OOC_INT32 i;
      OOC_SymbolTable__ProcDecl procDecl;
      auto void oob__WriteSymTab_Type_FieldDecl(OOC_SymbolTable__FieldDecl fieldDecl);
      auto void oob__WriteSymTab_Type_RecFields(OOC_SymbolTable__Record record);
      auto OOC_Scanner_InputBuffer__CharArray oob__WriteSymTab_Type_ModuleName(OOC_SymbolTable__TypeName srcCodeType);
        
        void oob__WriteSymTab_Type_FieldDecl(OOC_SymbolTable__FieldDecl fieldDecl) {
          register OOC_INT32 i0,i1;

          oob__WriteSymTab_Newline();
          i0 = (OOC_INT32)fieldDecl;
          oob__WriteSymTab_IdentDef((OOC_SymbolTable__Declaration)i0);
          Out__String((OOC_CHAR8*)": ", 3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5771))+52);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5755))+48);
          oob__WriteSymTab_Type((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&oob__noDeclDoc);
          Out__String((OOC_CHAR8*)";", 2);
          return;
          ;
        }

        
        void oob__WriteSymTab_Type_RecFields(OOC_SymbolTable__Record record) {
          register OOC_INT32 i0,i1;
          OOC_SymbolTable__Item item;

          i0 = (OOC_INT32)oob__extendRecords;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6004))+8);
          i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6019)))), &_td_Config__BooleanVarDesc, 6019)), 6030));
          if (i0) goto l3;
          i0=0u;
          goto l4;
l3:
          i0 = (OOC_INT32)record;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6059))+40);
          i0 = i0!=(OOC_INT32)0;
          
l4:
          i1 = (OOC_INT32)record;
          if (!i0) goto l7;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6107))+40);
          oob__WriteSymTab_Type_RecFields((OOC_SymbolTable__Record)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6121)))), &_td_OOC_SymbolTable__RecordDesc, 6121)));
l7:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6175))+8);
          item = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l21;
l10_loop:
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6238)))), &_td_OOC_SymbolTable__FieldDeclDesc);
          if (!i1) goto l16;
          i1 = *(OOC_INT8*)((_check_pointer(i0, 6277))+28);
          i1 = i1!=0;
          if (!i1) goto l16;
          oob__WriteSymTab_Type_FieldDecl((OOC_SymbolTable__FieldDecl)i0);
          oob__WriteSymTab_WriteDoc((OOC_SymbolTable__Declaration)i0);
l16:
          i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6461));
          item = (OOC_SymbolTable__Item)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l10_loop;
l21:
          return;
          ;
        }

        
        OOC_Scanner_InputBuffer__CharArray oob__WriteSymTab_Type_ModuleName(OOC_SymbolTable__TypeName srcCodeType) {
          register OOC_INT32 i0,i1,i2,i3;
          OOC_SymbolTable__Module currModule;
          OOC_SymbolTable__Item item;

          i0 = (OOC_INT32)srcCodeType;
          i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6689)))), OOC_SymbolTable__ItemDesc_Module)),OOC_SymbolTable__ItemDesc_Module)((OOC_SymbolTable__Item)i0);
          currModule = (OOC_SymbolTable__Module)i1;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6726))+8);
          item = (OOC_SymbolTable__Item)i1;
          i2 = i1!=(OOC_INT32)0;
          if (!i2) goto l14;
l3_loop:
          i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6789)))), &_td_OOC_SymbolTable__ImportDesc);
          if (!i2) goto l9;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6825))+20);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6830))+12);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6849))+40);
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6856))+12);
          i2 = (
          _cmp8((const void*)(_check_pointer(i2, 6834)),(const void*)(_check_pointer(i3, 6860))))==0;
          if (!i2) goto l9;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6893))+48);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6904))+12);
          return (OOC_Scanner_InputBuffer__CharArray)i2;
l9:
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6991));
          item = (OOC_SymbolTable__Item)i1;
          i2 = i1!=(OOC_INT32)0;
          if (i2) goto l3_loop;
l14:
          return (OOC_Scanner_InputBuffer__CharArray)(OOC_INT32)0;
          ;
        }


      i0 = (OOC_INT32)srcCodeType;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7141)))), &_td_OOC_SymbolTable__TypeNameDesc);
      if (i1) goto l60;
      i0 = (OOC_INT32)type;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7555)))), &_td_OOC_SymbolTable__PointerDesc);
      if (i1) goto l58;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7690)))), &_td_OOC_SymbolTable__FormalParsDesc);
      if (i1) goto l56;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7790)))), &_td_OOC_SymbolTable__ArrayDesc);
      if (i1) goto l50;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8081)))), &_td_OOC_SymbolTable__RecordDesc);
      if (i1) goto l26;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8971)))), &_td_OOC_SymbolTable__QualTypeDesc);
      if (i1) goto l13;
      _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8965)))), 8965);
      goto l68;
l13:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9021))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9006))+40);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&oob__noDeclDoc);
      Out__String((OOC_CHAR8*)"(", 2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9106))+48);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9116)), 0);
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l24;
      i2=0;
l16_loop:
      i3 = i2!=0;
      if (!i3) goto l19;
      Out__String((OOC_CHAR8*)", ", 3);
l19:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9238))+48);
      i3 = _check_pointer(i3, 9248);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9214))+48);
      i5 = _check_pointer(i5, 9224);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)((i3+(_check_index(i2, i4, OOC_UINT32, 9248))*8)+4);
      i4 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i2, i6, OOC_UINT32, 9224))*8);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i4, (OOC_SymbolTable__Type)i3, (void*)(OOC_INT32)&oob__noDeclDoc);
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l16_loop;
l24:
      Out__String((OOC_CHAR8*)")", 2);
      goto l68;
l26:
      Out__String((OOC_CHAR8*)"RECORD", 7);
      i1 = indent;
      indent = (i1+1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8173))+40);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l29;
      Out__String((OOC_CHAR8*)" (", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8257))+44);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8242))+40);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i2, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&oob__noDeclDoc);
      Out__String((OOC_CHAR8*)")", 2);
l29:
      i1 = (OOC_INT32)*declDoc;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l32;
      oob__WriteSymTab_WriteDoc((OOC_SymbolTable__Declaration)i1);
      *declDoc = (OOC_SymbolTable__Declaration)(OOC_INT32)0;
l32:
      oob__WriteSymTab_Type_RecFields((OOC_SymbolTable__Record)i0);
      i = 0;
      i0 = (OOC_INT32)oob__extendRecords;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8494))+8);
      i0 = *(OOC_UINT8*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8509)))), &_td_Config__BooleanVarDesc, 8509)), 8520));
      i0 = !i0;
      if (i0) goto l35;
      i0=0u;
      goto l36;
l35:
      i0 = (OOC_INT32)type;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8547))+40);
      i0 = i0!=(OOC_INT32)0;
      
l36:
      i1 = (OOC_INT32)type;
      if (i0) goto l39;
      i0=0;
      goto l40;
l39:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8588))+40);
      i0 = *(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8602)))), &_td_OOC_SymbolTable__RecordDesc, 8602)), 8609))+48);
      i = i0;
      
l40:
      i2 = *(OOC_INT32*)((_check_pointer(i1, 8659))+48);
      i2 = i0!=i2;
      if (!i2) goto l48;
l43_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8702))+52);
      i2 = (OOC_INT32)OOC_SymbolTable_Namespace__ExtendedDesc_GetTBProcByIndex((OOC_SymbolTable_Namespace__Extended)(_type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8716)))), &_td_OOC_SymbolTable_Namespace__ExtendedDesc, 8716)), i0);
      procDecl = (OOC_SymbolTable__ProcDecl)i2;
      oob__WriteSymTab_Newline();
      oob__WriteSymTab_ProcDecl((OOC_SymbolTable__ProcDecl)i2);
      Out__String((OOC_CHAR8*)";", 2);
      oob__WriteSymTab_WriteDoc((OOC_SymbolTable__Declaration)i2);
      i0 = i0+1;
      i = i0;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 8659))+48);
      i2 = i0!=i2;
      if (i2) goto l43_loop;
l48:
      i0 = indent;
      indent = (i0-1);
      oob__WriteSymTab_Newline();
      Out__String((OOC_CHAR8*)"END", 4);
      goto l68;
l50:
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 7820))+40);
      if (i1) goto l53;
      Out__String((OOC_CHAR8*)"ARRAY ", 7);
      i1 = *(OOC_INT32*)((_check_pointer(i0, 7944))+52);
      Out__LongInt(i1, 0);
      Out__String((OOC_CHAR8*)" OF ", 5);
      goto l54;
l53:
      Out__String((OOC_CHAR8*)"ARRAY OF ", 10);
l54:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8017))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8035))+48);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, (void*)(OOC_INT32)&oob__noDeclDoc);
      goto l68;
l56:
      Out__String((OOC_CHAR8*)"PROCEDURE", 10);
      oob__WriteSymTab_FormalPars((OOC_SymbolTable__FormalPars)i0);
      goto l68;
l58:
      Out__String((OOC_CHAR8*)"POINTER TO ", 12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7639))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7624))+40);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&oob__noDeclDoc);
      goto l68;
l60:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7182))+40);
      i1 = i1!=(OOC_INT32)0;
      if (i1) goto l63;
      i1=0u;
      goto l65;
l63:
      i1 = OOC_SymbolTable__TypeNameDesc_IsPredefReference((OOC_SymbolTable__TypeName)i0);
      i1 = !i1;
      
l65:
      if (!i1) goto l67;
      i0 = (OOC_INT32)oob__WriteSymTab_Type_ModuleName((OOC_SymbolTable__TypeName)i0);
      name = (OOC_Scanner_InputBuffer__CharArray)i0;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7454)), 0);
      Out__String((void*)(_check_pointer(i0, 7454)), i1);
      Out__String((OOC_CHAR8*)".", 2);
l67:
      i0 = (OOC_INT32)srcCodeType;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7528))+44);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7534))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7528))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7534))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7538)), 0);
      Out__String((void*)(_check_pointer(i0, 7538)), i1);
l68:
      return;
      ;
    }

    
    void oob__WriteSymTab_Import(OOC_SymbolTable__Import import) {
      register OOC_INT32 i0,i1;

      i0 = firstImport;
      i0 = !i0;
      if (!i0) goto l3;
      Out__String((OOC_CHAR8*)", ", 3);
l3:
      firstImport = 0u;
      i0 = (OOC_INT32)import;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9506))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9517))+12);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9506))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9517))+12);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9521)), 0);
      Out__String((void*)(_check_pointer(i0, 9521)), i1);
      return;
      ;
    }

    
    void oob__WriteSymTab_ConstDecl(OOC_SymbolTable__ConstDecl constDecl) {
      register OOC_INT32 i0,i1;
      auto OOC_CHAR8 oob__WriteSymTab_ConstDecl_Unprintable(Object__String str);
      auto Object__String oob__WriteSymTab_ConstDecl_EscapeChar(OOC_CHAR32 ch);
        
        OOC_CHAR8 oob__WriteSymTab_ConstDecl_Unprintable(Object__String str) {
          register OOC_INT32 i0,i1;

          i0 = (OOC_INT32)str;
          i1 = *(OOC_INT32*)(_check_pointer(i0, 9701));
          i1 = i1==1;
          if (i1) goto l3;
          return 0u;
          goto l12;
l3:
          i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9738)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i0, 0);
          i1 = (OOC_UINT32)i0<(OOC_UINT32)32u;
          if (i1) goto l6;
          i1 = i0==127u;
          
          goto l8;
l6:
          i1=1u;
l8:
          if (i1) goto l10;
          i0 = (OOC_UINT32)i0>(OOC_UINT32)255u;
          
          goto l11;
l10:
          i0=1u;
l11:
          return i0;
l12:
          _failed_function(9607); return 0;
          ;
        }

        
        Object__String oob__WriteSymTab_ConstDecl_EscapeChar(OOC_CHAR32 ch) {
          register OOC_INT32 i0;

          i0 = ch;
          i0 = (OOC_INT32)Object_BigInt__NewInt(i0);
          i0 = (OOC_INT32)Object_BigInt__BigIntDesc_Format((Object_BigInt__BigInt)i0, 16);
          return (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)_c0),(void*)i0)),(void*)((OOC_INT32)_c1)));
          ;
        }


      i0 = (OOC_INT32)constDecl;
      oob__WriteSymTab_IdentDef((OOC_SymbolTable__Declaration)i0);
      Out__String((OOC_CHAR8*)" = ", 4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10176))+48);
      i1 = i1==(OOC_INT32)0;
      if (i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10244))+48);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10251)))), &_td_Object_Boxed__StringDesc);
      if (i1) goto l5;
      i0=0u;
      goto l7;
l5:
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10303))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10316)))), &_td_Object_Boxed__StringDesc, 10316)), 10323));
      i0 = oob__WriteSymTab_ConstDecl_Unprintable((Object__String)i0);
      
l7:
      if (i0) goto l9;
      i0 = (OOC_INT32)constDecl;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10454))+48);
      Out__Object((Object__Object)i0);
      goto l12;
l9:
      i0 = (OOC_INT32)constDecl;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10375))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10375))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10388)))), &_td_Object_Boxed__StringDesc, 10388)), 10395));
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10388)))), &_td_Object_Boxed__StringDesc, 10388)), 10395));
      i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10401)))), Object__StringDesc_CharAt)),Object__StringDesc_CharAt)((Object__String)i1, 0);
      i0 = (OOC_INT32)oob__WriteSymTab_ConstDecl_EscapeChar(i0);
      Out__Object((Object__Object)i0);
      goto l12;
l11:
      Out__String((OOC_CHAR8*)"NIL", 4);
l12:
      return;
      ;
    }

    
    void oob__WriteSymTab_TypeDecl(OOC_SymbolTable__TypeDecl typeDecl) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_CHAR8 first;
      OOC_SymbolTable__Item ptr;

      i0 = (OOC_INT32)typeDecl;
      oob__WriteSymTab_IdentDef((OOC_SymbolTable__Declaration)i0);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10647))+48);
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10653)))), &_td_OOC_SymbolTable__TypeVarDesc);
      if (i1) goto l21;
      i1 = OOC_SymbolTable__TypeDeclDesc_HasTypeParameters((OOC_SymbolTable__TypeDecl)i0);
      if (!i1) goto l20;
      Out__String((OOC_CHAR8*)"(", 2);
      first = 1u;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10944))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10949))+4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10961)))), &_td_OOC_SymbolTable__TypeParsDesc, 10961)), 10970))+8);
      ptr = (OOC_SymbolTable__Item)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l19;
      i2=1u;
l7_loop:
      i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11035)))), &_td_OOC_SymbolTable__TypeDeclDesc);
      if (!i3) goto l14;
      if (i2) goto l12;
      Out__String((OOC_CHAR8*)"; ", 3);
      
      goto l13;
l12:
      first = 0u;
      i2=0u;
l13:
      oob__WriteSymTab_TypeDecl((OOC_SymbolTable__TypeDecl)i1);
      
l14:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11297));
      ptr = (OOC_SymbolTable__Item)i1;
      i3 = i1!=(OOC_INT32)0;
      if (i3) goto l7_loop;
l19:
      Out__String((OOC_CHAR8*)")", 2);
l20:
      Out__String((OOC_CHAR8*)" = ", 4);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11438))+52);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11423))+48);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&declDoc);
      goto l22;
l21:
      Out__String((OOC_CHAR8*)": ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10768))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10721))+48);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10778)))), &_td_OOC_SymbolTable__TypeVarDesc, 10778)), 10786))+44);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10731)))), &_td_OOC_SymbolTable__TypeVarDesc, 10731)), 10739))+40);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i0, (OOC_SymbolTable__Type)i1, (void*)(OOC_INT32)&declDoc);
l22:
      return;
      ;
    }

    
    void oob__WriteSymTab_VarDecl(OOC_SymbolTable__VarDecl varDecl) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)varDecl;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 11561))+59);
      if (!i1) goto l4;
      Out__String((OOC_CHAR8*)"VAR ", 5);
l4:
      oob__WriteSymTab_IdentDef((OOC_SymbolTable__Declaration)i0);
      Out__String((OOC_CHAR8*)": ", 3);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11685))+48);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11699))+52);
      oob__WriteSymTab_Type((OOC_SymbolTable__Type)i1, (OOC_SymbolTable__Type)i0, (void*)(OOC_INT32)&oob__noDeclDoc);
      return;
      ;
    }

    
    void oob__WriteSymTab_ProcDecl(OOC_SymbolTable__ProcDecl procDecl) {
      register OOC_INT32 i0,i1;

      oob__WriteSymTab_Newline();
      Out__String((OOC_CHAR8*)"PROCEDURE ", 11);
      i0 = (OOC_INT32)procDecl;
      i1 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)i0);
      if (!i1) goto l4;
      Out__String((OOC_CHAR8*)"(", 2);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11934))+64);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11945))+40);
      oob__WriteSymTab_VarDecl((OOC_SymbolTable__VarDecl)i1);
      Out__String((OOC_CHAR8*)") ", 3);
l4:
      oob__WriteSymTab_IdentDef((OOC_SymbolTable__Declaration)i0);
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12045))+64);
      oob__WriteSymTab_FormalPars((OOC_SymbolTable__FormalPars)i0);
      return;
      ;
    }

    
    OOC_CHAR8 oob__WriteSymTab_WriteTopLevel(OOC_SymbolTable__Item item) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)item;
      i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12290)))), &_td_OOC_SymbolTable__DeclarationDesc);
      if (i1) goto l3;
      i0=0u;
      goto l8;
l3:
      i1 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12330)))), &_td_OOC_SymbolTable__ProcDeclDesc));
      if (i1) goto l6;
      i0 = OOC_SymbolTable__ProcDeclDesc_IsTypeBound((OOC_SymbolTable__ProcDecl)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12360)))), &_td_OOC_SymbolTable__ProcDeclDesc, 12360)));
      i0 = !i0;
      
      goto l8;
l6:
      i0=1u;
l8:
      return i0;
      ;
    }


  indent = 0;
  currentSection = (-1);
  firstImport = 1u;
  Out__String((OOC_CHAR8*)"MODULE ", 8);
  i0 = (OOC_INT32)symTab;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12539))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12544))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12539))+20);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 12544))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12548)), 0);
  Out__String((void*)(_check_pointer(i2, 12548)), i1);
  Out__String((OOC_CHAR8*)";", 2);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12588))+8);
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l40;
l3_loop:
  i0 = oob__WriteSymTab_WriteTopLevel((OOC_SymbolTable__Item)i0);
  if (!i0) goto l35;
  i0 = (OOC_INT32)item;
  declDoc = (OOC_SymbolTable__Declaration)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12690)))), &_td_OOC_SymbolTable__DeclarationDesc, 12690));
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12721)))), &_td_OOC_SymbolTable__ImportDesc);
  if (i1) goto l24;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12914)))), &_td_OOC_SymbolTable__ConstDeclDesc);
  if (i1) goto l22;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13007)))), &_td_OOC_SymbolTable__TypeDeclDesc);
  if (i1) goto l20;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13097)))), &_td_OOC_SymbolTable__VarDeclDesc);
  if (i1) goto l18;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13184)))), &_td_OOC_SymbolTable__ProcDeclDesc);
  if (i1) goto l16;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13178)))), 13178);
  goto l28;
l16:
  oob__WriteSymTab_SetSection(4);
  i0 = (OOC_INT32)item;
  oob__WriteSymTab_ProcDecl((OOC_SymbolTable__ProcDecl)i0);
  goto l28;
l18:
  oob__WriteSymTab_SetSection(3);
  i0 = (OOC_INT32)item;
  oob__WriteSymTab_VarDecl((OOC_SymbolTable__VarDecl)i0);
  goto l28;
l20:
  oob__WriteSymTab_SetSection(2);
  i0 = (OOC_INT32)item;
  oob__WriteSymTab_TypeDecl((OOC_SymbolTable__TypeDecl)i0);
  goto l28;
l22:
  oob__WriteSymTab_SetSection(1);
  i0 = (OOC_INT32)item;
  oob__WriteSymTab_ConstDecl((OOC_SymbolTable__ConstDecl)i0);
  goto l28;
l24:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12755))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12760))+12);
  i0 = _check_pointer(i0, 12764);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT8*)(i0+(_check_index(0, i1, OOC_UINT8, 12764)));
  i0 = i0!=45u;
  if (!i0) goto l27;
  oob__WriteSymTab_SetSection(0);
  i0 = (OOC_INT32)item;
  oob__WriteSymTab_Import((OOC_SymbolTable__Import)i0);
l27:
  declDoc = (OOC_SymbolTable__Declaration)(OOC_INT32)0;
l28:
  i0 = (OOC_INT32)item;
  i0 = !(OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13291)))), &_td_OOC_SymbolTable__ImportDesc));
  if (!i0) goto l31;
  Out__String((OOC_CHAR8*)";", 2);
l31:
  i0 = (OOC_INT32)declDoc;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l35;
  oob__WriteSymTab_WriteDoc((OOC_SymbolTable__Declaration)i0);
l35:
  i0 = (OOC_INT32)item;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13453));
  item = (OOC_SymbolTable__Item)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3_loop;
l40:
  i0 = currentSection;
  i1 = i0!=(-1);
  if (i1) goto l43;
  i0=0u;
  goto l45;
l43:
  i0 = i0!=4;
  
l45:
  if (!i0) goto l47;
  i0 = indent;
  indent = (i0-1);
l47:
  oob__WriteSymTab_Newline();
  oob__WriteSymTab_Newline();
  Out__String((OOC_CHAR8*)"END ", 5);
  i0 = (OOC_INT32)symTab;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13642))+20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13647))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13642))+20);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13647))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 13651)), 0);
  Out__String((void*)(_check_pointer(i0, 13651)), i1);
  Out__String((OOC_CHAR8*)".", 2);
  oob__WriteSymTab_Newline();
  return;
  ;
}

static void oob__WriteHelp(void) {

  Out__String((OOC_CHAR8*)"Usage: oob [options] <module>", 30);
  Out__Ln();
  Out__String((OOC_CHAR8*)"Options:", 9);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--config <file>           Use <file> as primary configuration file.", 68);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--repository <directory>  Add repository.", 42);
  Out__Ln();
  Out__String((OOC_CHAR8*)"-r <directory>            Add repository.", 42);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--extended, -x            Include inherited members in records.", 64);
  Out__Ln();
  Out__String((OOC_CHAR8*)"--help, -h                Write this text and exit.", 52);
  Out__Ln();
  return;
  ;
}

static void oob__NewConfig(void) {
  register OOC_INT32 i0;

  OOC_Config__AddRepositoryListEnv();
  OOC_Config__AddCmdLine((OOC_CHAR8*)"--repository,-r", 16, (OOC_CHAR8*)"<repositories><file-system>$1</file-system></repositories>", 59);
  i0 = (OOC_INT32)Config__NewBooleanVar(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c2), (Config__Variable)i0);
  oob__help = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine((OOC_CHAR8*)"-h,--help", 10, (OOC_CHAR8*)"<options><set name=\047help\047>TRUE</set></options>", 47);
  i0 = (OOC_INT32)Config__NewBooleanVar(0u);
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c3), (Config__Variable)i0);
  oob__extendRecords = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine((OOC_CHAR8*)"-x,--extended", 14, (OOC_CHAR8*)"<options><set name=\047extendRecords\047>TRUE</set></options>", 56);
  OOC_Config_CCompiler__RegisterConfig();
  return;
  ;
}

void OOC_oob_init(void) {
  register OOC_INT32 i0,i1,i2;
  _c0 = Object__NewLatin1Char(48u);
  _c1 = Object__NewLatin1Char(88u);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"help", 5, 0, 4);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"extendRecords", 14, 0, 13);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  oob__noDeclDoc = (OOC_SymbolTable__Declaration)(OOC_INT32)0;
  OOC_Logger__silence = 1u;
  i0 = (OOC_INT32)OOC_Error__NewList((Object__String)((OOC_INT32)_c4));
  oob__cfgErrList = (OOC_Error__List)i0;
  oob__NewConfig();
  i0 = (OOC_INT32)oob__cfgErrList;
  OOC_Config__Read((Msg__MsgList)i0);
  i0 = (OOC_INT32)oob__cfgErrList;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 15051));
  i1 = i1!=0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)IO_StdChannels__stderr;
  OOC_Error__ListDesc_Write((OOC_Error__List)i0, (IO__ByteChannel)i1);
l3:
  i0 = (OOC_INT32)oob__cfgErrList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  i0 = !i0;
  if (i0) goto l20;
  i0 = (OOC_INT32)OOC_Config__arguments;
  i1 = Config_Section_Arguments__SectionDesc_ArgNumber((Config_Section_Arguments__Section)i0);
  i1 = i1!=1;
  if (i1) goto l18;
  i1 = (OOC_INT32)oob__help;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 15257))+8);
  i1 = *(OOC_UINT8*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15272)))), &_td_Config__BooleanVarDesc, 15272)), 15283));
  if (i1) goto l16;
  OOC_Repository__readDocStrings = 1u;
  i0 = (OOC_INT32)Config_Section_Arguments__SectionDesc_Get((Config_Section_Arguments__Section)i0, 0);
  oob__arg = (Object__String)i0;
  i0 = (OOC_INT32)oob__GetModule((Object__String)i0);
  i0 = (OOC_INT32)oob__GetSymTab((OOC_Repository__Module)i0);
  oob__symTab = (OOC_SymbolTable__Module)i0;
  i0 = (OOC_INT32)OOC_Error__NewList((Object__String)((OOC_INT32)_c5));
  oob__errList = (OOC_Error__List)i0;
  i1 = (OOC_INT32)OOC_SymbolTable_CreateNamespace__systemModule;
  i2 = (OOC_INT32)oob__symTab;
  OOC_SymbolTable_ImportModules__ImportModules((OOC_SymbolTable__Module)i1, (OOC_SymbolTable__Module)i2, (OOC_Error__List)i0);
  i0 = (OOC_INT32)oob__errList;
  i1 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (!i1) goto l21;
  i1 = (OOC_INT32)oob__symTab;
  OOC_SymbolTable_CreateNamespace__CreateNamespace((OOC_SymbolTable__Module)i1, (OOC_SymbolTable_Uses__Uses)(OOC_INT32)0, (OOC_Error__List)i0);
  i0 = (OOC_INT32)oob__errList;
  i0 = OOC_Error__ListDesc_NoErrors((OOC_Error__List)i0);
  if (!i0) goto l21;
  i0 = (OOC_INT32)oob__symTab;
  oob__WriteSymTab((OOC_SymbolTable__Module)i0);
  goto l21;
l16:
  oob__WriteHelp();
  goto l21;
l18:
  oob__WriteHelp();
  _halt(1);
  goto l21;
l20:
  _halt(1);
l21:
  return;
  ;
}

void OOC_oob_destroy(void) {
}

/* --- */
