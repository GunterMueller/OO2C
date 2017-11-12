#include <OOC/SSA/IGraph.d>
#include <__oo2c.h>
#include <setjmp.h>

void OOC_SSA_IGraph__GraphDesc_Clear(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 i;
  OOC_INT32 j;

  i0 = (OOC_INT32)g;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2519));
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 2522)), 0);
  i2 = 0<i1;
  if (!i2) goto l16;
  i2=0;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2559));
  j = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 2562)), 1);
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l6_loop:
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2582));
  i5 = _check_pointer(i5, 2585);
  i6 = OOC_ARRAY_LENGTH(i5, 1);
  i7 = OOC_ARRAY_LENGTH(i5, 0);
  *(OOC_UINT32*)((i5+((_check_index(i2, i7, OOC_UINT32, 2585))*(4*i6)))+(_check_index(i4, i6, OOC_UINT32, 2587))*4) = 0u;
  i4 = i4+1;
  j = i4;
  i5 = i4<i3;
  if (i5) goto l6_loop;
l11:
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l16:
  return;
  ;
}

static void OOC_SSA_IGraph__InitGraph(OOC_SSA_IGraph__Graph g, OOC_INT32 size) {
  register OOC_INT32 i0,i1;

  i0 = size;
  i1 = (OOC_INT32)g;
  *(OOC_INT32*)(_check_pointer(i1, 2703)) = ((OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__BitMatrix.baseTypes[0], i0, (((i0+32)-1)>>5)));
  *(OOC_INT32*)((_check_pointer(i1, 2756))+4) = i0;
  OOC_SSA_IGraph__GraphDesc_Clear((OOC_SSA_IGraph__Graph)i1);
  return;
  ;
}

OOC_SSA_IGraph__Graph OOC_SSA_IGraph__NewGraph(OOC_INT32 size) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__Graph.baseTypes[0]);
  i1 = size;
  OOC_SSA_IGraph__InitGraph((OOC_SSA_IGraph__Graph)i0, i1);
  return (OOC_SSA_IGraph__Graph)i0;
  ;
}

OOC_SSA_IGraph__Vector OOC_SSA_IGraph__GraphDesc_NewVector(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_IGraph__Vector v;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3172));
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3175)), 1);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__Vector.baseTypes[0], i0);
  v = (OOC_SSA_IGraph__Vector)i0;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3207)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i0, 3222);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_UINT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 3222))*4) = 0u;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  return (OOC_SSA_IGraph__Vector)i0;
  ;
}

OOC_SSA_IGraph__Vector OOC_SSA_IGraph__GraphDesc_CopyVector(OOC_SSA_IGraph__Graph g, OOC_SSA_IGraph__Vector v) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_IGraph__Vector w;
  OOC_INT32 i;

  i0 = (OOC_INT32)v;
  i1 = (OOC_INT32)g;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3468));
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3457)), 0);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 3471)), 1);
  _assert((i3==i2), 127, 3443);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3497));
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3500)), 1);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__Vector.baseTypes[0], i1);
  w = (OOC_SSA_IGraph__Vector)i1;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3532)), 0);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 3547);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = _check_pointer(i0, 3555);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 3555))*4);
  *(OOC_UINT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 3547))*4) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  return (OOC_SSA_IGraph__Vector)i1;
  ;
}

void OOC_SSA_IGraph__GraphDesc_Interfere(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3915));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3944)), 1);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = res;
  i3 = (OOC_INT32)live;
  i4=0;
l3_loop:
  i5 = _check_pointer(i0, 3962);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = OOC_ARRAY_LENGTH(i5, 1);
  i8 = _check_pointer(i0, 3975);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i10 = OOC_ARRAY_LENGTH(i8, 1);
  i11 = _check_pointer(i3, 3988);
  i12 = OOC_ARRAY_LENGTH(i11, 0);
  i11 = *(OOC_UINT32*)(i11+(_check_index(i4, i12, OOC_UINT32, 3988))*4);
  i8 = *(OOC_UINT32*)((i8+((_check_index(i2, i9, OOC_UINT32, 3975))*(4*i10)))+(_check_index(i4, i10, OOC_UINT32, 3979))*4);
  *(OOC_UINT32*)((i5+((_check_index(i2, i6, OOC_UINT32, 3962))*(4*i7)))+(_check_index(i4, i7, OOC_UINT32, 3966))*4) = (i8|i11);
  i4 = i4+1;
  i = i4;
  i5 = i4<i1;
  if (i5) goto l3_loop;
l8:
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_MergeRowColumn(OOC_SSA_IGraph__Graph g, OOC_INT32 source, OOC_INT32 target) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14,i15;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 4140));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  i1 = _check_pointer(i0, 4156);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i3 = source;
  i4 = i3>>5;
  i5 = OOC_ARRAY_LENGTH(i1, 1);
  i6 = _check_pointer(i0, 4156);
  i7 = OOC_ARRAY_LENGTH(i6, 1);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i9 = _mod(i3,32);
  i6 = *(OOC_UINT32*)((i6+((_check_index(i3, i8, OOC_UINT32, 4156))*(4*i7)))+(_check_index(i4, i7, OOC_UINT32, 4163))*4);
  *(OOC_UINT32*)((i1+((_check_index(i3, i2, OOC_UINT32, 4156))*(4*i5)))+(_check_index(i4, i5, OOC_UINT32, 4163))*4) = (_clear_bit(i6,i9));
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4236)), 1);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2 = target;
  i5=0;
l3_loop:
  i6 = _check_pointer(i0, 4254);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH(i6, 1);
  i10 = _check_pointer(i0, 4270);
  i11 = OOC_ARRAY_LENGTH(i10, 0);
  i12 = OOC_ARRAY_LENGTH(i10, 1);
  i13 = _check_pointer(i0, 4283);
  i14 = OOC_ARRAY_LENGTH(i13, 1);
  i15 = OOC_ARRAY_LENGTH(i13, 0);
  i10 = *(OOC_UINT32*)((i10+((_check_index(i2, i11, OOC_UINT32, 4270))*(4*i12)))+(_check_index(i5, i12, OOC_UINT32, 4277))*4);
  i11 = *(OOC_UINT32*)((i13+((_check_index(i3, i15, OOC_UINT32, 4283))*(4*i14)))+(_check_index(i5, i14, OOC_UINT32, 4290))*4);
  *(OOC_UINT32*)((i6+((_check_index(i2, i7, OOC_UINT32, 4254))*(4*i8)))+(_check_index(i5, i8, OOC_UINT32, 4261))*4) = (i10|i11);
  i6 = _check_pointer(i0, 4303);
  i7 = OOC_ARRAY_LENGTH(i6, 1);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  *(OOC_UINT32*)((i6+((_check_index(i3, i8, OOC_UINT32, 4303))*(4*i7)))+(_check_index(i5, i7, OOC_UINT32, 4310))*4) = 0u;
  i5 = i5+1;
  i = i5;
  i6 = i5<i1;
  if (i6) goto l3_loop;
l8:
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4360)), 0);
  i2 = 0<i1;
  if (!i2) goto l19;
  i2 = target;
  i3 = _mod(i2,32);
  i2 = i2>>5;
  i5=0;
l11_loop:
  i6 = _check_pointer(i0, 4408);
  i7 = OOC_ARRAY_LENGTH(i6, 1);
  i8 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = *(OOC_UINT32*)((i6+((_check_index(i5, i8, OOC_UINT32, 4408))*(4*i7)))+(_check_index(i4, i7, OOC_UINT32, 4410))*4);
  i6 = _in(i9,i6);
  if (!i6) goto l14;
  i6 = _check_pointer(i0, 4454);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH(i6, 1);
  i10 = _check_pointer(i0, 4454);
  i11 = OOC_ARRAY_LENGTH(i10, 1);
  i12 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = *(OOC_UINT32*)((i10+((_check_index(i5, i12, OOC_UINT32, 4454))*(4*i11)))+(_check_index(i2, i11, OOC_UINT32, 4456))*4);
  *(OOC_UINT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 4454))*(4*i8)))+(_check_index(i2, i8, OOC_UINT32, 4456))*4) = (_set_bit(i10,i3));
l14:
  i6 = _check_pointer(i0, 4529);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = OOC_ARRAY_LENGTH(i6, 1);
  i10 = _check_pointer(i0, 4529);
  i11 = OOC_ARRAY_LENGTH(i10, 1);
  i12 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = *(OOC_UINT32*)((i10+((_check_index(i5, i12, OOC_UINT32, 4529))*(4*i11)))+(_check_index(i4, i11, OOC_UINT32, 4531))*4);
  *(OOC_UINT32*)((i6+((_check_index(i5, i7, OOC_UINT32, 4529))*(4*i8)))+(_check_index(i4, i8, OOC_UINT32, 4531))*4) = (_clear_bit(i10,i9));
  i5 = i5+1;
  i = i5;
  i6 = i5<i1;
  if (i6) goto l11_loop;
l19:
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_AddToLive(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)live;
  i1 = res;
  i2 = (OOC_INT32)g;
  OOC_SSA_IGraph__GraphDesc_Interfere((OOC_SSA_IGraph__Graph)i2, i1, (OOC_SSA_IGraph__Vector)i0);
  i2 = _check_pointer(i0, 4873);
  i3 = i1>>5;
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = _check_pointer(i0, 4873);
  i5 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i5, OOC_UINT32, 4873))*4);
  *(OOC_UINT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 4873))*4) = (_set_bit(i0,(_mod(i1,32))));
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_RemoveFromLive(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)live;
  i1 = _check_pointer(i0, 5081);
  i2 = res;
  i3 = i2>>5;
  i4 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = _check_pointer(i0, 5081);
  i5 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT32*)(i0+(_check_index(i3, i5, OOC_UINT32, 5081))*4);
  *(OOC_UINT32*)(i1+(_check_index(i3, i4, OOC_UINT32, 5081))*4) = (_clear_bit(i0,(_mod(i2,32))));
  return;
  ;
}

OOC_CHAR8 OOC_SSA_IGraph__GraphDesc_In(OOC_SSA_IGraph__Graph g, OOC_INT32 res, OOC_SSA_IGraph__Vector live) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)live;
  i0 = _check_pointer(i0, 5342);
  i1 = res;
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT32*)(i0+(_check_index((i1>>5), i2, OOC_UINT32, 5342))*4);
  return (_in((_mod(i1,32)),i0));
  ;
}

OOC_CHAR8 OOC_SSA_IGraph__GraphDesc_Conflicts(OOC_SSA_IGraph__Graph g, OOC_INT32 i, OOC_INT32 j) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_IGraph__BitMatrix m;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5542));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  i0 = _check_pointer(i0, 5580);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = OOC_ARRAY_LENGTH(i0, 1);
  i3 = i;
  i4 = j;
  i0 = *(OOC_UINT32*)((i0+((_check_index(i3, i1, OOC_UINT32, 5580))*(4*i2)))+(_check_index((i4>>5), i2, OOC_UINT32, 5582))*4);
  return (_in((_mod(i4,32)),i0));
  ;
}

OOC_INT32 OOC_SSA_IGraph__GraphDesc_NumberOfConflicts(OOC_SSA_IGraph__Graph g, OOC_INT32 i) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 c;

  i0 = (OOC_INT32)g;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5746));
  m = (OOC_SSA_IGraph__BitMatrix)i1;
  c = 0;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 5781))+4);
  i2 = 0<i1;
  if (i2) goto l3;
  i0=0;
  goto l13;
l3:
  i2 = i;
  i3=0;i4=0;
l4_loop:
  i5 = OOC_SSA_IGraph__GraphDesc_Conflicts((OOC_SSA_IGraph__Graph)i0, i2, i3);
  if (!i5) goto l8;
  i4 = i4+1;
  
l8:
  i3 = i3+1;
  i5 = i3<i1;
  if (i5) goto l4_loop;
l12:
  i0=i4;
l13:
  return i0;
  ;
}

void OOC_SSA_IGraph__GraphDesc_MergeVector(OOC_SSA_IGraph__Graph g, OOC_SSA_IGraph__Vector source, OOC_SSA_IGraph__Vector dest) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;

  i0 = (OOC_INT32)source;
  i1 = (OOC_INT32)dest;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6109)), 0);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6123)), 0);
  _assert((i2==i3), 127, 6090);
  i2 = (OOC_INT32)g;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 6147))+4);
  i4 = 0<i3;
  if (!i4) goto l11;
  i4=0;
l3_loop:
  i5 = OOC_SSA_IGraph__GraphDesc_In((OOC_SSA_IGraph__Graph)i2, i4, (OOC_SSA_IGraph__Vector)i0);
  if (!i5) goto l6;
  OOC_SSA_IGraph__GraphDesc_AddToLive((OOC_SSA_IGraph__Graph)i2, i4, (OOC_SSA_IGraph__Vector)i1);
l6:
  i4 = i4+1;
  i5 = i4<i3;
  if (i5) goto l3_loop;
l11:
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_SymmetricMatrix(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13,i14;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 y;
  OOC_INT32 x;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6668));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  y = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6697)), 0);
  i2 = 0<i1;
  if (!i2) goto l23;
  i2=0;
l3_loop:
  x = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6731)), 0);
  i4 = _mod(i2,32);
  i5 = i2>>5;
  i6 = 0<i3;
  if (!i6) goto l18;
  i6=0;
l6_loop:
  i7 = _check_pointer(i0, 6772);
  i8 = OOC_ARRAY_LENGTH(i7, 1);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i10 = i6>>5;
  i7 = *(OOC_UINT32*)((i7+((_check_index(i2, i9, OOC_UINT32, 6772))*(4*i8)))+(_check_index(i10, i8, OOC_UINT32, 6774))*4);
  i8 = _mod(i6,32);
  i7 = _in(i8,i7);
  if (i7) goto l12;
  i7 = _check_pointer(i0, 6894);
  i9 = OOC_ARRAY_LENGTH(i7, 1);
  i11 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT32*)((i7+((_check_index(i6, i11, OOC_UINT32, 6894))*(4*i9)))+(_check_index(i5, i9, OOC_UINT32, 6896))*4);
  i7 = _in(i4,i7);
  if (!i7) goto l13;
  i7 = _check_pointer(i0, 6986);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i11 = OOC_ARRAY_LENGTH(i7, 1);
  i12 = _check_pointer(i0, 6986);
  i13 = OOC_ARRAY_LENGTH(i12, 1);
  i14 = OOC_ARRAY_LENGTH(i12, 0);
  i12 = *(OOC_UINT32*)((i12+((_check_index(i2, i14, OOC_UINT32, 6986))*(4*i13)))+(_check_index(i10, i13, OOC_UINT32, 6988))*4);
  *(OOC_UINT32*)((i7+((_check_index(i2, i9, OOC_UINT32, 6986))*(4*i11)))+(_check_index(i10, i11, OOC_UINT32, 6988))*4) = (_set_bit(i12,i8));
  goto l13;
l12:
  i7 = _check_pointer(i0, 6817);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i9 = OOC_ARRAY_LENGTH(i7, 1);
  i10 = _check_pointer(i0, 6817);
  i11 = OOC_ARRAY_LENGTH(i10, 1);
  i12 = OOC_ARRAY_LENGTH(i10, 0);
  i10 = *(OOC_UINT32*)((i10+((_check_index(i6, i12, OOC_UINT32, 6817))*(4*i11)))+(_check_index(i5, i11, OOC_UINT32, 6819))*4);
  *(OOC_UINT32*)((i7+((_check_index(i6, i8, OOC_UINT32, 6817))*(4*i9)))+(_check_index(i5, i9, OOC_UINT32, 6819))*4) = (_set_bit(i10,i4));
l13:
  i6 = i6+1;
  x = i6;
  i7 = i6<i3;
  if (i7) goto l6_loop;
l18:
  i3 = _check_pointer(i0, 7090);
  i6 = OOC_ARRAY_LENGTH(i3, 0);
  i7 = OOC_ARRAY_LENGTH(i3, 1);
  i8 = _check_pointer(i0, 7090);
  i9 = OOC_ARRAY_LENGTH(i8, 1);
  i10 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT32*)((i8+((_check_index(i2, i10, OOC_UINT32, 7090))*(4*i9)))+(_check_index(i5, i9, OOC_UINT32, 7092))*4);
  *(OOC_UINT32*)((i3+((_check_index(i2, i6, OOC_UINT32, 7090))*(4*i7)))+(_check_index(i5, i7, OOC_UINT32, 7092))*4) = (_clear_bit(i8,i4));
  i2 = i2+1;
  y = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l23:
  return;
  ;
}

void OOC_SSA_IGraph__GraphDesc_AssertSymmetricMatrix(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 y;
  OOC_INT32 x;

  i0 = (OOC_INT32)g;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 7270));
  m = (OOC_SSA_IGraph__BitMatrix)i0;
  y = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7297)), 0);
  i2 = 0<i1;
  if (!i2) goto l20;
  i2=0;
l3_loop:
  x = 0;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7330)), 0);
  i4 = 0<i3;
  if (!i4) goto l15;
  i4 = _mod(i2,32);
  i5 = i2>>5;
  i6=0;
l6_loop:
  i7 = _check_pointer(i0, 7371);
  i8 = OOC_ARRAY_LENGTH(i7, 1);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT32*)((i7+((_check_index(i2, i9, OOC_UINT32, 7371))*(4*i8)))+(_check_index((i6>>5), i8, OOC_UINT32, 7373))*4);
  i7 = _in((_mod(i6,32)),i7);
  if (i7) goto l9;
  i7 = _check_pointer(i0, 7518);
  i8 = OOC_ARRAY_LENGTH(i7, 1);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT32*)((i7+((_check_index(i6, i9, OOC_UINT32, 7518))*(4*i8)))+(_check_index(i5, i8, OOC_UINT32, 7520))*4);
  _assert((!(_in(i4,i7))), 127, 7486);
  goto l10;
l9:
  i7 = _check_pointer(i0, 7439);
  i8 = OOC_ARRAY_LENGTH(i7, 1);
  i9 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_UINT32*)((i7+((_check_index(i6, i9, OOC_UINT32, 7439))*(4*i8)))+(_check_index(i5, i8, OOC_UINT32, 7441))*4);
  _assert((_in(i4,i7)), 127, 7409);
l10:
  i6 = i6+1;
  x = i6;
  i7 = i6<i3;
  if (i7) goto l6_loop;
l15:
  i2 = i2+1;
  y = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l20:
  return;
  ;
}

OOC_SSA_IGraph__ColorArray OOC_SSA_IGraph__GraphDesc_ColorGraphTrivial(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_SSA_IGraph__ColorArray ca;
  OOC_INT32 i;

  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7869))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__ColorArray.baseTypes[0], i1);
  ca = (OOC_SSA_IGraph__ColorArray)i1;
  i = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7897))+4);
  i2 = 0<i0;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = _check_pointer(i1, 7917);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 7917))*4) = i2;
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l3_loop;
l8:
  return (OOC_SSA_IGraph__ColorArray)i1;
  ;
}

OOC_SSA_IGraph__ColorArray OOC_SSA_IGraph__GraphDesc_ColorGraphSimple(OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
  OOC_SSA_IGraph__ColorArray ca;
  OOC_SSA_IGraph__BitMatrix m;
  OOC_INT32 i;
  OOC_INT32 color;
  OOC_INT32 clashes;
  OOC_INT32 j;

  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 8365))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__ColorArray.baseTypes[0], i1);
  ca = (OOC_SSA_IGraph__ColorArray)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8384));
  m = (OOC_SSA_IGraph__BitMatrix)i2;
  i = 0;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 8408))+4);
  i3 = 0<i0;
  if (!i3) goto l30;
  i3=0;
l3_loop:
  i4 = 0<i3;
  color = 0;
  i5=0;
l4_loop:
  clashes = 0;
  j = 0;
  if (i4) goto l7;
  i6=0;
  goto l21;
l7:
  i6=i5;i5=0;i7=0;
l8_loop:
  i8 = _check_pointer(i2, 8539);
  i9 = OOC_ARRAY_LENGTH(i8, 1);
  i10 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_UINT32*)((i8+((_check_index(i3, i10, OOC_UINT32, 8539))*(4*i9)))+(_check_index((i5>>5), i9, OOC_UINT32, 8541))*4);
  i8 = _in((_mod(i5,32)),i8);
  if (i8) goto l11;
  i8=0u;
  goto l13;
l11:
  i8 = _check_pointer(i1, 8580);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 8580))*4);
  i8 = i8==i6;
  
l13:
  if (!i8) goto l16;
  i6 = i6+1;
  color = i6;
  i7 = i7+1;
  clashes = i7;
  
l16:
  i5 = i5+1;
  j = i5;
  i8 = i5<i3;
  if (i8) goto l8_loop;
l20:
  i5=i6;i6=i7;
l21:
  i6 = i6==0;
  if (!i6) goto l4_loop;
l25:
  i4 = _check_pointer(i1, 8712);
  i6 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i6, OOC_UINT32, 8712))*4) = i5;
  i3 = i3+1;
  i = i3;
  i4 = i3<i0;
  if (i4) goto l3_loop;
l30:
  return (OOC_SSA_IGraph__ColorArray)i1;
  ;
}

OOC_SSA_IGraph__ColorArray OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial(volatile OOC_SSA_IGraph__Graph g) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
  volatile OOC_INT32 *p;
  volatile OOC_INT32 i;
  volatile OOC_INT32 best;
  volatile OOC_INT32 j;
  volatile OOC_INT32 size;
  volatile OOC_UINT32 m[32];
  volatile OOC_SSA_IGraph__ColorArray ca;
  volatile OOC_INT32 k;
  volatile OOC_CHAR8 done;
  volatile OOC_UINT32 colorAvailableFor[32];
  auto void OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Try(OOC_INT32 index);
  auto void OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Swap(OOC_INT32 i, OOC_INT32 j);
  auto void OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Invert(const OOC_INT32 caInverted__ref[], OOC_LEN caInverted_0d);
  jmp_buf _target0;
  Exception__Context _context0;
    
    void OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Try(OOC_INT32 index) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_INT32 color;
      OOC_INT32 i;
      OOC_UINT32 oldAvail;

      i0 = index;
      i1 = size;
      i1 = i0==i1;
      if (i1) goto l25;
      color = 0;
      i1 = k;
      i2 = 0<i1;
      if (!i2) goto l26;
      i2 = i0+1;
      i3 = 0<i0;
      i4=0;
l5_loop:
      i5 = *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(i4, 32, OOC_UINT32, 9661))*4);
      i5 = _in(i0,i5);
      if (!i5) goto l19;
      i5 = (OOC_INT32)ca;
      i6 = _check_pointer(i5, 9689);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      *(OOC_INT32*)(i6+(_check_index(i0, i7, OOC_UINT32, 9689))*4) = i4;
      i = 0;
      if (!i3) goto l18;
      i6=0;
l10_loop:
      i7 = *(OOC_UINT32*)((OOC_INT32)m+(_check_index(i6, 32, OOC_UINT32, 9772))*4);
      i7 = _in(i0,i7);
      if (!i7) goto l13;
      i7 = _check_pointer(i5, 9807);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = *(OOC_INT32*)(i7+(_check_index(i6, i8, OOC_UINT32, 9807))*4);
      _assert((i7!=i4), 127, 9798);
l13:
      i6 = i6+1;
      i = i6;
      i7 = i6<i0;
      if (i7) goto l10_loop;
l18:
      i5 = *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(i4, 32, OOC_UINT32, 9898))*4);
      oldAvail = i5;
      i6 = *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(i4, 32, OOC_UINT32, 9964))*4);
      i7 = *(OOC_UINT32*)((OOC_INT32)m+(_check_index(i0, 32, OOC_UINT32, 9975))*4);
      *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(i4, 32, OOC_UINT32, 9936))*4) = (_logical_subtr(i6,i7));
      OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Try(i2);
      *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(i4, 32, OOC_UINT32, 10039))*4) = i5;
l19:
      i4 = i4+1;
      color = i4;
      i5 = i4<i1;
      if (i5) goto l5_loop;
      goto l26;
l25:
      i0 = (OOC_INT32)RT0__NewObject(_td_Exception__Checked.baseTypes[0]);
      Exception__ExceptionDesc_INIT((Exception__Exception)i0, (Object__String)((OOC_INT32)_c0));
      Exception__Raise((void*)i0);
l26:
      return;
      ;
    }

    
    void OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Swap(OOC_INT32 i, OOC_INT32 j) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_INT32 x;

      i0 = (OOC_INT32)p;
      i1 = _check_pointer(i0, 10194);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      i1 = *(OOC_INT32*)(i1+(_check_index(i3, i2, OOC_UINT32, 10194))*4);
      x = i1;
      i2 = _check_pointer(i0, 10200);
      i4 = OOC_ARRAY_LENGTH(i2, 0);
      i5 = _check_pointer(i0, 10208);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = j;
      i5 = *(OOC_INT32*)(i5+(_check_index(i7, i6, OOC_UINT32, 10208))*4);
      *(OOC_INT32*)(i2+(_check_index(i3, i4, OOC_UINT32, 10200))*4) = i5;
      i0 = _check_pointer(i0, 10214);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      *(OOC_INT32*)(i0+(_check_index(i7, i2, OOC_UINT32, 10214))*4) = i1;
      return;
      ;
    }

    
    void OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Invert(const OOC_INT32 caInverted__ref[], OOC_LEN caInverted_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7;
      OOC_ALLOCATE_VPAR(caInverted,OOC_INT32 ,caInverted_0d)
      OOC_INT32 i;

      OOC_INITIALIZE_VPAR(caInverted__ref,caInverted,OOC_INT32 ,(caInverted_0d*4))
      i0 = (OOC_INT32)g;
      i = 0;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 10344))+4);
      i1 = 0<i0;
      if (!i1) goto l8;
      i1 = (OOC_INT32)ca;
      i2 = (OOC_INT32)p;
      i3=0;
l3_loop:
      i4 = _check_pointer(i1, 10365);
      i5 = _check_pointer(i2, 10367);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = *(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 10367))*4);
      i6 = OOC_ARRAY_LENGTH(i4, 0);
      i7 = *(OOC_INT32*)((OOC_INT32)caInverted+(_check_index(i3, caInverted_0d, OOC_UINT32, 10385))*4);
      *(OOC_INT32*)(i4+(_check_index(i5, i6, OOC_UINT32, 10365))*4) = i7;
      i3 = i3+1;
      i = i3;
      i4 = i3<i0;
      if (i4) goto l3_loop;
l8:
      return;
      ;
    }


  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 10515))+4);
  i1 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__9260.baseTypes[0], i1);
  p = (void*)i1;
  i = 0;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10542))+4);
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  i4 = _check_pointer(i1, 10560);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT32*)(i4+(_check_index(i3, i5, OOC_UINT32, 10560))*4) = i3;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 10598))+4);
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l29;
  i1=0;
l11_loop:
  best = i1;
  i2 = (OOC_INT32)g;
  i3 = i1+1;
  j = i3;
  i4 = *(OOC_INT32*)((_check_pointer(i2, 10649))+4);
  i5 = i3<i4;
  if (i5) goto l14;
  i2=i1;
  goto l24;
l14:
  i5 = (OOC_INT32)p;
  i6=i1;
l15_loop:
  i7 = _check_pointer(i5, 10692);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i7 = *(OOC_INT32*)(i7+(_check_index(i3, i8, OOC_UINT32, 10692))*4);
  i7 = OOC_SSA_IGraph__GraphDesc_NumberOfConflicts((OOC_SSA_IGraph__Graph)i2, i7);
  i8 = _check_pointer(i5, 10720);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i8 = *(OOC_INT32*)(i8+(_check_index(i6, i9, OOC_UINT32, 10720))*4);
  i8 = OOC_SSA_IGraph__GraphDesc_NumberOfConflicts((OOC_SSA_IGraph__Graph)i2, i8);
  i7 = i7>i8;
  if (!i7) goto l19;
  best = i3;
  i6=i3;
l19:
  i3 = i3+1;
  j = i3;
  i7 = i3<i4;
  if (i7) goto l15_loop;
l23:
  i2=i6;
l24:
  OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Swap(i1, i2);
  i1 = i;
  i1 = i1+1;
  i = i1;
  i2 = i1<i0;
  if (i2) goto l11_loop;
l29:
  size = 0;
  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 10907))+4);
  i1 = 0!=i1;
  if (i1) goto l32;
  i1=0u;
  goto l34;
l32:
  i1 = (OOC_INT32)p;
  i1 = _check_pointer(i1, 10938);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_INT32*)(i1+(_check_index(0, i2, OOC_UINT32, 10938))*4);
  i1 = OOC_SSA_IGraph__GraphDesc_NumberOfConflicts((OOC_SSA_IGraph__Graph)i0, i1);
  i1 = i1>0;
  
l34:
  if (i1) goto l36;
  i1=0;
  goto l46;
l36:
  i1 = (OOC_INT32)p;
  i2=0;
l37_loop:
  i2 = i2+1;
  size = i2;
  i3 = *(OOC_INT32*)((_check_pointer(i0, 10907))+4);
  i3 = i2!=i3;
  if (i3) goto l40;
  i3=0u;
  goto l42;
l40:
  i3 = _check_pointer(i1, 10938);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = *(OOC_INT32*)(i3+(_check_index(i2, i4, OOC_UINT32, 10938))*4);
  i3 = OOC_SSA_IGraph__GraphDesc_NumberOfConflicts((OOC_SSA_IGraph__Graph)i0, i3);
  i3 = i3>0;
  
l42:
  if (i3) goto l37_loop;
l45:
  i1=i2;
l46:
  i2 = i1>32;
  if (!i2) goto l49;
  return (OOC_SSA_IGraph__ColorArray)(OOC_INT32)0;
l49:
  OOC_SSA_IGraph__GraphDesc_AssertSymmetricMatrix((OOC_SSA_IGraph__Graph)i0);
  i2=0;
l50_loop:
  *(OOC_UINT32*)((OOC_INT32)m+(_check_index(i2, 32, OOC_UINT32, 11208))*4) = 0u;
  i2 = i2+1;
  i3 = i2<=31;
  if (i3) goto l50_loop;
l54:
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l73;
  i3 = (OOC_INT32)p;
  i4=0;
l57_loop:
  j = 0;
  if (!i2) goto l68;
  i5=0;
l60_loop:
  i6 = _check_pointer(i3, 11316);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i3, 11310);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i6 = *(OOC_INT32*)(i6+(_check_index(i5, i7, OOC_UINT32, 11316))*4);
  i7 = *(OOC_INT32*)(i8+(_check_index(i4, i9, OOC_UINT32, 11310))*4);
  i6 = OOC_SSA_IGraph__GraphDesc_Conflicts((OOC_SSA_IGraph__Graph)i0, i7, i6);
  if (!i6) goto l63;
  i6 = *(OOC_UINT32*)((OOC_INT32)m+(_check_index(i5, 32, OOC_UINT32, 11342))*4);
  *(OOC_UINT32*)((OOC_INT32)m+(_check_index(i5, 32, OOC_UINT32, 11342))*4) = (_set_bit(i6,i4));
l63:
  i5 = i5+1;
  j = i5;
  i6 = i5<i1;
  if (i6) goto l60_loop;
l68:
  i4 = i4+1;
  i = i4;
  i5 = i4<i1;
  if (i5) goto l57_loop;
l73:
  i0 = *(OOC_INT32*)((_check_pointer(i0, 11399))+4);
  i0 = (OOC_INT32)RT0__NewObject(_td_OOC_SSA_IGraph__ColorArray.baseTypes[0], i0);
  ca = (OOC_SSA_IGraph__ColorArray)i0;
  i1 = i1!=0;
  if (!i1) goto l97;
  i0 = _check_pointer(i0, 11490);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT32*)(i0+(_check_index(0, i1, OOC_UINT8, 11490))*4) = 0;
  k = 3;
  done = 0u;
  i0=3;
l76_loop:
  i = 0;
  i1 = 0<i0;
  if (!i1) goto l84;
  i1 = size;
  i1 = _bit_range(0,(i1-1));
  i2=0;
l79_loop:
  *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(i2, 32, OOC_UINT32, 11657))*4) = i1;
  i2 = i2+1;
  i = i2;
  i3 = i2<i0;
  if (i3) goto l79_loop;
l84:
  i0 = *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(0, 32, OOC_UINT8, 11741))*4);
  i1 = *(OOC_UINT32*)((OOC_INT32)m+(_check_index(0, 32, OOC_UINT8, 11748))*4);
  *(OOC_UINT32*)((OOC_INT32)colorAvailableFor+(_check_index(0, 32, OOC_UINT8, 11717))*4) = (_logical_subtr(i0,i1));
  {
    Exception__PushContext(&_context0, &_target0);
    if (!setjmp(_target0)) goto l91;
    Exception__PopContext(1);
    i0 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG(((OOC_INT32)Exception__Current()))), &_td_Exception__CheckedDesc);
    if (i0) goto l89;
    Exception__ActivateContext();
    goto l90;
l89:
    done = 1u;
l90:
    Exception__Clear();
    goto l92;
l91:
    OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Try(1);
    Exception__PopContext(1);
l92:;
  }
  i0 = k;
  i0 = i0+1;
  k = i0;
  i1 = done;
  if (!i1) goto l76_loop;
l97:
  i = 0;
  i0 = size;
  i1 = (OOC_INT32)ca;
  i2 = 0<i0;
  if (!i2) goto l116;
  i3=0;
l100_loop:
  j = 0;
  if (!i2) goto l111;
  i4=0;
l103_loop:
  i5 = *(OOC_UINT32*)((OOC_INT32)m+(_check_index(i4, 32, OOC_UINT32, 12080))*4);
  i5 = _in(i3,i5);
  if (!i5) goto l106;
  i5 = _check_pointer(i1, 12108);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = _check_pointer(i1, 12116);
  i8 = OOC_ARRAY_LENGTH(i7, 0);
  i5 = *(OOC_INT32*)(i5+(_check_index(i3, i6, OOC_UINT32, 12108))*4);
  i6 = *(OOC_INT32*)(i7+(_check_index(i4, i8, OOC_UINT32, 12116))*4);
  _assert((i5!=i6), 127, 12099);
l106:
  i4 = i4+1;
  j = i4;
  i5 = i4<i0;
  if (i5) goto l103_loop;
l111:
  i3 = i3+1;
  i = i3;
  i4 = i3<i0;
  if (i4) goto l100_loop;
l116:
  i2 = (OOC_INT32)g;
  i = i0;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 12182))+4);
  i3 = i0<i2;
  if (!i3) goto l124;
l119_loop:
  i3 = _check_pointer(i1, 12245);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)(i3+(_check_index(i0, i4, OOC_UINT32, 12245))*4) = 0;
  i0 = i0+1;
  i = i0;
  i3 = i0<i2;
  if (i3) goto l119_loop;
l124:
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12277)), 0);
  OOC_SSA_IGraph__GraphDesc_ColorGraphCombinatorial_Invert((void*)(_check_pointer(i1, 12277)), i0);
  i0 = (OOC_INT32)g;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12327))+4);
  i = 0;
  i2 = (OOC_INT32)ca;
  i3 = 0<i1;
  if (!i3) goto l143;
  i3=0;
l127_loop:
  i4 = *(OOC_INT32*)((_check_pointer(i0, 12359))+4);
  j = 0;
  i5 = 0<i4;
  if (!i5) goto l138;
  i5=0;
l130_loop:
  i6 = OOC_SSA_IGraph__GraphDesc_Conflicts((OOC_SSA_IGraph__Graph)i0, i3, i5);
  if (!i6) goto l133;
  i6 = _check_pointer(i2, 12423);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i8 = _check_pointer(i2, 12431);
  i9 = OOC_ARRAY_LENGTH(i8, 0);
  i6 = *(OOC_INT32*)(i6+(_check_index(i3, i7, OOC_UINT32, 12423))*4);
  i7 = *(OOC_INT32*)(i8+(_check_index(i5, i9, OOC_UINT32, 12431))*4);
  _assert((i6!=i7), 127, 12414);
l133:
  i5 = i5+1;
  j = i5;
  i6 = i5<i4;
  if (i6) goto l130_loop;
l138:
  i3 = i3+1;
  i = i3;
  i4 = i3<i1;
  if (i4) goto l127_loop;
l143:
  return (OOC_SSA_IGraph__ColorArray)i2;
  ;
}

void OOC_OOC_SSA_IGraph_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);

  return;
  ;
}

void OOC_OOC_SSA_IGraph_destroy(void) {
}

/* --- */
