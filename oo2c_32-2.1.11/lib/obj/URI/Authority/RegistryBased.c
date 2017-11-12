#include <URI/Authority/RegistryBased.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Authority_RegistryBased__Init(URI_Authority_RegistryBased__Authority auth, Object__String regName) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)auth;
  i1 = (OOC_INT32)regName;
  *(OOC_INT32*)(_check_pointer(i0, 1621)) = i1;
  return;
  ;
}

URI_Authority_RegistryBased__Authority URI_Authority_RegistryBased__New(Object__String regName) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Authority_RegistryBased__Authority.baseTypes[0]);
  i1 = (OOC_INT32)regName;
  URI_Authority_RegistryBased__Init((URI_Authority_RegistryBased__Authority)i0, (Object__String)i1);
  return (URI_Authority_RegistryBased__Authority)i0;
  ;
}

URI_Authority_RegistryBased__Authority URI_Authority_RegistryBased__AuthorityDesc_Clone(URI_Authority_RegistryBased__Authority auth) {
  register OOC_INT32 i0,i1;
  URI_Authority_RegistryBased__Authority copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Authority_RegistryBased__Authority.baseTypes[0]);
  copy = (URI_Authority_RegistryBased__Authority)i0;
  i1 = (OOC_INT32)auth;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1914)))), URI__AuthorityDesc_Copy)),URI__AuthorityDesc_Copy)((URI__Authority)i1, (URI__Authority)i0);
  return (URI_Authority_RegistryBased__Authority)i0;
  ;
}

void URI_Authority_RegistryBased__AuthorityDesc_Copy(URI_Authority_RegistryBased__Authority auth, URI__Authority dest) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)dest;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2103)))), &_td_URI_Authority_RegistryBased__AuthorityDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2094)))), 2094);
  goto l4;
l3:
  i1 = (OOC_INT32)auth;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2145));
  *(OOC_INT32*)(_check_pointer(i0, 2128)) = i1;
l4:
  return;
  ;
}

void URI_Authority_RegistryBased__AuthorityDesc_ParseAuthority(URI_Authority_RegistryBased__Authority auth, Object__CharsLatin1 str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i = 0;
  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2423)), 0);
  i1 = URI_CharClass__SkipAuthChar((void*)(_check_pointer(i0, 2423)), i1, (void*)(OOC_INT32)&i);
  if (!i1) goto l7;
l2_loop:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2423)), 0);
  i1 = URI_CharClass__SkipAuthChar((void*)(_check_pointer(i0, 2423)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l2_loop;
l7:
  i1 = i;
  i2 = i1==0;
  if (i2) goto l14;
  i2 = _check_pointer(i0, 2606);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT8*)(i2+(_check_index(i1, i3, OOC_UINT16, 2606)));
  i2 = i2!=0u;
  if (i2) goto l12;
  i1 = (OOC_INT32)auth;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2826)), 0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i0, 2826)), i2);
  i0 = (OOC_INT32)URI_String__Unescape((Object__String)i0);
  *(OOC_INT32*)(_check_pointer(i1, 2778)) = i0;
  goto l15;
l12:
  i0 = offset;
  i2 = (OOC_INT32)RT0__NewObject(_td_Exception__ParseError.baseTypes[0]);
  Exception__ParseErrorDesc_INIT((Exception__ParseError)i2, (Object__String)((OOC_INT32)_c0), (i1+i0));
  Exception__Raise((void*)i2);
  goto l15;
l14:
  i0 = offset;
  i2 = (OOC_INT32)RT0__NewObject(_td_Exception__ParseError.baseTypes[0]);
  Exception__ParseErrorDesc_INIT((Exception__ParseError)i2, (Object__String)((OOC_INT32)_c1), (i1+i0));
  Exception__Raise((void*)i2);
l15:
  return;
  ;
}

void URI_Authority_RegistryBased__AuthorityDesc_WriteXML(URI_Authority_RegistryBased__Authority auth, TextRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2936)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"\012<authority-registry-based>", 28);
  i1 = (OOC_INT32)auth;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3013));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2994)))), TextRider__WriterDesc_WriteObject)),TextRider__WriterDesc_WriteObject)((TextRider__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3030)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"</authority-registry-based>", 28);
  return;
  ;
}

void URI_Authority_RegistryBased__AuthorityDesc_Append(URI_Authority_RegistryBased__Authority auth, ADT_StringBuffer__StringBuffer sb) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3176)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c2));
  i1 = (OOC_INT32)auth;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3221));
  URI_String__AppendEscaped((Object__String)i1, (OOC_CHAR8*)"$,;:@&=+", 9, (ADT_StringBuffer__StringBuffer)i0);
  return;
  ;
}

void OOC_URI_Authority_RegistryBased_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"Illegal character in registry-based naming authority", 53, 0, 52);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"Registry-based naming authority must not be empty", 50, 0, 49);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"//", 3, 0, 2);

  return;
  ;
}

void OOC_URI_Authority_RegistryBased_destroy(void) {
}

/* --- */
