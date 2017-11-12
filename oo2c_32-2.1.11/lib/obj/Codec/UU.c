#include <Codec/UU.d>
#include <__oo2c.h>
#include <setjmp.h>

void Codec_UU__DecoderDesc_INIT(Codec_UU__Decoder dec) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dec;
  Codec__DecoderDesc_INIT((Codec__Decoder)i0);
  *(OOC_INT32*)((_check_pointer(i0, 2715))+4) = 0;
  return;
  ;
}

void Codec_UU__EncoderDesc_INIT(Codec_UU__Encoder enc) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)Codec__exceptionEncoder;
  i1 = (OOC_INT32)enc;
  Codec__EncoderDesc_INIT((Codec__Encoder)i1, (Codec__Encoder)i0);
  *(OOC_INT32*)((_check_pointer(i1, 2838))+4) = 0;
  return;
  ;
}

Codec_UU__Decoder Codec_UU__UUDesc_NewDecoder(Codec_UU__UU c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_UU__Decoder.baseTypes[0]);
  Codec_UU__DecoderDesc_INIT((Codec_UU__Decoder)i0);
  return (Codec_UU__Decoder)i0;
  ;
}

Codec_UU__Encoder Codec_UU__UUDesc_NewEncoder(Codec_UU__UU c) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_UU__Encoder.baseTypes[0]);
  Codec_UU__EncoderDesc_INIT((Codec_UU__Encoder)i0);
  return (Codec_UU__Encoder)i0;
  ;
}

static OOC_CHAR8 Codec_UU__LookingAt(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, const OOC_CHAR8 s__ref[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_ALLOCATE_VPAR(s,OOC_CHAR8 ,s_0d)

  OOC_INITIALIZE_VPAR(s__ref,s,OOC_CHAR8 ,s_0d)
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 3246)));
  i1 = start;
  i0 = i0!=0u;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 3263)));
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(0, s_0d, OOC_UINT32, 3270)));
  i0 = i0==i2;
  
l5:
  if (i0) goto l7;
  i0=0;
  goto l17;
l7:
  i0=0;
l8_loop:
  i0 = i0+1;
  i2 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3246)));
  i1 = i1+1;
  i2 = i2!=0u;
  if (i2) goto l11;
  i2=0u;
  goto l13;
l11:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 3263)));
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3270)));
  i2 = i2==i3;
  
l13:
  if (i2) goto l8_loop;
l17:
  i0 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i0, s_0d, OOC_UINT32, 3324)));
  return (i0==0u);
  ;
}

OOC_CHAR8 Codec_UU__IsEOL(OOC_CHAR8 ch) {
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

void Codec_UU__Extract(const OOC_CHAR8 source[], OOC_LEN source_0d, OOC_INT32 start, OOC_INT32 end, OOC_CHAR8 destination[], OOC_LEN destination_0d) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = end;
  i1 = start;
  i2 = (i0-i1)>=destination_0d;
  if (!i2) goto l4;
  i0 = (i1+destination_0d)-1;
  
l4:
  i2 = i1!=i0;
  if (i2) goto l7;
  i0=0;
  goto l13;
l7:
  i2=i1;i1=0;
l8_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)source+(_check_index(i2, source_0d, OOC_UINT32, 3784)));
  *(OOC_UINT8*)((OOC_INT32)destination+(_check_index(i1, destination_0d, OOC_UINT16, 3771))) = i3;
  i2 = i2+1;
  i1 = i1+1;
  i3 = i2!=i0;
  if (i3) goto l8_loop;
l12:
  i0=i1;
l13:
  *(OOC_UINT8*)((OOC_INT32)destination+(_check_index(i0, destination_0d, OOC_UINT16, 3851))) = 0u;
  return;
  ;
}

static OOC_INT32 Codec_UU__DecodeByte(OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1;

  i0 = ch;
  i1 = (OOC_UINT8)i0<=(OOC_UINT8)32u;
  if (i1) goto l3;
  i1 = (OOC_UINT8)i0>(OOC_UINT8)96u;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l7;
  return (_mod((i0-32),64));
  goto l8;
l7:
  return (-1);
l8:
  _failed_function(3889); return 0;
  ;
}

OOC_INT32 Codec_UU__LineBegin(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, struct Codec_UU__Header *header, RT0__Struct header__tag) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 mode;
  auto OOC_CHAR8 Codec_UU__LineBegin_IsOctal(OOC_CHAR8 ch);
  auto void Codec_UU__LineBegin_SkipWS(void);
    
    OOC_CHAR8 Codec_UU__LineBegin_IsOctal(OOC_CHAR8 ch) {
      register OOC_INT32 i0,i1;

      i0 = ch;
      i1 = (OOC_UINT8)48u<=(OOC_UINT8)i0;
      if (i1) goto l3;
      i0=0u;
      goto l4;
l3:
      i0 = (OOC_UINT8)i0<(OOC_UINT8)56u;
      
l4:
      return i0;
      ;
    }

    
    void Codec_UU__LineBegin_SkipWS(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = start;
      i1 = end;
      i2 = i0!=i1;
      if (i2) goto l3;
      i2=0u;
      goto l5;
l3:
      i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 4977)));
      i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
      
l5:
      if (i2) goto l7;
      i2=0u;
      goto l9;
l7:
      i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5007)));
      i2 = Codec_UU__IsEOL(i2);
      i2 = !i2;
      
l9:
      if (!i2) goto l24;
l11_loop:
      i0 = i0+1;
      start = i0;
      i2 = i0!=i1;
      if (i2) goto l14;
      i2=0u;
      goto l16;
l14:
      i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 4977)));
      i2 = (OOC_UINT8)i2<=(OOC_UINT8)32u;
      
l16:
      if (i2) goto l18;
      i2=0u;
      goto l20;
l18:
      i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5007)));
      i2 = Codec_UU__IsEOL(i2);
      i2 = !i2;
      
l20:
      if (i2) goto l11_loop;
l24:
      return;
      ;
    }


  i0 = end;
  i1 = start;
  i0 = (i0-i1)>=10;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = Codec_UU__LookingAt((void*)(OOC_INT32)data, data_0d, i1, (OOC_CHAR8*)"begin ", 7);
  
l5:
  if (!i0) goto l59;
  start = (i1+6);
  Codec_UU__LineBegin_SkipWS();
  i0 = start;
  i1 = end;
  i2 = i0!=i1;
  if (i2) goto l9;
  i2=0u;
  goto l11;
l9:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5239)));
  i2 = Codec_UU__LineBegin_IsOctal(i2);
  
l11:
  if (!i2) goto l59;
  i2=i0;i0=0;
l13_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 5325)));
  i0 = _mod(((i3-48)+i0*8),8192);
  mode = i0;
  i2 = i2+1;
  start = i2;
  i3 = i2==i1;
  if (i3) goto l16;
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 5427)));
  i3 = Codec_UU__LineBegin_IsOctal(i3);
  i3 = !i3;
  
  goto l18;
l16:
  i3=1u;
l18:
  if (!i3) goto l13_loop;
l21:
  Codec_UU__LineBegin_SkipWS();
  i0 = start;
  i1 = end;
  i2 = i0!=i1;
  if (i2) goto l24;
  i2=0u;
  goto l26;
l24:
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5531)));
  i2 = Codec_UU__IsEOL(i2);
  i2 = !i2;
  
l26:
  if (i2) goto l28;
  i2=i0;
  goto l38;
l28:
  i2=i0;
l29_loop:
  i2 = i2+1;
  i3 = i2!=i1;
  if (i3) goto l32;
  i3=0u;
  goto l34;
l32:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i2, data_0d, OOC_UINT32, 5531)));
  i3 = Codec_UU__IsEOL(i3);
  i3 = !i3;
  
l34:
  if (i3) goto l29_loop;
l38:
  i3 = i2!=i0;
  if (i3) goto l41;
  i1=0u;
  goto l43;
l41:
  i1 = i2!=i1;
  
l43:
  if (!i1) goto l59;
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 5681)));
  i1 = i1==34u;
  if (i1) goto l47;
  i1=0u;
  goto l49;
l47:
  i1 = i2>=(i0+2);
  
l49:
  if (i1) goto l51;
  i1=0u;
  goto l53;
l51:
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i2-1), data_0d, OOC_UINT32, 5749)));
  i1 = i1==34u;
  
l53:
  if (i1) goto l55;
  i1=i0;i0=i2;
  goto l56;
l55:
  i0 = i0+1;
  i1 = i2-1;
  {register OOC_INT32 h0=i0;i0=i1;i1=h0;}
l56:
  i3 = mode;
  *(OOC_INT32*)(OOC_INT32)header = i3;
  Codec_UU__Extract((void*)(OOC_INT32)data, data_0d, i1, i0, (void*)((OOC_INT32)header+4), 256);
  return i2;
l59:
  return (-1);
  ;
}

OOC_INT32 Codec_UU__LineData(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = end;
  i1 = start;
  i2 = (i0-i1)>=2;
  if (!i2) goto l33;
  i2 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 6663)));
  i2 = Codec_UU__DecodeByte(i2);
  i3 = i2>=0;
  if (!i3) goto l33;
  i1 = i1+1;
  i2 = (_div((i2+2),3))*4;
  i3 = i1!=i0;
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = i2!=0;
  
l9:
  if (!i3) goto l24;
l12_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 6826)));
  i3 = Codec_UU__DecodeByte(i3);
  i3 = i3<0;
  if (!i3) goto l15;
  return (-1);
l15:
  i2 = i2-1;
  i1 = i1+1;
  i3 = i1!=i0;
  if (i3) goto l18;
  i3=0u;
  goto l20;
l18:
  i3 = i2!=0;
  
l20:
  if (i3) goto l12_loop;
l24:
  i0 = i1!=i0;
  if (i0) goto l27;
  i0=0u;
  goto l29;
l27:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 6967)));
  i0 = Codec_UU__IsEOL(i0);
  
l29:
  if (!i0) goto l33;
  return i1;
l33:
  return (-1);
  ;
}

OOC_INT32 Codec_UU__LineEnd(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1;

  i0 = end;
  i1 = start;
  i0 = (i0-i1)>=4;
  if (i0) goto l3;
  i0=0u;
  goto l5;
l3:
  i0 = Codec_UU__LookingAt((void*)(OOC_INT32)data, data_0d, i1, (OOC_CHAR8*)"end", 4);
  
l5:
  if (i0) goto l7;
  i0=0u;
  goto l9;
l7:
  i0 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i1+3), data_0d, OOC_UINT32, 7699)));
  i0 = Codec_UU__IsEOL(i0);
  
l9:
  if (i0) goto l11;
  return (-1);
  goto l12;
l11:
  return (i1+3);
l12:
  _failed_function(7080); return 0;
  ;
}

void Codec_UU__DecoderDesc_Decode(Codec_UU__Decoder dec, const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 len;
  OOC_INT32 dpos;
  OOC_INT32 triplets;
  OOC_INT32 shortData;
  OOC_INT32 lineEnd;
  OOC_INT32 i;
  OOC_INT32 t;
  OOC_INT32 shift;
  OOC_INT32 byte;
  OOC_CHAR8 d[4356];

  i0 = (OOC_INT32)dec;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8166))+4);
  i1 = i1!=0;
  if (!i1) goto l8;
  i1 = start;
  i2 = end;
  i2 = i2-i1;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8238))+4);
  i4 = *(OOC_INT32*)(_check_pointer(i0, 8272));
  i3 = (i3+i2)>=i4;
  if (i3) goto l6;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8913))+4);
  _move_block(((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 8849))),(((_check_pointer(i0, 8894))+8)+(_check_index(i3, 65, OOC_UINT32, 8909))),i2);
  i0 = (OOC_INT32)dec;
  i1 = end;
  i2 = start;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8981))+4);
  *(OOC_INT32*)((_check_pointer(i0, 8981))+4) = (i3+(i1-i2));
  return;
  
  goto l8;
l6:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 8412))+4);
  i3 = *(OOC_INT32*)(_check_pointer(i0, 8391));
  i2 = i3-i2;
  len = i2;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 8529))+4);
  _move_block(((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 8465))),(((_check_pointer(i0, 8510))+8)+(_check_index(i3, 65, OOC_UINT32, 8525))),i2);
  i0 = (OOC_INT32)dec;
  *(OOC_INT32*)((_check_pointer(i0, 8586))+4) = 0;
  i1 = *(OOC_INT32*)(_check_pointer(i0, 8683));
  i2 = (OOC_INT32)b;
  Codec_UU__DecoderDesc_Decode((Codec_UU__Decoder)i0, (void*)((_check_pointer(i0, 8660))+8), 65, 0, i1, (ADT_StringBuffer__StringBuffer)i2);
  i1 = start;
  i2 = len;
  start = (i1+i2);
  
l8:
  dpos = 0;
  
l9_loop:
  i1 = start;
  i2 = end;
  i3 = i1!=i2;
  if (i3) goto l12;
  i1=0u;
  goto l14;
l12:
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 9233)));
  i1 = Codec_UU__IsEOL(i1);
  
l14:
  if (!i1) goto l24;
l15_loop:
  i1 = start;
  i1 = i1+1;
  start = i1;
  i3 = i1!=i2;
  if (i3) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 9233)));
  i1 = Codec_UU__IsEOL(i1);
  
l20:
  if (i1) goto l15_loop;
l24:
  i1 = start;
  i3 = i1==i2;
  if (i3) goto l51;
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 9390)));
  i3 = Codec_UU__DecodeByte(i3);
  len = i3;
  i4 = _div((i3+2),3);
  _assert((i3>=0), 101, 9408);
  i3 = i3-(i4*3);
  triplets = i4;
  i5 = i1+1;
  i6 = i5+i4*4;
  shortData = i3;
  lineEnd = i6;
  i6 = i6>i2;
  if (i6) goto l48;
  start = i5;
  i = 0;
  i1 = 0<i4;
  if (!i1) goto l42;
  i1=i5;i2=0;
l32_loop:
  t = 0;
  shift = 18;
  i5=0;i6=18;
l33_loop:
  i7 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 10034)));
  i7 = Codec_UU__DecodeByte(i7);
  byte = i7;
  _assert((i7>=0), 101, 10058);
  i5 = i5+(_ash(i7,i6));
  t = i5;
  i1 = i1+1;
  start = i1;
  i6 = i6-6;
  shift = i6;
  i7 = i6>=0;
  if (i7) goto l33_loop;
l37:
  i6 = dpos;
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index(i6, 4356, OOC_UINT32, 10226))) = (i5>>16);
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index((i6+1), 4356, OOC_UINT32, 10272))) = (_mod((i5>>8),256));
  *(OOC_UINT8*)((OOC_INT32)d+(_check_index((i6+2), 4356, OOC_UINT32, 10322))) = (_mod(i5,256));
  dpos = (i6+3);
  i2 = i2+1;
  i = i2;
  i5 = i2<i4;
  if (i5) goto l32_loop;
l42:
  i1 = dpos;
  i1 = i1+i3;
  dpos = i1;
  i2 = i1>=4096;
  if (!i2) goto l9_loop;
  i2 = (OOC_INT32)b;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 10489)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)d, 4356, 0, i1);
  dpos = 0;
  
  goto l9_loop;
l48:
  _move_block(((OOC_INT32)data+(_check_index(i1, data_0d, OOC_UINT32, 9650))),((_check_pointer(i0, 9697))+8),(i2-i1));
  i0 = (OOC_INT32)dec;
  i1 = triplets;
  *(OOC_INT32*)(_check_pointer(i0, 9763)) = (1+i1*4);
  i1 = end;
  i2 = start;
  *(OOC_INT32*)((_check_pointer(i0, 9811))+4) = (i1-i2);
l51:
  i0 = (OOC_INT32)b;
  i1 = dpos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10599)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)d, 4356, 0, i1);
  return;
  ;
}

void Codec_UU__DecoderDesc_Reset(Codec_UU__Decoder dec) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)dec;
  *(OOC_INT32*)((_check_pointer(i0, 10696))+4) = 0;
  return;
  ;
}

static OOC_CHAR8 Codec_UU__EncodeByte(OOC_INT32 b) {
  register OOC_INT32 i0,i1;

  i0 = b;
  i1 = i0==0;
  if (i1) goto l3;
  return (i0+32);
  goto l4;
l3:
  return 96u;
l4:
  _failed_function(10743); return 0;
  ;
}

static void Codec_UU__EncodeLine(const OOC_CHAR8 data[], OOC_LEN data_0d, OOC_INT32 start, OOC_INT32 end, OOC_CHAR8 out[], OOC_LEN out_0d, OOC_INT32 *opos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = *opos;
  i1 = end;
  i2 = start;
  i3 = Codec_UU__EncodeByte((i1-i2));
  *(OOC_UINT8*)((OOC_INT32)out+(_check_index(i0, out_0d, OOC_UINT32, 11158))) = i3;
  i0 = i0+1;
  i3 = i2<i1;
  if (!i3) goto l9;
  {register OOC_INT32 h0=i0;i0=i2;i2=h0;}
l4_loop:
  i3 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index(i0, data_0d, OOC_UINT32, 11261)));
  i4 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i0+1), data_0d, OOC_UINT32, 11306)));
  i5 = *(OOC_UINT8*)((OOC_INT32)data+(_check_index((i0+2), data_0d, OOC_UINT32, 11349)));
  i3 = (((i3*256)*256)+(i4*256))+i5;
  i4 = Codec_UU__EncodeByte((_ash(i3,(-18))));
  *(OOC_UINT8*)((OOC_INT32)out+(_check_index(i2, out_0d, OOC_UINT32, 11371))) = i4;
  i4 = Codec_UU__EncodeByte((_mod((_ash(i3,(-12))),64)));
  *(OOC_UINT8*)((OOC_INT32)out+(_check_index((i2+1), out_0d, OOC_UINT32, 11417))) = i4;
  i4 = Codec_UU__EncodeByte((_mod((_ash(i3,(-6))),64)));
  *(OOC_UINT8*)((OOC_INT32)out+(_check_index((i2+2), out_0d, OOC_UINT32, 11472))) = i4;
  i3 = Codec_UU__EncodeByte((_mod(i3,64)));
  *(OOC_UINT8*)((OOC_INT32)out+(_check_index((i2+3), out_0d, OOC_UINT32, 11526))) = i3;
  i2 = i2+4;
  i0 = i0+3;
  i3 = i0<i1;
  if (i3) goto l4_loop;
l8:
  i0=i2;
l9:
  *(OOC_UINT8*)((OOC_INT32)out+(_check_index(i0, out_0d, OOC_UINT32, 11620))) = 10u;
  *opos = (i0+1);
  return;
  ;
}

void Codec_UU__EncoderDesc_EncodeLatin1(Codec_UU__Encoder enc, const OOC_CHAR8 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 dpos;
  OOC_INT32 len;
  OOC_CHAR8 d[4159];

  dpos = 0;
  i0 = (OOC_INT32)enc;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12018))+4);
  i1 = i1!=0;
  if (!i1) goto l8;
  i1 = start;
  i2 = end;
  i2 = i2-i1;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12090))+4);
  i3 = (i3+i2)>=45;
  if (i3) goto l6;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12704))+4);
  _move_block(((OOC_INT32)s+i1),(((_check_pointer(i0, 12685))+8)+(_check_index(i3, 48, OOC_UINT32, 12700))),i2);
  i0 = (OOC_INT32)enc;
  i1 = end;
  i2 = start;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12772))+4);
  *(OOC_INT32*)((_check_pointer(i0, 12772))+4) = (i3+(i1-i2));
  return;
  
  goto l8;
l6:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 12244))+4);
  i2 = 45-i2;
  len = i2;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 12357))+4);
  _move_block(((OOC_INT32)s+i1),(((_check_pointer(i0, 12338))+8)+(_check_index(i3, 48, OOC_UINT32, 12353))),i2);
  i0 = (OOC_INT32)enc;
  *(OOC_INT32*)((_check_pointer(i0, 12414))+4) = 0;
  Codec_UU__EncodeLine((void*)((_check_pointer(i0, 12459))+8), 48, 0, 45, (void*)(OOC_INT32)d, 4159, (void*)(OOC_INT32)&dpos);
  i1 = start;
  i2 = len;
  start = (i1+i2);
  
l8:
  i1 = start;
  i2 = (OOC_INT32)b;
  i3 = end;
  i1 = (i1+45)<=i3;
  if (!i1) goto l20;
l11_loop:
  i1 = start;
  i4 = i1+45;
  Codec_UU__EncodeLine((void*)(OOC_INT32)s, s_0d, i1, i4, (void*)(OOC_INT32)d, 4159, (void*)(OOC_INT32)&dpos);
  i1 = dpos;
  i5 = i1>=4096;
  if (!i5) goto l15;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 12988)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)d, 4159, 0, i1);
  dpos = 0;
  
l15:
  start = i4;
  i1 = (i4+45)<=i3;
  if (i1) goto l11_loop;
l20:
  i1 = dpos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 13104)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)d, 4159, 0, i1);
  i1 = start;
  i2 = i3>i1;
  if (!i2) goto l23;
  _move_block(((OOC_INT32)s+i1),((_check_pointer(i0, 13281))+8),(i3-i1));
l23:
  i0 = (OOC_INT32)enc;
  i1 = end;
  i2 = start;
  *(OOC_INT32*)((_check_pointer(i0, 13346))+4) = (i1-i2);
  return;
  ;
}

void Codec_UU__EncoderDesc_EncodeUTF16(Codec_UU__Encoder enc, const OOC_CHAR16 s[], OOC_LEN s_0d, OOC_INT32 start, OOC_INT32 end, ADT_StringBuffer__StringBuffer b) {

  _assert(0u, 127, 13606);
  
  ;
}

void Codec_UU__EncoderDesc_Closure(Codec_UU__Encoder enc, ADT_StringBuffer__StringBuffer b) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;
  OOC_CHAR8 d[63];

  i0 = (OOC_INT32)enc;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13788))+4);
  i1 = i1!=0;
  if (!i1) goto l8;
  i = 0;
  i1=0;
l3_loop:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 13869))+4);
  *(OOC_UINT8*)(((_check_pointer(i0, 13850))+8)+(_check_index((i2+i1), 48, OOC_UINT32, 13865))) = 0u;
  i1 = i1+1;
  i = i1;
  i2 = i1<=2;
  if (i2) goto l3_loop;
l7:
  i = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 13964))+4);
  Codec_UU__EncodeLine((void*)((_check_pointer(i0, 13941))+8), 48, 0, i1, (void*)(OOC_INT32)d, 63, (void*)(OOC_INT32)&i);
  i0 = (OOC_INT32)b;
  i1 = i;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13995)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)),ADT_StringBuffer__StringBufferDesc_AppendLatin1Region)((ADT_StringBuffer__StringBuffer)i0, (void*)(OOC_INT32)d, 63, 0, i1);
l8:
  return;
  ;
}

void Codec_UU__EncoderDesc_Reset(Codec_UU__Encoder enc) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)enc;
  *(OOC_INT32*)((_check_pointer(i0, 14099))+4) = 0;
  return;
  ;
}

void Codec_UU__Register(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Codec_UU__uu;
  Codec__Register((Codec__Codec)i0, (Object__String)((OOC_INT32)_c0));
  return;
  ;
}

void OOC_Codec_UU_init(void) {
  register OOC_INT32 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"uu", 3, 0, 2);

  i0 = (OOC_INT32)RT0__NewObject(_td_Codec_UU__UU.baseTypes[0]);
  Codec__CodecDesc_INIT((Codec__Codec)i0, 1, (OOC_CHAR8*)"uu", 3);
  Codec_UU__uu = (Codec_UU__UU)i0;
  return;
  ;
}

void OOC_Codec_UU_destroy(void) {
}

/* --- */
