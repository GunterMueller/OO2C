#include <Codec/Latin1.d>
#include <__oo2c.h>
#include <setjmp.h>

void Codec_Latin1__Latin1Desc_INIT(Codec_Latin1__Latin1 c, const OOC_CHAR8 preferredName__ref[], OOC_LEN preferredName_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(preferredName,OOC_CHAR8 ,preferredName_0d)

  OOC_INITIALIZE_VPAR(preferredName__ref,preferredName,OOC_CHAR8 ,preferredName_0d)
  i0 = (OOC_INT32)c;
  Codec__CodecDesc_INIT((Codec__Codec)i0, 0, (void*)(OOC_INT32)preferredName, preferredName_0d);
  return;
  ;
}

Codec_Latin1__Decoder Codec_Latin1__Latin1Desc_NewDecoder(Codec_Latin1__Latin1 c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_Latin1__Decoder.baseTypes[0]);
  Codec__DecoderDesc_INIT((Codec__Decoder)i0);
  return (Codec_Latin1__Decoder)i0;
  ;
}

Codec_Latin1__Encoder Codec_Latin1__Latin1Desc_NewEncoder(Codec_Latin1__Latin1 c) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_Latin1__Encoder.baseTypes[0]);
  i1 = (OOC_INT32)Codec__exceptionEncoder;
  Codec__EncoderDesc_INIT((Codec__Encoder)i0, (Codec__Encoder)i1);
  return (Codec_Latin1__Encoder)i0;
  ;
}

Object__String Codec_Latin1__Latin1Desc_DecodeRegion(Codec_Latin1__Latin1 c, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = end;
  i1 = start;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)data, data_0d, i1, i0);
  return (Object__String)i0;
  ;
}

void Codec_Latin1__DecoderDesc_Decode(Codec_Latin1__Decoder dec, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = start;
  i2 = end;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1230)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)data, data_0d, i1, i2);
  return;
  ;
}

Object__String8 Codec_Latin1__Latin1Desc_EncodeRegion(Codec_Latin1__Latin1 c, Object__String s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  Object__CharsLatin1 _d8;
  Object__CharsUTF16 _d16;
  OOC_INT32 len;
  OOC_CHAR8 *d;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1543)))), &_td_Object__String8Desc);
  if (i1) goto l15;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1660)))), &_td_Object__String16Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1657)))), 1657);
  goto l16;
l5:
  i0 = (OOC_INT32)Object__String16Desc_CharsUTF16((Object__String16)i0);
  i1 = end;
  i2 = start;
  i3 = i1-i2;
  _d16 = (Object__CharsUTF16)i0;
  len = i3;
  i4 = (OOC_INT32)RT0__NewObject(_td_Codec_Latin1__1443.baseTypes[0], (i3+1));
  d = (void*)i4;
  i = 0;
  i5 = i2!=i1;
  if (!i5) goto l13;
  i5=0;
l8_loop:
  i6 = _check_pointer(i0, 1818);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT16*)(i6+(_check_index(i2, i7, OOC_UINT32, 1818))*2);
  _assert(((OOC_UINT16)i6<=(OOC_UINT16)255u), 100, 1807);
  i6 = _check_pointer(i4, 1869);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i0, 1885);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT16*)(i8+(_check_index(i2, i9, OOC_UINT32, 1885))*2);
  *(OOC_UINT8*)(i6+(_check_index(i5, i7, OOC_UINT32, 1869))) = i8;
  i2 = i2+1;
  start = i2;
  i5 = i5+1;
  i = i5;
  i6 = i2!=i1;
  if (i6) goto l8_loop;
l13:
  i0 = _check_pointer(i4, 1943);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_UINT8*)(i0+(_check_index(i3, i1, OOC_UINT32, 1943))) = 0u;
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i4, 1993)), 0);
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i4, 1993)), i0, 0, i3);
  return (Object__String8)i0;
  goto l16;
l15:
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  _d8 = (Object__CharsLatin1)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 1630)), 0);
  i2 = end;
  i3 = start;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i0, 1630)), i1, i3, i2);
  return (Object__String8)i0;
l16:
  _failed_function(1310); return 0;
  ;
}

void Codec_Latin1__EncoderDesc_EncodeLatin1(Codec_Latin1__Encoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = start;
  i2 = end;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2244)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)s, s_0d, i1, i2);
  return;
  ;
}

void Codec_Latin1__EncoderDesc_EncodeUTF16(Codec_Latin1__Encoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;
  Codec__BufferLatin1 d;

  i0 = start;
  i1 = end;
  i2 = i0!=i1;
  if (!i2) goto l42;
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)enc;
  
l3_loop:
  i = 0;
  if (i2) goto l6;
  i2=0u;
  goto l8;
l6:
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2653))*2);
  i2 = (OOC_UINT16)i2<(OOC_UINT16)256u;
  
l8:
  if (i2) goto l10;
  i2=0;
  goto l24;
l10:
  i2=i0;i0=0;
l11_loop:
  i5 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 2695))*2);
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i0, 4096, OOC_UINT32, 2681))) = i5;
  i2 = i2+1;
  start = i2;
  i0 = i0+1;
  i = i0;
  i5 = i0==4096;
  if (!i5) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2782)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)d, 4096, 0, i0);
  i = 0;
  i0=0;
l15:
  i5 = i2!=i1;
  if (i5) goto l18;
  i5=0u;
  goto l20;
l18:
  i5 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 2653))*2);
  i5 = (OOC_UINT16)i5<(OOC_UINT16)256u;
  
l20:
  if (i5) goto l11_loop;
l23:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2861)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)d, 4096, 0, i2);
  i2 = i0!=i1;
  if (!i2) goto l37;
  i2=i0;
l28_loop:
  i2 = i2+1;
  i5 = i2==i1;
  if (i5) goto l31;
  i5 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 3008))*2);
  i5 = (OOC_UINT16)i5<(OOC_UINT16)256u;
  
  goto l33;
l31:
  i5=1u;
l33:
  if (!i5) goto l28_loop;
l36:
  Codec__EscapeUTF16((Codec__Encoder)i4, (void*)(OOC_INT32)s, s_0d, i0, i2, (ADT_StringBuffer__StringBuffer)i3);
  start = i2;
  i0=i2;
l37:
  i2 = i0!=i1;
  if (i2) goto l3_loop;
l42:
  return;
  ;
}

void Codec_Latin1__Register(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c0));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c1));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c2));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c3));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c4));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c5));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c6));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c7));
  i0 = (OOC_INT32)Codec_Latin1__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c8));
  return;
  ;
}

void OOC_Codec_Latin1_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"ISO_8859-1:1987", 16, 0, 15);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"iso-ir-100", 11, 0, 10);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"ISO_8859-1", 11, 0, 10);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"ISO-8859-1", 11, 0, 10);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"latin1", 7, 0, 6);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)"l1", 3, 0, 2);
  _c6 = Object__NewLatin1Region((OOC_CHAR8*)"IBM819", 7, 0, 6);
  _c7 = Object__NewLatin1Region((OOC_CHAR8*)"CP819", 6, 0, 5);
  _c8 = Object__NewLatin1Region((OOC_CHAR8*)"csISOLatin1y", 13, 0, 12);

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_Latin1__Latin1.baseTypes[0]);
  Codec_Latin1__Latin1Desc_INIT((Codec_Latin1__Latin1)i0, (OOC_CHAR8*)"ISO-8859-1", 11);
  Codec_Latin1__codec = (Codec_Latin1__Latin1)i0;
  return;
  ;
}

void OOC_Codec_Latin1_destroy(void) {
}

/* --- */
