#include <XML/Builder/Canonical.d>
#include <__oo2c.h>
#include <setjmp.h>

static void XML_Builder_Canonical__WriteQuoted(XML_UnicodeBuffer__Output out, const XML_DTD__StringVar str, OOC_LEN str_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = start;
  i = i0;
  i1 = end;
  i2 = i0!=i1;
  if (!i2) goto l31;
  i2 = (OOC_INT32)out;
  i3=i0;
l3_loop:
  
l4_loop:
  i4 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2001))*2);
  switch (i4) {
  case 38u:
  case 60u:
  case 62u:
  case 34u:
  case 0u ... 31u:
    
    goto l12;
  default:
    i0 = i0+1;
    i = i0;
    i4 = i0==i1;
    if (!i4) goto l4_loop;
    goto l12;
  }
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2254)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i2, (void*)(OOC_INT32)str, str_0d, i3, i0);
  i3 = i0!=i1;
  if (!i3) goto l26;
  i3 = *(OOC_UINT16*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2329))*2);
  switch (i3) {
  case 38u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2354)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&amp;", 6);
    goto l25;
  case 60u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2391)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&lt;", 5);
    goto l25;
  case 62u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2427)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&gt;", 5);
    goto l25;
  case 34u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2463)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&quot;", 7);
    goto l25;
  case 9u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2501)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&#9;", 5);
    goto l25;
  case 10u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2537)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&#10;", 6);
    goto l25;
  case 13u:
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2574)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"&#13;", 6);
    goto l25;
  default:
    _failed_case(i3, 2321);
    goto l25;
  }
l25:
  i0 = i0+1;
  i = i0;
  
l26:
  start = i0;
  i3 = i0!=i1;
  if (!i3) goto l31;
  i3=i0;
  goto l3_loop;
l31:
  return;
  ;
}

static void XML_Builder_Canonical__WriteDTD(XML_Builder_Canonical__Builder b, XML_UnicodeBuffer__CharArray root) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  XML_Builder_Canonical__Node node;
  auto XML_Builder_Canonical__Node XML_Builder_Canonical__WriteDTD_GetNext(void);
  auto void XML_Builder_Canonical__WriteDTD_Remove(XML_Builder_Canonical__Node *list, XML_Builder_Canonical__Node ptr);
    
    XML_Builder_Canonical__Node XML_Builder_Canonical__WriteDTD_GetNext(void) {
      register OOC_INT32 i0,i1,i2,i3;
      XML_Builder_Canonical__Node best;
      XML_Builder_Canonical__Node ptr;

      i0 = (OOC_INT32)b;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2839))+8);
      best = (XML_Builder_Canonical__Node)i1;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2869))+8);
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2883));
      ptr = (XML_Builder_Canonical__Node)i0;
      i2 = i0!=0;
      if (i2) goto l4_loop;
      i0=i1;
      goto l13;
l4_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2933))+4);
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2943))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2957))+4);
      i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 2967))+4);
      i2 = (
      _cmp16((const void*)(_check_pointer(i2, 2949)),(const void*)(_check_pointer(i3, 2973))))<0;
      if (!i2) goto l8;
      best = (XML_Builder_Canonical__Node)i0;
      i1=i0;
l8:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3034));
      ptr = (XML_Builder_Canonical__Node)i0;
      i2 = i0!=0;
      if (i2) goto l4_loop;
l12:
      i0=i1;
l13:
      return (XML_Builder_Canonical__Node)i0;
      ;
    }

    
    void XML_Builder_Canonical__WriteDTD_Remove(XML_Builder_Canonical__Node *list, XML_Builder_Canonical__Node ptr) {
      register OOC_INT32 i0,i1,i2;

      i0 = (OOC_INT32)ptr;
      i1 = (OOC_INT32)*list;
      i2 = i0==i1;
      if (i2) goto l3;
      XML_Builder_Canonical__WriteDTD_Remove((void*)(_check_pointer(i1, 3233)), (XML_Builder_Canonical__Node)i0);
      goto l4;
l3:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3195));
      *list = (XML_Builder_Canonical__Node)i0;
l4:
      return;
      ;
    }


  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3288));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3288));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3293)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"<!DOCTYPE ", 11);
  i1 = (OOC_INT32)root;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3323));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3343)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3323));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3328)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i4, (void*)(_check_pointer(i1, 3343)), i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3352));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3352));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3357)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)" [\012", 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3395))+8);
  i1 = i1!=0;
  if (!i1) goto l16;
l4_loop:
  i1 = (OOC_INT32)XML_Builder_Canonical__WriteDTD_GetNext();
  node = (XML_Builder_Canonical__Node)i1;
  XML_Builder_Canonical__WriteDTD_Remove((void*)((_check_pointer(i0, 3460))+8), (XML_Builder_Canonical__Node)i1);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3490));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3490));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3495)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"<!NOTATION ", 12);
  i1 = (OOC_INT32)node;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3548))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3558))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3548))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3558))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3528));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3528));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3564)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 3533)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i5, (void*)(_check_pointer(i3, 3564)), i2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3582))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3592))+8);
  i2 = i2!=0;
  if (i2) goto l7;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3928));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3928));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3933)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i3, (OOC_CHAR8*)" SYSTEM \047", 10);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3986))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3996))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3986))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3996))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3966));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3966));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4004)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3971)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i4, (void*)(_check_pointer(i1, 4004)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4017));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4017));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4022)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"\047", 2);
  goto l11;
l7:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3622));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3622));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3627)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i3, (OOC_CHAR8*)" PUBLIC \047", 10);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3680))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3690))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3680))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 3690))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3660));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3660));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3698)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 3665)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i5, (void*)(_check_pointer(i3, 3698)), i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3711));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3711));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3716)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i3, (OOC_CHAR8*)"\047", 2);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3748))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3758))+12);
  i2 = i2!=0;
  if (!i2) goto l11;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3790));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3790));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3795)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i3, (OOC_CHAR8*)" \047", 3);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3843))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3853))+12);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3843))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3853))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3823));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3823));
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3861)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3828)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i4, (void*)(_check_pointer(i1, 3861)), i2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3876));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3876));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3881)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"\047", 2);
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4055));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4055));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4060)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)">\012", 3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3395))+8);
  i1 = i1!=0;
  if (i1) goto l4_loop;
l16:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4098));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4098));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4103)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (OOC_CHAR8*)"]>\012", 4);
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_StartDocument(XML_Builder_Canonical__Builder b, XML_DTD__ExternalEntity documentEntity) {

  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_EndDocument(volatile XML_Builder_Canonical__Builder b) {
  register OOC_INT32 i0,i1;
  jmp_buf _target0;
  Exception__Context _context0;

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
    i0 = (OOC_INT32)b;
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4307));
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4307));
    OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4312)))), XML_UnicodeBuffer__OutputDesc_Flush)),XML_UnicodeBuffer__OutputDesc_Flush)((XML_UnicodeBuffer__Output)i0);
    Exception__PopContext(1);
l7:;
  }
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_StartElement(XML_Builder_Canonical__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)namespaceDecl;
  _assert((i0==(OOC_INT32)0), 127, 4523);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4562))+8);
  i2 = (OOC_INT32)localName;
  i1 = i1!=(OOC_INT32)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4588))+4);
  i1 = i1!=1;
  
l5:
  if (!i1) goto l7;
  XML_Builder_Canonical__WriteDTD((XML_Builder_Canonical__Builder)i0, (XML_UnicodeBuffer__CharArray)i2);
l7:
  *(OOC_INT32*)((_check_pointer(i0, 4668))+16) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4698));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4698));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4703)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i3, (OOC_CHAR8*)"<", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4724));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 4749)), 0);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4724));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4729)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i0, (void*)(_check_pointer(i2, 4749)), i3);
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_Attribute(XML_Builder_Canonical__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  XML_Builder_Canonical__AttributeList newList;
  OOC_INT32 i;

  i0 = (OOC_INT32)namespaceDecl;
  _assert((i0==(OOC_INT32)0), 127, 5142);
  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5203))+12);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5181))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5213)), 0);
  i1 = i2==i1;
  if (!i1) goto l11;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5248))+12);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 5258)), 0);
  i1 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Canonical__AttributeList.baseTypes[0], (i1+8));
  newList = (XML_Builder_Canonical__AttributeList)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5302))+12);
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5312)), 0);
  i3 = 0<i2;
  if (!i3) goto l10;
  i3=0;
l5_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5343))+12);
  i4 = _check_pointer(i4, 5353);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i1, 5335);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  _copy_block((i4+((_check_index(i3, i5, OOC_UINT32, 5353))*12)),(i6+((_check_index(i3, i7, OOC_UINT32, 5335))*12)),12);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l5_loop;
l10:
  *(OOC_INT32*)((_check_pointer(i0, 5375))+12) = i1;
l11:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5411))+12);
  i1 = _check_pointer(i1, 5421);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5423))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)localName;
  *(OOC_INT32*)(i1+((_check_index(i2, i3, OOC_UINT32, 5421))*12)) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5463))+12);
  i1 = _check_pointer(i1, 5473);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5475))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)attrDecl;
  *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 5473))*12))+4) = i4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5514))+12);
  i1 = _check_pointer(i1, 5524);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 5526))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT32)value;
  *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 5524))*12))+8) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5568))+16);
  *(OOC_INT32*)((_check_pointer(i0, 5568))+16) = (i1+1);
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_AttributesDone(XML_Builder_Canonical__Builder b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;
  XML_UnicodeBuffer__CharArray str;
  auto OOC_INT32 XML_Builder_Canonical__BuilderDesc_AttributesDone_GetMin(OOC_INT32 start);
    
    OOC_INT32 XML_Builder_Canonical__BuilderDesc_AttributesDone_GetMin(OOC_INT32 start) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 min;
      OOC_INT32 i;

      i0 = start;
      min = i0;
      i1 = (OOC_INT32)b;
      i2 = i0+1;
      i = i2;
      i3 = *(OOC_INT32*)((_check_pointer(i1, 5824))+16);
      i4 = i2<i3;
      if (!i4) goto l13;
      {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l4_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5856))+12);
      i4 = _check_pointer(i4, 5866);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i0, i5, OOC_UINT32, 5866))*12));
      i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5880))+12);
      i5 = _check_pointer(i5, 5890);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i2, i6, OOC_UINT32, 5890))*12));
      i4 = (
      _cmp16((const void*)(_check_pointer(i4, 5875)),(const void*)(_check_pointer(i5, 5901))))<0;
      if (!i4) goto l8;
      min = i0;
      i2=i0;
l8:
      i0 = i0+1;
      i = i0;
      i4 = i0<i3;
      if (i4) goto l4_loop;
l12:
      i0=i2;
l13:
      return i0;
      ;
    }


  i0 = (OOC_INT32)b;
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 6014))+16);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = XML_Builder_Canonical__BuilderDesc_AttributesDone_GetMin(i2);
  j = i3;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6063));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6063));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6068)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i5, (OOC_CHAR8*)" ", 2);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6108))+12);
  i4 = _check_pointer(i4, 6118);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+((_check_index(i3, i5, OOC_UINT32, 6118))*12));
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6108))+12);
  i5 = _check_pointer(i5, 6118);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+((_check_index(i3, i6, OOC_UINT32, 6118))*12));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6091));
  i7 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6091));
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i4, 6127)), 0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i6, 6096)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i7, (void*)(_check_pointer(i5, 6127)), i4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6138));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6138));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6143)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i5, (OOC_CHAR8*)"=\"", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6206))+12);
  i4 = _check_pointer(i4, 6216);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6174))+12);
  i6 = _check_pointer(i6, 6184);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)((i4+((_check_index(i3, i5, OOC_UINT32, 6216))*12))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)((i6+((_check_index(i3, i7, OOC_UINT32, 6184))*12))+8);
  i4 = (OOC_INT32)XML_DTD__AttValueDesc_Flatten((XML_DTD__AttValue)i5, (XML_DTD__AttrDecl)i4);
  str = (XML_UnicodeBuffer__CharArray)i4;
  i5 = OOC_ARRAY_LENGTH((_check_pointer(i4, 6287)), 0);
  i5 = LongStrings__Length((void*)(_check_pointer(i4, 6287)), i5);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6248));
  i7 = OOC_ARRAY_LENGTH((_check_pointer(i4, 6258)), 0);
  XML_Builder_Canonical__WriteQuoted((XML_UnicodeBuffer__Output)i6, (void*)(_check_pointer(i4, 6258)), i7, 0, i5);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6299));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6299));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 6304)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i5, (OOC_CHAR8*)"\"", 2);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6345))+12);
  i4 = _check_pointer(i4, 6355);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6327))+12);
  i6 = _check_pointer(i6, 6337);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  _copy_block((i4+((_check_index(i2, i5, OOC_UINT32, 6355))*12)),(i6+((_check_index(i3, i7, OOC_UINT32, 6337))*12)),12);
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6373));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6373));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6378)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (OOC_CHAR8*)">", 2);
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_EndElement(XML_Builder_Canonical__Builder b, XML_DTD__NamespaceDeclaration namespaceDecl, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6566));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6566));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6571)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"</", 3);
  i1 = (OOC_INT32)localName;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6593));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6618)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6593));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 6598)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i4, (void*)(_check_pointer(i1, 6618)), i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6627));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6627));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6632)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (OOC_CHAR8*)">", 2);
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_Notation(XML_Builder_Canonical__Builder b, XML_DTD__Notation notation) {
  register OOC_INT32 i0,i1,i2;
  XML_Builder_Canonical__Node node;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Canonical__Node.baseTypes[0]);
  node = (XML_Builder_Canonical__Node)i0;
  i1 = (OOC_INT32)b;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6842))+8);
  *(OOC_INT32*)(_check_pointer(i0, 6831)) = i2;
  i2 = (OOC_INT32)notation;
  *(OOC_INT32*)((_check_pointer(i0, 6866))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i1, 6895))+8) = i0;
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_ProcessingInstruction(XML_Builder_Canonical__Builder b, XML_UnicodeBuffer__CharArray target, XML_DTD__StringVar content, OOC_LEN content_0d, OOC_INT32 contentStart, OOC_INT32 contentEnd, URI__URI baseURI) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)b;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7114));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7114));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7119)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)"<?", 3);
  i1 = (OOC_INT32)target;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7141));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 7163)), 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7141));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 7146)))), XML_UnicodeBuffer__OutputDesc_Write16)),XML_UnicodeBuffer__OutputDesc_Write16)((XML_UnicodeBuffer__Output)i4, (void*)(_check_pointer(i1, 7163)), i3);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7172));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7172));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7177)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i2, (OOC_CHAR8*)" ", 2);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7198));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7198));
  i3 = contentStart;
  i4 = contentEnd;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7203)))), XML_UnicodeBuffer__OutputDesc_Write16I)),XML_UnicodeBuffer__OutputDesc_Write16I)((XML_UnicodeBuffer__Output)i2, (void*)(OOC_INT32)content, content_0d, i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7256));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7256));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7261)))), XML_UnicodeBuffer__OutputDesc_Write8)),XML_UnicodeBuffer__OutputDesc_Write8)((XML_UnicodeBuffer__Output)i0, (OOC_CHAR8*)"?>", 3);
  return;
  ;
}

void XML_Builder_Canonical__BuilderDesc_Characters(XML_Builder_Canonical__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7550));
  i1 = charsStart;
  i2 = charsEnd;
  XML_Builder_Canonical__WriteQuoted((XML_UnicodeBuffer__Output)i0, (void*)(OOC_INT32)chars, chars_0d, i1, i2);
  return;
  ;
}

XML_Builder_Canonical__Builder XML_Builder_Canonical__New(IO__ByteChannel outputChannel, XML_UnicodeCodec__Factory codecFactory, OOC_INT8 format) {
  register OOC_INT32 i0,i1,i2;
  XML_Builder_Canonical__Builder b;

  i0 = (OOC_INT32)RT0__NewObject(_td_XML_Builder_Canonical__Builder.baseTypes[0]);
  b = (XML_Builder_Canonical__Builder)i0;
  XML_Builder__Init((XML_Builder__Builder)i0);
  i1 = (OOC_INT32)outputChannel;
  i2 = (OOC_INT32)codecFactory;
  i1 = (OOC_INT32)XML_UnicodeBuffer__NewOutput((IO__ByteChannel)i1, (XML_UnicodeCodec__Factory)i2, 1u);
  *(OOC_INT32*)(_check_pointer(i0, 8015)) = i1;
  i1 = format;
  *(OOC_INT8*)((_check_pointer(i0, 8129))+4) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 8159))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8192))+12) = ((OOC_INT32)RT0__NewObject(_td_XML_Builder_Canonical__AttributeList.baseTypes[0], 8));
  *(OOC_INT32*)((_check_pointer(i0, 8224))+16) = 0;
  return (XML_Builder_Canonical__Builder)i0;
  ;
}

void OOC_XML_Builder_Canonical_init(void) {

  return;
  ;
}

void OOC_XML_Builder_Canonical_destroy(void) {
}

/* --- */
