#include <ADT/Arrays.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Arrays__Sort(Object__Object a[], OOC_LEN a_0d, OOC_INT32 pos, OOC_INT32 endpos, ADT_Comparator__Comparator cmp) {
  register OOC_INT32 i0,i1;
  auto void ADT_Arrays__Sort_Quicksort(OOC_INT32 l, OOC_INT32 r);
    
    void ADT_Arrays__Sort_Quicksort(OOC_INT32 l, OOC_INT32 r) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 m;
      Object__Object t;
      Object__Object v;
      OOC_INT32 i;
      OOC_INT32 j;

      i0 = r;
      i1 = l;
      i2 = i0>i1;
      if (!i2) goto l31;
      i2 = (i0+i1)>>1;
      m = i2;
      i3 = (OOC_INT32)cmp;
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1376))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i1, a_0d, OOC_UINT32, 1370))*4);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1358)))), ADT_Comparator__ComparatorDesc_Compare)),ADT_Comparator__ComparatorDesc_Compare)((ADT_Comparator__Comparator)i3, (Object__Object)i5, (Object__Object)i4);
      i3 = i3>0;
      if (!i3) goto l5;
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i1, a_0d, OOC_UINT32, 1407))*4);
      t = (Object__Object)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1421))*4);
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i1, a_0d, OOC_UINT32, 1413))*4) = i4;
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1427))*4) = i3;
l5:
      i3 = (OOC_INT32)cmp;
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i2, a_0d, OOC_UINT32, 1482))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i1, a_0d, OOC_UINT32, 1476))*4);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1464)))), ADT_Comparator__ComparatorDesc_Compare)),ADT_Comparator__ComparatorDesc_Compare)((ADT_Comparator__Comparator)i3, (Object__Object)i5, (Object__Object)i4);
      i3 = i3>0;
      if (!i3) goto l8;
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i1, a_0d, OOC_UINT32, 1513))*4);
      t = (Object__Object)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i2, a_0d, OOC_UINT32, 1527))*4);
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i1, a_0d, OOC_UINT32, 1519))*4) = i4;
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i2, a_0d, OOC_UINT32, 1533))*4) = i3;
l8:
      i3 = (OOC_INT32)cmp;
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i2, a_0d, OOC_UINT32, 1588))*4);
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1582))*4);
      i3 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 1570)))), ADT_Comparator__ComparatorDesc_Compare)),ADT_Comparator__ComparatorDesc_Compare)((ADT_Comparator__Comparator)i3, (Object__Object)i5, (Object__Object)i4);
      i3 = i3>0;
      if (!i3) goto l11;
      i3 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1619))*4);
      t = (Object__Object)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i2, a_0d, OOC_UINT32, 1633))*4);
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1625))*4) = i4;
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i2, a_0d, OOC_UINT32, 1639))*4) = i3;
l11:
      i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 1684))*4);
      v = (Object__Object)i2;
      j = i0;
      i3 = i1-1;
      i4=i0;
l12_loop:
      
l13_loop:
      i3 = i3+1;
      i = i3;
      i5 = (OOC_INT32)cmp;
      i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i3, a_0d, OOC_UINT32, 1789))*4);
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 1777)))), ADT_Comparator__ComparatorDesc_Compare)),ADT_Comparator__ComparatorDesc_Compare)((ADT_Comparator__Comparator)i5, (Object__Object)i6, (Object__Object)i2);
      i5 = i5>=0;
      if (!i5) goto l13_loop;
l18_loop:
      i4 = i4-1;
      j = i4;
      i5 = i4<0;
      if (i5) goto l21;
      i5 = (OOC_INT32)cmp;
      i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i4, a_0d, OOC_UINT32, 1884))*4);
      i5 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i5, 1872)))), ADT_Comparator__ComparatorDesc_Compare)),ADT_Comparator__ComparatorDesc_Compare)((ADT_Comparator__Comparator)i5, (Object__Object)i6, (Object__Object)i2);
      i5 = i5<=0;
      
      goto l23;
l21:
      i5=1u;
l23:
      if (!i5) goto l18_loop;
l26:
      i5 = i3>=i4;
      if (i5) goto l30;
      i5 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i3, a_0d, OOC_UINT32, 1974))*4);
      t = (Object__Object)i5;
      i6 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i4, a_0d, OOC_UINT32, 1988))*4);
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i3, a_0d, OOC_UINT32, 1980))*4) = i6;
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i4, a_0d, OOC_UINT32, 1994))*4) = i5;
      
      goto l12_loop;
l30:
      i2 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i3, a_0d, OOC_UINT32, 2030))*4);
      i4 = (OOC_INT32)*(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 2044))*4);
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i3, a_0d, OOC_UINT32, 2036))*4) = i4;
      *(OOC_INT32*)((OOC_INT32)a+(_check_index(i0, a_0d, OOC_UINT32, 2050))*4) = i2;
      ADT_Arrays__Sort_Quicksort(i1, (i3-1));
      ADT_Arrays__Sort_Quicksort((i3+1), i0);
l31:
      return;
      ;
    }


  i0 = endpos;
  i1 = pos;
  ADT_Arrays__Sort_Quicksort(i1, (i0-1));
  return;
  ;
}

void OOC_ADT_Arrays_init(void) {

  return;
  ;
}

void OOC_ADT_Arrays_destroy(void) {
}

/* --- */
