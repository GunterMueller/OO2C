#include <OOC/SSA/CSE.d>
#include <__oo2c.h>
#include <setjmp.h>

static void OOC_SSA_CSE__InitPartition(OOC_SSA_CSE__Partition p) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 i;

  i0 = (OOC_INT64)p;
  OOC_SSA__InitNode((OOC_SSA__Node)i0);
  *(OOC_INT64*)(_check_pointer(i0, 2520)) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 2549))+8) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2577))+16) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 2600))+24) = ((OOC_INT64)RT0__NewObject(_td_OOC_SSA_CSE__ResultList.baseTypes[0], 4));
  i = 0;
  i1=0;
l1_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2665))+24);
  i2 = _check_pointer(i2, 2672);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_INT64*)(i2+(_check_index(i1, i3, OOC_UINT32, 2672))*8) = 0;
  i1 = i1+1;
  i = i1;
  i2 = i1<=3;
  if (i2) goto l1_loop;
l5:
  *(OOC_UINT8*)((_check_pointer(i0, 2699))+32) = 0u;
  *(OOC_UINT8*)((_check_pointer(i0, 2725))+33) = 0u;
  *(OOC_INT64*)((_check_pointer(i0, 2758))+40) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 2782))+48) = (-1);
  *(OOC_INT64*)((_check_pointer(i0, 2814))+56) = ((OOC_INT64)RT0__NewObject(_td_OOC_SSA_CSE__ChildrenList.baseTypes[0], 4));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 2850))+56);
  i0 = _check_pointer(i0, 2865);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT64*)(i0+(_check_index(0, i1, OOC_UINT8, 2865))*8) = 0;
  return;
  ;
}

static OOC_SSA_CSE__Partition OOC_SSA_CSE__NewPartition(void) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_CSE__Partition.baseTypes[0]);
  OOC_SSA_CSE__InitPartition((OOC_SSA_CSE__Partition)i0);
  return (OOC_SSA_CSE__Partition)i0;
  ;
}

void OOC_SSA_CSE__PartitionDesc_Add(OOC_SSA_CSE__Partition p, OOC_SSA__Instr instr) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_SSA_CSE__Partition old;
  OOC_INT32 i;
  OOC_SSA_CSE__ResultList _new;
  auto void OOC_SSA_CSE__PartitionDesc_Add_Swap(OOC_SSA__Result *_i1, OOC_SSA__Result *_i2);
    
    void OOC_SSA_CSE__PartitionDesc_Add_Swap(OOC_SSA__Result *_i1, OOC_SSA__Result *_i2) {
      register OOC_INT64 i0,i1;

      i0 = (OOC_INT64)*_i1;
      i1 = (OOC_INT64)*_i2;
      *_i1 = (OOC_SSA__Result)i1;
      *_i2 = (OOC_SSA__Result)i0;
      return;
      ;
    }


  i0 = (OOC_INT64)instr;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3310))+32);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l15;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3397))+32);
  i1 = _type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 3404)))), &_td_OOC_SSA_CSE__PartitionDesc, 3404);
  old = (OOC_SSA_CSE__Partition)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 3429))+16);
  i2 = i2>0;
  if (!i2) goto l14;
  i = 0;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3480))+24);
  i2 = _check_pointer(i2, 3487);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT32, 3487))*8);
  i2 = i2!=i0;
  if (i2) goto l7;
  i0=0;
  goto l13;
l7:
  i2=0;
l8_loop:
  i2 = i2+1;
  i = i2;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3480))+24);
  i3 = _check_pointer(i3, 3487);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 3487))*8);
  i3 = i3!=i0;
  if (i3) goto l8_loop;
l12:
  i0=i2;
l13:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3567))+24);
  i2 = _check_pointer(i2, 3574);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3578))+16);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3552))+24);
  i1 = _check_pointer(i1, 3559);
  i5 = OOC_ARRAY_LENGTH(i1, 0);
  OOC_SSA_CSE__PartitionDesc_Add_Swap((void*)(i1+(_check_index(i0, i5, OOC_UINT32, 3559))*8), (void*)(i2+(_check_index((i3-1), i4, OOC_UINT32, 3574))*8));
l14:
  i0 = (OOC_INT64)old;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3615))+16);
  *(OOC_INT32*)((_check_pointer(i0, 3615))+16) = (i1-1);
l15:
  i0 = (OOC_INT64)p;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3658))+24);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3643))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3665)), 0);
  i1 = i2==i1;
  if (!i1) goto l34;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3728))+16);
  i1 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_CSE__ResultList.baseTypes[0], (i1*2));
  _new = (OOC_SSA_CSE__ResultList)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3760))+16);
  i = 0;
  i3 = 0<i2;
  if (!i3) goto l25;
  i3=0;
l20_loop:
  i4 = _check_pointer(i1, 3783);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3791))+24);
  i6 = _check_pointer(i6, 3798);
  i7 = OOC_ARRAY_LENGTH(i6, 0);
  i6 = (OOC_INT64)*(OOC_INT64*)(i6+(_check_index(i3, i7, OOC_UINT32, 3798))*8);
  *(OOC_INT64*)(i4+(_check_index(i3, i5, OOC_UINT32, 3783))*8) = i6;
  i3 = i3+1;
  i = i3;
  i4 = i3<i2;
  if (i4) goto l20_loop;
l25:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3830))+16);
  i = i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3848)), 0);
  i4 = i2<i3;
  if (!i4) goto l33;
l28_loop:
  i4 = _check_pointer(i1, 3867);
  i5 = OOC_ARRAY_LENGTH(i4, 0);
  *(OOC_INT64*)(i4+(_check_index(i2, i5, OOC_UINT32, 3867))*8) = (OOC_INT64)0;
  i2 = i2+1;
  i = i2;
  i4 = i2<i3;
  if (i4) goto l28_loop;
l33:
  *(OOC_INT64*)((_check_pointer(i0, 3897))+24) = i1;
l34:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3932))+24);
  i1 = _check_pointer(i1, 3939);
  i2 = *(OOC_INT32*)((_check_pointer(i0, 3941))+16);
  i3 = OOC_ARRAY_LENGTH(i1, 0);
  i4 = (OOC_INT64)instr;
  *(OOC_INT64*)(i1+(_check_index(i2, i3, OOC_UINT32, 3939))*8) = i4;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 3969))+16);
  *(OOC_INT32*)((_check_pointer(i0, 3969))+16) = (i1+1);
  *(OOC_INT64*)((_check_pointer(i4, 3987))+32) = i0;
  return;
  ;
}

void OOC_SSA_CSE__Transform(OOC_SSA__ProcBlock pb) {
  register OOC_INT64 i0,i1,i2,i3;
  OOC_INT32 i;
  OOC_INT32 j;
  OOC_SSA_CSE__Partition opcodes[89][12];
  OOC_SSA_CSE__Partition worklist;
  OOC_SSA_CSE__Partition pList;
  OOC_SSA__Instr instr;
  OOC_SSA_CSE__Partition p;
  auto OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_AddPartition(void);
  auto OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_SplittedPartition(OOC_SSA_CSE__Partition p, OOC_INT32 opndIndex, OOC_SSA_CSE__Partition *touchedList);
  auto void OOC_SSA_CSE__Transform_Split(const OOC_SSA__Result iList__ref[], OOC_LEN iList_0d, OOC_INT32 size);
  auto void OOC_SSA_CSE__Transform_Replace(OOC_SSA_CSE__Partition p);
    
    OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_AddPartition(void) {
      register OOC_INT64 i0,i1;
      OOC_SSA_CSE__Partition p;

      i0 = (OOC_INT64)OOC_SSA_CSE__NewPartition();
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = (OOC_INT64)worklist;
      *(OOC_INT64*)((_check_pointer(i0, 4411))+8) = i1;
      worklist = (OOC_SSA_CSE__Partition)i0;
      *(OOC_UINT8*)((_check_pointer(i0, 4467))+33) = 1u;
      i1 = (OOC_INT64)pList;
      *(OOC_INT64*)(_check_pointer(i0, 4495)) = i1;
      pList = (OOC_SSA_CSE__Partition)i0;
      return (OOC_SSA_CSE__Partition)i0;
      ;
    }

    
    OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_SplittedPartition(OOC_SSA_CSE__Partition p, OOC_INT32 opndIndex, OOC_SSA_CSE__Partition *touchedList) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8,i9;
      OOC_INT32 i;
      OOC_SSA_CSE__ChildrenList newList;
      OOC_INT32 j;
      OOC_SSA_CSE__Partition _new;

      i0 = (OOC_INT64)p;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 4882))+48);
      i2 = opndIndex;
      i1 = i2>i1;
      if (i1) goto l3;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6156))+40);
      i1 = (OOC_INT64)OOC_SSA_CSE__Transform_SplittedPartition((OOC_SSA_CSE__Partition)i1, i2, (void*)(OOC_INT64)touchedList);
      _new = (OOC_SSA_CSE__Partition)i1;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 6233))+48);
      i0 = (OOC_INT64)OOC_SSA_CSE__Transform_SplittedPartition((OOC_SSA_CSE__Partition)i1, i0, (void*)(OOC_INT64)touchedList);
      return (OOC_SSA_CSE__Partition)i0;
      goto l36;
l3:
      i = 0;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5061))+56);
      i1 = _check_pointer(i1, 5076);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i3, OOC_UINT32, 5076))*8);
      i1 = i1!=(OOC_INT64)0;
      if (i1) goto l6;
      i1=0u;
      goto l8;
l6:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5105))+56);
      i1 = _check_pointer(i1, 5120);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = (OOC_INT64)*(OOC_INT64*)(i1+(_check_index(0, i3, OOC_UINT32, 5120))*8);
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5123))+48);
      i1 = i1!=i2;
      
l8:
      if (i1) goto l10;
      i1=0;
      goto l20;
l10:
      i1=0;
l11_loop:
      i1 = i1+1;
      i = i1;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5061))+56);
      i3 = _check_pointer(i3, 5076);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i1, i4, OOC_UINT32, 5076))*8);
      i3 = i3!=(OOC_INT64)0;
      if (i3) goto l14;
      i3=0u;
      goto l16;
l14:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5105))+56);
      i3 = _check_pointer(i3, 5120);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i1, i4, OOC_UINT32, 5120))*8);
      i3 = *(OOC_INT32*)((_check_pointer(i3, 5123))+48);
      i3 = i3!=i2;
      
l16:
      if (i3) goto l11_loop;
l20:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5208))+56);
      i3 = _check_pointer(i3, 5223);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i1, i4, OOC_UINT32, 5223))*8);
      i3 = i3==(OOC_INT64)0;
      if (i3) goto l23;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5787))+56);
      i0 = _check_pointer(i0, 5802);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(i1, i2, OOC_UINT32, 5802))*8);
      return (OOC_SSA_CSE__Partition)i0;
      goto l36;
l23:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5265))+56);
      i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 5280)), 0);
      i4 = i1+1;
      i3 = i4==i3;
      if (!i3) goto l34;
      i3 = (OOC_INT64)RT0__NewObject(_td_OOC_SSA_CSE__ChildrenList.baseTypes[0], (i4*2));
      newList = (OOC_SSA_CSE__ChildrenList)i3;
      j = 0;
      i5 = 0<=i1;
      if (!i5) goto l33;
      i5=0;
l28_loop:
      i6 = _check_pointer(i3, 5377);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i8 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5385))+56);
      i8 = _check_pointer(i8, 5400);
      i9 = OOC_ARRAY_LENGTH(i8, 0);
      i8 = (OOC_INT64)*(OOC_INT64*)(i8+(_check_index(i5, i9, OOC_UINT32, 5400))*8);
      *(OOC_INT64*)(i6+(_check_index(i5, i7, OOC_UINT32, 5377))*8) = i8;
      i5 = i5+1;
      j = i5;
      i6 = i5<=i1;
      if (i6) goto l28_loop;
l33:
      *(OOC_INT64*)((_check_pointer(i0, 5435))+56) = i3;
l34:
      i3 = (OOC_INT64)OOC_SSA_CSE__Transform_AddPartition();
      _new = (OOC_SSA_CSE__Partition)i3;
      *(OOC_INT64*)((_check_pointer(i3, 5524))+40) = i0;
      *(OOC_INT32*)((_check_pointer(i3, 5554))+48) = i2;
      i2 = (OOC_INT64)*touchedList;
      *(OOC_INT64*)((_check_pointer(i3, 5596))+64) = i2;
      *touchedList = (OOC_SSA_CSE__Partition)i3;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5667))+56);
      i2 = _check_pointer(i2, 5682);
      i5 = OOC_ARRAY_LENGTH(i2, 0);
      *(OOC_INT64*)(i2+(_check_index(i1, i5, OOC_UINT32, 5682))*8) = i3;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5705))+56);
      i0 = _check_pointer(i0, 5720);
      i1 = OOC_ARRAY_LENGTH(i0, 0);
      *(OOC_INT64*)(i0+(_check_index(i4, i1, OOC_UINT32, 5720))*8) = (OOC_INT64)0;
      return (OOC_SSA_CSE__Partition)i3;
l36:
      _failed_function(4590); return 0;
      ;
    }

    
    void OOC_SSA_CSE__Transform_Split(const OOC_SSA__Result iList__ref[], OOC_LEN iList_0d, OOC_INT32 size) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_ALLOCATE_VPAR(iList,OOC_SSA__Result ,iList_0d)
      OOC_SSA_CSE__Partition touched;
      OOC_SSA_CSE__Partition originList;
      OOC_INT32 nextResultCount;
      OOC_INT32 i;
      OOC_SSA__Result res;
      OOC_SSA__Opnd use;
      OOC_SSA_CSE__Partition pUse;
      OOC_SSA_CSE__Partition p;
      OOC_SSA_CSE__Partition largest;
      auto OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_Split_LargestChild(OOC_SSA_CSE__Partition p, OOC_SSA_CSE__Partition largest);
        
        OOC_SSA_CSE__Partition OOC_SSA_CSE__Transform_Split_LargestChild(OOC_SSA_CSE__Partition p, OOC_SSA_CSE__Partition largest) {
          register OOC_INT64 i0,i1,i2,i3,i4;
          OOC_INT32 i;

          i0 = (OOC_INT64)p;
          i1 = (OOC_INT64)largest;
          i2 = *(OOC_INT32*)((_check_pointer(i0, 6784))+16);
          i3 = *(OOC_INT32*)((_check_pointer(i1, 6799))+16);
          i2 = i2>i3;
          if (!i2) goto l4;
          largest = (OOC_SSA_CSE__Partition)i0;
          i1=i0;
l4:
          i = 0;
          i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6889))+56);
          i2 = _check_pointer(i2, 6903);
          i3 = OOC_ARRAY_LENGTH(i2, 0);
          i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(0, i3, OOC_UINT32, 6903))*8);
          i2 = i2!=(OOC_INT64)0;
          if (i2) goto l7;
          i0=i1;
          goto l13;
l7:
          i2=0;
l8_loop:
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6952))+56);
          i3 = _check_pointer(i3, 6966);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 6966))*8);
          i1 = (OOC_INT64)OOC_SSA_CSE__Transform_Split_LargestChild((OOC_SSA_CSE__Partition)i3, (OOC_SSA_CSE__Partition)i1);
          largest = (OOC_SSA_CSE__Partition)i1;
          i2 = i2+1;
          i = i2;
          i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6889))+56);
          i3 = _check_pointer(i3, 6903);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 6903))*8);
          i3 = i3!=(OOC_INT64)0;
          if (i3) goto l8_loop;
l12:
          i0=i1;
l13:
          return (OOC_SSA_CSE__Partition)i0;
          ;
        }


      OOC_INITIALIZE_VPAR(iList__ref,iList,OOC_SSA__Result ,(iList_0d*8))
      i0 = size;
      i1 = i0!=0;
      if (!i1) goto l76;
      
l3_loop:
      touched = (OOC_SSA_CSE__Partition)(OOC_INT64)0;
      originList = (OOC_SSA_CSE__Partition)(OOC_INT64)0;
      nextResultCount = 0;
      i = 0;
      i1 = 0<i0;
      if (i1) goto l6;
      i0=(OOC_INT64)0;
      goto l45;
l6:
      i1=0;i2=(OOC_INT64)0;i3=0;
l7_loop:
      i4 = (OOC_INT64)*(OOC_INT64*)((OOC_INT64)iList+(_check_index(i1, iList_0d, OOC_UINT32, 7519))*8);
      res = (OOC_SSA__Result)i4;
      i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i4, 7545))+24);
      use = (OOC_SSA__Opnd)i5;
      i6 = i5!=(OOC_INT64)0;
      if (!i6) goto l36;
      {register OOC_INT64 h0=i2;i2=i5;i5=h0;}
l11_loop:
      i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 7610))+24);
      i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 7616))+32);
      i6 = _type_guard(i6, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i6, 7622)))), &_td_OOC_SSA_CSE__PartitionDesc, 7622);
      pUse = (OOC_SSA_CSE__Partition)i6;
      i7 = *(OOC_INT32*)((_check_pointer(i6, 7654))+16);
      i7 = i7>1;
      if (i7) goto l14;
      i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 7688))+56);
      i7 = _check_pointer(i7, 7702);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT64)*(OOC_INT64*)(i7+(_check_index(0, i8, OOC_UINT8, 7702))*8);
      i7 = i7!=(OOC_INT64)0;
      
      goto l16;
l14:
      i7=1u;
l16:
      if (i7) goto l18;
      i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 7736))+40);
      i7 = i7!=(OOC_INT64)0;
      
      goto l20;
l18:
      i7=1u;
l20:
      if (!i7) goto l31;
      i7 = *(OOC_UINT8*)((_check_pointer(i6, 7985))+32);
      if (i7) goto l25;
      i7=0u;
      goto l27;
l25:
      i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i6, 8002))+56);
      i7 = _check_pointer(i7, 8016);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      i7 = (OOC_INT64)*(OOC_INT64*)(i7+(_check_index(0, i8, OOC_UINT8, 8016))*8);
      i7 = i7==(OOC_INT64)0;
      
l27:
      if (!i7) goto l30;
      *(OOC_INT64*)((_check_pointer(i6, 8052))+72) = i5;
      originList = (OOC_SSA_CSE__Partition)i6;
      i5=i6;
l30:
      i7 = OOC_SSA__OpndDesc_OpndIndex((OOC_SSA__Opnd)i2);
      i6 = (OOC_INT64)OOC_SSA_CSE__Transform_SplittedPartition((OOC_SSA_CSE__Partition)i6, i7, (void*)(OOC_INT64)&touched);
      p = (OOC_SSA_CSE__Partition)i6;
      i7 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 8242))+24);
      OOC_SSA_CSE__PartitionDesc_Add((OOC_SSA_CSE__Partition)i6, (OOC_SSA__Instr)i7);
      
l31:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 8290))+32);
      use = (OOC_SSA__Opnd)i2;
      i6 = i2!=(OOC_INT64)0;
      if (i6) goto l11_loop;
l35:
      i2=i5;
l36:
      i5 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 8344));
      i5 = i5!=(OOC_INT64)0;
      if (!i5) goto l40;
      i4 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i4, 8542));
      *(OOC_INT64*)((OOC_INT64)iList+(_check_index(i3, iList_0d, OOC_UINT32, 8518))*8) = i4;
      i3 = i3+1;
      nextResultCount = i3;
      
l40:
      i1 = i1+1;
      i = i1;
      i4 = i1<i0;
      if (i4) goto l7_loop;
l44:
      i0=i2;
l45:
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l63;
l48_loop:
      i0 = (OOC_INT64)OOC_SSA_CSE__Transform_Split_LargestChild((OOC_SSA_CSE__Partition)i0, (OOC_SSA_CSE__Partition)i0);
      largest = (OOC_SSA_CSE__Partition)i0;
      i1 = (OOC_INT64)p;
      i2 = i0!=i1;
      if (!i2) goto l58;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 8762))+16);
      i2 = i2>0;
      if (i2) goto l53;
      i2=0u;
      goto l55;
l53:
      i2 = *(OOC_UINT8*)((_check_pointer(i1, 8777))+33);
      i2 = !i2;
      
l55:
      if (!i2) goto l57;
      i2 = (OOC_INT64)worklist;
      *(OOC_INT64*)((_check_pointer(i1, 8809))+8) = i2;
      worklist = (OOC_SSA_CSE__Partition)i1;
      *(OOC_UINT8*)((_check_pointer(i1, 8880))+33) = 1u;
l57:
      *(OOC_UINT8*)((_check_pointer(i1, 8931))+32) = 0u;
      *(OOC_UINT8*)((_check_pointer(i0, 8970))+32) = 1u;
l58:
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 9020))+72);
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l48_loop;
l63:
      i0 = (OOC_INT64)touched;
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l71;
l66_loop:
      *(OOC_INT64*)((_check_pointer(i0, 9162))+40) = (OOC_INT64)0;
      *(OOC_INT32*)((_check_pointer(i0, 9192))+48) = (-1);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9225))+56);
      i1 = _check_pointer(i1, 9240);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT64*)(i1+(_check_index(0, i2, OOC_UINT8, 9240))*8) = (OOC_INT64)0;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9268))+64);
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l66_loop;
l71:
      i0 = nextResultCount;
      size = i0;
      i1 = i0!=0;
      if (i1) goto l3_loop;
l76:
      return;
      ;
    }

    
    void OOC_SSA_CSE__Transform_Replace(OOC_SSA_CSE__Partition p) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5;
      OOC_SSA_Blocker__DependenceData dd;
      OOC_INT32 i;
      OOC_INT32 j;
      OOC_SSA__Instr iInstr;
      OOC_SSA__Instr jInstr;
      auto void OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith(OOC_SSA__Instr x, OOC_SSA__Instr y);
        
        void OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith(OOC_SSA__Instr x, OOC_SSA__Instr y) {
          register OOC_INT64 i0,i1,i2;
          OOC_SSA__Result rx;
          OOC_SSA__Result ry;

          i0 = (OOC_INT64)x;
          rx = (OOC_SSA__Result)i0;
          i1 = (OOC_INT64)y;
          ry = (OOC_SSA__Result)i1;
          i2 = i0!=(OOC_INT64)0;
          if (i2) goto l3;
          i2=0u;
          goto l5;
l3:
          i2 = i1!=(OOC_INT64)0;
          
l5:
          if (!i2) goto l17;
          {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l8_loop:
          OOC_SSA__ResultDesc_ReplaceUses((OOC_SSA__Result)i1, (OOC_SSA__Result)i0);
          i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 9798));
          rx = (OOC_SSA__Result)i1;
          i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 9820));
          ry = (OOC_SSA__Result)i0;
          i2 = i1!=(OOC_INT64)0;
          if (i2) goto l11;
          i2=0u;
          goto l13;
l11:
          i2 = i0!=(OOC_INT64)0;
          
l13:
          if (i2) goto l8_loop;
l16:
          {register OOC_INT64 h0=i0;i0=i1;i1=h0;}
l17:
          _assert((i0==(OOC_INT64)0), 127, 9912);
          _assert((i1==(OOC_INT64)0), 127, 9939);
          return;
          ;
        }


      i0 = (OOC_INT64)pb;
      i0 = (OOC_INT64)OOC_SSA_Blocker__GetDependenceData((OOC_SSA__ProcBlock)i0);
      dd = (OOC_SSA_Blocker__DependenceData)i0;
      i0 = (OOC_INT64)p;
      i1 = i0!=(OOC_INT64)0;
      if (!i1) goto l46;
      
l3_loop:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 10083))+16);
      i1 = i1>1;
      if (!i1) goto l41;
      i = 0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 10140))+16);
      i1 = 0!=i1;
      if (!i1) goto l41;
      i1=0;
l10_loop:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10168))+24);
      i2 = _check_pointer(i2, 10175);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(i1, i3, OOC_UINT32, 10175))*8);
      i2 = i2!=(OOC_INT64)0;
      if (!i2) goto l35;
      i1 = i1+1;
      j = i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 10241))+16);
      i2 = i1!=i2;
      if (!i2) goto l35;
l17_loop:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10273))+24);
      i2 = _check_pointer(i2, 10280);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(i1, i3, OOC_UINT32, 10280))*8);
      i2 = i2!=(OOC_INT64)0;
      if (!i2) goto l29;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10325))+24);
      i2 = _check_pointer(i2, 10332);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = i;
      i2 = (OOC_INT64)*(OOC_INT64*)(i2+(_check_index(i4, i3, OOC_UINT32, 10332))*8);
      i2 = _type_guard(i2, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i2, 10340)))), &_td_OOC_SSA__InstrDesc, 10340);
      iInstr = (OOC_SSA__Instr)i2;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10377))+24);
      i3 = _check_pointer(i3, 10384);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)(i3+(_check_index(i1, i4, OOC_UINT32, 10384))*8);
      i3 = _type_guard(i3, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i3, 10392)))), &_td_OOC_SSA__InstrDesc, 10392);
      jInstr = (OOC_SSA__Instr)i3;
      i4 = (OOC_INT64)dd;
      i5 = OOC_SSA_Blocker__DependenceDataDesc_AvailableTo((OOC_SSA_Blocker__DependenceData)i4, (OOC_SSA__Instr)i2, (OOC_SSA__Instr)i3);
      if (i5) goto l27;
      i4 = OOC_SSA_Blocker__DependenceDataDesc_AvailableTo((OOC_SSA_Blocker__DependenceData)i4, (OOC_SSA__Instr)i3, (OOC_SSA__Instr)i2);
      if (!i4) goto l29;
      OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith((OOC_SSA__Instr)i2, (OOC_SSA__Instr)i3);
      i0 = (OOC_INT64)p;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10692))+24);
      i1 = _check_pointer(i1, 10699);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = i;
      *(OOC_INT64*)(i1+(_check_index(i3, i2, OOC_UINT32, 10699))*8) = (OOC_INT64)0;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 10737))+16);
      i1 = i1-1;
      
      goto l29;
l27:
      OOC_SSA_CSE__Transform_Replace_ReplaceInstrWith((OOC_SSA__Instr)i3, (OOC_SSA__Instr)i2);
      i0 = (OOC_INT64)p;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10535))+24);
      i1 = _check_pointer(i1, 10542);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = j;
      *(OOC_INT64*)(i1+(_check_index(i3, i2, OOC_UINT32, 10542))*8) = (OOC_INT64)0;
      i1=i3;
l29:
      i1 = i1+1;
      j = i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 10241))+16);
      i2 = i1!=i2;
      if (i2) goto l17_loop;
l35:
      i1 = i;
      i1 = i1+1;
      i = i1;
      i2 = *(OOC_INT32*)((_check_pointer(i0, 10140))+16);
      i2 = i1!=i2;
      if (i2) goto l10_loop;
l41:
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 10943));
      p = (OOC_SSA_CSE__Partition)i0;
      i1 = i0!=(OOC_INT64)0;
      if (i1) goto l3_loop;
l46:
      i0 = (OOC_INT64)pb;
      OOC_SSA_Blocker__RemoveAntiDeps((OOC_SSA__ProcBlock)i0);
      return;
      ;
    }


  i0 = (OOC_INT64)pb;
  OOC_SSA__ProcBlockDesc_SetMarkers((OOC_SSA__ProcBlock)i0, (OOC_SSA__Node)(OOC_INT64)0, 0);
  i = 0;
  i1=0;
l1_loop:
  j = 0;
  i2=0;
l2_loop:
  *(OOC_INT64*)(((OOC_INT64)opcodes+((_check_index(i1, 89, OOC_UINT32, 11150))*96))+(_check_index(i2, 12, OOC_UINT32, 11152))*8) = (OOC_INT64)0;
  i2 = i2+1;
  j = i2;
  i3 = i2<=11;
  if (i3) goto l2_loop;
l6:
  i1 = i1+1;
  i = i1;
  i2 = i1<=88;
  if (i2) goto l1_loop;
l10:
  worklist = (OOC_SSA_CSE__Partition)(OOC_INT64)0;
  pList = (OOC_SSA_CSE__Partition)(OOC_INT64)0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11348))+24);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l30;
l13_loop:
  i1 = OOC_SSA__InstrDesc_IsConst((OOC_SSA__Instr)i0);
  if (i1) goto l16;
  i1 = OOC_SSA__InstrDesc_UniqueResult((OOC_SSA__Instr)i0);
  
  goto l18;
l16:
  i1=1u;
l18:
  if (i1) goto l24;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 11651))+72);
  i0 = *(OOC_INT8*)((_check_pointer(i0, 11665))+9);
  i0 = (OOC_INT64)*(OOC_INT64*)(((OOC_INT64)opcodes+((_check_index(i1, 89, OOC_UINT8, 11645))*96))+(_check_index(i0, 12, OOC_UINT8, 11658))*8);
  p = (OOC_SSA_CSE__Partition)i0;
  i1 = i0==(OOC_INT64)0;
  if (!i1) goto l25;
  i0 = (OOC_INT64)OOC_SSA_CSE__Transform_AddPartition();
  p = (OOC_SSA_CSE__Partition)i0;
  i1 = (OOC_INT64)instr;
  i2 = *(OOC_INT8*)((_check_pointer(i1, 11757))+72);
  i1 = *(OOC_INT8*)((_check_pointer(i1, 11772))+9);
  *(OOC_INT64*)(((OOC_INT64)opcodes+((_check_index(i2, 89, OOC_UINT8, 11751))*96))+(_check_index(i1, 12, OOC_UINT8, 11765))*8) = i0;
  
  goto l25;
l24:
  i0 = (OOC_INT64)OOC_SSA_CSE__Transform_AddPartition();
  p = (OOC_SSA_CSE__Partition)i0;
  
l25:
  i1 = (OOC_INT64)instr;
  OOC_SSA_CSE__PartitionDesc_Add((OOC_SSA_CSE__Partition)i0, (OOC_SSA__Instr)i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 11854))+56);
  instr = (OOC_SSA__Instr)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l13_loop;
l30:
  i0 = (OOC_INT64)worklist;
  i0 = i0!=(OOC_INT64)0;
  if (!i0) goto l41;
l33_loop:
  i0 = (OOC_INT64)worklist;
  p = (OOC_SSA_CSE__Partition)i0;
  *(OOC_UINT8*)((_check_pointer(i0, 11935))+33) = 0u;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11983))+8);
  worklist = (OOC_SSA_CSE__Partition)i1;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 12010))+32);
  i1 = !i1;
  if (!i1) goto l36;
  *(OOC_UINT8*)((_check_pointer(i0, 12035))+32) = 1u;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12071))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 12071))+24);
  i0 = *(OOC_INT32*)((_check_pointer(i0, 12082))+16);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 12078)), 0);
  OOC_SSA_CSE__Transform_Split((void*)(_check_pointer(i2, 12078)), i1, i0);
l36:
  i0 = (OOC_INT64)worklist;
  i0 = i0!=(OOC_INT64)0;
  if (i0) goto l33_loop;
l41:
  i0 = (OOC_INT64)pList;
  OOC_SSA_CSE__Transform_Replace((OOC_SSA_CSE__Partition)i0);
  return;
  ;
}

void OOC_OOC_SSA_CSE_init(void) {

  return;
  ;
}

void OOC_OOC_SSA_CSE_destroy(void) {
}

/* --- */
