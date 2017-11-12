#include <Codec.d>
#include <__oo2c.h>
#include <setjmp.h>

void Codec__EncodingErrorDesc_INIT(Codec__EncodingError e, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)e;
  IO__ErrorDesc_INIT((IO__Error)i0, (Object__String)((OOC_INT32)_c0));
  i1 = start;
  *(OOC_INT32*)((_check_pointer(i0, 5278))+92) = i1;
  i1 = end;
  *(OOC_INT32*)((_check_pointer(i0, 5300))+96) = i1;
  return;
  ;
}

void Codec__DecoderDesc_INIT(Codec__Decoder dec) {

  return;
  ;
}

void Codec__DecoderDesc_Start(Codec__Decoder dec) {

  return;
  ;
}

void Codec__DecoderDesc_Decode(Codec__Decoder dec, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {

  return;
  ;
}

void Codec__DecoderDesc_Reset(Codec__Decoder dec) {

  return;
  ;
}

void Codec__DecoderDesc_End(Codec__Decoder dec) {

  return;
  ;
}

void Codec__EncoderDesc_INIT(Codec__Encoder enc, Codec__Encoder escape) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)enc;
  i1 = (OOC_INT32)escape;
  *(OOC_INT32*)(_check_pointer(i0, 7199)) = i1;
  return;
  ;
}

void Codec__EncoderDesc_SetEscapeEncoder(Codec__Encoder enc, Codec__Encoder escape) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)enc;
  i1 = (OOC_INT32)escape;
  *(OOC_INT32*)(_check_pointer(i0, 7692)) = i1;
  return;
  ;
}

void Codec__EncoderDesc_Start(Codec__Encoder enc) {

  return;
  ;
}

void Codec__EncoderDesc_EncodeLatin1(Codec__Encoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {

  return;
  ;
}

void Codec__EncoderDesc_EncodeUTF16(Codec__Encoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {

  return;
  ;
}

void Codec__EncoderDesc_Encode(Codec__Encoder enc, Object__String s, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object__CharsLatin1 chars8;
  Object__CharsUTF16 chars16;

  i0 = (OOC_INT32)s;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11009)))), &_td_Object__String8Desc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11117)))), &_td_Object__String16Desc);
  if (i1) goto l5;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 11114)))), 11114);
  goto l8;
l5:
  i0 = (OOC_INT32)Object__String16Desc_CharsUTF16((Object__String16)i0);
  chars16 = (Object__CharsUTF16)i0;
  i1 = (OOC_INT32)enc;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11200)), 0);
  i3 = (OOC_INT32)b;
  i4 = end;
  i5 = start;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11180)))), Codec__EncoderDesc_EncodeUTF16)),Codec__EncoderDesc_EncodeUTF16)((Codec__Encoder)i1, (void*)(_check_pointer(i0, 11200)), i2, i5, i4, (ADT_StringBuffer__StringBuffer)i3);
  goto l8;
l7:
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  chars8 = (Object__CharsLatin1)i0;
  i1 = (OOC_INT32)enc;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11091)), 0);
  i3 = (OOC_INT32)b;
  i4 = end;
  i5 = start;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11071)))), Codec__EncoderDesc_EncodeLatin1)),Codec__EncoderDesc_EncodeLatin1)((Codec__Encoder)i1, (void*)(_check_pointer(i0, 11091)), i2, i5, i4, (ADT_StringBuffer__StringBuffer)i3);
l8:
  return;
  ;
}

void Codec__EscapeLatin1(Codec__Encoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  ADT_StringBuffer__StringBuffer esc;
  ADT_StringBuffer__CharsLatin1 chars8;
  ADT_StringBuffer__CharsUTF16 chars16;

  i0 = end;
  i1 = start;
  i2 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  ADT_StringBuffer__StringBufferDesc_INIT((ADT_StringBuffer__StringBuffer)i2, (i0-i1));
  esc = (ADT_StringBuffer__StringBuffer)i2;
  i3 = (OOC_INT32)enc;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11616));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 11616));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 11623)))), Codec__EncoderDesc_EncodeLatin1)),Codec__EncoderDesc_EncodeLatin1)((Codec__Encoder)i5, (void*)(OOC_INT32)s, s_0d, i1, i0, (ADT_StringBuffer__StringBuffer)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11680)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i2);
  chars8 = (ADT_StringBuffer__CharsLatin1)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11803)))), ADT_StringBuffer__StringBufferDesc_CharsUTF16)),ADT_StringBuffer__StringBufferDesc_CharsUTF16)((ADT_StringBuffer__StringBuffer)i2);
  chars16 = (ADT_StringBuffer__CharsUTF16)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11847)), 0);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 11856))+4);
  i4 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11827)))), Codec__EncoderDesc_EncodeUTF16)),Codec__EncoderDesc_EncodeUTF16)((Codec__Encoder)i3, (void*)(_check_pointer(i0, 11847)), i1, 0, i2, (ADT_StringBuffer__StringBuffer)i4);
  goto l4;
l3:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 11752)), 0);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 11761))+4);
  i4 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 11732)))), Codec__EncoderDesc_EncodeLatin1)),Codec__EncoderDesc_EncodeLatin1)((Codec__Encoder)i3, (void*)(_check_pointer(i0, 11752)), i1, 0, i2, (ADT_StringBuffer__StringBuffer)i4);
l4:
  return;
  ;
}

void Codec__EscapeUTF16(Codec__Encoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  ADT_StringBuffer__StringBuffer esc;
  ADT_StringBuffer__CharsLatin1 chars8;
  ADT_StringBuffer__CharsUTF16 chars16;

  i0 = end;
  i1 = start;
  i2 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  ADT_StringBuffer__StringBufferDesc_INIT((ADT_StringBuffer__StringBuffer)i2, (i0-i1));
  esc = (ADT_StringBuffer__StringBuffer)i2;
  i3 = (OOC_INT32)enc;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 12273));
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i3, 12273));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 12280)))), Codec__EncoderDesc_EncodeUTF16)),Codec__EncoderDesc_EncodeUTF16)((Codec__Encoder)i5, (void*)(OOC_INT32)s, s_0d, i1, i0, (ADT_StringBuffer__StringBuffer)i2);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12336)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i2);
  chars8 = (ADT_StringBuffer__CharsLatin1)i0;
  i1 = i0!=(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12459)))), ADT_StringBuffer__StringBufferDesc_CharsUTF16)),ADT_StringBuffer__StringBufferDesc_CharsUTF16)((ADT_StringBuffer__StringBuffer)i2);
  chars16 = (ADT_StringBuffer__CharsUTF16)i0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12503)), 0);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12512))+4);
  i4 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12483)))), Codec__EncoderDesc_EncodeUTF16)),Codec__EncoderDesc_EncodeUTF16)((Codec__Encoder)i3, (void*)(_check_pointer(i0, 12503)), i1, 0, i2, (ADT_StringBuffer__StringBuffer)i4);
  goto l4;
l3:
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 12408)), 0);
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12417))+4);
  i4 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 12388)))), Codec__EncoderDesc_EncodeLatin1)),Codec__EncoderDesc_EncodeLatin1)((Codec__Encoder)i3, (void*)(_check_pointer(i0, 12408)), i1, 0, i2, (ADT_StringBuffer__StringBuffer)i4);
l4:
  return;
  ;
}

void Codec__EncoderDesc_Closure(Codec__Encoder enc, ADT_StringBuffer__StringBuffer b) {

  return;
  ;
}

void Codec__EncoderDesc_Reset(Codec__Encoder enc) {

  return;
  ;
}

void Codec__EncoderDesc_End(Codec__Encoder enc) {

  return;
  ;
}

void Codec__CodecDesc_INIT(Codec__Codec codec, OOC_INT8 _class, const OOC_CHAR8 preferredName__ref[], OOC_LEN preferredName_0d) {
  register OOC_INT32 i0,i1;
  OOC_ALLOCATE_VPAR(preferredName,OOC_CHAR8 ,preferredName_0d)

  OOC_INITIALIZE_VPAR(preferredName__ref,preferredName,OOC_CHAR8 ,preferredName_0d)
  i0 = (OOC_INT32)codec;
  i1 = _class;
  *(OOC_INT8*)(_check_pointer(i0, 13675)) = i1;
  i1 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)preferredName, preferredName_0d);
  *(OOC_INT32*)((_check_pointer(i0, 13702))+4) = i1;
  return;
  ;
}

Codec__Decoder Codec__CodecDesc_NewDecoder(Codec__Codec codec) {

  _failed_function(13803); return 0;
  ;
}

Codec__Encoder Codec__CodecDesc_NewEncoder(Codec__Codec codec) {

  _failed_function(14074); return 0;
  ;
}

Object__String Codec__CodecDesc_DecodeRegion(Codec__Codec codec, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;
  Codec__Decoder dec;
  ADT_StringBuffer__StringBuffer b;

  i0 = (OOC_INT32)codec;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15007)))), Codec__CodecDesc_NewDecoder)),Codec__CodecDesc_NewDecoder)((Codec__Codec)i0);
  i1 = end;
  i2 = start;
  dec = (Codec__Decoder)i0;
  i3 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  ADT_StringBuffer__StringBufferDesc_INIT((ADT_StringBuffer__StringBuffer)i3, ((i1-i2)+1));
  b = (ADT_StringBuffer__StringBuffer)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15084)))), Codec__DecoderDesc_Start)),Codec__DecoderDesc_Start)((Codec__Decoder)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15100)))), Codec__DecoderDesc_Decode)),Codec__DecoderDesc_Decode)((Codec__Decoder)i0, (void*)(OOC_INT32)data, data_0d, i2, i1, (ADT_StringBuffer__StringBuffer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 15139)))), Codec__DecoderDesc_End)),Codec__DecoderDesc_End)((Codec__Decoder)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 15158)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i3);
  return (Object__String)i0;
  ;
}

Object__String Codec__CodecDesc_Decode(Codec__Codec codec, const OOC_CHAR8 data[], OOC_LEN data_0d) {
  register OOC_INT32 i0,i1;
  OOC_INT32 i;

  i = 0;
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(0, data_0d, OOC_UINT32, 15391)));
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0;
  goto l9;
l3:
  i0=0;
l4_loop:
  i0 = i0+1;
  i = i0;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 15391)));
  i1 = i1!=0u;
  if (i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)codec;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15443)))), Codec__CodecDesc_DecodeRegion)),Codec__CodecDesc_DecodeRegion)((Codec__Codec)i1, (void*)(OOC_INT32)data, data_0d, 0, i0);
  return (Object__String)i0;
  ;
}

Object__String8 Codec__CodecDesc_EncodeRegion(Codec__Codec codec, Object__String s, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Codec__Encoder enc;
  ADT_StringBuffer__StringBuffer b;
  Object__String s8;

  i0 = (OOC_INT32)codec;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16152)))), Codec__CodecDesc_NewEncoder)),Codec__CodecDesc_NewEncoder)((Codec__Codec)i0);
  i1 = end;
  i2 = start;
  enc = (Codec__Encoder)i0;
  i3 = (OOC_INT32)RT0__NewObject(_td_ADT_StringBuffer__StringBuffer.baseTypes[0]);
  ADT_StringBuffer__StringBufferDesc_INIT((ADT_StringBuffer__StringBuffer)i3, ((i1-i2)+1));
  b = (ADT_StringBuffer__StringBuffer)i3;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16229)))), Codec__EncoderDesc_Start)),Codec__EncoderDesc_Start)((Codec__Encoder)i0);
  i4 = (OOC_INT32)s;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16245)))), Codec__EncoderDesc_Encode)),Codec__EncoderDesc_Encode)((Codec__Encoder)i0, (Object__String)i4, i2, i1, (ADT_StringBuffer__StringBuffer)i3);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16281)))), Codec__EncoderDesc_End)),Codec__EncoderDesc_End)((Codec__Encoder)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 16299)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i3);
  s8 = (Object__String)i0;
  return (Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 16334)))), &_td_Object__String8Desc, 16334));
  ;
}

Object__String8 Codec__CodecDesc_Encode(Codec__Codec codec, Object__String s) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)s;
  i1 = (OOC_INT32)codec;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 16548));
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16527)))), Codec__CodecDesc_EncodeRegion)),Codec__CodecDesc_EncodeRegion)((Codec__Codec)i1, (Object__String)i0, 0, i2);
  return (Object__String8)i0;
  ;
}

void Codec__ExceptionEncoderDesc_EncodeLatin1(Codec__ExceptionEncoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec__EncodingError.baseTypes[0]);
  i1 = end;
  i2 = start;
  Codec__EncodingErrorDesc_INIT((Codec__EncodingError)i0, i2, i1);
  Exception__Raise((void*)i0);
  
  ;
}

void Codec__ExceptionEncoderDesc_EncodeUTF16(Codec__ExceptionEncoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec__EncodingError.baseTypes[0]);
  i1 = end;
  i2 = start;
  Codec__EncodingErrorDesc_INIT((Codec__EncodingError)i0, i2, i1);
  Exception__Raise((void*)i0);
  
  ;
}

void Codec__CryptoDecoderDesc_INIT(Codec__CryptoDecoder dec) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dec;
  Codec__DecoderDesc_INIT((Codec__Decoder)i0);
  return;
  ;
}

void Codec__CryptoEncoderDesc_INIT(Codec__CryptoEncoder enc, Codec__Codec codec) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Codec__exceptionEncoder;
  i1 = (OOC_INT32)enc;
  Codec__EncoderDesc_INIT((Codec__Encoder)i1, (Codec__Encoder)i0);
  return;
  ;
}

void Codec__CryptoDecoderDesc_SetKey(Codec__CryptoDecoder dec, Object__String8 key) {

  return;
  ;
}

void Codec__CryptoEncoderDesc_SetKey(Codec__CryptoEncoder enc, Object__String8 key) {

  return;
  ;
}

static Object__String Codec__Cap(Object__String str) {
  register OOC_INT32 i0;
  Object__CharsLatin1 chars;
  OOC_CHAR8 s[128];

  i0 = (OOC_INT32)str;
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 17858)))), &_td_Object__String8Desc, 17858)));
  chars = (Object__CharsLatin1)i0;
  _copy_8((const void*)(_check_pointer(i0, 17896)),(void*)(OOC_INT32)s,128);
  Strings__Capitalize((void*)(OOC_INT32)s, 128);
  i0 = (OOC_INT32)Object__NewLatin1((void*)(OOC_INT32)s, 128);
  return (Object__String)i0;
  ;
}

Codec__Codec Codec__Get(Object__String name) {
  register OOC_INT32 i0,i1;
  Object__String norm;
  Object__Object obj;

  i0 = (OOC_INT32)name;
  i0 = (OOC_INT32)Codec__Cap((Object__String)i0);
  norm = (Object__String)i0;
  i1 = (OOC_INT32)Codec__reg;
  i1 = ADT_Dictionary__DictionaryDesc_HasKey((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  if (i1) goto l3;
  return (Codec__Codec)(OOC_INT32)0;
  goto l4;
l3:
  i1 = (OOC_INT32)Codec__reg;
  i0 = (OOC_INT32)ADT_Dictionary__DictionaryDesc_Get((ADT_Dictionary__Dictionary)i1, (Object__Object)i0);
  obj = (Object__Object)i0;
  return (Codec__Codec)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 18167)))), &_td_Codec__CodecDesc, 18167));
l4:
  _failed_function(17984); return 0;
  ;
}

void Codec__Register(Codec__Codec codec, Object__String name) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)name;
  i0 = (OOC_INT32)Codec__Cap((Object__String)i0);
  i1 = (OOC_INT32)Codec__reg;
  i2 = (OOC_INT32)codec;
  ADT_Dictionary__DictionaryDesc_Set((ADT_Dictionary__Dictionary)i1, (Object__Object)i0, (Object__Object)i2);
  return;
  ;
}

void OOC_Codec_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"Cannot convert text to target encoding", 39, 0, 38);

  i0 = (OOC_INT32)ADT_Dictionary__New();
  Codec__reg = (ADT_Dictionary__Dictionary)i0;
  return;
  ;
}

void OOC_Codec_destroy(void) {
}

/* --- */
