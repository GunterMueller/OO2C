#include <ADT/Object/Storage.d>
#include <__oo2c.h>
#include <setjmp.h>

void ADT_Object_Storage__ReaderDesc_INIT(ADT_Object_Storage__Reader r, IO__ByteChannel ch) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)ch;
  i1 = (OOC_INT64)r;
  ADT_Storable__ReaderDesc_INIT((ADT_Storable__Reader)i1, (IO__ByteChannel)i0);
  *(OOC_INT64*)((_check_pointer(i1, 3300))+24) = ((OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], 124));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3332))+24);
  i0 = _check_pointer(i0, 3340);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT64*)(i0+(_check_index(0, i2, OOC_UINT8, 3340))*8) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 3357))+16) = 1;
  *(OOC_INT64*)((_check_pointer(i1, 3386))+40) = ((OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], 12));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3418))+40);
  i0 = _check_pointer(i0, 3427);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT64*)(i0+((_check_index(0, i2, OOC_UINT8, 3427))*24)) = (OOC_INT64)0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3450))+40);
  i0 = _check_pointer(i0, 3459);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT64*)((i0+((_check_index(0, i2, OOC_UINT8, 3459))*24))+8) = (OOC_INT64)0;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 3488))+40);
  i0 = _check_pointer(i0, 3497);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  *(OOC_INT64*)((i0+((_check_index(0, i2, OOC_UINT8, 3497))*24))+16) = (OOC_INT64)0;
  *(OOC_INT32*)((_check_pointer(i1, 3524))+32) = 1;
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_INIT(ADT_Object_Storage__Writer w, IO__ByteChannel ch) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)ch;
  i1 = (OOC_INT64)w;
  ADT_Storable__WriterDesc_INIT((ADT_Storable__Writer)i1, (IO__ByteChannel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 3636))+16) = 0;
  *(OOC_INT64*)((_check_pointer(i1, 3665))+24) = ((OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], 12));
  *(OOC_INT32*)((_check_pointer(i1, 3700))+32) = 0;
  i0 = (OOC_INT64)ADT_Dictionary_AddressKey_IntValue__New();
  *(OOC_INT64*)((_check_pointer(i1, 3725))+40) = i0;
  return;
  ;
}

ADT_Object_Storage__Reader ADT_Object_Storage__ConnectReader(IO__ByteChannel ch) {
  register OOC_INT64 i0,i1;
  ADT_Object_Storage__Reader r;

  i0 = (OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__Reader.baseTypes[0]);
  r = (ADT_Object_Storage__Reader)i0;
  i1 = (OOC_INT64)ch;
  ADT_Object_Storage__ReaderDesc_INIT((ADT_Object_Storage__Reader)i0, (IO__ByteChannel)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 3963))+8);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Reader)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Reader)(OOC_INT64)0;
l4:
  _failed_function(3780); return 0;
  ;
}

ADT_Object_Storage__Writer ADT_Object_Storage__ConnectWriter(IO__ByteChannel ch) {
  register OOC_INT64 i0,i1;
  ADT_Object_Storage__Writer w;

  i0 = (OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__Writer.baseTypes[0]);
  w = (ADT_Object_Storage__Writer)i0;
  i1 = (OOC_INT64)ch;
  ADT_Object_Storage__WriterDesc_INIT((ADT_Object_Storage__Writer)i0, (IO__ByteChannel)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4302))+8);
  i1 = i1==(OOC_INT64)0;
  if (i1) goto l3;
  return (ADT_Object_Storage__Writer)i0;
  goto l4;
l3:
  return (ADT_Object_Storage__Writer)(OOC_INT64)0;
l4:
  _failed_function(4119); return 0;
  ;
}

void ADT_Object_Storage__ReaderDesc_ReadObject(ADT_Object_Storage__Reader r, Object__Object *obj) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_INT32 ref;
  OOC_INT32 tref;
  RT0__Struct type;
  Object__String str;
  RT0__Module module;
  auto OOC_INT32 ADT_Object_Storage__ReaderDesc_ReadObject_ReadType(void);
  auto void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab);
    
    OOC_INT32 ADT_Object_Storage__ReaderDesc_ReadObject_ReadType(void) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
      OOC_INT32 tref;
      OOC_INT32 len;
      OOC_INT32 i;
      RT0__Struct tp;
      auto void ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab(ADT_Object_Storage__TypeArray *tab);
        
        void ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab(ADT_Object_Storage__TypeArray *tab) {
          register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
          ADT_Object_Storage__TypeArray _new;
          OOC_INT32 i;

          i0 = (OOC_INT64)*tab;
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4884)), 0);
          i1 = (OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__TypeArray.baseTypes[0], (4+i1*2));
          _new = (ADT_Object_Storage__TypeArray)i1;
          i = 0;
          i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 4932)), 0);
          i2 = 0<i0;
          if (!i2) goto l8;
          i2=0;
l3_loop:
          i3 = (OOC_INT64)*tab;
          i3 = _check_pointer(i3, 4963);
          i4 = OOC_ARRAY_LENGTH(i3, 0);
          i5 = _check_pointer(i1, 4953);
          i6 = OOC_ARRAY_LENGTH(i5, 0);
          _copy_block((i3+((_check_index(i2, i4, OOC_UINT32, 4963))*24)),(i5+((_check_index(i2, i6, OOC_UINT32, 4953))*24)),24);
          i2 = i2+1;
          i = i2;
          i3 = i2<i0;
          if (i3) goto l3_loop;
l8:
          *tab = (ADT_Object_Storage__TypeArray)i1;
          return;
          ;
        }


      i0 = (OOC_INT64)r;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 5042)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&tref);
      i0 = tref;
      i1 = i0<0;
      if (i1) goto l33;
      i1 = (OOC_INT64)r;
      i2 = *(OOC_INT32*)((_check_pointer(i1, 5353))+32);
      i2 = i0!=i2;
      if (!i2) goto l5;
      IO__RaiseFormatError((Object__String)((OOC_INT64)_c0));
l5:
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5465))+40);
      i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 5474)), 0);
      i0 = i0==i2;
      if (!i0) goto l8;
      ADT_Object_Storage__ReaderDesc_ReadObject_ReadType_ExtendTypeTab((void*)((_check_pointer(i1, 5509))+40));
l8:
      i0 = (OOC_INT64)r;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 5547))+32);
      *(OOC_INT32*)((_check_pointer(i0, 5547))+32) = (i1+1);
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 5658)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 5673))+48), 256);
      i0 = (OOC_INT64)r;
      i0 = (OOC_INT64)RT0__ThisModule((void*)((_check_pointer(i0, 5717))+48), 256);
      module = (RT0__Module)i0;
      i1 = i0==(OOC_INT64)0;
      if (i1) goto l11;
      i1 = (OOC_INT64)r;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6043))+40);
      i2 = _check_pointer(i2, 6052);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 6080));
      *(OOC_INT64*)((i2+((_check_index(i4, i3, OOC_UINT32, 6052))*24))+8) = i0;
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 6099)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i1, (void*)((_check_pointer(i1, 6114))+48), 256);
      i0 = (OOC_INT64)r;
      i1 = (OOC_INT64)module;
      i0 = (OOC_INT64)RT0__ThisType((RT0__Module)i1, (void*)((_check_pointer(i0, 6162))+48), 256);
      tp = (RT0__Struct)i0;
      
      goto l20;
l11:
      i0 = (OOC_INT64)r;
      i1 = Strings__Length((void*)((_check_pointer(i0, 5791))+48), 256);
      i1 = i1+1;
      len = i1;
      i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5825))+40);
      i2 = _check_pointer(i2, 5834);
      i3 = OOC_ARRAY_LENGTH(i2, 0);
      i4 = tref;
      *(OOC_INT64*)((i2+((_check_index(i4, i3, OOC_UINT32, 5834))*24))+8) = ((OOC_INT64)RT0__NewBlock(i1));
      i = 0;
      i2 = 0<i1;
      if (!i2) goto l19;
      i2=0;
l14_loop:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5906))+40);
      i3 = _check_pointer(i3, 5914);
      i5 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)((i3+((_check_index(i4, i5, OOC_UINT32, 5914))*24))+8);
      i5 = *(OOC_UINT8*)(((_check_pointer(i0, 5939))+48)+(_check_index(i2, 256, OOC_UINT32, 5944)));
      *(OOC_UINT8*)((_check_pointer(i3, 5931))+i2) = i5;
      i2 = i2+1;
      i = i2;
      i3 = i2<i1;
      if (i3) goto l14_loop;
l19:
      OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 5975)))), IO_BinaryRider__ReaderDesc_ReadString)),IO_BinaryRider__ReaderDesc_ReadString)((IO_BinaryRider__Reader)i0, (void*)((_check_pointer(i0, 5990))+48), 256);
      tp = (RT0__Struct)(OOC_INT64)0;
      i0=(OOC_INT64)0;
l20:
      i1 = (OOC_INT64)r;
      i2 = tref;
      i3 = i0==(OOC_INT64)0;
      if (i3) goto l23;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6438))+40);
      i3 = _check_pointer(i3, 6447);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6469))+32);
      *(OOC_INT64*)((i3+((_check_index(i2, i4, OOC_UINT32, 6447))*24))+16) = i5;
      goto l32;
l23:
      i3 = Strings__Length((void*)((_check_pointer(i1, 6245))+48), 256);
      i3 = i3+1;
      len = i3;
      i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6279))+40);
      i4 = _check_pointer(i4, 6288);
      i5 = OOC_ARRAY_LENGTH(i4, 0);
      *(OOC_INT64*)((i4+((_check_index(i2, i5, OOC_UINT32, 6288))*24))+16) = ((OOC_INT64)RT0__NewBlock(i3));
      i = 0;
      i4 = 0<i3;
      if (!i4) goto l32;
      i4=0;
l26_loop:
      i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6358))+40);
      i5 = _check_pointer(i5, 6366);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT64)*(OOC_INT64*)((i5+((_check_index(i2, i6, OOC_UINT32, 6366))*24))+16);
      i6 = *(OOC_UINT8*)(((_check_pointer(i1, 6389))+48)+(_check_index(i4, 256, OOC_UINT32, 6394)));
      *(OOC_UINT8*)((_check_pointer(i5, 6381))+i4) = i6;
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l26_loop;
l32:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6498))+40);
      i1 = _check_pointer(i1, 6507);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      *(OOC_INT64*)(i1+((_check_index(i2, i3, OOC_UINT32, 6507))*24)) = i0;
      return i2;
      goto l38;
l33:
      i1 = (OOC_INT64)r;
      i1 = *(OOC_INT32*)((_check_pointer(i1, 5154))+32);
      i0 = -i0;
      i1 = i0>=i1;
      if (i1) goto l36;
      return i0;
      goto l38;
l36:
      IO__RaiseFormatError((Object__String)((OOC_INT64)_c1));
l38:
      _failed_function(4639); return 0;
      ;
    }

    
    void ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab(ADT_Object_Storage__ObjectArray *tab) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;
      ADT_Object_Storage__ObjectArray _new;
      OOC_INT32 i;

      i0 = (OOC_INT64)*tab;
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6713)), 0);
      i1 = (OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__ObjectArray.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__ObjectArray)i1;
      i = 0;
      i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 6759)), 0);
      i2 = 0<i0;
      if (!i2) goto l8;
      i2=0;
l3_loop:
      i3 = _check_pointer(i1, 6778);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT64)*tab;
      i5 = _check_pointer(i5, 6788);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i5 = (OOC_INT64)*(OOC_INT64*)(i5+(_check_index(i2, i6, OOC_UINT32, 6788))*8);
      *(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 6778))*8) = i5;
      i2 = i2+1;
      i = i2;
      i3 = i2<i0;
      if (i3) goto l3_loop;
l8:
      *tab = (ADT_Object_Storage__ObjectArray)i1;
      return;
      ;
    }


  i0 = (OOC_INT64)r;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 6858)))), IO_BinaryRider__ReaderDesc_ReadNum)),IO_BinaryRider__ReaderDesc_ReadNum)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&ref);
  i1 = ref;
  i2 = i1==0;
  if (i2) goto l29;
  i2 = i1<0;
  if (i2) goto l23;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 7257))+16);
  i0 = i1!=i0;
  if (!i0) goto l7;
  IO__RaiseFormatError((Object__String)((OOC_INT64)_c2));
l7:
  i0 = ADT_Object_Storage__ReaderDesc_ReadObject_ReadType();
  tref = i0;
  i1 = (OOC_INT64)r;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 7418))+40);
  i2 = _check_pointer(i2, 7427);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i2+((_check_index(i0, i3, OOC_UINT32, 7427))*24));
  type = (RT0__Struct)i0;
  i0 = i0==(OOC_INT64)0;
  if (i0) goto l21;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 7633))+24);
  i0 = OOC_ARRAY_LENGTH((_check_pointer(i0, 7640)), 0);
  i2 = ref;
  i0 = i2==i0;
  if (!i0) goto l12;
  ADT_Object_Storage__ReaderDesc_ReadObject_ExtendObjTab((void*)((_check_pointer(i1, 7675))+24));
l12:
  i0 = (OOC_INT64)r;
  i1 = *(OOC_INT32*)((_check_pointer(i0, 7715))+16);
  *(OOC_INT32*)((_check_pointer(i0, 7715))+16) = (i1+1);
  i1 = (OOC_INT64)ADT_Object_Storage__string8;
  i2 = (OOC_INT64)type;
  i1 = i2==i1;
  if (i1) goto l15;
  i1 = (OOC_INT64)ADT_Object_Storage__string16;
  i1 = i2==i1;
  
  goto l17;
l15:
  i1=1u;
l17:
  if (i1) goto l19;
  i1 = (OOC_INT64)RT0__NewObject((RT0__Struct)i2);
  i1 = (OOC_INT64)_type_cast_fast(OOC_INT64, OOC_INT64, i1);
  *obj = (Object__Object)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7966))+24);
  i2 = _check_pointer(i2, 7973);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i4 = ref;
  *(OOC_INT64*)(i2+(_check_index(i4, i3, OOC_UINT32, 7973))*8) = i1;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 8012)))), &_td_ADT_Storable__ObjectDesc, 8012)), 8019)))), ADT_Storable__ObjectDesc_Load)),ADT_Storable__ObjectDesc_Load)((ADT_Storable__Object)(_type_guard(i1, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 8012)))), &_td_ADT_Storable__ObjectDesc, 8012)), (ADT_Storable__Reader)i0);
  goto l30;
l19:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7798)))), IO_BinaryRider__ReaderDesc_ReadStr)),IO_BinaryRider__ReaderDesc_ReadStr)((IO_BinaryRider__Reader)i0, (void*)(OOC_INT64)&str);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7826))+24);
  i0 = _check_pointer(i0, 7833);
  i1 = OOC_ARRAY_LENGTH(i0, 0);
  i2 = ref;
  i3 = (OOC_INT64)str;
  *(OOC_INT64*)(i0+(_check_index(i2, i1, OOC_UINT32, 7833))*8) = i3;
  *obj = (Object__Object)i3;
  goto l30;
l21:
  ADT_Storable__RaiseTypeError((Object__String)((OOC_INT64)_c3));
  goto l30;
l23:
  i2 = *(OOC_INT32*)((_check_pointer(i0, 7025))+16);
  i1 = -i1;
  i2 = i1>=i2;
  if (i2) goto l26;
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7162))+24);
  i0 = _check_pointer(i0, 7170);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = (OOC_INT64)*(OOC_INT64*)(i0+(_check_index(i1, i2, OOC_UINT32, 7170))*8);
  *obj = (Object__Object)i0;
  goto l30;
l26:
  IO__RaiseFormatError((Object__String)((OOC_INT64)_c4));
  goto l30;
l29:
  *obj = (Object__Object)(OOC_INT64)0;
l30:
  return;
  ;
}

void ADT_Object_Storage__ReaderDesc_Disconnect(ADT_Object_Storage__Reader r) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT64)r;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8218))+24);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8226)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8241))+24);
  i3 = _check_pointer(i3, 8249);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)(i3+(_check_index(i2, i4, OOC_UINT32, 8249))*8) = (OOC_INT64)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8293))+40);
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8302)), 0);
  i = 0;
  i2 = 0<i1;
  if (!i2) goto l16;
  i2=0;
l11_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8317))+40);
  i3 = _check_pointer(i3, 8326);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)(i3+((_check_index(i2, i4, OOC_UINT32, 8326))*24)) = (OOC_INT64)0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8351))+40);
  i3 = _check_pointer(i3, 8360);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)((i3+((_check_index(i2, i4, OOC_UINT32, 8360))*24))+8) = (OOC_INT64)0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8391))+40);
  i3 = _check_pointer(i3, 8400);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)((i3+((_check_index(i2, i4, OOC_UINT32, 8400))*24))+16) = (OOC_INT64)0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l11_loop;
l16:
  *(OOC_INT32*)((_check_pointer(i0, 8435))+16) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 8459))+32) = 0;
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_WriteObject(ADT_Object_Storage__Writer w, Object__Object obj) {
  register OOC_INT64 i0,i1,i2,i3;
  RT0__Struct type;
  OOC_INT32 tref;
  auto OOC_INT32 ADT_Object_Storage__WriterDesc_WriteObject_LookupType(ADT_Object_Storage__Writer w, RT0__Name module, RT0__Name type);
    
    OOC_INT32 ADT_Object_Storage__WriterDesc_WriteObject_LookupType(ADT_Object_Storage__Writer w, RT0__Name module, RT0__Name type) {
      register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7,i8;
      OOC_INT32 i;
      OOC_INT32 j;
      OOC_INT32 e;
      ADT_Object_Storage__TypeRefMap _new;

      i = (-1);
      i0 = (OOC_INT64)w;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9031))+32);
      j = i1;
      i2 = 0!=i1;
      if (i2) goto l3;
      i2=i1;i1=(-1);
      goto l21;
l3:
      i2 = (OOC_INT64)type;
      i3 = (OOC_INT64)module;
      i4=i1;i1=(-1);
l4_loop:
      i5 = (i1+i4)>>1;
      e = i5;
      i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9110))+24);
      i6 = _check_pointer(i6, 9122);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT64)*(OOC_INT64*)(i6+((_check_index(i5, i7, OOC_UINT32, 9122))*24));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9133)),(const void*)(_check_pointer(i3, 9143))))<0;
      if (i6) goto l11;
      i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9162))+24);
      i6 = _check_pointer(i6, 9174);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT64)*(OOC_INT64*)(i6+((_check_index(i5, i7, OOC_UINT32, 9174))*24));
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9185)),(const void*)(_check_pointer(i3, 9195))))==0;
      if (i6) goto l9;
      i6=0u;
      goto l13;
l9:
      i6 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9216))+24);
      i6 = _check_pointer(i6, 9228);
      i7 = OOC_ARRAY_LENGTH(i6, 0);
      i6 = (OOC_INT64)*(OOC_INT64*)((i6+((_check_index(i5, i7, OOC_UINT32, 9228))*24))+8);
      i6 = (
      _cmp8((const void*)(_check_pointer(i6, 9237)),(const void*)(_check_pointer(i2, 9246))))<=0;
      
      goto l13;
l11:
      i6=1u;
l13:
      if (i6) goto l15;
      j = i5;
      i4=i5;
      goto l16;
l15:
      i = i5;
      i1=i5;
l16:
      i5 = (i1+1)!=i4;
      if (i5) goto l4_loop;
l20:
      i2=i4;
l21:
      i3 = i1<0;
      if (i3) goto l24;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9356))+24);
      i3 = _check_pointer(i3, 9368);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)(i3+((_check_index(i1, i4, OOC_UINT32, 9368))*24));
      i4 = (OOC_INT64)module;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9379)),(const void*)(_check_pointer(i4, 9389))))!=0;
      
      goto l26;
l24:
      i3=1u;
l26:
      if (i3) goto l28;
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9406))+24);
      i3 = _check_pointer(i3, 9418);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = (OOC_INT64)*(OOC_INT64*)((i3+((_check_index(i1, i4, OOC_UINT32, 9418))*24))+8);
      i4 = (OOC_INT64)type;
      i3 = (
      _cmp8((const void*)(_check_pointer(i3, 9427)),(const void*)(_check_pointer(i4, 9435))))!=0;
      
      goto l30;
l28:
      i3=1u;
l30:
      if (i3) goto l32;
      i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10118))+24);
      i0 = _check_pointer(i0, 10130);
      i2 = OOC_ARRAY_LENGTH(i0, 0);
      i0 = *(OOC_INT32*)((i0+((_check_index(i1, i2, OOC_UINT32, 10130))*24))+16);
      return (-i0);
      goto l52;
l32:
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9543))+24);
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9521))+32);
      i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 9555)), 0);
      i1 = i3==i1;
      if (!i1) goto l43;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9585))+32);
      i1 = (OOC_INT64)RT0__NewObject(_td_ADT_Object_Storage__TypeRefMap.baseTypes[0], (4+i1*2));
      _new = (ADT_Object_Storage__TypeRefMap)i1;
      i3 = *(OOC_INT32*)((_check_pointer(i0, 9639))+32);
      i = 0;
      i4 = 0<i3;
      if (!i4) goto l42;
      i4=0;
l37_loop:
      i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9681))+24);
      i5 = _check_pointer(i5, 9693);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      i7 = _check_pointer(i1, 9673);
      i8 = OOC_ARRAY_LENGTH(i7, 0);
      _copy_block((i5+((_check_index(i4, i6, OOC_UINT32, 9693))*24)),(i7+((_check_index(i4, i8, OOC_UINT32, 9673))*24)),24);
      i4 = i4+1;
      i = i4;
      i5 = i4<i3;
      if (i5) goto l37_loop;
l42:
      *(OOC_INT64*)((_check_pointer(i0, 9723))+24) = i1;
l43:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9774))+32);
      i1 = i1-1;
      i = i1;
      i3 = i1>=i2;
      if (!i3) goto l51;
l46_loop:
      i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9837))+24);
      i3 = _check_pointer(i3, 9849);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9815))+24);
      i5 = _check_pointer(i5, 9827);
      i6 = OOC_ARRAY_LENGTH(i5, 0);
      _copy_block((i3+((_check_index(i1, i4, OOC_UINT32, 9849))*24)),(i5+((_check_index((i1+1), i6, OOC_UINT32, 9827))*24)),24);
      i1 = i1+(-1);
      i = i1;
      i3 = i1>=i2;
      if (i3) goto l46_loop;
l51:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 9880))+32);
      *(OOC_INT32*)((_check_pointer(i0, 9880))+32) = (i1+1);
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9905))+24);
      i1 = _check_pointer(i1, 9917);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT64)module;
      *(OOC_INT64*)(i1+((_check_index(i2, i3, OOC_UINT32, 9917))*24)) = i4;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9949))+24);
      i1 = _check_pointer(i1, 9961);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = (OOC_INT64)type;
      *(OOC_INT64*)((i1+((_check_index(i2, i3, OOC_UINT32, 9961))*24))+8) = i4;
      i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 9989))+24);
      i1 = _check_pointer(i1, 10001);
      i3 = OOC_ARRAY_LENGTH(i1, 0);
      i4 = *(OOC_INT32*)((_check_pointer(i0, 10014))+32);
      *(OOC_INT32*)((i1+((_check_index(i2, i3, OOC_UINT32, 10001))*24))+16) = i4;
      i0 = *(OOC_INT32*)((_check_pointer(i0, 10045))+32);
      return i0;
l52:
      _failed_function(8637); return 0;
      ;
    }


  i0 = (OOC_INT64)obj;
  i1 = i0==(OOC_INT64)0;
  if (i1) goto l14;
  i1 = (OOC_INT64)w;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10295))+40);
  i2 = ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_HasKey((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (Object__Object)i0);
  if (i2) goto l12;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10458))+16);
  *(OOC_INT32*)((_check_pointer(i1, 10458))+16) = (i2+1);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10504))+16);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10482))+40);
  ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Set((ADT_Dictionary_AddressKey_IntValue__Dictionary)i3, (Object__Object)i0, i2);
  i2 = *(OOC_INT32*)((_check_pointer(i1, 10541))+16);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10528)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i2);
  i0 = (OOC_INT64)RT0__TypeOf((void*)i0);
  type = (RT0__Struct)i0;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10688))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 10696));
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10708))+32);
  i0 = ADT_Object_Storage__WriterDesc_WriteObject_LookupType((ADT_Object_Storage__Writer)i1, (RT0__Name)i2, (RT0__Name)i0);
  tref = i0;
  i1 = (OOC_INT64)w;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10726)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, i0);
  i0 = i0>0;
  if (!i0) goto l7;
  i0 = (OOC_INT64)type;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10792))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i2, 10800));
  _copy_8((const void*)(_check_pointer(i2, 10806)),(void*)((_check_pointer(i1, 10810))+48),256);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10836)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 10852))+48), 256);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 10887))+32);
  _copy_8((const void*)(_check_pointer(i0, 10893)),(void*)((_check_pointer(i1, 10897))+48),256);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10923)))), IO_BinaryRider__WriterDesc_WriteString)),IO_BinaryRider__WriterDesc_WriteString)((IO_BinaryRider__Writer)i1, (void*)((_check_pointer(i1, 10939))+48), 256);
l7:
  i0 = (OOC_INT64)obj;
  i2 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 10983)))), &_td_Object__StringDesc);
  if (i2) goto l10;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 11065)))), &_td_ADT_Storable__ObjectDesc, 11065)), 11072)))), ADT_Storable__ObjectDesc_Store)),ADT_Storable__ObjectDesc_Store)((ADT_Storable__Object)(_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 11065)))), &_td_ADT_Storable__ObjectDesc, 11065)), (ADT_Storable__Writer)i1);
  goto l15;
l10:
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 11013)))), IO_BinaryRider__WriterDesc_WriteStr)),IO_BinaryRider__WriterDesc_WriteStr)((IO_BinaryRider__Writer)i1, (Object__String)i0);
  goto l15;
l12:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 10373))+40);
  i0 = ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Get((ADT_Dictionary_AddressKey_IntValue__Dictionary)i2, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 10359)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i1, (-i0));
  goto l15;
l14:
  i0 = (OOC_INT64)w;
  OOC_TBCALL(((OOC_INT64)OOC_TBPROC_ADR(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 10211)))), IO_BinaryRider__WriterDesc_WriteNum)),IO_BinaryRider__WriterDesc_WriteNum)((IO_BinaryRider__Writer)i0, 0);
l15:
  return;
  ;
}

void ADT_Object_Storage__WriterDesc_Disconnect(ADT_Object_Storage__Writer w) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_INT32 i;

  i0 = (OOC_INT64)w;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11261))+24);
  i = 0;
  i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 11273)), 0);
  i2 = 0<i1;
  if (!i2) goto l8;
  i2=0;
l3_loop:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11288))+24);
  i3 = _check_pointer(i3, 11300);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)(i3+((_check_index(i2, i4, OOC_UINT32, 11300))*24)) = 0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11327))+24);
  i3 = _check_pointer(i3, 11339);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT64*)((i3+((_check_index(i2, i4, OOC_UINT32, 11339))*24))+8) = 0;
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11364))+24);
  i3 = _check_pointer(i3, 11376);
  i4 = OOC_ARRAY_LENGTH(i3, 0);
  *(OOC_INT32*)((i3+((_check_index(i2, i4, OOC_UINT32, 11376))*24))+16) = 0;
  i2 = i2+1;
  i = i2;
  i3 = i2<i1;
  if (i3) goto l3_loop;
l8:
  *(OOC_INT64*)((_check_pointer(i0, 11404))+24) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11430))+32) = 0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 11455))+40);
  ADT_Dictionary_AddressKey_IntValue__DictionaryDesc_Destroy((ADT_Dictionary_AddressKey_IntValue__Dictionary)i1);
  *(OOC_INT64*)((_check_pointer(i0, 11482))+40) = 0;
  *(OOC_INT32*)((_check_pointer(i0, 11505))+16) = 0;
  return;
  ;
}

void OOC_ADT_Object_Storage_init(void) {
  register OOC_INT64 i0;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"Type count mismatch", 20, 0, 19);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"Invalid type reference", 23, 0, 22);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"Object count mismatch", 22, 0, 21);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"Failed to resolve type name", 28, 0, 27);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)"Invalid object reference", 25, 0, 24);

  i0 = (OOC_INT64)RT0__ThisModule((OOC_CHAR8*)"Object", 7);
  ADT_Object_Storage__object = (RT0__Module)i0;
  i0 = (OOC_INT64)RT0__ThisType((RT0__Module)i0, (OOC_CHAR8*)"String8", 8);
  ADT_Object_Storage__string8 = (RT0__Struct)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 11652));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 11662));
  ADT_Object_Storage__string8 = (RT0__Struct)i0;
  i0 = (OOC_INT64)ADT_Object_Storage__object;
  i0 = (OOC_INT64)RT0__ThisType((RT0__Module)i0, (OOC_CHAR8*)"String16", 9);
  ADT_Object_Storage__string16 = (RT0__Struct)i0;
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 11737));
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 11747));
  ADT_Object_Storage__string16 = (RT0__Struct)i0;
  return;
  ;
}

void OOC_ADT_Object_Storage_destroy(void) {
}

/* --- */
