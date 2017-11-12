#include <ADT/LinkedList.d>
#include <__oo2c.h>
#include <setjmp.h>

ADT_LinkedList__Entry ADT_LinkedList__LinkedListDesc_NewEntry(ADT_LinkedList__LinkedList l, Object__Object element, ADT_LinkedList__Entry next, ADT_LinkedList__Entry previous) {
  register OOC_INT32 i0,i1;
  ADT_LinkedList__Entry e;

  i0 = (OOC_INT32)RT0__NewObject(_td__qtd2.baseTypes[0]);
  e = (ADT_LinkedList__Entry)i0;
  i1 = (OOC_INT32)previous;
  *(OOC_INT32*)((_check_pointer(i0, 1990))+4) = i1;
  i1 = (OOC_INT32)next;
  *(OOC_INT32*)(_check_pointer(i0, 2016)) = i1;
  i1 = (OOC_INT32)element;
  *(OOC_INT32*)((_check_pointer(i0, 2034))+8) = i1;
  return (ADT_LinkedList__Entry)i0;
  ;
}

void ADT_LinkedList__LinkedListDesc_INIT(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0,i1;
  ADT_LinkedList__Entry e;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_NewEntry((ADT_LinkedList__LinkedList)i0, (Object__Object)(OOC_INT32)0, (ADT_LinkedList__Entry)(OOC_INT32)0, (ADT_LinkedList__Entry)(OOC_INT32)0);
  e = (ADT_LinkedList__Entry)i1;
  *(OOC_INT32*)(_check_pointer(i1, 2212)) = i1;
  *(OOC_INT32*)((_check_pointer(i1, 2225))+4) = i1;
  *(OOC_INT32*)(_check_pointer(i0, 2245)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 2264))+4) = 0;
  return;
  ;
}

ADT_LinkedList__LinkedList ADT_LinkedList__New(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td__qtd4.baseTypes[0]);
  ADT_LinkedList__LinkedListDesc_INIT((ADT_LinkedList__LinkedList)i0);
  return (ADT_LinkedList__LinkedList)i0;
  ;
}

void ADT_LinkedList__LinkedListDesc_Destroy(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 2432)) = 0;
  return;
  ;
}

Object__Object ADT_LinkedList__LinkedListDesc_GetFirst(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2573))+4);
  _assert((i1!=0), 127, 2565);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2595));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2604));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2609))+8);
  return (Object__Object)i0;
  ;
}

Object__Object ADT_LinkedList__LinkedListDesc_GetLast(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2741))+4);
  _assert((i1!=0), 127, 2733);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2763));
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2772))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2781))+8);
  return (Object__Object)i0;
  ;
}

void ADT_LinkedList__LinkedListDesc_RemoveEntry(ADT_LinkedList__LinkedList l, ADT_LinkedList__Entry e) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 2882));
  i2 = (OOC_INT32)e;
  _assert((i2!=i1), 127, 2870);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2904))+4);
  _assert((i1>0), 127, 2896);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2919))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2938));
  *(OOC_INT32*)(_check_pointer(i1, 2928)) = i3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 2948));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 2967))+4);
  *(OOC_INT32*)((_check_pointer(i1, 2953))+4) = i2;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 2985))+4);
  *(OOC_INT32*)((_check_pointer(i0, 2985))+4) = (i1-1);
  return;
  ;
}

ADT_LinkedList__Entry ADT_LinkedList__LinkedListDesc_FindEntry(ADT_LinkedList__LinkedList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  ADT_LinkedList__Entry e;

  i0 = index;
  i1 = i0>=0;
  if (i1) goto l3;
  i2=0u;
  goto l4;
l3:
  i2 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 3140))+4);
  i2 = i0<i2;
  
l4:
  _assert(i2, 127, 3108);
  i2 = (OOC_INT32)l;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3158));
  e = (ADT_LinkedList__Entry)i3;
  i4 = *(OOC_INT32*)((_check_pointer(i2, 3183))+4);
  i4 = i0<(i4>>1);
  if (i4) goto l16;
  i1 = *(OOC_INT32*)((_check_pointer(i2, 3275))+4);
  i0 = i1-i0;
  index = i0;
  i1 = i0>0;
  if (i1) goto l9;
  i0=i3;
  goto l25;
l9:
  i1=i0;i0=i3;
l10_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3319))+4);
  e = (ADT_LinkedList__Entry)i0;
  i1 = i1-1;
  index = i1;
  i2 = i1>0;
  if (i2) goto l10_loop;
  goto l25;
l16:
  if (i1) goto l18;
  i0=i3;
  goto l25;
l18:
  i1=i0;i0=i3;
l19_loop:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3230));
  e = (ADT_LinkedList__Entry)i0;
  i1 = i1-1;
  index = i1;
  i2 = i1>=0;
  if (i2) goto l19_loop;
l25:
  return (ADT_LinkedList__Entry)i0;
  ;
}

Object__Object ADT_LinkedList__LinkedListDesc_RemoveFirst(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0,i1,i2;
  Object__Object result;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3600));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 3609));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3614))+8);
  result = (Object__Object)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3641));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 3650));
  ADT_LinkedList__LinkedListDesc_RemoveEntry((ADT_LinkedList__LinkedList)i0, (ADT_LinkedList__Entry)i2);
  return (Object__Object)i1;
  ;
}

Object__Object ADT_LinkedList__LinkedListDesc_RemoveLast(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0,i1,i2;
  Object__Object result;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3823));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3832))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3841))+8);
  result = (Object__Object)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 3868));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3877))+4);
  ADT_LinkedList__LinkedListDesc_RemoveEntry((ADT_LinkedList__LinkedList)i0, (ADT_LinkedList__Entry)i2);
  return (Object__Object)i1;
  ;
}

Object__Object ADT_LinkedList__LinkedListDesc_Remove(ADT_LinkedList__LinkedList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1;
  ADT_LinkedList__Entry e;

  i0 = index;
  i1 = (OOC_INT32)l;
  i0 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_FindEntry((ADT_LinkedList__LinkedList)i1, i0);
  e = (ADT_LinkedList__Entry)i0;
  ADT_LinkedList__LinkedListDesc_RemoveEntry((ADT_LinkedList__LinkedList)i1, (ADT_LinkedList__Entry)i0);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4336))+8);
  return (Object__Object)i0;
  ;
}

void ADT_LinkedList__LinkedListDesc_RemoveRange(ADT_LinkedList__LinkedList l, OOC_INT32 fromIndex, OOC_INT32 toIndex) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  OOC_INT32 delta;
  ADT_LinkedList__Entry fromEntry;
  ADT_LinkedList__Entry toEntry;

  i0 = toIndex;
  i1 = fromIndex;
  i2 = i0-i1;
  delta = i2;
  _assert((i2>=0), 127, 5195);
  i3 = i2==0;
  if (!i3) goto l4;
  return;
l4:
  i3 = (OOC_INT32)l;
  i1 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_FindEntry((ADT_LinkedList__LinkedList)i3, i1);
  fromEntry = (ADT_LinkedList__Entry)i1;
  i0 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_FindEntry((ADT_LinkedList__LinkedList)i3, (i0-1));
  toEntry = (ADT_LinkedList__Entry)i0;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5337))+4);
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5362));
  *(OOC_INT32*)(_check_pointer(i4, 5346)) = i5;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5378));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5405))+4);
  *(OOC_INT32*)((_check_pointer(i0, 5383))+4) = i1;
  i0 = *(OOC_INT32*)((_check_pointer(i3, 5423))+4);
  *(OOC_INT32*)((_check_pointer(i3, 5423))+4) = (i0-i2);
  return;
  ;
}

void ADT_LinkedList__LinkedListDesc_AddBefore(ADT_LinkedList__LinkedList l, Object__Object element, ADT_LinkedList__Entry e) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_LinkedList__Entry _new;

  i0 = (OOC_INT32)e;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5584))+4);
  i2 = (OOC_INT32)l;
  i3 = (OOC_INT32)element;
  i0 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_NewEntry((ADT_LinkedList__LinkedList)i2, (Object__Object)i3, (ADT_LinkedList__Entry)i0, (ADT_LinkedList__Entry)i1);
  _new = (ADT_LinkedList__Entry)i0;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5601))+4);
  *(OOC_INT32*)(_check_pointer(i1, 5610)) = i0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5629));
  *(OOC_INT32*)((_check_pointer(i1, 5634))+4) = i0;
  i0 = *(OOC_INT32*)((_check_pointer(i2, 5659))+4);
  *(OOC_INT32*)((_check_pointer(i2, 5659))+4) = (i0+1);
  return;
  ;
}

void ADT_LinkedList__LinkedListDesc_Prepend(ADT_LinkedList__LinkedList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 5840));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 5849));
  i2 = (OOC_INT32)obj;
  ADT_LinkedList__LinkedListDesc_AddBefore((ADT_LinkedList__LinkedList)i0, (Object__Object)i2, (ADT_LinkedList__Entry)i1);
  return;
  ;
}

void ADT_LinkedList__LinkedListDesc_Append(ADT_LinkedList__LinkedList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 6019));
  i2 = (OOC_INT32)obj;
  ADT_LinkedList__LinkedListDesc_AddBefore((ADT_LinkedList__LinkedList)i0, (Object__Object)i2, (ADT_LinkedList__Entry)i1);
  return;
  ;
}

ADT_LinkedList__LinkedList ADT_LinkedList__LinkedListDesc_Copy(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_LinkedList__LinkedList _new;
  ADT_LinkedList__Entry e;

  i0 = (OOC_INT32)RT0__NewObject(_td__qtd6.baseTypes[0]);
  ADT_LinkedList__LinkedListDesc_INIT((ADT_LinkedList__LinkedList)i0);
  _new = (ADT_LinkedList__LinkedList)i0;
  i1 = (OOC_INT32)l;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6272));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6281));
  e = (ADT_LinkedList__Entry)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6301));
  i3 = i2!=i3;
  if (!i3) goto l8;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6330))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6321)))), ADT_LinkedList__LinkedListDesc_Append)),ADT_LinkedList__LinkedListDesc_Append)((ADT_LinkedList__LinkedList)i0, (Object__Object)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 6351));
  e = (ADT_LinkedList__Entry)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 6301));
  i3 = i2!=i3;
  if (i3) goto l3_loop;
l8:
  return (ADT_LinkedList__LinkedList)i0;
  ;
}

void ADT_LinkedList__LinkedListDesc_Clear(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  ADT_LinkedList__LinkedListDesc_INIT((ADT_LinkedList__LinkedList)i0);
  return;
  ;
}

void ADT_LinkedList__LinkedListDesc_Insert(ADT_LinkedList__LinkedList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1,i2;

  i0 = index;
  i1 = i0>=0;
  if (i1) goto l3;
  i1=0u;
  goto l4;
l3:
  i1 = (OOC_INT32)l;
  i1 = *(OOC_INT32*)((_check_pointer(i1, 7006))+4);
  i1 = i0<=i1;
  
l4:
  _assert(i1, 127, 6973);
  i1 = (OOC_INT32)l;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 7029))+4);
  i2 = i0==i2;
  if (i2) goto l7;
  i0 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_FindEntry((ADT_LinkedList__LinkedList)i1, i0);
  i2 = (OOC_INT32)obj;
  ADT_LinkedList__LinkedListDesc_AddBefore((ADT_LinkedList__LinkedList)i1, (Object__Object)i2, (ADT_LinkedList__Entry)i0);
  goto l8;
l7:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7062));
  i2 = (OOC_INT32)obj;
  ADT_LinkedList__LinkedListDesc_AddBefore((ADT_LinkedList__LinkedList)i1, (Object__Object)i2, (ADT_LinkedList__Entry)i0);
l8:
  return;
  ;
}

Object__Object ADT_LinkedList__LinkedListDesc_Get(ADT_LinkedList__LinkedList l, OOC_INT32 index) {
  register OOC_INT32 i0,i1;
  ADT_LinkedList__Entry e;

  i0 = index;
  i1 = (OOC_INT32)l;
  i0 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_FindEntry((ADT_LinkedList__LinkedList)i1, i0);
  e = (ADT_LinkedList__Entry)i0;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7447))+8);
  return (Object__Object)i0;
  ;
}

void ADT_LinkedList__LinkedListDesc_Set(ADT_LinkedList__LinkedList l, OOC_INT32 index, Object__Object obj) {
  register OOC_INT32 i0,i1;
  ADT_LinkedList__Entry e;

  i0 = index;
  i1 = (OOC_INT32)l;
  i0 = (OOC_INT32)ADT_LinkedList__LinkedListDesc_FindEntry((ADT_LinkedList__LinkedList)i1, i0);
  e = (ADT_LinkedList__Entry)i0;
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 7813))+8) = i1;
  return;
  ;
}

OOC_INT32 ADT_LinkedList__LinkedListDesc_Size(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7956))+4);
  return i0;
  ;
}

OOC_CHAR8 ADT_LinkedList__LinkedListDesc_Contains(ADT_LinkedList__LinkedList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_LinkedList__Entry e;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8138));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8147));
  e = (ADT_LinkedList__Entry)i1;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8167));
  i2 = i1!=i2;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8199))+8);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8190)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i3);
  if (!i3) goto l6;
  return 1u;
l6:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8251));
  e = (ADT_LinkedList__Entry)i1;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8167));
  i3 = i1!=i3;
  if (i3) goto l3_loop;
l11:
  return 0u;
  ;
}

OOC_INT32 ADT_LinkedList__LinkedListDesc_IndexOf(ADT_LinkedList__LinkedList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  ADT_LinkedList__Entry e;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8585));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8594));
  e = (ADT_LinkedList__Entry)i1;
  i = 0;
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8622));
  i2 = i1!=i2;
  if (!i2) goto l11;
  i2 = (OOC_INT32)obj;
  i3=0;
l3_loop:
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8656))+8);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 8645)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i2, (Object__Object)i4);
  if (!i4) goto l6;
  return i3;
l6:
  i3 = i3+1;
  i = i3;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 8713));
  e = (ADT_LinkedList__Entry)i1;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8622));
  i4 = i1!=i4;
  if (i4) goto l3_loop;
l11:
  return (-1);
  ;
}

OOC_INT32 ADT_LinkedList__LinkedListDesc_LastIndexOf(ADT_LinkedList__LinkedList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  ADT_LinkedList__Entry e;
  OOC_INT32 i;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9045));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 9054))+4);
  e = (ADT_LinkedList__Entry)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9071))+4);
  i = i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9091));
  i3 = i1!=i3;
  if (!i3) goto l11;
  i3 = (OOC_INT32)obj;
  {register OOC_INT32 h0=i1;i1=i2;i2=h0;}
l3_loop:
  i1 = i1-1;
  i = i1;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9137))+8);
  i4 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9126)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i3, (Object__Object)i4);
  if (!i4) goto l6;
  return i1;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9186))+4);
  e = (ADT_LinkedList__Entry)i2;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9091));
  i4 = i2!=i4;
  if (i4) goto l3_loop;
l11:
  return (-1);
  ;
}

OOC_CHAR8 ADT_LinkedList__LinkedListDesc_IsEmpty(ADT_LinkedList__LinkedList l) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)l;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 9345))+4);
  return (i0==0);
  ;
}

OOC_CHAR8 ADT_LinkedList__LinkedListDesc_Equals(ADT_LinkedList__LinkedList l, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  ADT_LinkedList__Entry e1;
  ADT_LinkedList__Entry e2;

  i0 = (OOC_INT32)obj;
  i1 = (OOC_INT32)l;
  i2 = OOC_TYPE_TEST_Q(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 9729)))), &_td__qtd5, ((OOC_INT32)OOC_TYPE_TAG(i1)));
  if (i2) goto l3;
  return 0u;
  goto l20;
l3:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 9758))+4);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 9767))+4);
  i2 = i2==i3;
  if (i2) goto l6;
  return 0u;
  goto l20;
l6:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9791));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9800));
  e1 = (ADT_LinkedList__Entry)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9822));
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9831));
  e2 = (ADT_LinkedList__Entry)i0;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9856));
  i3 = i2!=i3;
  if (!i3) goto l18;
l9_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9882))+8);
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9900))+8);
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 9882))+8);
  i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 9890)))), Object__ObjectDesc_Equals)),Object__ObjectDesc_Equals)((Object__Object)i5, (Object__Object)i4);
  if (i3) goto l12;
  return 0u;
  
  goto l13;
l12:
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 9933));
  e1 = (ADT_LinkedList__Entry)i2;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9948));
  e2 = (ADT_LinkedList__Entry)i0;
  
l13:
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 9856));
  i3 = i2!=i3;
  if (i3) goto l9_loop;
l18:
  return 1u;
l20:
  _failed_function(9400); return 0;
  ;
}

OOC_INT32 ADT_LinkedList__LinkedListDesc_HashCode(ADT_LinkedList__LinkedList l) {

  _assert(0u, 127, 10208);
  _failed_function(10147); return 0;
  ;
}

void ADT_LinkedList__LinkedListDesc_Store(ADT_LinkedList__LinkedList l, ADT_Storable__Writer w) {
  register OOC_INT32 i0,i1,i2,i3;
  ADT_LinkedList__Entry e;

  i0 = (OOC_INT32)l;
  i1 = (OOC_INT32)w;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 10362))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10349)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10379));
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10388));
  e = (ADT_LinkedList__Entry)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10408));
  i3 = i2!=i3;
  if (!i3) goto l8;
l3_loop:
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 10440))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10426)))), ADT_Storable__WriterDesc_WriteObject)),ADT_Storable__WriterDesc_WriteObject)((ADT_Storable__Writer)i1, (Object__Object)i3);
  i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 10461));
  e = (ADT_LinkedList__Entry)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10408));
  i3 = i2!=i3;
  if (i3) goto l3_loop;
l8:
  return;
  ;
}

void ADT_LinkedList__LinkedListDesc_Load(ADT_LinkedList__LinkedList l, ADT_Storable__Reader r) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_INT32 size;
  OOC_INT32 i;
  Object__Object o;

  i0 = (OOC_INT32)r;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10624)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT32)&size);
  i1 = (OOC_INT32)l;
  ADT_LinkedList__LinkedListDesc_INIT((ADT_LinkedList__LinkedList)i1);
  i = 0;
  i2 = size;
  i3 = 0<i2;
  if (!i3) goto l8;
  i3=0;
l3_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 10689)))), ADT_Storable__ReaderDesc_ReadObject)),ADT_Storable__ReaderDesc_ReadObject)((ADT_Storable__Reader)i0, (void*)(OOC_INT32)&o);
  i4 = (OOC_INT32)o;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 10714)))), ADT_LinkedList__LinkedListDesc_Append)),ADT_LinkedList__LinkedListDesc_Append)((ADT_LinkedList__LinkedList)i1, (Object__Object)((OOC_INT32)_type_cast_fast(OOC_INT32, OOC_INT32, i4)));
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l3_loop;
l8:
  i0 = *(OOC_INT32*)((_check_pointer(i1, 10762))+4);
  i1 = size;
  _assert((i0==i1), 127, 10754);
  return;
  ;
}

ADT_LinkedList__Iterator ADT_LinkedList__LinkedListDesc_GetIterator(ADT_LinkedList__LinkedList l, ADT_LinkedList__Iterator i) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)i;
  i1 = i0==(OOC_INT32)0;
  if (!i1) goto l4;
  i0 = (OOC_INT32)RT0__NewObject(_td__qtd8.baseTypes[0]);
  i = (ADT_LinkedList__Iterator)i0;
  
l4:
  i1 = (OOC_INT32)l;
  *(OOC_INT32*)(_check_pointer(i0, 11155)) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 11170))+12) = 0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11200));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11209));
  *(OOC_INT32*)((_check_pointer(i0, 11190))+8) = i1;
  *(OOC_INT32*)((_check_pointer(i0, 11219))+4) = (OOC_INT32)0;
  return (ADT_LinkedList__Iterator)i0;
  ;
}

OOC_CHAR8 ADT_LinkedList__IteratorDesc_HasNext(ADT_LinkedList__Iterator i) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11352));
  i0 = *(OOC_INT32*)((_check_pointer(i0, 11338))+12);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 11357))+4);
  return (i0!=i1);
  ;
}

Object__Object ADT_LinkedList__IteratorDesc_Next(ADT_LinkedList__Iterator i) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11450));
  i2 = *(OOC_INT32*)((_check_pointer(i0, 11436))+12);
  i1 = *(OOC_INT32*)((_check_pointer(i1, 11455))+4);
  _assert((i2!=i1), 127, 11428);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11484))+8);
  *(OOC_INT32*)((_check_pointer(i0, 11466))+4) = i1;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11504))+8);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11509));
  *(OOC_INT32*)((_check_pointer(i0, 11494))+8) = i1;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11523))+12);
  *(OOC_INT32*)((_check_pointer(i0, 11523))+12) = (i1+1);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11546))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11559))+8);
  return (Object__Object)i0;
  ;
}

OOC_INT32 ADT_LinkedList__IteratorDesc_NextIndex(ADT_LinkedList__Iterator i) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)i;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 11649))+12);
  return i0;
  ;
}

void ADT_LinkedList__IteratorDesc_Remove(ADT_LinkedList__Iterator i) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11730))+4);
  _assert((i1!=(OOC_INT32)0), 127, 11722);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 11755));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11774))+4);
  ADT_LinkedList__LinkedListDesc_RemoveEntry((ADT_LinkedList__LinkedList)i1, (ADT_LinkedList__Entry)i2);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11796))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11805))+4);
  i1 = i1==i2;
  if (i1) goto l3;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 11874))+12);
  *(OOC_INT32*)((_check_pointer(i0, 11874))+12) = (i1-1);
  goto l4;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11839))+4);
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11852));
  *(OOC_INT32*)((_check_pointer(i0, 11829))+8) = i1;
l4:
  return;
  ;
}

void ADT_LinkedList__IteratorDesc_Set(ADT_LinkedList__Iterator i, Object__Object obj) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)i;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11967))+4);
  _assert((i1!=(OOC_INT32)0), 127, 11959);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11992))+4);
  i1 = (OOC_INT32)obj;
  *(OOC_INT32*)((_check_pointer(i0, 12005))+8) = i1;
  return;
  ;
}

void ADT_LinkedList__IteratorDesc_Insert(ADT_LinkedList__Iterator i, Object__Object obj) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)i;
  *(OOC_INT32*)((_check_pointer(i0, 12088))+4) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12113));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12135))+8);
  i3 = (OOC_INT32)obj;
  ADT_LinkedList__LinkedListDesc_AddBefore((ADT_LinkedList__LinkedList)i1, (Object__Object)i3, (ADT_LinkedList__Entry)i2);
  i1 = *(OOC_INT32*)((_check_pointer(i0, 12150))+12);
  *(OOC_INT32*)((_check_pointer(i0, 12150))+12) = (i1+1);
  return;
  ;
}

void OOC_ADT_LinkedList_init(void) {

  return;
  ;
}

void OOC_ADT_LinkedList_destroy(void) {
}

/* --- */
