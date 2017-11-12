#include <Codec/Ascii.d>
#include <__oo2c.h>
#include <setjmp.h>

void Codec_Ascii__AsciiDesc_INIT(Codec_Ascii__Ascii c, const OOC_CHAR8 preferredName__ref[], OOC_LEN preferredName_0d) {
  register OOC_INT32 i0;
  OOC_ALLOCATE_VPAR(preferredName,OOC_CHAR8 ,preferredName_0d)

  OOC_INITIALIZE_VPAR(preferredName__ref,preferredName,OOC_CHAR8 ,preferredName_0d)
  i0 = (OOC_INT32)c;
  Codec__CodecDesc_INIT((Codec__Codec)i0, 0, (void*)(OOC_INT32)preferredName, preferredName_0d);
  return;
  ;
}

Codec_Ascii__Decoder Codec_Ascii__AsciiDesc_NewDecoder(Codec_Ascii__Ascii c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_Ascii__Decoder.baseTypes[0]);
  Codec__DecoderDesc_INIT((Codec__Decoder)i0);
  return (Codec_Ascii__Decoder)i0;
  ;
}

Codec_Ascii__Encoder Codec_Ascii__AsciiDesc_NewEncoder(Codec_Ascii__Ascii c) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_Ascii__Encoder.baseTypes[0]);
  i1 = (OOC_INT32)Codec__exceptionEncoder;
  Codec__EncoderDesc_INIT((Codec__Encoder)i0, (Codec__Encoder)i1);
  return (Codec_Ascii__Encoder)i0;
  ;
}

Object__String Codec_Ascii__AsciiDesc_DecodeRegion(Codec_Ascii__Ascii c, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = end;
  i1 = start;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)data, data_0d, i1, i0);
  return (Object__String)i0;
  ;
}

void Codec_Ascii__DecoderDesc_Decode(Codec_Ascii__Decoder dec, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)b;
  i1 = start;
  i2 = end;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1220)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)data, data_0d, i1, i2);
  return;
  ;
}

void Codec_Ascii__EncoderDesc_EncodeLatin1(Codec_Ascii__Encoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 i;

  i0 = start;
  i1 = end;
  i2 = i0!=i1;
  if (!i2) goto l38;
  i3 = (OOC_INT32)b;
  i4 = (OOC_INT32)enc;
  
l3_loop:
  i = i0;
  if (i2) goto l6;
  i2=0u;
  goto l8;
l6:
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 1602)));
  i2 = (OOC_UINT8)i2<(OOC_UINT8)128u;
  
l8:
  if (i2) goto l10;
  i2=i0;
  goto l20;
l10:
  i2=i0;
l11_loop:
  i2 = i2+1;
  i = i2;
  i5 = i2!=i1;
  if (i5) goto l14;
  i5=0u;
  goto l16;
l14:
  i5 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 1602)));
  i5 = (OOC_UINT8)i5<(OOC_UINT8)128u;
  
l16:
  if (i5) goto l11_loop;
l20:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1650)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)s, s_0d, i0, i2);
  start = i2;
  i0 = i2!=i1;
  if (i0) goto l23;
  i0=i2;
  goto l33;
l23:
  i0=i2;
l24_loop:
  i0 = i0+1;
  i5 = i0==i1;
  if (i5) goto l27;
  i5 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 1793)));
  i5 = (OOC_UINT8)i5<(OOC_UINT8)128u;
  
  goto l29;
l27:
  i5=1u;
l29:
  if (!i5) goto l24_loop;
l32:
  Codec__EscapeLatin1((Codec__Encoder)i4, (void*)(OOC_INT32)s, s_0d, i2, i0, (ADT_StringBuffer__StringBuffer)i3);
  start = i0;
  
l33:
  i2 = i0!=i1;
  if (i2) goto l3_loop;
l38:
  return;
  ;
}

void Codec_Ascii__EncoderDesc_EncodeUTF16(Codec_Ascii__Encoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
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
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 2267))*2);
  i2 = (OOC_UINT16)i2<(OOC_UINT16)128u;
  
l8:
  if (i2) goto l10;
  i2=0;
  goto l24;
l10:
  i2=i0;i0=0;
l11_loop:
  i5 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 2308))*2);
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i0, 4096, OOC_UINT32, 2294))) = i5;
  i2 = i2+1;
  start = i2;
  i0 = i0+1;
  i = i0;
  i5 = i0==4096;
  if (!i5) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2395)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)d, 4096, 0, i0);
  i = 0;
  i0=0;
l15:
  i5 = i2!=i1;
  if (i5) goto l18;
  i5=0u;
  goto l20;
l18:
  i5 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 2267))*2);
  i5 = (OOC_UINT16)i5<(OOC_UINT16)128u;
  
l20:
  if (i5) goto l11_loop;
l23:
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l24:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 2474)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i3, (void*)(OOC_INT32)d, 4096, 0, i2);
  i2 = i0!=i1;
  if (!i2) goto l37;
  i2=i0;
l28_loop:
  i2 = i2+1;
  i5 = i2==i1;
  if (i5) goto l31;
  i5 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT32, 2621))*2);
  i5 = (OOC_UINT16)i5<(OOC_UINT16)128u;
  
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

void Codec_Ascii__Register(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c0));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c1));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c2));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c3));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c4));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c5));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c6));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c7));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c8));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c9));
  i0 = (OOC_INT32)Codec_Ascii__codec;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c10));
  return;
  ;
}

void OOC_Codec_Ascii_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"ANSI_X3.4-1968", 15, 0, 14);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"iso-ir-6", 9, 0, 8);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"ANSI_X3.4-1986", 15, 0, 14);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"ISO_646.irv:1991", 17, 0, 16);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"ASCII", 6, 0, 5);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)"ISO646-US", 10, 0, 9);
  _c6 = Object__NewLatin1Region((OOC_CHAR8*)"US-ASCII", 9, 0, 8);
  _c7 = Object__NewLatin1Region((OOC_CHAR8*)"us", 3, 0, 2);
  _c8 = Object__NewLatin1Region((OOC_CHAR8*)"IBM367", 7, 0, 6);
  _c9 = Object__NewLatin1Region((OOC_CHAR8*)"cp367", 6, 0, 5);
  _c10 = Object__NewLatin1Region((OOC_CHAR8*)"csASCII", 8, 0, 7);

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_Ascii__Ascii.baseTypes[0]);
  Codec_Ascii__AsciiDesc_INIT((Codec_Ascii__Ascii)i0, (OOC_CHAR8*)"US-ASCII", 9);
  Codec_Ascii__codec = (Codec_Ascii__Ascii)i0;
  return;
  ;
}

void OOC_Codec_Ascii_destroy(void) {
}

/* --- */
