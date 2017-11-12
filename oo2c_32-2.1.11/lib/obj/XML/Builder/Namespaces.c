#include <XML/Builder/Namespaces.d>
#include <__oo2c.h>
#include <setjmp.h>

void XML_Builder_Namespaces__BuilderDesc_SetLocator(XML_Builder_Namespaces__Builder b, XML_Locator__Locator locator) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)locator;
  *(OOC_INT32*)(_check_pointer(i0, 2804)) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2837))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2837))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2854)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i0, (XML_Locator__Locator)i1);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_SetErrorListener(XML_Builder_Namespaces__Builder b, XML_Locator__ErrorListener el) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)el;
  *(OOC_INT32*)((_check_pointer(i0, 2979))+12) = i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3007))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3007))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3024)))), XML_Builder__BuilderDesc_SetErrorListener)),XML_Builder__BuilderDesc_SetErrorListener)((XML_Builder__Builder)i0, (XML_Locator__ErrorListener)i1);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_StartDocument(XML_Builder_Namespaces__Builder b, XML_DTD__ExternalEntity documentEntity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3163))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3163))+8);
  i2 = (OOC_INT32)documentEntity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3180)))), XML_Builder__BuilderDesc_StartDocument)),XML_Builder__BuilderDesc_StartDocument)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i2);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_EndDocument(XML_Builder_Namespaces__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3285))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3285))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3302)))), XML_Builder__BuilderDesc_EndDocument)),XML_Builder__BuilderDesc_EndDocument)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_StartDTD(XML_Builder_Namespaces__Builder b, XML_DTD__Builder dtdBuilder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3409))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3409))+8);
  i2 = (OOC_INT32)dtdBuilder;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3426)))), XML_Builder__BuilderDesc_StartDTD)),XML_Builder__BuilderDesc_StartDTD)((XML_Builder__Builder)i0, (XML_DTD__Builder)i2);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_EndDTD(XML_Builder_Namespaces__Builder b, XML_DTD__ExternalEntity externalDTD, OOC_CHAR8 allDeclarationsProcessed) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3613))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3613))+8);
  i2 = (OOC_INT32)externalDTD;
  i3 = allDeclarationsProcessed;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3630)))), XML_Builder__BuilderDesc_EndDTD)),XML_Builder__BuilderDesc_EndDTD)((XML_Builder__Builder)i0, (XML_DTD__ExternalEntity)i2, i3);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_StartElement(XML_Builder_Namespaces__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  XML_Builder_Namespaces__Stack _new;
  OOC_INT32 i;

  i0 = (OOC_INT32)namespaceDecl;
  _assert((i0==(OOC_INT32)0), 127, 3888);
  i1 = (OOC_INT32)b;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3928))+16);
  *(OOC_INT32*)((_check_pointer(i1, 3928))+16) = (i2+1);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3971))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3978)), 0);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3951))+16);
  i2 = i3==i2;
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4009))+20);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4016)), 0);
  i2 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Namespaces__Stack.baseTypes[0], (i2*2));
  _new = (XML_Builder_Namespaces__Stack)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4049))+20);
  i = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 4056)), 0);
  i4 = 0<i3;
  if (!i4) goto l10;
  i4=0;
l5_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4083))+20);
  i5 = _check_pointer(i5, 4090);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i2, 4075);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 4090))*36)),(i7+((_check_index(i4, i8, OOC_UINT32, 4075))*36)),36);
  i4 = i4+1;
  i = i4;
  i5 = i4<i3;
  if (i5) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i1, 4112))+20) = i2;
l11:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4146))+20);
  i2 = _check_pointer(i2, 4153);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 4155))+16);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT32*)(i2+((_check_index(i3, i4, OOC_UINT32, 4153))*36)) = i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4206))+20);
  i0 = _check_pointer(i0, 4213);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 4215))+16);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = (OOC_INT32)localName;
  *(OOC_INT32*)((i0+((_check_index(i2, i3, OOC_UINT32, 4213))*36))+4) = i4;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 4289));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4258))+20);
  i2 = _check_pointer(i2, 4265);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 4267))+16);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  _copy_block((_check_pointer(i0, 4304)),((i2+((_check_index(i3, i4, OOC_UINT32, 4265))*36))+8),20);
  i0 = *(OOC_INT32*)((_check_pointer(i1, 4316))+16);
  i0 = i0>0;
  if (i0) goto l14;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4429))+20);
  i0 = _check_pointer(i0, 4436);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 4438))+16);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)((i0+((_check_index(i2, i3, OOC_UINT32, 4436))*36))+28) = (OOC_INT32)0;
  goto l15;
l14:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4345))+20);
  i0 = _check_pointer(i0, 4352);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 4354))+16);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4380))+20);
  i4 = _check_pointer(i4, 4387);
  i5 = *(OOC_INT32*)((_check_pointer(i1, 4389))+16);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index((i5-1), i6, OOC_UINT32, 4387))*36))+28);
  *(OOC_INT32*)((i0+((_check_index(i2, i3, OOC_UINT32, 4352))*36))+28) = i4;
l15:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4481))+20);
  i0 = _check_pointer(i0, 4488);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 4490))+16);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 4519))+28);
  *(OOC_INT32*)((i0+((_check_index(i2, i3, OOC_UINT32, 4488))*36))+32) = i1;
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_EndElement(XML_Builder_Namespaces__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;

  i0 = (OOC_INT32)namespaceDecl;
  _assert((i0==(OOC_INT32)0), 127, 4709);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4851))+20);
  i1 = _check_pointer(i1, 4858);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4860))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4776))+20);
  i4 = _check_pointer(i4, 4783);
  i5 = *(OOC_INT32*)((_check_pointer(i0, 4785))+16);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4744))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i5, i6, OOC_UINT32, 4783))*36));
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 4858))*36))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4744))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 4761)))), XML_Builder__BuilderDesc_EndElement)),XML_Builder__BuilderDesc_EndElement)((XML_Builder__Builder)i2, (XML_DTD__NamespaceDeclaration)i4, (XML_UnicodeBuffer__CharArray)i1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4914))+20);
  i1 = _check_pointer(i1, 4921);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 4923))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 4921))*36))+32);
  *(OOC_INT32*)((_check_pointer(i0, 4891))+28) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 4959))+16);
  *(OOC_INT32*)((_check_pointer(i0, 4959))+16) = (i1-1);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_Attribute(XML_Builder_Namespaces__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  XML_UnicodeBuffer__CharArray str;
  XML_DTD__NamespaceDeclaration nspDecl;
  XML_UnicodeBuffer__CharArray prefix;
  auto OOC_CHAR8 XML_Builder_Namespaces__BuilderDesc_Attribute_IsNamespaceDecl(OOC_CHAR16 str[], OOC_LEN str_0d);
  auto XML_DTD__StringURI XML_Builder_Namespaces__BuilderDesc_Attribute_GetURI(volatile XML_UnicodeBuffer__CharArray str);
  auto void XML_Builder_Namespaces__BuilderDesc_Attribute_AddDecl(XML_DTD__NamespaceDeclaration namespaceDecl);
    
    OOC_CHAR8 XML_Builder_Namespaces__BuilderDesc_Attribute_IsNamespaceDecl(OOC_CHAR16 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0;

      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT8, 5491))*2);
      i0 = i0==120u;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(1, str_0d, OOC_UINT8, 5508))*2);
      i0 = i0==109u;
      
l5:
      if (i0) goto l7;
      i0=0u;
      goto l9;
l7:
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(2, str_0d, OOC_UINT8, 5525))*2);
      i0 = i0==108u;
      
l9:
      if (i0) goto l11;
      i0=0u;
      goto l13;
l11:
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(3, str_0d, OOC_UINT8, 5555))*2);
      i0 = i0==110u;
      
l13:
      if (i0) goto l15;
      i0=0u;
      goto l17;
l15:
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(4, str_0d, OOC_UINT8, 5572))*2);
      i0 = i0==115u;
      
l17:
      if (i0) goto l19;
      i0=0u;
      goto l24;
l19:
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(5, str_0d, OOC_UINT8, 5603))*2);
      i0 = i0==0u;
      if (i0) goto l22;
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(5, str_0d, OOC_UINT8, 5620))*2);
      i0 = i0==58u;
      
      goto l24;
l22:
      i0=1u;
l24:
      return i0;
      ;
    }

    
    XML_DTD__StringURI XML_Builder_Namespaces__BuilderDesc_Attribute_GetURI(volatile XML_UnicodeBuffer__CharArray str) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      volatile XML_DTD__StringURI str8;
      volatile URI__URI baseURI;
      volatile URI_Fragment_Unparsed__Fragment fragm;
      volatile Msg__Msg res;
      volatile URI__Reference uriRef;
      volatile Exception__Exception e;
      volatile Object__String str0;
      volatile Object__CharsLatin1 chars;
      volatile Msg__Msg err;
      jmp_buf _target0;
      Exception__Context _context0;

      i0 = (OOC_INT32)str;
      i0 = (OOC_INT32)XML_EntityResolver__NormalizeURI((XML_UnicodeBuffer__CharArray)i0);
      str8 = (XML_DTD__StringURI)i0;
      i1 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6035));
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6050))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6058))+36);
      baseURI = (URI__URI)i1;
      i2 = (OOC_INT32)URI_Fragment_Unparsed__New((Object__String)((OOC_INT32)_c0));
      fragm = (URI_Fragment_Unparsed__Fragment)i2;
      res = (Msg__Msg)0;
      {
        Exception__PushContext(&_context0, &_target0);
        if (!setjmp(_target0)) goto l7;
        Exception__PopContext(1);
        i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_Exception__ParseErrorDesc);
        if (i0) goto l5;
        Exception__ActivateContext();
        goto l6;
l5:
        i0 = (OOC_INT32)XML_Builder_Namespaces__namespacesContext;
        i0 = (OOC_INT32)XML_Error__New((XML_Error__Context)i0, 2);
        res = (Msg__Msg)i0;
        i1 = (OOC_INT32)Exception__Current();
        e = (Exception__Exception)i1;
        i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6562)))), Exception__ExceptionDesc_GetMessage)),Exception__ExceptionDesc_GetMessage)((Exception__Exception)i1);
        str0 = (Object__String)i1;
        i1 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6606)))), &_td_Object__String8Desc, 6606)));
        chars = (Object__CharsLatin1)i1;
        i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6690)), 0);
        i1 = (OOC_INT32)Msg__GetStringPtr((void*)(_check_pointer(i1, 6690)), i2);
        OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6641)))), Msg__MsgDesc_SetStringAttrib)),Msg__MsgDesc_SetStringAttrib)((Msg__Msg)i0, (OOC_CHAR8*)"reason", 7, (Msg__StringPtr)i1);
l6:
        Exception__Clear();
        goto l16;
l7:
        i3 = i1!=0;
        if (i3) goto l10;
        i3=0u;
        goto l12;
l10:
        i3 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6169)))), &_td_URI__HierarchicalURIDesc);
        
l12:
        if (i3) goto l14;
        i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6387)), 0);
        i0 = (OOC_INT32)URI_Parser__NewReferenceLatin1((void*)(_check_pointer(i0, 6387)), i1, (URI__HierarchicalURI)0, (URI__Fragment)i2);
        uriRef = (URI__Reference)i0;
        goto l15;
l14:
        i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6266)), 0);
        i0 = (OOC_INT32)URI_Parser__NewReferenceLatin1((void*)(_check_pointer(i0, 6266)), i3, (URI__HierarchicalURI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6281)))), &_td_URI__HierarchicalURIDesc, 6281)), (URI__Fragment)i2);
        uriRef = (URI__Reference)i0;
l15:
        Exception__PopContext(1);
l16:;
      }
      i0 = (OOC_INT32)res;
      i1 = i0!=0;
      if (i1) goto l19;
      i0 = (OOC_INT32)str8;
      return (XML_DTD__StringURI)i0;
      goto l20;
l19:
      i1 = (OOC_INT32)b;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6862));
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6755))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6755))+12);
      i4 = (OOC_INT32)XML_Builder_Namespaces__namespacesContext;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 6770)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i1, (XML_Error__Context)i4, 2, 1u, (void*)(_check_pointer(i2, 6877)));
      err = (Msg__Msg)i1;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6892)))), Msg__MsgDesc_SetMsgAttrib)),Msg__MsgDesc_SetMsgAttrib)((Msg__Msg)i1, (OOC_CHAR8*)"uri_error", 10, (Msg__Msg)i0);
      return (XML_DTD__StringURI)0;
l20:
      _failed_function(5672); return 0;
      ;
    }

    
    void XML_Builder_Namespaces__BuilderDesc_Attribute_AddDecl(XML_DTD__NamespaceDeclaration namespaceDecl) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      XML_Builder_Namespaces__NamespaceList _new;
      OOC_INT32 i;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7169))+24);
      i2 = *(OOC_INT32*)((_check_pointer(i0, 7142))+28);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7184)), 0);
      i1 = i2==i1;
      if (!i1) goto l11;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7217))+24);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7232)), 0);
      i1 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Namespaces__NamespaceList.baseTypes[0], (i1*2));
      _new = (XML_Builder_Namespaces__NamespaceList)i1;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7267))+24);
      i = 0;
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 7282)), 0);
      i3 = 0<i2;
      if (!i3) goto l10;
      i3=0;
l5_loop:
      i4 = _check_pointer(i1, 7303);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7311))+24);
      i6 = _check_pointer(i6, 7326);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 7326))*4);
      *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 7303))*4) = i6;
      i3 = i3+1;
      i = i3;
      i4 = i3<i2;
      if (i4) goto l5_loop;
l10:
      *(OOC_INT32*)((_check_pointer(i0, 7352))+24) = i1;
l11:
      i1 = (OOC_INT32)namespaceDecl;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7418));
      i2 = i2!=0;
      if (i2) goto l14;
      i2=0u;
      goto l15;
l14:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7461))+4);
      i2 = i2==0;
      
l15:
      i2 = !i2;
      if (!i2) goto l18;
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7489))+24);
      i2 = _check_pointer(i2, 7504);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 7506))+28);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 7504))*4) = i1;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 7558))+28);
      *(OOC_INT32*)((_check_pointer(i0, 7558))+28) = (i1+1);
l18:
      return;
      ;
    }


  i0 = (OOC_INT32)namespaceDecl;
  _assert((i0==(OOC_INT32)0), 127, 7620);
  i1 = (OOC_INT32)localName;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7683)), 0);
  i2 = XML_Builder_Namespaces__BuilderDesc_Attribute_IsNamespaceDecl((void*)(_check_pointer(i1, 7683)), i2);
  if (i2) goto l3;
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 8743));
  i4 = specified;
  i5 = (OOC_INT32)value;
  i6 = (OOC_INT32)attrDecl;
  i0 = (OOC_INT32)XML_Builder__NewAttribute((XML_DTD__NamespaceDeclaration)i0, (XML_UnicodeBuffer__CharArray)i1, (XML_DTD__AttrDecl)i6, (XML_DTD__AttValue)i5, i4, (XML_Locator__Locator)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 8625))+32);
  XML_Builder__AttributeListDesc_Append((XML_Builder__AttributeList)i1, (XML_Builder__Attribute)i0);
  goto l16;
l3:
  i0 = (OOC_INT32)attrDecl;
  i2 = (OOC_INT32)value;
  i0 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i2, (XML_DTD__AttrDecl)i0);
  str = (XML_UnicodeBuffer__CharArray)i0;
  i2 = _check_pointer(i1, 7882);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(5, i3, OOC_UINT8, 7882))*2);
  i2 = i2==0u;
  if (i2) goto l10;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8332)), 0);
  i2 = LongStrings__Length((void*)(_check_pointer(i1, 8332)), i2);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8297)), 0);
  i1 = (OOC_INT32)XML_DTD__GetString((void*)(_check_pointer(i1, 8297)), i3, 6, i2);
  prefix = (XML_UnicodeBuffer__CharArray)i1;
  i1 = (
  _cmp16((const void*)(_check_pointer(i0, 8352)),(const void*)((OOC_CHAR16[]){0})))==0;
  if (i1) goto l8;
  i0 = (OOC_INT32)XML_Builder_Namespaces__BuilderDesc_Attribute_GetURI((XML_UnicodeBuffer__CharArray)i0);
  i1 = (OOC_INT32)prefix;
  i0 = (OOC_INT32)XML_DTD__NewNamespaceDeclaration((XML_UnicodeBuffer__CharArray)i1, (XML_DTD__StringURI)i0);
  XML_Builder_Namespaces__BuilderDesc_Attribute_AddDecl((XML_DTD__NamespaceDeclaration)i0);
  goto l16;
l8:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8485));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8383))+12);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8383))+12);
  i3 = (OOC_INT32)XML_Builder_Namespaces__namespacesContext;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8398)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i0, (XML_Error__Context)i3, 1, 1u, (void*)(_check_pointer(i1, 8500)));
  goto l16;
l10:
  i1 = (
  _cmp16((const void*)(_check_pointer(i0, 7945)),(const void*)((OOC_CHAR16[]){0})))==0;
  if (i1) goto l13;
  i0 = (OOC_INT32)XML_Builder_Namespaces__BuilderDesc_Attribute_GetURI((XML_UnicodeBuffer__CharArray)i0);
  i0 = (OOC_INT32)XML_DTD__NewNamespaceDeclaration((XML_UnicodeBuffer__CharArray)(OOC_INT32)0, (XML_DTD__StringURI)i0);
  nspDecl = (XML_DTD__NamespaceDeclaration)i0;
  XML_Builder_Namespaces__BuilderDesc_Attribute_AddDecl((XML_DTD__NamespaceDeclaration)i0);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8190))+20);
  i1 = _check_pointer(i1, 8197);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8199))+16);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = (OOC_INT32)nspDecl;
  *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 8197))*36))+28) = i3;
  goto l16;
l13:
  i0 = (OOC_INT32)XML_DTD__NewNamespaceDeclaration((XML_UnicodeBuffer__CharArray)(OOC_INT32)0, (XML_DTD__StringURI)(OOC_INT32)0);
  XML_Builder_Namespaces__BuilderDesc_Attribute_AddDecl((XML_DTD__NamespaceDeclaration)i0);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8029))+20);
  i1 = _check_pointer(i1, 8036);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8038))+16);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  *(OOC_INT32*)((i1+((_check_index(i0, i2, OOC_UINT32, 8036))*36))+28) = (OOC_INT32)0;
l16:
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_NamespaceDeclaration(XML_Builder_Namespaces__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl) {

  _assert(0u, 127, 8889);
  
  ;
}

void XML_Builder_Namespaces__BuilderDesc_AttributesDone(XML_Builder_Namespaces__Builder b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  XML_UnicodeBuffer__CharArray localName;
  OOC_INT32 colon;
  XML_DTD__NamespaceDeclaration namespaceDecl;
  OOC_INT32 i;
  XML_Builder__Attribute attr;
  OOC_INT32 j;
  Msg__Msg err;
  auto OOC_INT32 XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetColon(OOC_CHAR16 str[], OOC_LEN str_0d);
  auto XML_DTD__NamespaceDeclaration XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetNamespace(OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 colon);
    
    OOC_INT32 XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetColon(OOC_CHAR16 str[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1;

      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 9249))*2);
      i0 = i0!=0u;
      if (i0) goto l3;
      i0=0u;
      goto l5;
l3:
      i0 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 9265))*2);
      i0 = i0!=58u;
      
l5:
      if (i0) goto l7;
      i0=0;
      goto l17;
l7:
      i0=0;
l8_loop:
      i0 = i0+1;
      i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9249))*2);
      i1 = i1!=0u;
      if (i1) goto l11;
      i1=0u;
      goto l13;
l11:
      i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9265))*2);
      i1 = i1!=58u;
      
l13:
      if (i1) goto l8_loop;
l17:
      i1 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9319))*2);
      i1 = i1==58u;
      if (i1) goto l20;
      return (-1);
      goto l21;
l20:
      return i0;
l21:
      _failed_function(9135); return 0;
      ;
    }

    
    XML_DTD__NamespaceDeclaration XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetNamespace(OOC_CHAR16 str[], OOC_LEN str_0d, OOC_INT32 colon) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      OOC_INT32 i;
      Msg__Msg err;

      i0 = colon;
      *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9576))*2) = 0u;
      i1 = (OOC_INT32)b;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 9603))+28);
      i2 = i2-1;
      i = i2;
      i3 = i2>=0;
      if (!i3) goto l11;
l3_loop:
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9662))+24);
      i3 = _check_pointer(i3, 9677);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9677))*4);
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 9680));
      i3 = (
      _cmp16((const void*)(_check_pointer(i3, 9688)),(const void*)(OOC_INT32)str))==0;
      if (!i3) goto l6;
      *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 9715))*2) = 58u;
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9749))+24);
      i3 = _check_pointer(i3, 9764);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT32)*(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 9764))*4);
      return (XML_DTD__NamespaceDeclaration)i3;
l6:
      i2 = i2-1;
      i = i2;
      i3 = i2>=0;
      if (i3) goto l3_loop;
l11:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9928))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9822))+12);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9822))+12);
      i4 = (OOC_INT32)XML_Builder_Namespaces__namespacesContext;
      i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9837)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i1, (XML_Error__Context)i4, 3, 1u, (void*)(_check_pointer(i2, 9946)));
      err = (Msg__Msg)i1;
      i2 = (OOC_INT32)Msg__GetLStringPtr((void*)(OOC_INT32)str, str_0d);
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 9959)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i1, (OOC_CHAR8*)"prefix", 7, (Msg__LStringPtr)i2);
      *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 10024))*2) = 58u;
      return (XML_DTD__NamespaceDeclaration)0;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10095))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10127))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10095))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10112)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i3, (XML_Locator__Locator)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10211))+20);
  i1 = _check_pointer(i1, 10218);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10220))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i2 = _check_index(i2, i3, OOC_UINT32, 10218);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10187))+4);
  i3 = _check_pointer(i3, 10205);
  i4 = (OOC_INT32)&_td_XML_Locator__Position;
  i4 = i4!=i4;
  if (!i4) goto l3;
  _failed_type_assert(10205);
l3:
  _copy_block(((i1+(i2*36))+8),i3,20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10257))+20);
  i1 = _check_pointer(i1, 10264);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10266))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = (OOC_INT32)*(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 10264))*36))+4);
  localName = (XML_UnicodeBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10323)), 0);
  i2 = XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetColon((void*)(_check_pointer(i1, 10323)), i2);
  colon = i2;
  i3 = i2>=0;
  if (i3) goto l6;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10530))+20);
  i2 = _check_pointer(i2, 10537);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10539))+16);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT32)*(OOC_INT32*)((i2+((_check_index(i0, i3, OOC_UINT32, 10537))*36))+28);
  namespaceDecl = (XML_DTD__NamespaceDeclaration)i0;
  
  goto l7;
l6:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10398)), 0);
  i0 = (OOC_INT32)XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetNamespace((void*)(_check_pointer(i1, 10398)), i0, i2);
  namespaceDecl = (XML_DTD__NamespaceDeclaration)i0;
  i1 = (OOC_INT32)localName;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10493)), 0);
  i2 = LongStrings__Length((void*)(_check_pointer(i1, 10493)), i2);
  i3 = colon;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 10452)), 0);
  i1 = (OOC_INT32)XML_DTD__GetString((void*)(_check_pointer(i1, 10452)), i5, (i3+1), i2);
  localName = (XML_UnicodeBuffer__CharArray)i1;
  
l7:
  i2 = (OOC_INT32)b;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10575))+20);
  i3 = _check_pointer(i3, 10582);
  i5 = *(OOC_INT32*)((_check_pointer(i2, 10584))+16);
  i6 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+((_check_index(i5, i6, OOC_UINT32, 10582))*36)) = i0;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10635))+20);
  i3 = _check_pointer(i3, 10642);
  i5 = *(OOC_INT32*)((_check_pointer(i2, 10644))+16);
  i6 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i5, i6, OOC_UINT32, 10642))*36))+4) = i1;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10687))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10687))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 10704)))), XML_Builder__BuilderDesc_StartElement)),XML_Builder__BuilderDesc_StartElement)((XML_Builder__Builder)i5, (XML_DTD__NamespaceDeclaration)i0, (XML_UnicodeBuffer__CharArray)i1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10800))+20);
  i0 = _check_pointer(i0, 10807);
  i1 = *(OOC_INT32*)((_check_pointer(i2, 10809))+16);
  i3 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_INT32*)((i0+((_check_index(i1, i3, OOC_UINT32, 10807))*36))+32);
  i = i0;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 10851))+28);
  i1 = i0!=i1;
  if (!i1) goto l15;
l10_loop:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10923))+24);
  i1 = _check_pointer(i1, 10938);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10881))+8);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10881))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(i1+(_check_index(i0, i3, OOC_UINT32, 10938))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 10898)))), XML_Builder__BuilderDesc_NamespaceDeclaration)),XML_Builder__BuilderDesc_NamespaceDeclaration)((XML_Builder__Builder)i6, (XML_DTD__NamespaceDeclaration)i1);
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 10851))+28);
  i1 = i0!=i1;
  if (i1) goto l10_loop;
l15:
  i = 0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11037))+32);
  i0 = *(OOC_INT32*)(_check_pointer(i0, 11047));
  i0 = 0!=i0;
  if (!i0) goto l49;
  i0=0;
l18_loop:
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11072))+32);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11082))+4);
  i2 = _check_pointer(i2, 11088);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT32)*(OOC_INT32*)(i2+(_check_index(i0, i3, OOC_UINT32, 11088))*4);
  attr = (XML_Builder__Attribute)i2;
  i3 = _check_pointer(i2, 11127);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11100))+4);
  i1 = _check_pointer(i1, 11118);
  if (!i4) goto l21;
  _failed_type_assert(11118);
l21:
  _copy_block((i3+20),i1,20);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 11164))+4);
  localName = (XML_UnicodeBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11211)), 0);
  i2 = XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetColon((void*)(_check_pointer(i1, 11211)), i2);
  colon = i2;
  i3 = i2>=0;
  if (i3) goto l24;
  namespaceDecl = (XML_DTD__NamespaceDeclaration)0;
  i2=i0;i0=0;
  goto l44;
l24:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11290)), 0);
  i0 = (OOC_INT32)XML_Builder_Namespaces__BuilderDesc_AttributesDone_GetNamespace((void*)(_check_pointer(i1, 11290)), i0, i2);
  namespaceDecl = (XML_DTD__NamespaceDeclaration)i0;
  i1 = (OOC_INT32)localName;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11387)), 0);
  i2 = LongStrings__Length((void*)(_check_pointer(i1, 11387)), i2);
  i3 = colon;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11346)), 0);
  i1 = (OOC_INT32)XML_DTD__GetString((void*)(_check_pointer(i1, 11346)), i5, (i3+1), i2);
  localName = (XML_UnicodeBuffer__CharArray)i1;
  j = 0;
  i2 = i;
  i3 = 0!=i2;
  if (!i3) goto l44;
  i3 = (OOC_INT32)b;
  i5=0;
l27_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11568))+32);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11578))+4);
  i6 = _check_pointer(i6, 11584);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 11584))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11587))+4);
  i6 = (
  _cmp16((const void*)(_check_pointer(i6, 11598)),(const void*)(_check_pointer(i1, 11611))))==0;
  if (i6) goto l30;
  i6=0u;
  goto l32;
l30:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11631))+32);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11641))+4);
  i6 = _check_pointer(i6, 11647);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 11647))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 11650));
  i6 = i6!=0;
  
l32:
  if (i6) goto l34;
  i6=0u;
  goto l36;
l34:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11690))+32);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11700))+4);
  i6 = _check_pointer(i6, 11706);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 11706))*4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 11709));
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i6, 11724))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11746))+4);
  i6 = (
  _cmp8((const void*)(_check_pointer(i6, 11729)),(const void*)(_check_pointer(i7, 11751))))==0;
  
l36:
  if (!i6) goto l38;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11884))+4);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11779))+12);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11779))+12);
  i9 = (OOC_INT32)XML_Builder_Namespaces__namespacesContext;
  i6 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i7, 11794)))), XML_Locator__ErrorListenerDesc_Error)),XML_Locator__ErrorListenerDesc_Error)((XML_Locator__ErrorListener)i8, (XML_Error__Context)i9, 4, 1u, (void*)(_check_pointer(i6, 11902)));
  err = (Msg__Msg)i6;
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11971))+32);
  i7 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i7, 11981))+4);
  i7 = _check_pointer(i7, 11987);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = (OOC_INT32)*(OOC_INT32*)(i7+(_check_index(i5, i8, OOC_UINT32, 11987))*4);
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 11990));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i7, 12005));
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 11971))+32);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i8, 11981))+4);
  i8 = _check_pointer(i8, 11987);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = (OOC_INT32)*(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 11987))*4);
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 11990));
  i8 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i8, 12005));
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i7, 12013)), 0);
  i7 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i8, 12013)), i7);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 11921)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, (OOC_CHAR8*)"prefix", 7, (Msg__LStringPtr)i7);
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12094)), 0);
  i7 = (OOC_INT32)Msg__GetLStringPtr((void*)(_check_pointer(i1, 12094)), i7);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12033)))), Msg__MsgDesc_SetLStringAttrib)),Msg__MsgDesc_SetLStringAttrib)((Msg__Msg)i6, (OOC_CHAR8*)"localName", 10, (Msg__LStringPtr)i7);
l38:
  i5 = i5+1;
  j = i5;
  i6 = i5!=i2;
  if (i6) goto l27_loop;
l44:
  i3 = (OOC_INT32)attr;
  *(OOC_INT32*)(_check_pointer(i3, 12205)) = i0;
  *(OOC_INT32*)((_check_pointer(i3, 12249))+4) = i1;
  i5 = (OOC_INT32)b;
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 12289))+8);
  i7 = *(OOC_UINT8*)((_check_pointer(i3, 12526))+16);
  i8 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12476))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 12423))+8);
  i9 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 12289))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 12306)))), XML_Builder__BuilderDesc_Attribute)),XML_Builder__BuilderDesc_Attribute)((XML_Builder__Builder)i9, (XML_DTD__NamespaceDeclaration)i0, (XML_UnicodeBuffer__CharArray)i1, (XML_DTD__AttrDecl)i3, (XML_DTD__AttValue)i8, i7);
  i0 = i2+1;
  i = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 11037))+32);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 11047));
  i1 = i0!=i1;
  if (i1) goto l18_loop;
l49:
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12573))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12605));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12573))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12590)))), XML_Builder__BuilderDesc_SetLocator)),XML_Builder__BuilderDesc_SetLocator)((XML_Builder__Builder)i3, (XML_Locator__Locator)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12628))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12628))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12645)))), XML_Builder__BuilderDesc_AttributesDone)),XML_Builder__BuilderDesc_AttributesDone)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_SkippedEntity(XML_Builder_Namespaces__Builder b, XML_UnicodeBuffer__CharArray name, XML_DTD__Entity referent) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12779))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12779))+8);
  i2 = (OOC_INT32)name;
  i3 = (OOC_INT32)referent;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12796)))), XML_Builder__BuilderDesc_SkippedEntity)),XML_Builder__BuilderDesc_SkippedEntity)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (XML_DTD__Entity)i3);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_Characters(XML_Builder_Namespaces__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13081))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13081))+8);
  i2 = charsStart;
  i3 = charsEnd;
  i4 = elementWhitespace;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13098)))), XML_Builder__BuilderDesc_Characters)),XML_Builder__BuilderDesc_Characters)((XML_Builder__Builder)i0, (void*)(OOC_INT32)chars, chars_0d, i2, i3, i4);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_StartCDATA(XML_Builder_Namespaces__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13265))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13265))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13282)))), XML_Builder__BuilderDesc_StartCDATA)),XML_Builder__BuilderDesc_StartCDATA)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_EndCDATA(XML_Builder_Namespaces__Builder b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13361))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13361))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13378)))), XML_Builder__BuilderDesc_EndCDATA)),XML_Builder__BuilderDesc_EndCDATA)((XML_Builder__Builder)i0);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_StartEntity(XML_Builder_Namespaces__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13477))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13477))+8);
  i2 = (OOC_INT32)entity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13494)))), XML_Builder__BuilderDesc_StartEntity)),XML_Builder__BuilderDesc_StartEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_EndEntity(XML_Builder_Namespaces__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13606))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13606))+8);
  i2 = (OOC_INT32)entity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13623)))), XML_Builder__BuilderDesc_EndEntity)),XML_Builder__BuilderDesc_EndEntity)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_EntityDecl(XML_Builder_Namespaces__Builder b, XML_DTD__Entity entity) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13734))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13734))+8);
  i2 = (OOC_INT32)entity;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13751)))), XML_Builder__BuilderDesc_EntityDecl)),XML_Builder__BuilderDesc_EntityDecl)((XML_Builder__Builder)i0, (XML_DTD__Entity)i2);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_Notation(XML_Builder_Namespaces__Builder b, XML_DTD__Notation notation) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13864))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13864))+8);
  i2 = (OOC_INT32)notation;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 13881)))), XML_Builder__BuilderDesc_Notation)),XML_Builder__BuilderDesc_Notation)((XML_Builder__Builder)i0, (XML_DTD__Notation)i2);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_ProcessingInstruction(XML_Builder_Namespaces__Builder b, XML_UnicodeBuffer__CharArray target, XML_DTD__StringVar content, OOC_LEN content_0d, OOC_INT32 contentStart, OOC_INT32 contentEnd, URI__URI baseURI) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14129))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14129))+8);
  i2 = (OOC_INT32)target;
  i3 = contentStart;
  i4 = contentEnd;
  i5 = (OOC_INT32)baseURI;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14146)))), XML_Builder__BuilderDesc_ProcessingInstruction)),XML_Builder__BuilderDesc_ProcessingInstruction)((XML_Builder__Builder)i0, (XML_UnicodeBuffer__CharArray)i2, (void*)(OOC_INT32)content, content_0d, i3, i4, (URI__URI)i5);
  return;
  ;
}

void XML_Builder_Namespaces__BuilderDesc_Comment(XML_Builder_Namespaces__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14390))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 14390))+8);
  i2 = start;
  i3 = end;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14407)))), XML_Builder__BuilderDesc_Comment)),XML_Builder__BuilderDesc_Comment)((XML_Builder__Builder)i0, (void*)(OOC_INT32)chars, chars_0d, i2, i3);
  return;
  ;
}

void XML_Builder_Namespaces__Init(XML_Builder_Namespaces__Builder b, XML_Builder__Builder delegateBuilder) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)delegateBuilder;
  *(OOC_INT32*)((_check_pointer(i0, 14526))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 14574))+4) = ((OOC_INT32)RT0__NewObject(_td_XML_Locator__Locator.baseTypes[0]));
  *(OOC_INT32*)(_check_pointer(i0, 14600)) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 14629))+12) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 14663))+16) = (-1);
  *(OOC_INT32*)((_check_pointer(i0, 14692))+20) = ((OOC_INT32)RT0__NewObject(_td_XML_Builder_Namespaces__Stack.baseTypes[0], 16));
  *(OOC_INT32*)((_check_pointer(i0, 14716))+28) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 14751))+24) = ((OOC_INT32)RT0__NewObject(_td_XML_Builder_Namespaces__NamespaceList.baseTypes[0], 16));
  i1 = (OOC_INT32)XML_Builder__NewAttributeList();
  *(OOC_INT32*)((_check_pointer(i0, 14783))+32) = i1;
  return;
  ;
}

XML_Builder_Namespaces__Builder XML_Builder_Namespaces__New(XML_Builder__Builder delegateBuilder) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Namespaces__Builder.baseTypes[0]);
  i1 = (OOC_INT32)delegateBuilder;
  XML_Builder_Namespaces__Init((XML_Builder_Namespaces__Builder)i0, (XML_Builder__Builder)i1);
  return (XML_Builder_Namespaces__Builder)i0;
  ;
}

static void XML_Builder_Namespaces__SetErrorMessages(void) {
  register OOC_INT32 i0,i1;
  OOC_INT16 i;
  OOC_CHAR8 t[128];

  i = 0;
  i0=0;
l1_loop:
  switch (i0) {
  case 1:
    _copy_8((const void*)(OOC_CHAR8*)"Namespace URI must not be empty",(void*)(OOC_INT32)t,128);
    goto l8;
  case 2:
    _copy_8((const void*)(OOC_CHAR8*)"Malformed URI reference: ${uri_error}",(void*)(OOC_INT32)t,128);
    goto l8;
  case 3:
    _copy_8((const void*)(OOC_CHAR8*)"Prefix `${prefix}\047 is not declared",(void*)(OOC_INT32)t,128);
    goto l8;
  case 4:
    _copy_8((const void*)(OOC_CHAR8*)"Attribute name conflicts with `${prefix}:${localName}\047",(void*)(OOC_INT32)t,128);
    goto l8;
  default:
    _copy_8((const void*)(OOC_CHAR8*)"",(void*)(OOC_INT32)t,128);
    goto l8;
  }
l8:
  i1 = (
  _cmp8((const void*)(OOC_INT32)t,(const void*)(OOC_CHAR8*)""))!=0;
  if (!i1) goto l11;
  i1 = (OOC_INT32)XML_Builder_Namespaces__namespacesContext;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15749)))), XML_Error__ContextDesc_SetString)),XML_Error__ContextDesc_SetString)((XML_Error__Context)i1, i0, (void*)(OOC_INT32)t, 128);
l11:
  i0 = i0+1;
  i = i0;
  i1 = i0<=999;
  if (i1) goto l1_loop;
l15:
  return;
  ;
}

void OOC_XML_Builder_Namespaces_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  i0 = (OOC_INT32)XML_Error__NewContext((OOC_CHAR8*)"XML:Builder:Namespaces", 23);
  XML_Builder_Namespaces__namespacesContext = (XML_Error__Context)i0;
  XML_Builder_Namespaces__SetErrorMessages();
  return;
  ;
}

void OOC_XML_Builder_Namespaces_destroy(void) {
}

/* --- */
