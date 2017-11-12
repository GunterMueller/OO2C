#include <BinaryRider.d>
#include <__oo2c.h>
#include <setjmp.h>

static Msg__Msg BinaryRider__GetError(OOC_INT32 code) {
  register OOC_INT32 i0,i1;

  i0 = code;
  i1 = (OOC_INT32)BinaryRider__errorContext;
  i0 = (OOC_INT32)Msg__New((Msg__Context)i1, i0);
  return (Msg__Msg)i0;
  ;
}

OOC_INT32 BinaryRider__ReaderDesc_Pos(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3259))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3259))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3270)))), Channel__ReaderDesc_Pos)),Channel__ReaderDesc_Pos)((Channel__Reader)i0);
  return i0;
  ;
}

void BinaryRider__ReaderDesc_SetPos(BinaryRider__Reader r, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3356));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3382))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3382))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3393)))), Channel__ReaderDesc_SetPos)),Channel__ReaderDesc_SetPos)((Channel__Reader)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3426))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3437))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3417)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ClearError(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3515))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3515))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3526)))), Channel__ReaderDesc_ClearError)),Channel__ReaderDesc_ClearError)((Channel__Reader)i2);
  *(OOC_INT32*)(_check_pointer(i0, 3544)) = 0;
  return;
  ;
}

OOC_INT32 BinaryRider__ReaderDesc_Available(BinaryRider__Reader r) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3644))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3644))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3655)))), Channel__ReaderDesc_Available)),Channel__ReaderDesc_Available)((Channel__Reader)i0);
  return i0;
  ;
}

void BinaryRider__ReaderDesc_ReadBytes(BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3890));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3915))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3915))+8);
  i3 = start;
  i4 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3926)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i2, (void*)(OOC_INT32)x, (-1), i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3967))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3978))+4);
  *(OOC_INT32*)(_check_pointer(i0, 3958)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadBytesOrdered(BinaryRider__Reader r, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT32)r;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4179))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 4209))+4);
  i2 = BinaryRider__systemByteOrder;
  i1 = i1==i2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l15;
  i1 = x_0d-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l16;
l9_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4359))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4359))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4370)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i3, (void*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 4381))));
  i1 = i1+(-1);
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4249))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4249))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4260)))), Channel__ReaderDesc_ReadBytes)),Channel__ReaderDesc_ReadBytes)((Channel__Reader)i0, (void*)(OOC_INT32)x, (-1), 0, x_0d);
l16:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadBool(BinaryRider__Reader r, OOC_CHAR8 *_bool) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT8 byte;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4516));
  i1 = i1==0;
  if (!i1) goto l15;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4541))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4541))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4553)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)&byte);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4584))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4596))+4);
  i1 = i1==0;
  if (i1) goto l5;
  i1=0u;
  goto l7;
l5:
  i1 = byte;
  i1 = i1!=0;
  
l7:
  if (i1) goto l9;
  i1=0u;
  goto l11;
l9:
  i1 = byte;
  i1 = i1!=1;
  
l11:
  if (i1) goto l13;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4714))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4726))+4);
  *(OOC_INT32*)(_check_pointer(i0, 4704)) = i1;
  goto l14;
l13:
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 4650)) = i1;
l14:
  i0 = byte;
  *_bool = (i0!=0);
l15:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadChar(BinaryRider__Reader r, OOC_CHAR8 *ch) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4860));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4885))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4885))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4897)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)ch);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4929))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4940))+4);
  *(OOC_INT32*)(_check_pointer(i0, 4920)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLChar(BinaryRider__Reader r, OOC_CHAR16 *ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5039));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__ReaderDesc_ReadBytesOrdered((BinaryRider__Reader)i0, (void*)(OOC_INT32)ch, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5105))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5116))+4);
  *(OOC_INT32*)(_check_pointer(i0, 5096)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadString(BinaryRider__Reader r, OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5446));
  i1 = i1==0;
  if (!i1) goto l24;
  i1 = s_0d-1;
  len = i1;
  i2=(-1);
l3_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5533)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5544))));
  i3 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5565)));
  i3 = i3==0u;
  if (i3) goto l6;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5580))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 5591))+4);
  i3 = i3!=0;
  
  goto l8;
l6:
  i3=1u;
l8:
  if (i3) goto l10;
  i3 = i2==i1;
  
  goto l12;
l10:
  i3=1u;
l12:
  if (!i3) goto l3_loop;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5627))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5639))+4);
  i1 = i1==0;
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5657)));
  i1 = i1!=0u;
  
l20:
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5776))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5787))+4);
  *(OOC_INT32*)(_check_pointer(i0, 5767)) = i1;
  goto l24;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5683))+8);
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)((_check_pointer(i0, 5694))+4) = i1;
  *(OOC_UINT8*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 5737))) = 0u;
l24:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLString(BinaryRider__Reader r, OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;
  OOC_INT16 len;
  OOC_INT16 cnt;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6135));
  i1 = i1==0;
  if (!i1) goto l24;
  i1 = s_0d-1;
  len = i1;
  i2=(-1);
l3_loop:
  i2 = i2+1;
  cnt = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6222)))), BinaryRider__ReaderDesc_ReadLChar)),BinaryRider__ReaderDesc_ReadLChar)((BinaryRider__Reader)i0, (void*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6234))*2));
  i3 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6255))*2);
  i3 = i3==0u;
  if (i3) goto l6;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6270))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 6281))+4);
  i3 = i3!=0;
  
  goto l8;
l6:
  i3=1u;
l8:
  if (i3) goto l10;
  i3 = i2==i1;
  
  goto l12;
l10:
  i3=1u;
l12:
  if (!i3) goto l3_loop;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6317))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6329))+4);
  i1 = i1==0;
  if (i1) goto l18;
  i1=0u;
  goto l20;
l18:
  i1 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6347))*2);
  i1 = i1!=0u;
  
l20:
  if (i1) goto l22;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6466))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6477))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6457)) = i1;
  goto l24;
l22:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6373))+8);
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)((_check_pointer(i0, 6384))+4) = i1;
  *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i2, s_0d, OOC_UINT16, 6427))*2) = 0u;
l24:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadSInt(BinaryRider__Reader r, OOC_INT8 *sint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6592));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6617))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6617))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6628)))), Channel__ReaderDesc_ReadByte)),Channel__ReaderDesc_ReadByte)((Channel__Reader)i2, (void*)(OOC_INT32)sint);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6705))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6716))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6696)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadInt(BinaryRider__Reader r, OOC_INT16 *_int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6813));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__ReaderDesc_ReadBytesOrdered((BinaryRider__Reader)i0, (void*)(OOC_INT32)_int, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6878))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 6889))+4);
  *(OOC_INT32*)(_check_pointer(i0, 6869)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLInt(BinaryRider__Reader r, OOC_INT32 *lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7006));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__ReaderDesc_ReadBytesOrdered((BinaryRider__Reader)i0, (void*)(OOC_INT32)lint, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7072))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7083))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7063)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadNum(BinaryRider__Reader r, OOC_INT32 *num) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT8 s;
  OOC_INT32 y;
  OOC_CHAR8 x;

  s = 0;
  y = 0;
  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7285)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i1 = x;
  i1 = (OOC_UINT8)i1>=(OOC_UINT8)128u;
  if (i1) goto l3;
  i1=0;i2=0;
  goto l13;
l3:
  i1=0;i2=0;
l4_loop:
  i3 = x;
  i1 = i1+(_ash((i3-128),i2));
  y = i1;
  i2 = i2+7;
  s = i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7393)))), BinaryRider__ReaderDesc_ReadChar)),BinaryRider__ReaderDesc_ReadChar)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i3 = i2<28;
  if (i3) goto l7;
  i3=0u;
  goto l9;
l7:
  i3 = x;
  i3 = (OOC_UINT8)i3>=(OOC_UINT8)128u;
  
l9:
  if (i3) goto l4_loop;
l12:
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l13:
  i3 = x;
  i4 = (OOC_UINT8)i3>=(OOC_UINT8)128u;
  if (i4) goto l28;
  i4 = i1==28;
  if (i4) goto l18;
  i4=0u;
  goto l20;
l18:
  i4 = (OOC_UINT8)8u<=(OOC_UINT8)i3;
  
l20:
  if (i4) goto l22;
  i4=0u;
  goto l24;
l22:
  i4 = (OOC_UINT8)i3<(OOC_UINT8)120u;
  
l24:
  if (i4) goto l26;
  i4=0u;
  goto l30;
l26:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7611))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 7623))+4);
  i4 = i4==(OOC_INT32)0;
  
  goto l30;
l28:
  i4=1u;
l30:
  if (i4) goto l32;
  *num = ((_ash((_lsh(OOC_INT32, OOC_UINT32, i3, 25)),(i1-25)))+i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7763))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7775))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7753)) = i1;
  goto l33;
l32:
  i1 = (OOC_INT32)BinaryRider__GetError(8);
  *(OOC_INT32*)(_check_pointer(i0, 7649)) = i1;
l33:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadReal(BinaryRider__Reader r, OOC_REAL32 *real) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7893));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__ReaderDesc_ReadBytesOrdered((BinaryRider__Reader)i0, (void*)(OOC_INT32)real, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7959))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7970))+4);
  *(OOC_INT32*)(_check_pointer(i0, 7950)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadLReal(BinaryRider__Reader r, OOC_REAL64 *lreal) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8090));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__ReaderDesc_ReadBytesOrdered((BinaryRider__Reader)i0, (void*)(OOC_INT32)lreal, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8157))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8168))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8148)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadSet(BinaryRider__Reader r, OOC_UINT32 *s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8261));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__ReaderDesc_ReadBytesOrdered((BinaryRider__Reader)i0, (void*)(OOC_INT32)s, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8324))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8335))+4);
  *(OOC_INT32*)(_check_pointer(i0, 8315)) = i1;
l4:
  return;
  ;
}

void BinaryRider__ReaderDesc_ReadStr(BinaryRider__Reader r, Object__String *s) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 len;
  OOC_CHAR8 buffer8[1024];
  OOC_CHAR8 *dynBuffer8;
  OOC_INT32 i;
  OOC_INT32 x;
  OOC_CHAR16 buffer16[512];
  OOC_CHAR16 *dynBuffer16;

  i0 = (OOC_INT32)r;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8710));
  i1 = i1==0;
  if (!i1) goto l35;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8735)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&len);
  i1 = len;
  i2 = i1==0;
  if (i2) goto l33;
  i2 = i1>0;
  if (i2) goto l27;
  i1 = (-i1)-1;
  len = i1;
  i2 = i1<512;
  if (i2) goto l17;
  i2 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__8647.baseTypes[0], i1);
  dynBuffer16 = (void*)i2;
  i = 0;
  i3 = 0<i1;
  if (!i3) goto l16;
  i3=0;
l11_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9544)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i4 = x;
  *(OOC_UINT16*)((OOC_INT32)buffer16+(_check_index(i3, 512, OOC_UINT32, 9577))*2) = i4;
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l11_loop;
l16:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9659)), 0);
  i1 = len;
  i0 = (OOC_INT32)Object__NewUTF16Region((void*)(_check_pointer(i2, 9659)), i0, 0, i1);
  *s = (Object__String)i0;
  goto l35;
l17:
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l25;
  i2=0;
l20_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9329)))), BinaryRider__ReaderDesc_ReadNum)),BinaryRider__ReaderDesc_ReadNum)((BinaryRider__Reader)i0, (void*)(OOC_INT32)&x);
  i3 = x;
  *(OOC_UINT16*)((OOC_INT32)buffer16+(_check_index(i2, 512, OOC_UINT32, 9362))*2) = i3;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l20_loop;
l25:
  i0 = len;
  i0 = (OOC_INT32)Object__NewUTF16Region((void*)(OOC_INT32)buffer16, 512, 0, i0);
  *s = (Object__String)i0;
  goto l35;
l27:
  i1 = i1-1;
  len = i1;
  i2 = i1<1024;
  if (i2) goto l30;
  i2 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__8558.baseTypes[0], i1);
  dynBuffer8 = (void*)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9034)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(_check_pointer(i2, 9055)), (-1), 0, i1);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i2, 9115)), 0);
  i1 = len;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(_check_pointer(i2, 9115)), i0, 0, i1);
  *s = (Object__String)i0;
  goto l35;
l30:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8893)))), BinaryRider__ReaderDesc_ReadBytes)),BinaryRider__ReaderDesc_ReadBytes)((BinaryRider__Reader)i0, (void*)(OOC_INT32)buffer8, 1024, 0, i1);
  i0 = len;
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)buffer8, 1024, 0, i0);
  *s = (Object__String)i0;
  goto l35;
l33:
  *s = (Object__String)0;
l35:
  return;
  ;
}

void BinaryRider__ReaderDesc_SetByteOrder(BinaryRider__Reader r, OOC_INT8 order) {
  register OOC_INT32 i0,i1;

  i0 = order;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=0u;
  goto l4;
l3:
  i1 = i0<=2;
  
l4:
  _assert(i1, 127, 9787);
  i1 = (OOC_INT32)r;
  *(OOC_INT8*)((_check_pointer(i1, 9844))+4) = i0;
  return;
  ;
}

OOC_INT32 BinaryRider__WriterDesc_Pos(BinaryRider__Writer w) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10170))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10170))+8);
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10181)))), Channel__WriterDesc_Pos)),Channel__WriterDesc_Pos)((Channel__Writer)i0);
  return i0;
  ;
}

void BinaryRider__WriterDesc_SetPos(BinaryRider__Writer w, OOC_INT32 newPos) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10266));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10291))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10291))+8);
  i3 = newPos;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10302)))), Channel__WriterDesc_SetPos)),Channel__WriterDesc_SetPos)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10335))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10346))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10326)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_ClearError(BinaryRider__Writer w) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10422))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10422))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10433)))), Channel__WriterDesc_ClearError)),Channel__WriterDesc_ClearError)((Channel__Writer)i2);
  *(OOC_INT32*)(_check_pointer(i0, 10451)) = 0;
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBytes(BinaryRider__Writer w, const OOC_CHAR8 x[], OOC_LEN x_0d, OOC_INT32 start, OOC_INT32 n) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10692));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10717))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10717))+8);
  i3 = start;
  i4 = n;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10728)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i2, (void*)(OOC_INT32)x, (-1), i3, i4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10770))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 10781))+4);
  *(OOC_INT32*)(_check_pointer(i0, 10761)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBytesOrdered(BinaryRider__Writer w, OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 10985))+4);
  i1 = i1==0;
  if (i1) goto l3;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11015))+4);
  i2 = BinaryRider__systemByteOrder;
  i1 = i1==i2;
  
  goto l5;
l3:
  i1=1u;
l5:
  if (i1) goto l15;
  i1 = x_0d-1;
  i = i1;
  i2 = i1>=0;
  if (!i2) goto l16;
l9_loop:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11139))+8);
  i3 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(i1, x_0d, OOC_UINT32, 11162)));
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11139))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11150)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i4, i3);
  i1 = i1+(-1);
  i = i1;
  i2 = i1>=0;
  if (i2) goto l9_loop;
  goto l16;
l15:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11055))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11055))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11066)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i0, (void*)(OOC_INT32)x, (-1), 0, x_0d);
l16:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteBool(BinaryRider__Writer w, OOC_CHAR8 _bool) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11273));
  i1 = i1==0;
  if (!i1) goto l7;
  i1 = _bool;
  if (i1) goto l5;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11367))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11367))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11379)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, 0);
  goto l6;
l5:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11319))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11319))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11331)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, 1);
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11423))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11435))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11413)) = i1;
l7:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteChar(BinaryRider__Writer w, OOC_CHAR8 ch) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11530));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11555))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11555))+8);
  i3 = ch;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 11567)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11600))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11611))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11591)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLChar(BinaryRider__Writer w, OOC_CHAR16 ch) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11710));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__WriterDesc_WriteBytesOrdered((BinaryRider__Writer)i0, (void*)(OOC_INT32)&ch, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11777))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 11788))+4);
  *(OOC_INT32*)(_check_pointer(i0, 11768)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteString(BinaryRider__Writer w, const OOC_CHAR8 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11956));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = Strings__Length((void*)(OOC_INT32)s, s_0d);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11981))+8);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11981))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 11992)))), Channel__WriterDesc_WriteBytes)),Channel__WriterDesc_WriteBytes)((Channel__Writer)i3, (void*)(OOC_INT32)s, (-1), 0, (i1+1));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12050))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12061))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12041)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLString(BinaryRider__Writer w, const OOC_CHAR16 s[], OOC_LEN s_0d) {
  register OOC_INT32 i0,i1,i2;
  OOC_INT32 i;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12251));
  i1 = i1==0;
  if (!i1) goto l8;
  i1=(-1);
l3_loop:
  i1 = i1+1;
  i = i1;
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 12338))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 12323)))), BinaryRider__WriterDesc_WriteLChar)),BinaryRider__WriterDesc_WriteLChar)((BinaryRider__Writer)i0, i2);
  i2 = *(OOC_UINT16*)((OOC_INT32)s+(_check_index(i1, s_0d, OOC_UINT32, 12357))*2);
  i2 = i2==0u;
  if (!i2) goto l3_loop;
l7:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12384))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12395))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12375)) = i1;
l8:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteSInt(BinaryRider__Writer w, OOC_INT8 sint) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12496));
  i1 = i1==0;
  if (!i1) goto l4;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12521))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12521))+8);
  i3 = sint;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 12532)))), Channel__WriterDesc_WriteByte)),Channel__WriterDesc_WriteByte)((Channel__Writer)i2, i3);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12566))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12577))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12557)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteInt(BinaryRider__Writer w, OOC_INT16 _int) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12672));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__WriterDesc_WriteBytesOrdered((BinaryRider__Writer)i0, (void*)(OOC_INT32)&_int, 2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12738))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12749))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12729)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLInt(BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12864));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__WriterDesc_WriteBytesOrdered((BinaryRider__Writer)i0, (void*)(OOC_INT32)&lint, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12931))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 12942))+4);
  *(OOC_INT32*)(_check_pointer(i0, 12922)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteNum(BinaryRider__Writer w, OOC_INT32 lint) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13097));
  i1 = i1==0;
  if (!i1) goto l20;
  i1 = lint;
  i2 = i1<(-64);
  if (i2) goto l5;
  i2 = i1>63;
  
  goto l7;
l5:
  i2=1u;
l7:
  if (!i2) goto l19;
l10_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13163)))), BinaryRider__WriterDesc_WriteChar)),BinaryRider__WriterDesc_WriteChar)((BinaryRider__Writer)i0, ((_mod(i1,128))+128));
  i1 = i1>>7;
  lint = i1;
  i2 = i1<(-64);
  if (i2) goto l13;
  i2 = i1>63;
  
  goto l15;
l13:
  i2=1u;
l15:
  if (i2) goto l10_loop;
l19:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 13243)))), BinaryRider__WriterDesc_WriteChar)),BinaryRider__WriterDesc_WriteChar)((BinaryRider__Writer)i0, (_mod(i1,128)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13290))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13301))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13281)) = i1;
l20:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteReal(BinaryRider__Writer w, OOC_REAL32 real) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13413));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__WriterDesc_WriteBytesOrdered((BinaryRider__Writer)i0, (void*)(OOC_INT32)&real, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13480))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13491))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13471)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteLReal(BinaryRider__Writer w, OOC_REAL64 lreal) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13610));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__WriterDesc_WriteBytesOrdered((BinaryRider__Writer)i0, (void*)(OOC_INT32)&lreal, 8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13678))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13689))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13669)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteSet(BinaryRider__Writer w, OOC_UINT32 s) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)w;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 13779));
  i1 = i1==0;
  if (!i1) goto l4;
  BinaryRider__WriterDesc_WriteBytesOrdered((BinaryRider__Writer)i0, (void*)(OOC_INT32)&s, 4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 13843))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 13854))+4);
  *(OOC_INT32*)(_check_pointer(i0, 13834)) = i1;
l4:
  return;
  ;
}

void BinaryRider__WriterDesc_WriteStr(BinaryRider__Writer w, Object__String s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  Object__CharsLatin1 chars8;
  Object__CharsUTF16 chars16;
  OOC_INT32 i;

  i0 = (OOC_INT32)s;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l19;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14093)))), &_td_Object__String8Desc);
  if (i1) goto l17;
  i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14242)))), &_td_Object__String16Desc);
  if (i1) goto l7;
  _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14239)))), 14239);
  goto l20;
l7:
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 14325));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14313)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, ((-i2)-1));
  i2 = (OOC_INT32)Object__String16Desc_CharsUTF16((Object__String16)i0);
  chars16 = (Object__CharsUTF16)i2;
  i = 0;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14395));
  i3 = 0<i0;
  if (!i3) goto l20;
  i3=0;
l10_loop:
  i4 = _check_pointer(i2, 14440);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i4 = *(OOC_UINT16*)(i4+(_check_index(i3, i5, OOC_UINT32, 14440))*2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14419)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, i4);
  i3 = i3+1;
  i = i3;
  i4 = i3<i0;
  if (i4) goto l10_loop;
  goto l20;
l17:
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)(_check_pointer(i0, 14133));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14122)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i1, (i2+1));
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  chars8 = (Object__CharsLatin1)i2;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 14214));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 14189)))), BinaryRider__WriterDesc_WriteBytes)),BinaryRider__WriterDesc_WriteBytes)((BinaryRider__Writer)i1, (void*)(_check_pointer(i2, 14207)), (-1), 0, i0);
  goto l20;
l19:
  i0 = (OOC_INT32)w;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 14058)))), BinaryRider__WriterDesc_WriteNum)),BinaryRider__WriterDesc_WriteNum)((BinaryRider__Writer)i0, 0);
l20:
  return;
  ;
}

void BinaryRider__WriterDesc_SetByteOrder(BinaryRider__Writer w, OOC_INT8 order) {
  register OOC_INT32 i0,i1;

  i0 = order;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=0u;
  goto l4;
l3:
  i1 = i0<=2;
  
l4:
  _assert(i1, 127, 14564);
  i1 = (OOC_INT32)w;
  *(OOC_INT8*)((_check_pointer(i1, 14621))+4) = i0;
  return;
  ;
}

void BinaryRider__InitReader(BinaryRider__Reader r, Channel__Channel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)r;
  *(OOC_INT32*)(_check_pointer(i0, 15116)) = 0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15154)))), Channel__ChannelDesc_NewReader)),Channel__ChannelDesc_NewReader)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 15136))+8) = i2;
  i2 = byteOrder;
  *(OOC_INT8*)((_check_pointer(i0, 15174))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 15205))+12) = i1;
  return;
  ;
}

BinaryRider__Reader BinaryRider__ConnectReader(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  BinaryRider__Reader r;

  i0 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__Reader.baseTypes[0]);
  r = (BinaryRider__Reader)i0;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitReader((BinaryRider__Reader)i0, (Channel__Channel)i1, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 15382))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (BinaryRider__Reader)i0;
  goto l4;
l3:
  return (BinaryRider__Reader)(OOC_INT32)0;
l4:
  _failed_function(15248); return 0;
  ;
}

void BinaryRider__InitWriter(BinaryRider__Writer w, Channel__Channel ch, OOC_INT8 byteOrder) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)w;
  *(OOC_INT32*)(_check_pointer(i0, 15934)) = 0;
  i1 = (OOC_INT32)ch;
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 15972)))), Channel__ChannelDesc_NewWriter)),Channel__ChannelDesc_NewWriter)((Channel__Channel)i1);
  *(OOC_INT32*)((_check_pointer(i0, 15954))+8) = i2;
  i2 = byteOrder;
  *(OOC_INT8*)((_check_pointer(i0, 15992))+4) = i2;
  *(OOC_INT32*)((_check_pointer(i0, 16023))+12) = i1;
  return;
  ;
}

BinaryRider__Writer BinaryRider__ConnectWriter(Channel__Channel ch) {
  register OOC_INT32 i0,i1;
  BinaryRider__Writer w;

  i0 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__Writer.baseTypes[0]);
  w = (BinaryRider__Writer)i0;
  i1 = (OOC_INT32)ch;
  BinaryRider__InitWriter((BinaryRider__Writer)i0, (Channel__Channel)i1, 1);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16200))+8);
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l3;
  return (BinaryRider__Writer)i0;
  goto l4;
l3:
  return (BinaryRider__Writer)(OOC_INT32)0;
l4:
  _failed_function(16066); return 0;
  ;
}

static void BinaryRider__SetDefaultByteOrder(OOC_CHAR8 x[], OOC_LEN x_0d) {
  register OOC_INT32 i0;

  i0 = *(OOC_UINT8*)((OOC_INT32)x+(_check_index(0, x_0d, OOC_UINT8, 16389)));
  i0 = (_type_cast_fast(OOC_UINT8, OOC_UINT8, i0))==1u;
  if (i0) goto l3;
  BinaryRider__systemByteOrder = 2;
  goto l4;
l3:
  BinaryRider__systemByteOrder = 1;
l4:
  return;
  ;
}

static void BinaryRider__Init(void) {
  OOC_INT16 i;

  i = 1;
  BinaryRider__SetDefaultByteOrder((void*)(OOC_INT32)&i, 2);
  return;
  ;
}

void OOC_BinaryRider_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_BinaryRider__ErrorContext.baseTypes[0]);
  BinaryRider__errorContext = (BinaryRider__ErrorContext)i0;
  Msg__InitContext((Msg__Context)i0, (OOC_CHAR8*)"OOC:Core:BinaryRider", 21);
  BinaryRider__Init();
  return;
  ;
}

void OOC_BinaryRider_destroy(void) {
}

/* --- */
