#include <XML/Basic/DataType.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_CHAR8 XML_Basic_DataType__GetIntAttr(XML_DTD__AttValue value, OOC_INT32 *number) {
  register OOC_INT32 i0,i1;
  XML_UnicodeBuffer__CharArray str;
  OOC_CHAR8 str8[32];
  OOC_INT8 res;

  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)(OOC_INT32)0);
  str = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 372)), 0);
  LongStrings__Short((void*)(_check_pointer(i0, 372)), i1, 63u, (void*)(OOC_INT32)str8, 32);
  IntStr__StrToInt((void*)(OOC_INT32)str8, 32, (void*)(OOC_INT32)number, (void*)(OOC_INT32)&res);
  i0 = res;
  return (i0==0);
  ;
}

OOC_CHAR8 XML_Basic_DataType__GetStringLatin1Attr(XML_DTD__AttValue value, OOC_CHAR8 str[], OOC_LEN str_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  XML_UnicodeBuffer__CharArray v;
  OOC_INT32 i;

  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)(OOC_INT32)0);
  v = (XML_UnicodeBuffer__CharArray)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 691)), 0);
  i1 = LongStrings__Length((void*)(_check_pointer(i0, 691)), i1);
  i1 = i1>=str_0d;
  if (i1) goto l12;
  i1=(-1);
l3_loop:
  i1 = i1+1;
  i = i1;
  i2 = _check_pointer(i0, 799);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 799))*2);
  i2 = (OOC_UINT16)i2<=(OOC_UINT16)255u;
  if (i2) goto l6;
  return 0u;
  goto l7;
l6:
  i2 = _check_pointer(i0, 851);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 851))*2);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 836))) = i2;
l7:
  i2 = _check_pointer(i0, 918);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 918))*2);
  i2 = i2==0u;
  if (!i2) goto l3_loop;
l11:
  return 1u;
  goto l13;
l12:
  return 0u;
l13:
  _failed_function(497); return 0;
  ;
}

OOC_CHAR8 XML_Basic_DataType__GetURIAttr(volatile XML_DTD__AttValue value, volatile URI__URI baseURI, volatile URI__URI *uri) {
  register OOC_INT32 i0,i1,i2;
  volatile XML_UnicodeBuffer__CharArray v;
  volatile XML_DTD__StringURI str8;
  jmp_buf _target0;
  Exception__Context _context0;

  i0 = (OOC_INT32)value;
  i0 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i0, (XML_DTD__AttrDecl)(OOC_INT32)0);
  v = (XML_UnicodeBuffer__CharArray)i0;
  i0 = (OOC_INT32)XML_EntityResolver__NormalizeURI((XML_UnicodeBuffer__CharArray)i0);
  str8 = (XML_DTD__StringURI)i0;
  {
    Exception__PushContext(&_context0, &_target0);
    if (!setjmp(_target0)) goto l7;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_Exception__ParseErrorDesc);
    if (i0) goto l5;
    Exception__ActivateContext();
    goto l6;
l5:
    return 0u;
l6:
    Exception__Clear();
    goto l16;
l7:
    i1 = (OOC_INT32)baseURI;
    i2 = i1!=(OOC_INT32)0;
    if (i2) goto l10;
    i2=0u;
    goto l12;
l10:
    i2 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1284)))), &_td_URI__HierarchicalURIDesc);
    
l12:
    if (i2) goto l14;
    i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1435)), 0);
    i0 = (OOC_INT32)URI_Parser__NewURILatin1((void*)(_check_pointer(i0, 1435)), i1, (URI__HierarchicalURI)(OOC_INT32)0);
    *uri = (URI__URI)i0;
    goto l15;
l14:
    i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1352)), 0);
    i0 = (OOC_INT32)URI_Parser__NewURILatin1((void*)(_check_pointer(i0, 1352)), i2, (URI__HierarchicalURI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1367)))), &_td_URI__HierarchicalURIDesc, 1367)));
    *uri = (URI__URI)i0;
l15:
    Exception__PopContext(1);
    return 1u;
    Exception__PopContext(1);
l16:;
  }
  _failed_function(995); return 0;
  ;
}

void OOC_XML_Basic_DataType_init(void) {

  return;
  ;
}

void OOC_XML_Basic_DataType_destroy(void) {
}

/* --- */
