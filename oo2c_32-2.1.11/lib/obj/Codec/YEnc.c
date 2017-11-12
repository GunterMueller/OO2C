#include <Codec/YEnc.d>
#include <__oo2c.h>
#include <setjmp.h>

void Codec_YEnc__DecoderDesc_INIT(Codec_YEnc__Decoder dec) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dec;
  Codec__DecoderDesc_INIT((Codec__Decoder)i0);
  *(OOC_UINT8*)(_check_pointer(i0, 2567)) = 0u;
  return;
  ;
}

void Codec_YEnc__EncoderDesc_INIT(Codec_YEnc__Encoder enc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Codec__exceptionEncoder;
  i1 = (OOC_INT32)enc;
  Codec__EncoderDesc_INIT((Codec__Encoder)i1, (Codec__Encoder)i0);
  *(OOC_INT32*)((_check_pointer(i1, 2694))+4) = 128;
  return;
  ;
}

Codec_YEnc__Decoder Codec_YEnc__YEncDesc_NewDecoder(Codec_YEnc__YEnc c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_YEnc__Decoder.baseTypes[0]);
  Codec_YEnc__DecoderDesc_INIT((Codec_YEnc__Decoder)i0);
  return (Codec_YEnc__Decoder)i0;
  ;
}

Codec_YEnc__Encoder Codec_YEnc__YEncDesc_NewEncoder(Codec_YEnc__YEnc c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_YEnc__Encoder.baseTypes[0]);
  Codec_YEnc__EncoderDesc_INIT((Codec_YEnc__Encoder)i0);
  return (Codec_YEnc__Encoder)i0;
  ;
}

static OOC_CHAR8 Codec_YEnc__LookingAt(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 3121)));
  i1 = start;
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = end;
  i0 = i1!=i0;
  
l5:
  if (i0) goto l7;
  i0=0u;
  goto l9;
l7:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 3154)));
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 3161)));
  i0 = i0==i2;
  
l9:
  if (i0) goto l11;
  i0=0;
  goto l25;
l11:
  i0 = end;
  i0 = i1!=i0;
  i2=i1;i1=0;
l12_loop:
  i1 = i1+1;
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 3121)));
  i2 = i2+1;
  i3 = i3!=0u;
  if (i3) goto l15;
  i3=0u;
  goto l17;
l15:
  i3=i0;
l17:
  if (i3) goto l19;
  i3=0u;
  goto l21;
l19:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 3154)));
  i4 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 3161)));
  i3 = i3==i4;
  
l21:
  if (i3) goto l12_loop;
l24:
  i0=i1;
l25:
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3215)));
  return (i0==0u);
  ;
}

static OOC_INT32 Codec_YEnc__GetNumber(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 *start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_CHAR8 str[32];
  OOC_INT8 res;

  i0 = *start;
  i1 = end;
  i2 = i0!=i1;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 3524)));
  i2 = CharClass__IsNumeric(i2);
  
l5:
  if (!i2) goto l25;
  i2=i0;i0=0;
l7_loop:
  i3 = i0<32;
  if (!i3) goto l10;
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 3640)));
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 32, OOC_UINT32, 3629))) = i3;
l10:
  i0 = i0+1;
  i = i0;
  i2 = i2+1;
  *start = i2;
  i3 = i2==i1;
  if (i3) goto l13;
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 3754)));
  i3 = CharClass__IsNumeric(i3);
  i3 = !i3;
  
  goto l15;
l13:
  i3=1u;
l15:
  if (!i3) goto l7_loop;
l18:
  i1 = i0<32;
  if (!i1) goto l25;
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 32, OOC_UINT32, 3804))) = 0u;
  IntStr__StrToInt((void*)(OOC_INT32)str, 32, (void*)(OOC_INT32)&i, (void*)(OOC_INT32)&res);
  i0 = res;
  i0 = i0==0;
  if (!i0) goto l25;
  i0 = i;
  return i0;
l25:
  return (-1);
  ;
}

OOC_CHAR8 Codec_YEnc__IsEOL(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = i0==10u;
  if (i1) goto l3;
  i0 = i0==13u;
  
  goto l4;
l3:
  i0=1u;
l4:
  return i0;
  ;
}

static void Codec_YEnc__SkipWS(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 *start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2;

  i0 = *start;
  i1 = end;
  i2 = i0!=i1;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 4231)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l5:
  if (i2) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 4261)));
  i2 = Codec_YEnc__IsEOL(i2);
  i2 = !i2;
  
l9:
  if (!i2) goto l24;
l11_loop:
  i0 = i0+1;
  *start = i0;
  i2 = i0!=i1;
  if (i2) goto l14;
  i2=0u;
  goto l16;
l14:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 4231)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l16:
  if (i2) goto l18;
  i2=0u;
  goto l20;
l18:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 4261)));
  i2 = Codec_YEnc__IsEOL(i2);
  i2 = !i2;
  
l20:
  if (i2) goto l11_loop;
l24:
  return;
  ;
}

OOC_INT32 Codec_YEnc__LineBegin(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, struct Codec_YEnc__Header *header, RT0__Struct header__tag) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = end;
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"=ybegin ", 9);
  if (!i2) goto l80;
  start = (i1+8);
  *(OOC_INT32*)(OOC_INT32)header = (-1);
  *(OOC_INT32*)((OOC_INT32)header+268) = (-1);
  *(OOC_INT32*)((OOC_INT32)header+272) = (-1);
  *(OOC_INT32*)((OOC_INT32)header+300) = 0;
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"part=", 6);
  if (!i2) goto l8;
  start = (i1+5);
  i1 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)(OOC_INT32)header = i1;
  i1 = i1<1;
  if (!i1) goto l8;
  return (-1);
l8:
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"line=", 6);
  if (i2) goto l11;
  return (-1);
  goto l19;
l11:
  start = (i1+5);
  i1 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)((OOC_INT32)header+4) = i1;
  i2 = i1<63;
  if (i2) goto l14;
  i1 = i1>998;
  
  goto l16;
l14:
  i1=1u;
l16:
  if (!i1) goto l19;
  return (-1);
l19:
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"size=", 6);
  if (i2) goto l22;
  return (-1);
  goto l26;
l22:
  start = (i1+5);
  i1 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)((OOC_INT32)header+8) = i1;
  i1 = i1<1;
  if (!i1) goto l26;
  return (-1);
l26:
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"name=", 6);
  if (i2) goto l29;
  return (-1);
  goto l80;
l29:
  start = (i1+5);
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = i1!=i0;
  if (i2) goto l32;
  i2=0u;
  goto l34;
l32:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 6482)));
  i2 = Codec_UU__IsEOL(i2);
  i2 = !i2;
  
l34:
  if (i2) goto l36;
  i2=i1;
  goto l46;
l36:
  i2=i1;
l37_loop:
  i2 = i2+1;
  start = i2;
  i3 = i2!=i0;
  if (i3) goto l40;
  i3=0u;
  goto l42;
l40:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 6482)));
  i3 = Codec_UU__IsEOL(i3);
  i3 = !i3;
  
l42:
  if (i3) goto l37_loop;
l46:
  i0 = i2!=i0;
  if (!i0) goto l80;
  i0 = i2>i1;
  if (i0) goto l51;
  i0=0u;
  goto l53;
l51:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i2-1), data_0d, OOC_UINT32, 6643)));
  i0 = (OOC_UINT8)i0<=(OOC_UINT8)32u;
  
l53:
  if (i0) goto l55;
  i0=i2;
  goto l65;
l55:
  i0=i2;
l56_loop:
  i0 = i0-1;
  i2 = i0>i1;
  if (i2) goto l59;
  i2=0u;
  goto l61;
l59:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i0-1), data_0d, OOC_UINT32, 6643)));
  i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
  
l61:
  if (i2) goto l56_loop;
l65:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 6777)));
  i2 = i2==34u;
  if (i2) goto l68;
  i2=0u;
  goto l70;
l68:
  i2 = i0>=(i1+2);
  
l70:
  if (i2) goto l72;
  i2=0u;
  goto l74;
l72:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i0-1), data_0d, OOC_UINT32, 6851)));
  i2 = i2==34u;
  
l74:
  if (!i2) goto l77;
  i1 = i1+1;
  i0 = i0-1;
  
l77:
  Codec_UU__Extract((void*)(OOC_INT32)data, data_0d, i1, i0, (void*)((OOC_INT32)header+12), 256);
  i0 = start;
  return i0;
l80:
  return (-1);
  ;
}

OOC_INT32 Codec_YEnc__LinePart(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, struct Codec_YEnc__Header *header, RT0__Struct header__tag) {
  register OOC_INT32 i0,i1,i2;

  i0 = end;
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"=ypart ", 8);
  if (!i2) goto l32;
  start = (i1+7);
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"begin=", 7);
  if (i2) goto l5;
  return (-1);
  goto l13;
l5:
  start = (i1+6);
  i1 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)((OOC_INT32)header+268) = i1;
  i2 = i1<1;
  if (i2) goto l8;
  i2 = *(OOC_INT32*)((OOC_INT32)header+8);
  i1 = i1>i2;
  
  goto l10;
l8:
  i1=1u;
l10:
  if (!i1) goto l13;
  return (-1);
l13:
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"end=", 5);
  if (i2) goto l16;
  return (-1);
  goto l24;
l16:
  start = (i1+4);
  i1 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)((OOC_INT32)header+272) = i1;
  i2 = *(OOC_INT32*)((OOC_INT32)header+268);
  i2 = i1<i2;
  if (i2) goto l19;
  i2 = *(OOC_INT32*)((OOC_INT32)header+8);
  i1 = i1>i2;
  
  goto l21;
l19:
  i1=1u;
l21:
  if (!i1) goto l24;
  return (-1);
l24:
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i0 = i1!=i0;
  if (i0) goto l27;
  i0=0u;
  goto l29;
l27:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 8325)));
  i0 = Codec_UU__IsEOL(i0);
  
l29:
  if (!i0) goto l32;
  return i1;
l32:
  return (-1);
  ;
}

OOC_INT32 Codec_YEnc__LineData(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, struct Codec_YEnc__Header *header, RT0__Struct header__tag) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = start;
  i1 = end;
  i2 = i1>=(i0+2);
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 9214)));
  i2 = i2==61u;
  
l5:
  if (i2) goto l7;
  i2=0u;
  goto l9;
l7:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i0+1), data_0d, OOC_UINT32, 9243)));
  i2 = i2==121u;
  
l9:
  if (i2) goto l76;
  i2 = i0!=i1;
  if (i2) goto l13;
  i2=0u;
  goto l15;
l13:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 9423)));
  i2 = i2!=0u;
  
l15:
  if (i2) goto l17;
  i2=0u;
  goto l19;
l17:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 9463)));
  i2 = i2!=10u;
  
l19:
  if (i2) goto l21;
  i2=0u;
  goto l23;
l21:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 9502)));
  i2 = i2!=13u;
  
l23:
  if (i2) goto l25;
  i2=i0;
  goto l43;
l25:
  i2=i0;
l26_loop:
  i2 = i2+1;
  i3 = i2!=i1;
  if (i3) goto l29;
  i3=0u;
  goto l31;
l29:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 9423)));
  i3 = i3!=0u;
  
l31:
  if (i3) goto l33;
  i3=0u;
  goto l35;
l33:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 9463)));
  i3 = i3!=10u;
  
l35:
  if (i3) goto l37;
  i3=0u;
  goto l39;
l37:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 9502)));
  i3 = i3!=13u;
  
l39:
  if (i3) goto l26_loop;
l43:
  i3 = i2==i0;
  if (i3) goto l46;
  i1 = i2==i1;
  
  goto l48;
l46:
  i1=1u;
l48:
  if (i1) goto l50;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 9703)));
  i1 = i1==0u;
  
  goto l52;
l50:
  i1=1u;
l52:
  if (i1) goto l54;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i2-1), data_0d, OOC_UINT32, 9778)));
  i1 = i1==61u;
  
  goto l56;
l54:
  i1=1u;
l56:
  if (i1) goto l58;
  i1 = *(OOC_INT32*)((OOC_INT32)header+4);
  i1 = (i2-i0)>(i1+1);
  
  goto l60;
l58:
  i1=1u;
l60:
  if (i1) goto l74;
  i0 = i2-i0;
  i1 = *(OOC_INT32*)((OOC_INT32)header+4);
  i3 = i0==i1;
  if (i3) goto l68;
  i0 = i0==(i1+1);
  if (i0) goto l66;
  i0=0u;
  goto l70;
l66:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i2-2), data_0d, OOC_UINT32, 10089)));
  i0 = i0==61u;
  
  goto l70;
l68:
  i0=1u;
l70:
  if (i0) goto l72;
  i0 = (OOC_INT32)header+300;
  i1 = *(OOC_INT32*)i0;
  *(OOC_INT32*)i0 = (i1+1);
  return i2;
  goto l77;
l72:
  return i2;
  goto l77;
l74:
  return (-1);
  goto l77;
l76:
  return (-1);
l77:
  _failed_function(8423); return 0;
  ;
}

OOC_INT32 Codec_YEnc__LineEnd(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, struct Codec_YEnc__Header *header, RT0__Struct header__tag) {
  register OOC_INT32 i0,i1,i2,i3;
  auto OOC_INT32 Codec_YEnc__LineEnd_GetCRC(OOC_CHAR8 *ok);
    
    OOC_INT32 Codec_YEnc__LineEnd_GetCRC(OOC_CHAR8 *ok) {
      register OOC_INT32 i0,i1,i2,i3;
      OOC_INT32 pos;
      auto OOC_CHAR8 Codec_YEnc__LineEnd_GetCRC_IsHex(OOC_CHAR8 ch);
        
        OOC_CHAR8 Codec_YEnc__LineEnd_GetCRC_IsHex(OOC_CHAR8 ch) {
          register OOC_INT32 i0,i1;

          i0 = ch;
          i1 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
          if (i1) goto l3;
          i1=0u;
          goto l5;
l3:
          i1 = (OOC_UINT8)i0<=(OOC_UINT8)57u;
          
l5:
          if (i1) goto l11;
          i0 = _cap(i0);
          i1 = (OOC_UINT8)65u<=(OOC_UINT8)i0;
          if (i1) goto l9;
          i0=0u;
          goto l12;
l9:
          i0 = (OOC_UINT8)i0<=(OOC_UINT8)70u;
          
          goto l12;
l11:
          i0=1u;
l12:
          return i0;
          ;
        }


      i0 = start;
      pos = i0;
      i1 = end;
      i2 = i0!=i1;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 11158)));
      i2 = Codec_YEnc__LineEnd_GetCRC_IsHex(i2);
      
l5:
      if (i2) goto l7;
      i1=i0;
      goto l17;
l7:
      i2=i0;
l8_loop:
      i2 = i2+1;
      start = i2;
      i3 = i2!=i1;
      if (i3) goto l11;
      i3=0u;
      goto l13;
l11:
      i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 11158)));
      i3 = Codec_YEnc__LineEnd_GetCRC_IsHex(i3);
      
l13:
      if (i3) goto l8_loop;
l16:
      i1=i2;
l17:
      i0 = i1-i0;
      i1 = i0>0;
      if (i1) goto l20;
      i0=0u;
      goto l21;
l20:
      i0 = i0<=8;
      
l21:
      *ok = i0;
      return 1;
      ;
    }


  i0 = end;
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"=yend ", 7);
  if (!i2) goto l37;
  start = (i1+6);
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i1 = start;
  i2 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i1, i0, (OOC_CHAR8*)"size=", 6);
  if (!i2) goto l37;
  start = (i1+5);
  i1 = (OOC_INT32)header+292;
  *(OOC_UINT8*)i1 = 0u;
  i2 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)((OOC_INT32)header+276) = i2;
  i2 = i2<1;
  if (i2) goto l34;
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i2 = start;
  i3 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i2, i0, (OOC_CHAR8*)"part=", 6);
  if (i3) goto l9;
  *(OOC_INT32*)((OOC_INT32)header+280) = (-1);
  goto l20;
l9:
  start = (i2+5);
  i2 = (OOC_INT32)header+284;
  *(OOC_UINT8*)i2 = 0u;
  i3 = Codec_YEnc__GetNumber((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  *(OOC_INT32*)((OOC_INT32)header+280) = i3;
  i3 = i3<1;
  if (i3) goto l18;
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
  i3 = start;
  i0 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i3, i0, (OOC_CHAR8*)"pcrc32=", 8);
  if (!i0) goto l19;
  start = (i3+7);
  i0 = Codec_YEnc__LineEnd_GetCRC((void*)i2);
  *(OOC_INT32*)((OOC_INT32)header+288) = i0;
  i0 = *(OOC_UINT8*)i2;
  i0 = !i0;
  if (!i0) goto l19;
  return (-1);
  goto l19;
l18:
  return (-1);
l19:
  i0 = end;
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
l20:
  i0 = end;
  i2 = start;
  i0 = Codec_YEnc__LookingAt((void*)(OOC_INT32)data, data_0d, i2, i0, (OOC_CHAR8*)"crc32=", 7);
  if (!i0) goto l26;
  start = (i2+6);
  i0 = Codec_YEnc__LineEnd_GetCRC((void*)i1);
  *(OOC_INT32*)((OOC_INT32)header+296) = i0;
  i0 = *(OOC_UINT8*)i1;
  i0 = !i0;
  if (!i0) goto l25;
  return (-1);
l25:
  i0 = end;
  Codec_YEnc__SkipWS((void*)(OOC_INT32)data, data_0d, (void*)(OOC_INT32)&start, i0);
l26:
  i0 = start;
  i1 = end;
  i1 = i0!=i1;
  if (i1) goto l29;
  i1=0u;
  goto l31;
l29:
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 12926)));
  i1 = Codec_UU__IsEOL(i1);
  
l31:
  if (!i1) goto l37;
  return i0;
  goto l37;
l34:
  return (-1);
l37:
  return (-1);
  ;
}

void Codec_YEnc__DecoderDesc_Decode(Codec_YEnc__Decoder dec, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT32 dpos;
  OOC_CHAR8 d[5097];
  OOC_CHAR8 ch;

  dpos = 0;
  i0 = (OOC_INT32)dec;
  i1 = *(OOC_UINT8*)(_check_pointer(i0, 13383));
  if (i1) goto l3;
  i1=0;
  goto l8;
l3:
  i1 = end;
  i2 = start;
  i1 = i2==i1;
  if (i1) goto l6;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 13529)));
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(0, 5097, OOC_UINT8, 13509))) = (_mod((i1-106),256));
  start = (i2+1);
  dpos = 1;
  *(OOC_UINT8*)(_check_pointer(i0, 13608)) = 0u;
  i1=1;
  goto l8;
l6:
  return;
  i1=0;
l8:
  i2 = (OOC_INT32)b;
  i3 = end;
  
l9_loop:
  i4 = start;
  i5 = i4==i3;
  if (i5) goto l37;
  i5 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i4, data_0d, OOC_UINT32, 13747)));
  i5 = i5==61u;
  if (i5) goto l26;
  i5 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i4, data_0d, OOC_UINT32, 14125)));
  ch = i5;
  i6 = i5!=10u;
  if (i6) goto l16;
  i6=0u;
  goto l18;
l16:
  i6 = i5!=13u;
  
l18:
  if (i6) goto l20;
  i6=0u;
  goto l22;
l20:
  i6 = i5!=0u;
  
l22:
  if (!i6) goto l25;
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i1, 5097, OOC_UINT32, 14207))) = (_mod((i5-42),256));
  i1 = i1+1;
  dpos = i1;
  
l25:
  start = (i4+1);
  
  goto l31;
l26:
  i5 = i4+1;
  i6 = i5==i3;
  if (i6) goto l29;
  i6 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i4, data_0d, OOC_UINT32, 13960)));
  i6 = Codec_UU__IsEOL(i6);
  _assert((!i6), 101, 13938);
  i5 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i5, data_0d, OOC_UINT32, 14022)));
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i1, 5097, OOC_UINT32, 13999))) = (_mod((i5-106),256));
  i1 = i1+1;
  dpos = i1;
  start = (i4+2);
  
  goto l31;
l29:
  *(OOC_UINT8*)(_check_pointer(i0, 13876)) = 1u;
  goto l37;
l31:
  i4 = i1>=4096;
  if (!i4) goto l9_loop;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14362)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)d, 5097, 0, i1);
  dpos = 0;
  i1=0;
  goto l9_loop;
l37:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14439)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)d, 5097, 0, i1);
  return;
  ;
}

void Codec_YEnc__DecoderDesc_Reset(Codec_YEnc__Decoder dec) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dec;
  *(OOC_UINT8*)(_check_pointer(i0, 14536)) = 0u;
  return;
  ;
}

void Codec_YEnc__EncoderDesc_EncodeLatin1(Codec_YEnc__Encoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 dpos;
  OOC_INT32 avail;
  OOC_CHAR8 ch;
  OOC_CHAR8 d[4226];

  dpos = 0;
  i0 = (OOC_INT32)enc;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 14937))+4);
  avail = i1;
  i2 = start;
  i3 = end;
  i4 = (OOC_INT32)b;
  i5 = i2!=i3;
  if (i5) goto l3;
  i2=i1;i1=0;
  goto l66;
l3:
  i6=i5;{register OOC_INT32 h0=i1;i1=i2;i2=h0;}i5=0;
l4_loop:
  if (i6) goto l7;
  i6=0u;
  goto l9;
l7:
  i6 = i2>0;
  
l9:
  if (!i6) goto l53;
l12_loop:
  i6 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 15049)));
  i6 = _mod((i6+42),256);
  ch = i6;
  i7 = i6==0u;
  if (i7) goto l15;
  i8 = i6==13u;
  
  goto l17;
l15:
  i8=1u;
l17:
  if (i8) goto l19;
  i8 = i6==10u;
  
  goto l21;
l19:
  i8=1u;
l21:
  if (i8) goto l23;
  i8 = i6==61u;
  
  goto l25;
l23:
  i8=1u;
l25:
  if (i8) goto l39;
  i8 = i6==32u;
  if (!i8) goto l31;
  i7=1u;
l31:
  if (i7) goto l33;
  i7=0u;
  goto l41;
l33:
  i7 = i2==128;
  if (i7) goto l36;
  i7 = i2==1;
  
  goto l41;
l36:
  i7=1u;
  goto l41;
l39:
  i7=1u;
l41:
  if (i7) goto l43;
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i5, 4226, OOC_UINT32, 15414))) = i6;
  _assert((i6!=61u), 127, 15438);
  i5 = i5+1;
  dpos = i5;
  i2 = i2-1;
  avail = i2;
  
  goto l44;
l43:
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i5, 4226, OOC_UINT32, 15267))) = 61u;
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index((i5+1), 4226, OOC_UINT32, 15300))) = (_mod((i6+64),256));
  i5 = i5+2;
  dpos = i5;
  i2 = i2-2;
  avail = i2;
  
l44:
  i1 = i1+1;
  start = i1;
  i6 = i1!=i3;
  if (i6) goto l47;
  i6=0u;
  goto l49;
l47:
  i6 = i2>0;
  
l49:
  if (i6) goto l12_loop;
l53:
  i6 = i2<=0;
  if (!i6) goto l61;
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i5, 4226, OOC_UINT32, 15590))) = 10u;
  i2 = i5+1;
  dpos = i2;
  avail = 128;
  i5 = i2>=4096;
  if (!i5) goto l60;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15716)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i4, (void*)(OOC_INT32)d, 4226, 0, i2);
  dpos = 0;
  i2=0;
l60:
  i5=i2;i2=128;
l61:
  i6 = i1!=i3;
  if (i6) goto l4_loop;
l65:
  i1=i5;
l66:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i4, 15809)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i4, (void*)(OOC_INT32)d, 4226, 0, i1);
  *(OOC_INT32*)((_check_pointer(i0, 15850))+4) = i2;
  return;
  ;
}

void Codec_YEnc__EncoderDesc_EncodeUTF16(Codec_YEnc__Encoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {

  _assert(0u, 127, 16107);
  
  ;
}

void Codec_YEnc__EncoderDesc_Closure(Codec_YEnc__Encoder enc, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)enc;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 16228))+4);
  i1 = i1!=128;
  if (!i1) goto l4;
  i1 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 16271)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Char)((ADT_StringBuffer__StringBuffer)i1, 10u);
  *(OOC_INT32*)((_check_pointer(i0, 16309))+4) = 128;
l4:
  return;
  ;
}

void Codec_YEnc__EncoderDesc_Reset(Codec_YEnc__Encoder enc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)enc;
  *(OOC_INT32*)((_check_pointer(i0, 16414))+4) = 128;
  return;
  ;
}

void Codec_YEnc__Register(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Codec_YEnc__yenc;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c0));
  return;
  ;
}

void OOC_Codec_YEnc_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"yEnc", 5, 0, 4);

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_YEnc__YEnc.baseTypes[0]);
  Codec__CodecDesc_INIT((Codec__Codec)i0, 1, (OOC_CHAR8*)"yEnc", 5);
  Codec_YEnc__yenc = (Codec_YEnc__YEnc)i0;
  return;
  ;
}

void OOC_Codec_YEnc_destroy(void) {
}

/* --- */
