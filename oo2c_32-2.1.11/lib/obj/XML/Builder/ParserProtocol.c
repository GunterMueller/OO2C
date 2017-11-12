#include <XML/Builder/ParserProtocol.d>
#include <__oo2c.h>
#include <setjmp.h>

static void XML_Builder_ParserProtocol__String(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, XML_UnicodeBuffer__CharArray string) {
  register OOC_INT32 i0,i1,i2;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
  i0 = (OOC_INT32)string;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1462)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, name_0d, 1u);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1509)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1494)))), XML_Writer__WriterDesc_Write)),XML_Writer__WriterDesc_Write)((XML_Writer__Writer)i1, (void*)(_check_pointer(i0, 1509)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1520)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l4:
  return;
  ;
}

static void XML_Builder_ParserProtocol__Int(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, OOC_INT32 value) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)
  OOC_CHAR8 val[32];

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1673)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, 1u);
  i1 = value;
  IntStr__IntToStr(i1, (void*)(OOC_INT32)val, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1737)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(OOC_INT32)val, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1763)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void XML_Builder_ParserProtocol__Boolean(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, OOC_CHAR8 value) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1876)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, (void*)(OOC_INT32)name, name_0d, 1u);
  i1 = value;
  if (i1) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1958)))), XML_Writer__WriterDesc_Write)),XML_Writer__WriterDesc_Write)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,111,0}), 3);
  goto l4;
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1926)))), XML_Writer__WriterDesc_Write)),XML_Writer__WriterDesc_Write)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){121,101,115,0}), 4);
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1987)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void XML_Builder_ParserProtocol__WriteURI(XML_Writer__Writer w, const OOC_CHAR16 name__ref[], OOC_LEN name_0d, URI__URI uri) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(name,OOC_CHAR16 ,name_0d)

  OOC_INITIALIZE_VPAR(name__ref,name,OOC_CHAR16 ,(name_0d*2))
  i0 = (OOC_INT32)uri;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2129)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, (void*)(OOC_INT32)name, name_0d, 1u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2161)))), XML_Writer__WriterDesc_WriteURI)),XML_Writer__WriterDesc_WriteURI)((XML_Writer__Writer)i1, (URI__URI)i0, 0u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2193)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
l3:
  return;
  ;
}

static void XML_Builder_ParserProtocol__WritePos(XML_Builder_ParserProtocol__Builder b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2273));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2273));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2276)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,111,99,97,116,111,114,0}), 8, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2316))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2325))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2333))+36);
  i1 = i1!=0;
  if (!i1) goto l3;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2387))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 2396));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2367));
  XML_Builder_ParserProtocol__Int((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,104,97,114,45,105,110,100,101,120,0}), 11, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2436))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2445))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2422));
  XML_Builder_ParserProtocol__Int((XML_Writer__Writer)i2, ((OOC_CHAR16[]){108,105,110,101,0}), 5, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2482))+4);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 2491))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2466));
  XML_Builder_ParserProtocol__Int((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,108,117,109,110,0}), 7, i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2537))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2546))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2554))+36);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2519));
  XML_Builder_ParserProtocol__WriteURI((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,97,115,101,45,117,114,105,0}), 9, (URI__URI)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2579));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2579));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2582)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

static void XML_Builder_ParserProtocol__Notation(XML_Builder_ParserProtocol__Builder b, XML_DTD__Notation notation, OOC_CHAR8 writePos) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_Writer__Writer w;

  i0 = (OOC_INT32)notation;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l6;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2762));
  w = (XML_Writer__Writer)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2774)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,111,116,97,116,105,111,110,0}), 9, 0u);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2839))+4);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i2, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (XML_UnicodeBuffer__CharArray)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2894))+12);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,121,115,116,101,109,45,105,100,101,110,116,105,102,105,101,114,0}), 18, (XML_UnicodeBuffer__CharArray)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2951))+8);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,117,98,108,105,99,45,105,100,101,110,116,105,102,105,101,114,0}), 18, (XML_UnicodeBuffer__CharArray)i3);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3001))+16);
  XML_Builder_ParserProtocol__WriteURI((XML_Writer__Writer)i2, ((OOC_CHAR16[]){98,97,115,101,45,117,114,105,0}), 9, (URI__URI)i0);
  i0 = writePos;
  if (!i0) goto l5;
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i1);
l5:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3075)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
l6:
  return;
  ;
}

static void XML_Builder_ParserProtocol__Entity(XML_Builder_ParserProtocol__Builder b, XML_DTD__Entity entity, OOC_CHAR8 writePos) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  XML_Writer__Writer w;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3225));
  w = (XML_Writer__Writer)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3235)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){101,110,116,105,116,121,0}), 7, 0u);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3275)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,121,112,101,0}), 5, 1u);
  i2 = (OOC_INT32)entity;
  i3 = *(OOC_INT8*)((_check_pointer(i2, 3317))+8);
  switch (i3) {
  case 0:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3361)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"internal general", 17);
    goto l10;
  case 1:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3432)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"internal parameter", 19);
    goto l10;
  case 2:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3503)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"external general", 17);
    goto l10;
  case 3:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3574)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"external parameter", 19);
    goto l10;
  case 4:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3638)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"external general unparsed", 26);
    goto l10;
  case 5:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3709)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"document", 9);
    goto l10;
  case 6:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3772)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i1, (OOC_CHAR8*)"external DTD subset", 20);
    goto l10;
  default:
    _failed_case(i3, 3306);
    goto l10;
  }
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3824)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3868))+4);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (XML_UnicodeBuffer__CharArray)i3);
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3892)))), &_td_XML_DTD__ExternalEntityDesc);
  if (i3) goto l17;
  i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4132)))), &_td_XML_DTD__InternalEntityDesc);
  if (i3) goto l15;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4124)))), 4124);
  goto l18;
l15:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4163)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i1, ((OOC_CHAR16[]){99,111,110,116,101,110,116,0}), 8, 1u);
  i3 = XML_DTD__EntityDesc_LengthValue((XML_DTD__Entity)i2);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4216))+12);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4216))+12);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 4229)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4200)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i1, (void*)(_check_pointer(i2, 4229)), i4, 0, i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4266)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
  goto l18;
l17:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3960))+28);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){115,121,115,116,101,109,45,105,100,101,110,116,105,102,105,101,114,0}), 18, (XML_UnicodeBuffer__CharArray)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4015))+24);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){112,117,98,108,105,99,45,105,100,101,110,116,105,102,105,101,114,0}), 18, (XML_UnicodeBuffer__CharArray)i3);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4063))+36);
  XML_Builder_ParserProtocol__WriteURI((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,97,115,101,45,117,114,105,0}), 9, (URI__URI)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 4110))+32);
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,111,116,97,116,105,111,110,0}), 9, (XML_UnicodeBuffer__CharArray)i2);
l18:
  i2 = writePos;
  if (!i2) goto l21;
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
l21:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4343)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i1);
  return;
  ;
}

static void XML_Builder_ParserProtocol__NamespaceDeclaration(XML_Writer__Writer w, XML_DTD__NamespaceDeclaration namespaceDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4472)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,115,112,97,99,101,45,100,101,99,108,97,114,97,116,105,111,110,0}), 22, 0u);
  i1 = (OOC_INT32)namespaceDecl;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4555));
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i0, ((OOC_CHAR16[]){112,114,101,102,105,120,0}), 7, (XML_UnicodeBuffer__CharArray)i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4587))+4);
  i2 = i2!=0;
  if (!i2) goto l3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4612)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i0, ((OOC_CHAR16[]){110,97,109,101,115,112,97,99,101,45,117,114,105,0}), 14, 1u);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4683))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4683))+4);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4688)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4655)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i0, (void*)(_check_pointer(i1, 4688)), i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4699)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
l3:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4722)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_SetLocator(XML_Builder_ParserProtocol__Builder b, XML_Locator__Locator locator) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)locator;
  *(OOC_INT32*)((_check_pointer(i0, 4837))+4) = i1;
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_StartDocument(XML_Builder_ParserProtocol__Builder b, XML_DTD__ExternalEntity documentEntity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4966));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4966));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4969)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,97,114,115,101,114,45,112,114,111,116,111,99,111,108,0}), 16, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5147));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5147));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5150)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,116,97,114,116,45,100,111,99,117,109,101,110,116,0}), 15, 0u);
  i1 = (OOC_INT32)documentEntity;
  XML_Builder_ParserProtocol__Entity((XML_Builder_ParserProtocol__Builder)i0, (XML_DTD__Entity)i1, 0u);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5250));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5250));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5253)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_EndDocument(volatile XML_Builder_ParserProtocol__Builder b) {
  register OOC_INT32 i0,i1,i2;
  jmp_buf _target0;
  Exception__Context _context0;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5334));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5334));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5337)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5353));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5353));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5356)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,100,45,100,111,99,117,109,101,110,116,0}), 13, 0u);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5415));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5415));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5418)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5433));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5433));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5436)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  {
    Exception__PushContext(&_context0, &_target0);
    if (!setjmp(_target0)) goto l6;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_IO__ErrorDesc);
    if (i0) goto l5;
    Exception__ActivateContext();
l5:
    Exception__Clear();
    goto l7;
l6:
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5461));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5461));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5464)))), XML_Writer__WriterDesc_EndOfText)),XML_Writer__WriterDesc_EndOfText)((XML_Writer__Writer)i0);
    Exception__PopContext(1);
l7:;
  }
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_StartDTD(XML_Builder_ParserProtocol__Builder b, XML_DTD__Builder dtdBuilder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5599));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5599));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5602)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5618));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5618));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5621)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,116,97,114,116,45,100,116,100,0}), 10, 0u);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5677));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5677));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5680)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_EndDTD(XML_Builder_ParserProtocol__Builder b, XML_DTD__ExternalEntity externalDTD, OOC_CHAR8 allDeclarationsProcessed) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5852));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5852));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5855)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5871));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5871));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 5874)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,100,45,100,116,100,0}), 8, 0u);
  i1 = (OOC_INT32)externalDTD;
  i2 = i1!=0;
  if (!i2) goto l3;
  XML_Builder_ParserProtocol__Entity((XML_Builder_ParserProtocol__Builder)i0, (XML_DTD__Entity)i1, 0u);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5997));
  i2 = allDeclarationsProcessed;
  XML_Builder_ParserProtocol__Boolean((XML_Writer__Writer)i1, ((OOC_CHAR16[]){97,108,108,45,100,101,99,108,97,114,97,116,105,111,110,115,45,112,114,111,99,101,115,115,101,100,0}), 27, i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6082));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6082));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6085)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_StartElement(XML_Builder_ParserProtocol__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6266));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6266));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6269)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6285));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6285));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6288)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,116,97,114,116,45,101,108,101,109,101,110,116,0}), 14, 0u);
  i1 = (OOC_INT32)namespaceDecl;
  i2 = i1!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6388));
  XML_Builder_ParserProtocol__NamespaceDeclaration((XML_Writer__Writer)i2, (XML_DTD__NamespaceDeclaration)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6430));
  i2 = (OOC_INT32)localName;
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,111,99,97,108,45,110,97,109,101,0}), 11, (XML_UnicodeBuffer__CharArray)i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6484));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6484));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6487)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_Attribute(XML_Builder_ParserProtocol__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6836));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6836));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6839)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6855));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6855));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6858)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,116,116,114,105,98,117,116,101,0}), 10, 0u);
  i1 = (OOC_INT32)namespaceDecl;
  i2 = i1!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6954));
  XML_Builder_ParserProtocol__NamespaceDeclaration((XML_Writer__Writer)i2, (XML_DTD__NamespaceDeclaration)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6996));
  i2 = (OOC_INT32)localName;
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,111,99,97,108,45,110,97,109,101,0}), 11, (XML_UnicodeBuffer__CharArray)i2);
  i1 = (OOC_INT32)attrDecl;
  i2 = i1!=0;
  if (!i2) goto l26;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7063));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7063));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7066)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){97,116,116,114,45,116,121,112,101,0}), 10, 1u);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 7117))+12);
  switch (i2) {
  case 0:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7148));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7148));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7151)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"ID", 3);
    goto l18;
  case 1:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7196));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7196));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7199)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"IDREF", 6);
    goto l18;
  case 2:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7248));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7248));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7251)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"IDREFS", 7);
    goto l18;
  case 3:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7301));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7301));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7304)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"ENTITY", 7);
    goto l18;
  case 4:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7356));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7356));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7359)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"ENTITIES", 9);
    goto l18;
  case 5:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7412));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7412));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7415)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"NMTOKEN", 8);
    goto l18;
  case 6:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7468));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7468));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7471)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"NMTOKENS", 9);
    goto l18;
  case 7:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7525));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7525));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7528)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"NOTATION", 9);
    goto l18;
  case 8:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7584));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7584));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7587)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"ENUMERATED", 11);
    goto l18;
  case 9:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7640));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7640));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7643)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"CDATA", 6);
    goto l18;
  default:
    _failed_case(i2, 7104);
    goto l18;
  }
l18:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7685));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7685));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7688)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7705));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7705));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7708)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i3, ((OOC_CHAR16[]){100,101,102,97,117,108,116,45,116,121,112,101,0}), 13, 1u);
  i2 = *(OOC_INT8*)((_check_pointer(i1, 7762))+20);
  switch (i2) {
  case 0:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7802));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7802));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7805)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"#REQUIRED", 10);
    goto l25;
  case 1:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7859));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7859));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7862)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"#IMPLIED", 9);
    goto l25;
  case 2:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7915));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7915));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7918)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"#DEFAULT", 9);
    goto l25;
  case 3:
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7969));
    i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7969));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7972)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i3, (OOC_CHAR8*)"#FIXED", 7);
    goto l25;
  default:
    _failed_case(i2, 7749);
    goto l25;
  }
l25:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8015));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8015));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8018)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i3);
l26:
  i2 = (OOC_INT32)value;
  i1 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i2, (XML_DTD__AttrDecl)i1);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8049));
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i2, ((OOC_CHAR16[]){118,97,108,117,101,0}), 6, (XML_UnicodeBuffer__CharArray)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8105));
  i2 = specified;
  XML_Builder_ParserProtocol__Boolean((XML_Writer__Writer)i1, ((OOC_CHAR16[]){115,112,101,99,105,102,105,101,100,0}), 10, i2);
  if (!i2) goto l29;
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
l29:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8190));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8190));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8193)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_NamespaceDeclaration(XML_Builder_ParserProtocol__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8321));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8321));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8324)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8362));
  i1 = (OOC_INT32)namespaceDecl;
  XML_Builder_ParserProtocol__NamespaceDeclaration((XML_Writer__Writer)i0, (XML_DTD__NamespaceDeclaration)i1);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_AttributesDone(XML_Builder_ParserProtocol__Builder b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8464));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8464));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8467)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8483));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8483));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8486)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){97,116,116,114,105,98,117,116,101,115,45,100,111,110,101,0}), 16, 0u);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8548));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8548));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8551)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_SkippedEntity(XML_Builder_ParserProtocol__Builder b, XML_UnicodeBuffer__CharArray name, XML_DTD__Entity referent) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8676));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8676));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8679)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8695));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8695));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8698)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,107,105,112,112,101,100,45,101,110,116,105,116,121,0}), 15, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8749));
  i2 = (OOC_INT32)name;
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (XML_UnicodeBuffer__CharArray)i2);
  i1 = (OOC_INT32)referent;
  i2 = i1!=0;
  if (!i2) goto l3;
  XML_Builder_ParserProtocol__Entity((XML_Builder_ParserProtocol__Builder)i0, (XML_DTD__Entity)i1, 0u);
l3:
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8864));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8864));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8867)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_EndElement(XML_Builder_ParserProtocol__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9049));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9049));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9052)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9068));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9068));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9071)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,100,45,101,108,101,109,101,110,116,0}), 12, 0u);
  i1 = (OOC_INT32)namespaceDecl;
  i2 = i1!=0;
  if (!i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9169));
  XML_Builder_ParserProtocol__NamespaceDeclaration((XML_Writer__Writer)i2, (XML_DTD__NamespaceDeclaration)i1);
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9211));
  i2 = (OOC_INT32)localName;
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){108,111,99,97,108,45,110,97,109,101,0}), 11, (XML_UnicodeBuffer__CharArray)i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9265));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9265));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9268)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_EntityDecl(XML_Builder_ParserProtocol__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9366));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9366));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9369)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)entity;
  XML_Builder_ParserProtocol__Entity((XML_Builder_ParserProtocol__Builder)i0, (XML_DTD__Entity)i1, 1u);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_Notation(XML_Builder_ParserProtocol__Builder b, XML_DTD__Notation notation) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9500));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9500));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9503)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)notation;
  XML_Builder_ParserProtocol__Notation((XML_Builder_ParserProtocol__Builder)i0, (XML_DTD__Notation)i1, 1u);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_Characters(XML_Builder_ParserProtocol__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9793));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9793));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9796)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9812));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9812));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9815)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,104,97,114,97,99,116,101,114,115,0}), 11, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9854));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9854));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9857)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,104,97,114,115,0}), 6, 1u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9890));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9890));
  i3 = charsStart;
  i4 = charsEnd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9893)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i2, (void*)(OOC_INT32)chars, chars_0d, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9938));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9938));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9941)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9956));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9956));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9959)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,108,101,109,101,110,116,45,119,104,105,116,101,115,112,97,99,101,0}), 19, 1u);
  i1 = elementWhitespace;
  switch (i1) {
  case 0:
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10063));
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10063));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10066)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i2, (OOC_CHAR8*)"yes", 4);
    goto l6;
  case 1:
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10120));
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10120));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10123)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i2, (OOC_CHAR8*)"no", 3);
    goto l6;
  case 2:
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10181));
    i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10181));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10184)))), XML_Writer__WriterDesc_WriteLatin1)),XML_Writer__WriterDesc_WriteLatin1)((XML_Writer__Writer)i2, (OOC_CHAR8*)"unknown", 8);
    goto l6;
  default:
    _failed_case(i1, 10004);
    goto l6;
  }
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10224));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10224));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10227)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10260));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10260));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10263)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_StartCDATA(XML_Builder_ParserProtocol__Builder b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10340));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10340));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10343)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10359));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10359));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10362)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,116,97,114,116,45,99,100,97,116,97,0}), 12, 0u);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10420));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10420));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10423)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_EndCDATA(XML_Builder_ParserProtocol__Builder b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10498));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10498));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10501)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10517));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10517));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10520)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,100,45,99,100,97,116,97,0}), 10, 0u);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10576));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10576));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10579)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_StartEntity(XML_Builder_ParserProtocol__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10676));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10676));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10679)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10695));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10695));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10698)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){115,116,97,114,116,45,101,110,116,105,116,121,0}), 13, 0u);
  i1 = (OOC_INT32)entity;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10770))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10770))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10739));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 10776)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10739));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10742)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i1, 10776)), i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10803));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10803));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10806)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_EndEntity(XML_Builder_ParserProtocol__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10904));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10904));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10907)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10923));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10923));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10926)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){101,110,100,45,101,110,116,105,116,121,0}), 11, 0u);
  i1 = (OOC_INT32)entity;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10996))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10996))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10965));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 11002)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10965));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10968)))), XML_Writer__WriterDesc_AttrString)),XML_Writer__WriterDesc_AttrString)((XML_Writer__Writer)i4, ((OOC_CHAR16[]){110,97,109,101,0}), 5, (void*)(_check_pointer(i1, 11002)), i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11029));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11029));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11032)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_ProcessingInstruction(XML_Builder_ParserProtocol__Builder b, XML_UnicodeBuffer__CharArray target, XML_DTD__StringVar content, OOC_LEN content_0d, OOC_INT32 contentStart, OOC_INT32 contentEnd, URI__URI baseURI) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11271));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11271));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11274)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11290));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11290));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11293)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){112,114,111,99,101,115,115,105,110,103,45,105,110,115,116,114,117,99,116,105,111,110,0}), 23, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11352));
  i2 = (OOC_INT32)target;
  XML_Builder_ParserProtocol__String((XML_Writer__Writer)i1, ((OOC_CHAR16[]){116,97,114,103,101,116,0}), 7, (XML_UnicodeBuffer__CharArray)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11381));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11381));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11384)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,110,116,101,110,116,0}), 8, 1u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11419));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11419));
  i3 = contentStart;
  i4 = contentEnd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11422)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i2, (void*)(OOC_INT32)content, content_0d, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11473));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11473));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11476)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11501));
  i2 = (OOC_INT32)baseURI;
  XML_Builder_ParserProtocol__WriteURI((XML_Writer__Writer)i1, ((OOC_CHAR16[]){98,97,115,101,45,117,114,105,0}), 9, (URI__URI)i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11551));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11551));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11554)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

void XML_Builder_ParserProtocol__BuilderDesc_Comment(XML_Builder_ParserProtocol__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11724));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11724));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11727)))), XML_Writer__WriterDesc_NewLine)),XML_Writer__WriterDesc_NewLine)((XML_Writer__Writer)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11743));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11743));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11746)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,109,109,101,110,116,0}), 8, 0u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11782));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11782));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11785)))), XML_Writer__WriterDesc_StartTag)),XML_Writer__WriterDesc_StartTag)((XML_Writer__Writer)i2, ((OOC_CHAR16[]){99,111,110,116,101,110,116,0}), 8, 1u);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11820));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11820));
  i3 = start;
  i4 = end;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11823)))), XML_Writer__WriterDesc_WriteI)),XML_Writer__WriterDesc_WriteI)((XML_Writer__Writer)i2, (void*)(OOC_INT32)chars, chars_0d, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11858));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11858));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11861)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i2);
  XML_Builder_ParserProtocol__WritePos((XML_Builder_ParserProtocol__Builder)i0);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11894));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11894));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11897)))), XML_Writer__WriterDesc_EndTag)),XML_Writer__WriterDesc_EndTag)((XML_Writer__Writer)i0);
  return;
  ;
}

XML_Builder_ParserProtocol__Builder XML_Builder_ParserProtocol__New(IO__ByteChannel outputChannel, XML_UnicodeCodec__Factory codecFactory) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_Builder_ParserProtocol__Builder b;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_ParserProtocol__Builder.baseTypes[0]);
  b = (XML_Builder_ParserProtocol__Builder)i0;
  XML_Builder__Init((XML_Builder__Builder)i0);
  i1 = (OOC_INT32)outputChannel;
  i2 = (OOC_INT32)codecFactory;
  i1 = (OOC_INT32)XML_Writer__New((IO__ByteChannel)i1, (XML_UnicodeCodec__Factory)i2, 1u, 2);
  *(OOC_INT32*)(_check_pointer(i0, 12089)) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12152));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12152));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12155)))), XML_Writer__WriterDesc_WriteTextDecl)),XML_Writer__WriterDesc_WriteTextDecl)((XML_Writer__Writer)i2, (OOC_CHAR8*)"1.0", 4, (OOC_CHAR8*)"", 1);
  i1 = (OOC_INT32)URI_Scheme_File__GetCwd();
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12189));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12189));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12192)))), XML_Writer__WriterDesc_SetBaseURI)),XML_Writer__WriterDesc_SetBaseURI)((XML_Writer__Writer)i3, (URI__HierarchicalURI)i1);
  return (XML_Builder_ParserProtocol__Builder)i0;
  ;
}

void OOC_XML_Builder_ParserProtocol_init(void) {

  return;
  ;
}

void OOC_XML_Builder_ParserProtocol_destroy(void) {
}

/* --- */
