#include <URI/Fragment/Unparsed.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Fragment_Unparsed__Init(URI_Fragment_Unparsed__Fragment frag, Object__String unparsed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)unparsed;
  _assert((i0!=(OOC_INT32)0), 127, 1987);
  i1 = (OOC_INT32)frag;
  *(OOC_INT32*)(_check_pointer(i1, 2020)) = i0;
  return;
  ;
}

URI_Fragment_Unparsed__Fragment URI_Fragment_Unparsed__New(Object__String unparsed) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Fragment_Unparsed__Fragment.baseTypes[0]);
  i1 = (OOC_INT32)unparsed;
  URI_Fragment_Unparsed__Init((URI_Fragment_Unparsed__Fragment)i0, (Object__String)i1);
  return (URI_Fragment_Unparsed__Fragment)i0;
  ;
}

URI_Fragment_Unparsed__Fragment URI_Fragment_Unparsed__FragmentDesc_Clone(URI_Fragment_Unparsed__Fragment frag) {
  register OOC_INT32 i0,i1;
  URI_Fragment_Unparsed__Fragment copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Fragment_Unparsed__Fragment.baseTypes[0]);
  copy = (URI_Fragment_Unparsed__Fragment)i0;
  i1 = (OOC_INT32)frag;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2429)))), URI__FragmentDesc_Copy)),URI__FragmentDesc_Copy)((URI__Fragment)i1, (URI__Fragment)i0);
  return (URI_Fragment_Unparsed__Fragment)i0;
  ;
}

void URI_Fragment_Unparsed__FragmentDesc_Copy(URI_Fragment_Unparsed__Fragment frag, URI__Fragment dest) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)dest;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2616)))), &_td_URI_Fragment_Unparsed__FragmentDesc);
  if (i1) goto l3;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2607)))), 2607);
  goto l4;
l3:
  i1 = (OOC_INT32)frag;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 2658));
  *(OOC_INT32*)(_check_pointer(i0, 2640)) = i1;
l4:
  return;
  ;
}

void URI_Fragment_Unparsed__FragmentDesc_ParseFragment(URI_Fragment_Unparsed__Fragment frag, Object__CharsLatin1 str, OOC_INT16 offset) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 i;

  i = 0;
  i0 = (OOC_INT32)str;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2929)), 0);
  i1 = URI_CharClass__SkipURIC((void*)(_check_pointer(i0, 2929)), i1, (void*)(OOC_INT32)&i);
  if (!i1) goto l7;
l2_loop:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 2929)), 0);
  i1 = URI_CharClass__SkipURIC((void*)(_check_pointer(i0, 2929)), i1, (void*)(OOC_INT32)&i);
  if (i1) goto l2_loop;
l7:
  i1 = _check_pointer(i0, 2954);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = i;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i3, i2, OOC_UINT16, 2954)));
  i1 = i1!=0u;
  if (i1) goto l10;
  i1 = (OOC_INT32)frag;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3146)), 0);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(_check_pointer(i0, 3146)), i2);
  *(OOC_INT32*)(_check_pointer(i1, 3113)) = i0;
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

void URI_Fragment_Unparsed__FragmentDesc_WriteXML(URI_Fragment_Unparsed__Fragment frag, TextRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3253)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"\012<fragment-unparsed>", 21);
  i1 = (OOC_INT32)frag;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3323));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3304)))), TextRider__WriterDesc_WriteObject)),TextRider__WriterDesc_WriteObject)((TextRider__Writer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3341)))), TextRider__WriterDesc_WriteString)),TextRider__WriterDesc_WriteString)((TextRider__Writer)i0, (OOC_CHAR8*)"</fragment-unparsed>", 21);
  return;
  ;
}

void URI_Fragment_Unparsed__FragmentDesc_Append(URI_Fragment_Unparsed__Fragment frag, ADT_StringBuffer__StringBuffer sb) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)sb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3479)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c1));
  i1 = (OOC_INT32)frag;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3511));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3499)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  return;
  ;
}

void OOC_URI_Fragment_Unparsed_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"Illegal character in fragment component", 40, 0, 39);
  _c1 = Object__NewLatin1Char(35u);

  return;
  ;
}

void OOC_URI_Fragment_Unparsed_destroy(void) {
}

/* --- */
