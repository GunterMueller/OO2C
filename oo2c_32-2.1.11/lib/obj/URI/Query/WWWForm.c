#include <URI/Query/WWWForm.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Query_WWWForm__Init(URI_Query_WWWForm__Query query) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)query;
  URI__InitQuery((URI__Query)i0);
  i1 = (OOC_INT32)RT0__NewObject(_td__qtd1.baseTypes[0]);
  ADT_ArrayList__ArrayListDesc_INIT((ADT_ArrayList__ArrayList)i1, 4);
  *(OOC_INT32*)(_check_pointer(i0, 1710)) = i1;
  i1 = (OOC_INT32)RT0__NewObject(_td__qtd1.baseTypes[0]);
  ADT_ArrayList__ArrayListDesc_INIT((ADT_ArrayList__ArrayList)i1, 4);
  *(OOC_INT32*)((_check_pointer(i0, 1766))+4) = i1;
  i1 = (OOC_INT32)RT0__NewObject(_td__qtd3.baseTypes[0]);
  ADT_Dictionary__DictionaryDesc_INIT((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 1823))+8) = i1;
  return;
  ;
}

URI_Query_WWWForm__Query URI_Query_WWWForm__New(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Query_WWWForm__Query.baseTypes[0]);
  URI_Query_WWWForm__Init((URI_Query_WWWForm__Query)i0);
  return (URI_Query_WWWForm__Query)i0;
  ;
}

URI_Query_WWWForm__Query URI_Query_WWWForm__QueryDesc_Clone(URI_Query_WWWForm__Query query) {
  register OOC_INT32 i0,i1;
  URI_Query_WWWForm__Query copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Query_WWWForm__Query.baseTypes[0]);
  copy = (URI_Query_WWWForm__Query)i0;
  i1 = (OOC_INT32)query;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2151)))), URI__QueryDesc_Copy)),URI__QueryDesc_Copy)((URI__Query)i1, (URI__Query)i0);
  return (URI_Query_WWWForm__Query)i0;
  ;
}

void URI_Query_WWWForm__QueryDesc_Copy(URI_Query_WWWForm__Query query, URI__Query dest) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)dest;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2332)))), &_td_URI_Query_WWWForm__QueryDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2323)))), 2323);
  goto l4;
l3:
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2368));
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2368));
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2374)))), ADT_ArrayList__ArrayListDesc_Copy)),ADT_ArrayList__ArrayListDesc_Copy)((ADT_ArrayList__ArrayList)i3);
  *(OOC_INT32*)(_check_pointer(i0, 2353)) = i2;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2409))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2409))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 2416)))), ADT_ArrayList__ArrayListDesc_Copy)),ADT_ArrayList__ArrayListDesc_Copy)((ADT_ArrayList__ArrayList)i3);
  *(OOC_INT32*)((_check_pointer(i0, 2393))+4) = i2;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2449))+8);
  i1 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Copy((ADT_Dictionary__Dictionary)i1);
  *(OOC_INT32*)((_check_pointer(i0, 2435))+8) = i1;
l4:
  return;
  ;
}

void URI_Query_WWWForm__QueryDesc_Add(URI_Query_WWWForm__Query query, Object__String name, Object__String value) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  ADT_ArrayList__ArrayList al;

  i0 = (OOC_INT32)query;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2597));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2597));
  i3 = (OOC_INT32)name;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2603)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2627))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2627))+4);
  i4 = (OOC_INT32)value;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2634)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i2, (Object__Object)i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2662))+8);
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i3);
  if (i1) goto l3;
  i1 = (OOC_INT32)RT0__NewObject(_td__qtd1.baseTypes[0]);
  ADT_ArrayList__ArrayListDesc_INIT((ADT_ArrayList__ArrayList)i1, 4);
  al = (ADT_ArrayList__ArrayList)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2790))+8);
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i0, (Object__Object)i3, (Object__Object)i1);
  i0=i1;
  goto l4;
l3:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2704))+8);
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i0, (Object__Object)i3);
  al = (ADT_ArrayList__ArrayList)i0;
  
l4:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2825)))), ADT_ArrayList__ArrayListDesc_Append)),ADT_ArrayList__ArrayListDesc_Append)((ADT_ArrayList__ArrayList)i0, (Object__Object)i4);
  return;
  ;
}

void URI_Query_WWWForm__QueryDesc_ParseString(URI_Query_WWWForm__Query query, const OOC_CHAR8 b[], OOC_LEN b_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT16 i;
  OOC_CHAR8 str[1024];
  Object__String n;
  Object__String v;
  auto OOC_INT16 URI_Query_WWWForm__QueryDesc_ParseString_Hex(OOC_CHAR8 ch);
    
    OOC_INT16 URI_Query_WWWForm__QueryDesc_ParseString_Hex(OOC_CHAR8 ch) {
      register OOC_INT32 i0;

      i0 = ch;
      i0 = _cap(i0);
      switch (i0) {
      case 65u ... 70u:
        return (i0-55);
        goto l5;
      case 48u ... 57u:
        return (i0-48);
        goto l5;
      default:
        return 0;
        goto l5;
      }
l5:
      _failed_function(3067); return 0;
      ;
    }


  i0 = pos;
  i1 = endpos;
  i2 = i0!=i1;
  if (!i2) goto l82;
  i3 = (OOC_INT32)query;
  
l3_loop:
  i = 0;
  if (i2) goto l6;
  i2=0u;
  goto l8;
l6:
  i2 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i0, b_0d, OOC_UINT32, 3409)));
  i2 = i2!=61u;
  
l8:
  if (i2) goto l10;
  i2=0;
  goto l36;
l10:
  i2=i0;i0=0;
l11_loop:
  i4 = i0<1024;
  if (!i4) goto l27;
  i4 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i2, b_0d, OOC_UINT32, 3471)));
  i4 = i4==37u;
  if (i4) goto l17;
  i4=0u;
  goto l19;
l17:
  i4 = (i2+2)<i1;
  
l19:
  if (i4) goto l25;
  i4 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i2, b_0d, OOC_UINT32, 3611)));
  i4 = i4==43u;
  if (i4) goto l23;
  i4 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i2, b_0d, OOC_UINT32, 3693)));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 3685))) = i4;
  goto l26;
l23:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 3644))) = 32u;
  goto l26;
l25:
  i4 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index((i2+1), b_0d, OOC_UINT32, 3540)));
  i4 = URI_Query_WWWForm__QueryDesc_ParseString_Hex(i4);
  i2 = i2+2;
  i5 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i2, b_0d, OOC_UINT32, 3557)));
  i5 = URI_Query_WWWForm__QueryDesc_ParseString_Hex(i5);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 3523))) = ((i4*16)+i5);
  
l26:
  i0 = i0+1;
  i = i0;
  
l27:
  i2 = i2+1;
  pos = i2;
  i4 = i2!=i1;
  if (i4) goto l30;
  i4=0u;
  goto l32;
l30:
  i4 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i2, b_0d, OOC_UINT32, 3409)));
  i4 = i4!=61u;
  
l32:
  if (i4) goto l11_loop;
l35:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l36:
  i2 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)str, 1024, 0, i2);
  n = (Object__String)i2;
  i4 = i0!=i1;
  if (i4) goto l39;
  i4 = (OOC_INT32)Object__NewLatin1((OOC_CHAR8*)"", 1);
  v = (Object__String)i4;
  
  goto l77;
l39:
  i0 = i0+1;
  pos = i0;
  i = 0;
  i4 = i0!=i1;
  if (i4) goto l42;
  i4=0u;
  goto l44;
l42:
  i4 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i0, b_0d, OOC_UINT32, 3962)));
  i4 = i4!=38u;
  
l44:
  if (i4) goto l46;
  i4=0;
  goto l72;
l46:
  i4=i0;i0=0;
l47_loop:
  i5 = i0<1024;
  if (!i5) goto l63;
  i5 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i4, b_0d, OOC_UINT32, 4028)));
  i5 = i5==37u;
  if (i5) goto l53;
  i5=0u;
  goto l55;
l53:
  i5 = (i4+2)<i1;
  
l55:
  if (i5) goto l61;
  i5 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i4, b_0d, OOC_UINT32, 4174)));
  i5 = i5==43u;
  if (i5) goto l59;
  i5 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i4, b_0d, OOC_UINT32, 4262)));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 4254))) = i5;
  goto l62;
l59:
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 4209))) = 32u;
  goto l62;
l61:
  i5 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index((i4+1), b_0d, OOC_UINT32, 4099)));
  i5 = URI_Query_WWWForm__QueryDesc_ParseString_Hex(i5);
  i4 = i4+2;
  i6 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i4, b_0d, OOC_UINT32, 4116)));
  i6 = URI_Query_WWWForm__QueryDesc_ParseString_Hex(i6);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT16, 4082))) = ((i5*16)+i6);
  
l62:
  i0 = i0+1;
  i = i0;
  
l63:
  i4 = i4+1;
  pos = i4;
  i5 = i4!=i1;
  if (i5) goto l66;
  i5=0u;
  goto l68;
l66:
  i5 = *(OOC_UINT8*)((OOC_INT32)b+(_check_index(i4, b_0d, OOC_UINT32, 3962)));
  i5 = i5!=38u;
  
l68:
  if (i5) goto l47_loop;
l71:
  {register OOC_INT32 h0=i0;i0=i4;i4=h0;}
l72:
  i4 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)str, 1024, 0, i4);
  v = (Object__String)i4;
  i5 = i0!=i1;
  if (!i5) goto l77;
  i0 = i0+1;
  pos = i0;
  
l77:
  URI_Query_WWWForm__QueryDesc_Add((URI_Query_WWWForm__Query)i3, (Object__String)i2, (Object__String)i4);
  i2 = i0!=i1;
  if (i2) goto l3_loop;
l82:
  return;
  ;
}

void URI_Query_WWWForm__QueryDesc_ParseQuery(URI_Query_WWWForm__Query query, Object__CharsLatin1 str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i = 0;
  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4889)), 0);
  i1 = URI_CharClass__SkipURIC((void*)(_check_pointer(i0, 4889)), i1, (void*)(OOC_INT32)&i);
  if (!i1) goto l7;
l2_loop:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4889)), 0);
  i1 = URI_CharClass__SkipURIC((void*)(_check_pointer(i0, 4889)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l2_loop;
l7:
  i1 = _check_pointer(i0, 4914);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 4914)));
  i1 = i1!=0u;
  if (i1) goto l10;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5095)), 0);
  i1 = Strings__Length((void*)(_check_pointer(i0, 5095)), i1);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 5071)), 0);
  i3 = (OOC_INT32)query;
  URI_Query_WWWForm__QueryDesc_ParseString((URI_Query_WWWForm__Query)i3, (void*)(_check_pointer(i0, 5071)), i2, 0, i1);
  goto l11;
l10:
  i0 = offset;
  i1 = (OOC_INT32)RT0__NewObject(_td_Exception__ParseError.baseTypes[0]);
  Exception__ParseErrorDesc_INIT((Exception__ParseError)i1, (Object__String)((OOC_INT32)_c0), (i3+i0));
  Exception__Raise((void*)i1);
l11:
  return;
  ;
}

void URI_Query_WWWForm__QueryDesc_WriteXML(URI_Query_WWWForm__Query query, TextRider__Writer w) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5220)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"\012<query-www-form>", 18);
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5285));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 5292))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5311)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"\012  <entry name=\047", 17);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5378));
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 5385));
  i4 = _check_pointer(i4, 5392);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5392))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5359)))), TextRider__WriterDesc_WriteObject)),TextRider__WriterDesc_WriteObject)((TextRider__Writer)i0, (Object__Object)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5405)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"\047>", 3);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5452))+4);
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 5460));
  i4 = _check_pointer(i4, 5467);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = (OOC_INT32)*(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 5467))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5433)))), TextRider__WriterDesc_WriteObject)),TextRider__WriterDesc_WriteObject)((TextRider__Writer)i0, (Object__Object)i4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5480)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"</entry>", 9);
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5521)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"</query-www-form>", 18);
  return;
  ;
}

void URI_Query_WWWForm__QueryDesc_Append(URI_Query_WWWForm__Query query, ADT_StringBuffer__StringBuffer sb) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;

  i0 = (OOC_INT32)sb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5676)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c1));
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5713));
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 5719))+4);
  i3 = 0<i2;
  if (!i3) goto l11;
  i3 = (OOC_INT32)_c2;
  i4 = (OOC_INT32)_c3;
  i5=0;
l3_loop:
  i6 = i5!=0;
  if (!i6) goto l6;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5762)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i3);
l6:
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5822));
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 5828));
  i6 = _check_pointer(i6, 5834);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 5834))*4);
  URI_String__AppendEscaped((Object__String)i6, (OOC_CHAR8*)":@+$,", 6, (ADT_StringBuffer__StringBuffer)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5869)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i4);
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5918))+4);
  i6 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i6, 5925));
  i6 = _check_pointer(i6, 5931);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT32)*(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 5931))*4);
  URI_String__AppendEscaped((Object__String)i6, (OOC_CHAR8*)":@+$,", 6, (ADT_StringBuffer__StringBuffer)i0);
  i5 = i5+1;
  i = i5;
  i6 = i5<i2;
  if (i6) goto l3_loop;
l11:
  return;
  ;
}

void OOC_URI_Query_WWWForm_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"Illegal character in query component", 37, 0, 36);
  _c1 = Object__NewLatin1Char(63u);
  _c2 = Object__NewLatin1Char(38u);
  _c3 = Object__NewLatin1Char(61u);

  return;
  ;
}

void OOC_URI_Query_WWWForm_destroy(void) {
}

/* --- */
