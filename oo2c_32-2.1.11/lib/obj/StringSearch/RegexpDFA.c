#include <StringSearch/RegexpDFA.d>
#include <__oo2c.h>
#include <setjmp.h>

static StringSearch_RegexpDFA__Node StringSearch_RegexpDFA__BuildDFA(StringSearch_RegexpParser__Group regexp) {
  register OOC_INT32 i0,i1;
  StringSearch_RegexpDFA__Node dummy;
  StringSearch_RegexpDFA__Node initialState;
  auto void StringSearch_RegexpDFA__BuildDFA_BuildGroup(StringSearch_RegexpParser__Group group, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end);
  auto void StringSearch_RegexpDFA__BuildDFA_Minimize(StringSearch_RegexpDFA__Node *n);
    
    void StringSearch_RegexpDFA__BuildDFA_BuildGroup(StringSearch_RegexpParser__Group group, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end) {
      register OOC_INT32 i0,i1,i2;
      auto StringSearch_RegexpDFA__Node StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode(OOC_INT8 type, StringSearch_RegexpDFA__Node suc);
      auto void StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList(StringSearch_RegexpParser__Expr expr, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end);
        
        StringSearch_RegexpDFA__Node StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode(OOC_INT8 type, StringSearch_RegexpDFA__Node suc) {
          register OOC_INT32 i0,i1;
          StringSearch_RegexpDFA__Node n;

          i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpDFA__Node.baseTypes[0]);
          n = (StringSearch_RegexpDFA__Node)i0;
          i1 = type;
          *(OOC_INT8*)((_check_pointer(i0, 8939))+8) = i1;
          *(OOC_UINT8*)((_check_pointer(i0, 8964))+9) = 0u;
          i1 = (OOC_INT32)suc;
          *(OOC_INT32*)(_check_pointer(i0, 8985)) = i1;
          *(OOC_INT32*)((_check_pointer(i0, 9008))+4) = 0;
          *(OOC_UINT8*)((_check_pointer(i0, 9031))+10) = 1u;
          i1 = (OOC_INT32)group;
          i1 = *(OOC_INT8*)((_check_pointer(i1, 9082))+4);
          *(OOC_INT8*)((_check_pointer(i0, 9064))+11) = i1;
          *(OOC_INT32*)((_check_pointer(i0, 9102))+12) = 0;
          *(OOC_INT32*)((_check_pointer(i0, 9125))+16) = (-1);
          return (StringSearch_RegexpDFA__Node)i0;
          ;
        }

        
        void StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList(StringSearch_RegexpParser__Expr expr, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end) {
          register OOC_INT32 i0,i1,i2;
          auto void StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList(StringSearch_RegexpParser__Term term, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end);
            
            void StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList(StringSearch_RegexpParser__Term term, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end) {
              register OOC_INT32 i0,i1,i2;
              StringSearch_RegexpDFA__Node n;
              auto void StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList_BuildFactor(StringSearch_RegexpParser__Factor factor, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end);
                
                void StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList_BuildFactor(StringSearch_RegexpParser__Factor factor, StringSearch_RegexpDFA__Node *start, StringSearch_RegexpDFA__Node *startAlt, StringSearch_RegexpDFA__Node end) {
                  register OOC_INT32 i0,i1,i2;

                  i0 = (OOC_INT32)factor;
                  i1 = *(OOC_INT8*)(_check_pointer(i0, 9633));
                  switch (i1) {
                  case 0:
                  case 1:
                    i1 = *(OOC_INT8*)(_check_pointer(i0, 9741));
                    i2 = (OOC_INT32)end;
                    i1 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode(i1, (StringSearch_RegexpDFA__Node)i2);
                    *start = (StringSearch_RegexpDFA__Node)i1;
                    i0 = *(OOC_UINT8*)((_check_pointer(i0, 9788))+1);
                    *(OOC_UINT8*)((_check_pointer(i1, 9774))+9) = i0;
                    i0 = (OOC_INT32)*start;
                    *startAlt = (StringSearch_RegexpDFA__Node)i0;
                    goto l7;
                  case 6:
                  case 7:
                    i1 = *(OOC_INT8*)(_check_pointer(i0, 9922));
                    i2 = (OOC_INT32)end;
                    i1 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode(i1, (StringSearch_RegexpDFA__Node)i2);
                    *start = (StringSearch_RegexpDFA__Node)i1;
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9970))+4);
                    *(OOC_INT32*)((_check_pointer(i1, 9955))+12) = i0;
                    i0 = (OOC_INT32)*start;
                    *startAlt = (StringSearch_RegexpDFA__Node)i0;
                    goto l7;
                  case 3:
                  case 4:
                  case 5:
                    i0 = *(OOC_INT8*)(_check_pointer(i0, 10158));
                    i1 = (OOC_INT32)end;
                    i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode(i0, (StringSearch_RegexpDFA__Node)i1);
                    *start = (StringSearch_RegexpDFA__Node)i0;
                    *startAlt = (StringSearch_RegexpDFA__Node)i0;
                    goto l7;
                  case (-1):
                    i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10269))+8);
                    i1 = (OOC_INT32)end;
                    StringSearch_RegexpDFA__BuildDFA_BuildGroup((StringSearch_RegexpParser__Group)i0, (void*)(OOC_INT32)start, (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i1);
                    goto l7;
                  default:
                    _failed_case(i1, 9622);
                    goto l7;
                  }
l7:
                  return;
                  ;
                }


              i0 = (OOC_INT32)term;
              i1 = i0==(OOC_INT32)0;
              if (i1) goto l10;
              i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 10468));
              i2 = (OOC_INT32)end;
              StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList((StringSearch_RegexpParser__Term)i1, (void*)(OOC_INT32)start, (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i2);
              i1 = (OOC_INT32)*start;
              end = (StringSearch_RegexpDFA__Node)i1;
              i2 = *(OOC_INT8*)((_check_pointer(i0, 10546))+8);
              switch (i2) {
              case 0:
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10627))+4);
                StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList_BuildFactor((StringSearch_RegexpParser__Factor)i0, (void*)(OOC_INT32)start, (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i1);
                goto l11;
              case 1:
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10729))+4);
                StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList_BuildFactor((StringSearch_RegexpParser__Factor)i0, (void*)(OOC_INT32)start, (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i1);
                i0 = (OOC_INT32)*startAlt;
                i1 = (OOC_INT32)end;
                i1 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-1), (StringSearch_RegexpDFA__Node)i1);
                *(OOC_INT32*)((_check_pointer(i0, 10784))+4) = i1;
                i0 = (OOC_INT32)*startAlt;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 10854))+4);
                *startAlt = (StringSearch_RegexpDFA__Node)i0;
                goto l11;
              case 2:
                i1 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-1), (StringSearch_RegexpDFA__Node)i1);
                *start = (StringSearch_RegexpDFA__Node)i1;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11004))+4);
                StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList_BuildFactor((StringSearch_RegexpParser__Factor)i0, (void*)(_check_pointer(i1, 11019)), (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i1);
                i0 = (OOC_INT32)*startAlt;
                i1 = (OOC_INT32)end;
                *(OOC_INT32*)((_check_pointer(i0, 11066))+4) = i1;
                i0 = (OOC_INT32)*start;
                i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-1), (StringSearch_RegexpDFA__Node)i0);
                *start = (StringSearch_RegexpDFA__Node)i0;
                *startAlt = (StringSearch_RegexpDFA__Node)i0;
                goto l11;
              case 3:
                i1 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-1), (StringSearch_RegexpDFA__Node)(OOC_INT32)0);
                n = (StringSearch_RegexpDFA__Node)i1;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11322))+4);
                StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList_BuildFactor((StringSearch_RegexpParser__Factor)i0, (void*)(OOC_INT32)start, (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i1);
                i0 = (OOC_INT32)n;
                i1 = (OOC_INT32)*start;
                *(OOC_INT32*)(_check_pointer(i0, 11368)) = i1;
                i1 = (OOC_INT32)end;
                *(OOC_INT32*)((_check_pointer(i0, 11399))+4) = i1;
                i0 = (OOC_INT32)*start;
                i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-1), (StringSearch_RegexpDFA__Node)i0);
                *start = (StringSearch_RegexpDFA__Node)i0;
                *startAlt = (StringSearch_RegexpDFA__Node)i0;
                goto l11;
              default:
                _failed_case(i2, 10537);
                goto l11;
              }
l10:
              i0 = (OOC_INT32)end;
              *start = (StringSearch_RegexpDFA__Node)i0;
l11:
              return;
              ;
            }


          i0 = (OOC_INT32)expr;
          i1 = i0==(OOC_INT32)0;
          if (i1) goto l7;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11697))+4);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l5;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 11832))+4);
          i1 = (OOC_INT32)end;
          StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList_BuildTermList((StringSearch_RegexpParser__Term)i0, (void*)(OOC_INT32)start, (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i1);
          goto l6;
l5:
          i0 = (OOC_INT32)end;
          i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-1), (StringSearch_RegexpDFA__Node)i0);
          *start = (StringSearch_RegexpDFA__Node)i0;
          *startAlt = (StringSearch_RegexpDFA__Node)i0;
l6:
          i0 = (OOC_INT32)*startAlt;
          i1 = (OOC_INT32)expr;
          i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 11910));
          i2 = (OOC_INT32)end;
          StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList((StringSearch_RegexpParser__Expr)i1, (void*)((_check_pointer(i0, 11926))+4), (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i2);
          goto l8;
l7:
          *start = (StringSearch_RegexpDFA__Node)(OOC_INT32)0;
          *startAlt = (StringSearch_RegexpDFA__Node)(OOC_INT32)0;
l8:
          return;
          ;
        }


      i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-3), (StringSearch_RegexpDFA__Node)(OOC_INT32)0);
      *start = (StringSearch_RegexpDFA__Node)i0;
      i0 = (OOC_INT32)end;
      i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA_BuildGroup_NewNode((-2), (StringSearch_RegexpDFA__Node)i0);
      i1 = (OOC_INT32)*start;
      i2 = (OOC_INT32)group;
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i2, 12068));
      StringSearch_RegexpDFA__BuildDFA_BuildGroup_BuildExprList((StringSearch_RegexpParser__Expr)i2, (void*)(_check_pointer(i1, 12085)), (void*)(OOC_INT32)startAlt, (StringSearch_RegexpDFA__Node)i0);
      i0 = (OOC_INT32)*start;
      *startAlt = (StringSearch_RegexpDFA__Node)i0;
      return;
      ;
    }

    
    void StringSearch_RegexpDFA__BuildDFA_Minimize(StringSearch_RegexpDFA__Node *n) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)*n;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = *(OOC_UINT8*)((_check_pointer(i0, 12281))+10);
      if (!i1) goto l6;
      *(OOC_UINT8*)((_check_pointer(i0, 12312))+10) = 0u;
      i0 = (OOC_INT32)*n;
      StringSearch_RegexpDFA__BuildDFA_Minimize((void*)(_check_pointer(i0, 12358)));
      StringSearch_RegexpDFA__BuildDFA_Minimize((void*)((_check_pointer(i0, 12387))+4));
      
l6:
      i1 = *(OOC_INT8*)((_check_pointer(i0, 12420))+8);
      i1 = i1==(-1);
      if (i1) goto l9;
      i1=0u;
      goto l11;
l9:
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 12445))+4);
      i1 = i1==(OOC_INT32)0;
      
l11:
      if (!i1) goto l14;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 12479));
      *n = (StringSearch_RegexpDFA__Node)i0;
l14:
      return;
      ;
    }


  i0 = (OOC_INT32)regexp;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  dummy = (StringSearch_RegexpDFA__Node)(OOC_INT32)0;
  StringSearch_RegexpDFA__BuildDFA_BuildGroup((StringSearch_RegexpParser__Group)i0, (void*)(OOC_INT32)&initialState, (void*)(OOC_INT32)&dummy, (StringSearch_RegexpDFA__Node)(OOC_INT32)0);
  StringSearch_RegexpDFA__BuildDFA_Minimize((void*)(OOC_INT32)&initialState);
  i0 = (OOC_INT32)initialState;
  return (StringSearch_RegexpDFA__Node)i0;
  goto l4;
l3:
  return (StringSearch_RegexpDFA__Node)(OOC_INT32)0;
l4:
  _failed_function(8628); return 0;
  ;
}

static void StringSearch_RegexpDFA__InitMatchObject(StringSearch_RegexpDFA__MatchObject m, OOC_INT32 pos, OOC_INT32 endpos, StringSearch_RegexpDFA__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)string;
  i1 = (OOC_INT32)matcher;
  i2 = endpos;
  i3 = pos;
  i4 = (OOC_INT32)m;
  StringSearch__InitMatchObject((StringSearch__MatchObject)i4, i3, i2, (StringSearch__Matcher)i1, (Object__String8)i0);
  i0 = start;
  *(OOC_INT32*)((_check_pointer(i4, 13008))+16) = i0;
  i0 = end;
  *(OOC_INT32*)((_check_pointer(i4, 13031))+20) = i0;
  return;
  ;
}

static StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__NewMatchObject(OOC_INT32 pos, OOC_INT32 endpos, StringSearch_RegexpDFA__Matcher matcher, Object__String8 string, OOC_INT32 start, OOC_INT32 end) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpDFA__MatchObject.baseTypes[0]);
  i1 = end;
  i2 = start;
  i3 = (OOC_INT32)string;
  i4 = (OOC_INT32)matcher;
  i5 = endpos;
  i6 = pos;
  StringSearch_RegexpDFA__InitMatchObject((StringSearch_RegexpDFA__MatchObject)i0, i6, i5, (StringSearch_RegexpDFA__Matcher)i4, (Object__String8)i3, i2, i1);
  return (StringSearch_RegexpDFA__MatchObject)i0;
  ;
}

OOC_INT32 StringSearch_RegexpDFA__MatchObjectDesc_Start(StringSearch_RegexpDFA__MatchObject m, OOC_INT32 group) {
  register OOC_INT32 i0;

  i0 = group;
  _assert((i0==0), 127, 13469);
  i0 = (OOC_INT32)m;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13501))+16);
  return i0;
  ;
}

OOC_INT32 StringSearch_RegexpDFA__MatchObjectDesc_End(StringSearch_RegexpDFA__MatchObject m, OOC_INT32 group) {
  register OOC_INT32 i0;

  i0 = group;
  _assert((i0==0), 127, 13594);
  i0 = (OOC_INT32)m;
  i0 = *(OOC_INT32*)((_check_pointer(i0, 13626))+20);
  return i0;
  ;
}

static void StringSearch_RegexpDFA__InitMatcher(StringSearch_RegexpDFA__Matcher matcher, Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups, StringSearch_RegexpDFA__Node initialState) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  OOC_INT8 type;
  OOC_INT32 prefixLength;
  StringSearch_RegexpDFA__Node ptr;
  OOC_INT32 i;
  OOC_CHAR8 str[1024];
  Object__String8 prefixPattern;

  i0 = groups;
  i1 = flags;
  i2 = (OOC_INT32)pattern;
  i3 = (OOC_INT32)matcher;
  StringSearch__InitMatcher((StringSearch__Matcher)i3, (Object__String8)i2, i1, i0);
  i0 = (OOC_INT32)initialState;
  *(OOC_INT32*)((_check_pointer(i3, 14041))+12) = i0;
  *(OOC_INT32*)((_check_pointer(i3, 14143))+16) = (OOC_INT32)0;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14191));
  i1 = *(OOC_INT8*)((_check_pointer(i1, 14196))+8);
  type = i1;
  i2 = i1==0;
  if (i2) goto l3;
  i4 = i1==1;
  
  goto l5;
l3:
  i4=1u;
l5:
  if (!i4) goto l43;
  prefixLength = 0;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14317));
  ptr = (StringSearch_RegexpDFA__Node)i4;
  i5 = *(OOC_INT8*)((_check_pointer(i4, 14340))+8);
  i5 = i5==i1;
  if (i5) goto l9;
  i5=0u;
  goto l11;
l9:
  i5 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i4, 14361))+4);
  i5 = i5==(OOC_INT32)0;
  
l11:
  if (i5) goto l13;
  i1=0;
  goto l23;
l13:
  i5=i4;i4=0;
l14_loop:
  i4 = i4+1;
  prefixLength = i4;
  i5 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i5, 14415));
  ptr = (StringSearch_RegexpDFA__Node)i5;
  i6 = *(OOC_INT8*)((_check_pointer(i5, 14340))+8);
  i6 = i6==i1;
  if (i6) goto l17;
  i6=0u;
  goto l19;
l17:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i5, 14361))+4);
  i6 = i6==(OOC_INT32)0;
  
l19:
  if (i6) goto l14_loop;
l22:
  i1=i4;
l23:
  i4 = i1>1;
  if (!i4) goto l43;
  i4 = i1>1024;
  if (!i4) goto l29;
  prefixLength = 1024;
  i1=1024;
l29:
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 14603));
  ptr = (StringSearch_RegexpDFA__Node)i0;
  i = 0;
  i4 = 0<i1;
  if (!i4) goto l37;
  i4=i0;i0=0;
l32_loop:
  i5 = *(OOC_UINT8*)((_check_pointer(i4, 14673))+9);
  *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, 1024, OOC_UINT32, 14663))) = i5;
  i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i4, 14689));
  ptr = (StringSearch_RegexpDFA__Node)i4;
  i0 = i0+1;
  i = i0;
  i5 = i0<i1;
  if (i5) goto l32_loop;
l37:
  i0 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)str, 1024, 0, i1);
  prefixPattern = (Object__String8)i0;
  if (i2) goto l40;
  flags = 1u;
  i1=1u;
  goto l41;
l40:
  flags = 0u;
  i1=0u;
l41:
  i2 = (OOC_INT32)StringSearch_SubstringBM__factory;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 14958)))), StringSearch_SubstringBM__FactoryDesc_Compile)),StringSearch_SubstringBM__FactoryDesc_Compile)((StringSearch_SubstringBM__Factory)i2, (Object__String8)i0, i1);
  *(OOC_INT32*)((_check_pointer(i3, 14910))+16) = i0;
l43:
  return;
  ;
}

static StringSearch_RegexpDFA__Matcher StringSearch_RegexpDFA__NewMatcher(Object__String8 pattern, OOC_UINT32 flags, OOC_INT32 groups, StringSearch_RegexpDFA__Node initialState) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpDFA__Matcher.baseTypes[0]);
  i1 = (OOC_INT32)initialState;
  i2 = flags;
  i3 = (OOC_INT32)pattern;
  StringSearch_RegexpDFA__InitMatcher((StringSearch_RegexpDFA__Matcher)i0, (Object__String8)i3, i2, 0, (StringSearch_RegexpDFA__Node)i1);
  return (StringSearch_RegexpDFA__Matcher)i0;
  ;
}

static StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__Match(StringSearch_RegexpDFA__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 startpos, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5;
  StringSearch_RegexpDFA__Match_DequeEntry first;
  StringSearch_RegexpDFA__Match_DequeEntry last;
  StringSearch_RegexpDFA__Match_DequeEntry deScanState;
  OOC_INT32 endOfMatch;
  OOC_INT32 spos;
  StringSearch_RegexpDFA__Node state;
  OOC_INT32 i;
  auto void StringSearch_RegexpDFA__Match_Put(StringSearch_RegexpDFA__Node state);
  auto void StringSearch_RegexpDFA__Match_Push(StringSearch_RegexpDFA__Node state);
  auto void StringSearch_RegexpDFA__Match_PruneGroup(OOC_INT8 groupId);
  auto void StringSearch_RegexpDFA__Match_UnmarkNode(StringSearch_RegexpDFA__Node n);
  auto void StringSearch_RegexpDFA__Match_MarkCurrentStates(void);
    
    void StringSearch_RegexpDFA__Match_Put(StringSearch_RegexpDFA__Node state) {
      register OOC_INT32 i0,i1,i2;
      StringSearch_RegexpDFA__Match_DequeEntry de;

      i0 = (OOC_INT32)state;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l14;
      i1 = (OOC_INT32)deScanState;
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16004));
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
      i2 = i1!=(OOC_INT32)0;
      if (!i2) goto l14;
l5_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 16056))+4);
      i2 = i2==i0;
      if (!i2) goto l8;
      return;
l8:
      i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 16130));
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
      i2 = i1!=(OOC_INT32)0;
      if (i2) goto l5_loop;
l14:
      i1 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpDFA__Match_DequeEntry.baseTypes[0]);
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
      *(OOC_INT32*)(_check_pointer(i1, 16191)) = (OOC_INT32)0;
      *(OOC_INT32*)((_check_pointer(i1, 16214))+4) = i0;
      i0 = (OOC_INT32)first;
      i0 = i0==(OOC_INT32)0;
      if (i0) goto l17;
      i0 = (OOC_INT32)last;
      *(OOC_INT32*)(_check_pointer(i0, 16303)) = i1;
      goto l18;
l17:
      first = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
l18:
      last = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
      return;
      ;
    }

    
    void StringSearch_RegexpDFA__Match_Push(StringSearch_RegexpDFA__Node state) {
      register OOC_INT32 i0,i1,i2;
      StringSearch_RegexpDFA__Match_DequeEntry de;

      i0 = (OOC_INT32)state;
      i1 = *(OOC_INT32*)((_check_pointer(i0, 16447))+16);
      i2 = spos;
      i1 = i1!=i2;
      if (!i1) goto l6;
      *(OOC_INT32*)((_check_pointer(i0, 16602))+16) = i2;
      i1 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpDFA__Match_DequeEntry.baseTypes[0]);
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
      i2 = (OOC_INT32)first;
      *(OOC_INT32*)(_check_pointer(i1, 16661)) = i2;
      *(OOC_INT32*)((_check_pointer(i1, 16688))+4) = i0;
      i0 = i2==0;
      if (!i0) goto l5;
      last = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
l5:
      first = (StringSearch_RegexpDFA__Match_DequeEntry)i1;
l6:
      return;
      ;
    }

    
    void StringSearch_RegexpDFA__Match_PruneGroup(OOC_INT8 groupId) {
      register OOC_INT32 i0,i1,i2,i3,i4;
      StringSearch_RegexpDFA__Match_DequeEntry de;
      StringSearch_RegexpDFA__Match_DequeEntry prev;

      i0 = (OOC_INT32)first;
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
      prev = (StringSearch_RegexpDFA__Match_DequeEntry)(OOC_INT32)0;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16953))+4);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l19;
      i1 = groupId;
      i2=i0;i3=(OOC_INT32)0;
l3_loop:
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 16991))+4);
      i4 = *(OOC_INT8*)((_check_pointer(i4, 16998))+11);
      i4 = i4==i1;
      if (!i4) goto l14;
      i4 = i0==i2;
      if (i4) goto l9;
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17128));
      *(OOC_INT32*)(_check_pointer(i3, 17116)) = i4;
      
      goto l10;
l9:
      i2 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17078));
      first = (StringSearch_RegexpDFA__Match_DequeEntry)i2;
      
l10:
      i4 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17166));
      i4 = i4==(OOC_INT32)0;
      if (!i4) goto l14;
      last = (StringSearch_RegexpDFA__Match_DequeEntry)i3;
l14:
      prev = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
      i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17265));
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i3;
      i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i3, 16953))+4);
      i4 = i4!=(OOC_INT32)0;
      if (!i4) goto l19;
      {register OOC_INT32 h0=i0;i0=i3;i3=h0;}
      goto l3_loop;
l19:
      return;
      ;
    }

    
    void StringSearch_RegexpDFA__Match_UnmarkNode(StringSearch_RegexpDFA__Node n) {
      register OOC_INT32 i0,i1;

      i0 = (OOC_INT32)n;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 17375))+16);
      i1 = i1!=(-1);
      
l5:
      if (!i1) goto l19;
l7_loop:
      *(OOC_INT32*)((_check_pointer(i0, 17415))+16) = (-1);
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17457))+4);
      i1 = i1!=(OOC_INT32)0;
      if (!i1) goto l10;
      i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17488))+4);
      StringSearch_RegexpDFA__Match_UnmarkNode((StringSearch_RegexpDFA__Node)i1);
l10:
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17514));
      n = (StringSearch_RegexpDFA__Node)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l13;
      i1=0u;
      goto l15;
l13:
      i1 = *(OOC_INT32*)((_check_pointer(i0, 17375))+16);
      i1 = i1!=(-1);
      
l15:
      if (i1) goto l7_loop;
l19:
      return;
      ;
    }

    
    void StringSearch_RegexpDFA__Match_MarkCurrentStates(void) {
      register OOC_INT32 i0,i1,i2;
      StringSearch_RegexpDFA__Match_DequeEntry de;

      i0 = (OOC_INT32)first;
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l8;
      i1 = spos;
      
l3_loop:
      i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17679))+4);
      *(OOC_INT32*)((_check_pointer(i2, 17686))+16) = i1;
      i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 17724));
      de = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
      i2 = i0!=(OOC_INT32)0;
      if (i2) goto l3_loop;
l8:
      return;
      ;
    }


  first = (StringSearch_RegexpDFA__Match_DequeEntry)(OOC_INT32)0;
  last = (StringSearch_RegexpDFA__Match_DequeEntry)(OOC_INT32)0;
  deScanState = (StringSearch_RegexpDFA__Match_DequeEntry)(OOC_INT32)0;
  StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)(OOC_INT32)0);
  i0 = (OOC_INT32)last;
  deScanState = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
  i0 = (OOC_INT32)matcher;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 17907))+12);
  StringSearch_RegexpDFA__Match_UnmarkNode((StringSearch_RegexpDFA__Node)i0);
  endOfMatch = (-1);
  i0 = pos;
  spos = i0;
  i1 = (OOC_INT32)matcher;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 17988))+12);
  state = (StringSearch_RegexpDFA__Node)i1;
  *(OOC_INT32*)((_check_pointer(i1, 18013))+16) = i0;
  i0 = (OOC_INT32)first;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l73;
  i0=i1;
l3_loop:
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l67;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18347))+4);
  i1 = i1!=(OOC_INT32)0;
  if (!i1) goto l8;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 18386))+4);
  StringSearch_RegexpDFA__Match_Push((StringSearch_RegexpDFA__Node)i0);
l8:
  i0 = (OOC_INT32)state;
  i1 = *(OOC_INT8*)((_check_pointer(i0, 18424))+8);
  switch (i1) {
  case (-3):
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18477));
    StringSearch_RegexpDFA__Match_Push((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case (-2):
    i0 = *(OOC_INT8*)((_check_pointer(i0, 18533))+11);
    StringSearch_RegexpDFA__Match_PruneGroup(i0);
    i0 = (OOC_INT32)state;
    i1 = *(OOC_INT8*)((_check_pointer(i0, 18564))+11);
    i1 = i1==0;
    if (i1) goto l14;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18653));
    StringSearch_RegexpDFA__Match_Push((StringSearch_RegexpDFA__Node)i0);
    goto l68;
l14:
    i0 = spos;
    endOfMatch = i0;
    goto l68;
  case (-1):
    i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18719));
    _assert((i1!=(OOC_INT32)0), 127, 18706);
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18754));
    StringSearch_RegexpDFA__Match_Push((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 0:
    i1 = endpos;
    i2 = spos;
    i1 = i2!=i1;
    if (i1) goto l20;
    i1=0u;
    goto l22;
l20:
    i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT32, 18820)));
    i2 = *(OOC_UINT8*)((_check_pointer(i0, 18834))+9);
    i1 = i1==i2;
    
l22:
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 18867));
    StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 1:
    i1 = endpos;
    i2 = spos;
    i1 = i2!=i1;
    if (i1) goto l28;
    i1=0u;
    goto l30;
l28:
    i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT32, 18962)));
    i2 = *(OOC_UINT8*)((_check_pointer(i0, 18982))+9);
    i1 = (_cap(i1))==(_cap(i2));
    
l30:
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19016));
    StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 3:
    i1 = endpos;
    i2 = spos;
    i1 = i2!=i1;
    if (i1) goto l36;
    i1=0u;
    goto l38;
l36:
    i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT32, 19105)));
    i1 = i1!=10u;
    
l38:
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19151));
    StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 4:
    i1 = spos;
    i1 = i1==0;
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19252));
    StringSearch_RegexpDFA__Match_Push((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 5:
    i1 = endpos;
    i2 = spos;
    i1 = i2==i1;
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19360));
    StringSearch_RegexpDFA__Match_Push((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 6:
    i1 = spos;
    i2 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i1, string_0d, OOC_UINT32, 19427)));
    i = i2;
    i3 = endpos;
    i1 = i1!=i3;
    if (i1) goto l52;
    i1=0u;
    goto l54;
l52:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19510))+12);
    i1 = *(OOC_UINT32*)((_check_pointer(i1, 19515))+(_check_index((i2>>5), 8, OOC_UINT32, 19515))*4);
    i1 = _in((_mod(i2,32)),i1);
    
l54:
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19566));
    StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  case 7:
    i1 = spos;
    i2 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i1, string_0d, OOC_UINT32, 19641)));
    i = i2;
    i3 = endpos;
    i1 = i1!=i3;
    if (i1) goto l60;
    i1=0u;
    goto l62;
l60:
    i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19725))+12);
    i1 = *(OOC_UINT32*)((_check_pointer(i1, 19730))+(_check_index((i2>>5), 8, OOC_UINT32, 19730))*4);
    i1 = !(_in((_mod(i2,32)),i1));
    
l62:
    if (!i1) goto l68;
    i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19781));
    StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)i0);
    goto l68;
  default:
    _failed_case(i1, 18414);
    goto l68;
  }
l67:
  i0 = spos;
  spos = (i0+1);
  StringSearch_RegexpDFA__Match_MarkCurrentStates();
  StringSearch_RegexpDFA__Match_Put((StringSearch_RegexpDFA__Node)(OOC_INT32)0);
  i0 = (OOC_INT32)last;
  deScanState = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
l68:
  i0 = (OOC_INT32)first;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 19900))+4);
  state = (StringSearch_RegexpDFA__Node)i1;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 19929));
  first = (StringSearch_RegexpDFA__Match_DequeEntry)i0;
  i0 = i0!=(OOC_INT32)0;
  if (!i0) goto l73;
  i0=i1;
  goto l3_loop;
l73:
  i0 = endOfMatch;
  i1 = i0>=0;
  if (i1) goto l76;
  return (StringSearch_RegexpDFA__MatchObject)(OOC_INT32)0;
  goto l96;
l76:
  i1 = (OOC_INT32)s;
  i2 = endpos;
  i3 = (OOC_INT32)matcher;
  i1 = i1==(OOC_INT32)0;
  if (i1) goto l79;
  i1=0u;
  goto l81;
l79:
  i1 = *(OOC_UINT32*)((_check_pointer(i3, 20037))+4);
  i1 = _in(1,i1);
  
l81:
  if (!i1) goto l95;
  i1 = len;
  i1 = i1<0;
  if (!i1) goto l94;
  len = i2;
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i2, string_0d, OOC_UINT32, 20168)));
  i1 = i1!=0u;
  if (!i1) goto l94;
  i1=i2;
l88_loop:
  i1 = i1+1;
  len = i1;
  i4 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i1, string_0d, OOC_UINT32, 20168)));
  i4 = i4!=0u;
  if (i4) goto l88_loop;
l94:
  i1 = len;
  i1 = (OOC_INT32)Object__NewLatin1Region((void*)(OOC_INT32)string, string_0d, 0, i1);
  s = (Object__String8)i1;
l95:
  i1 = startpos;
  i4 = (OOC_INT32)s;
  i5 = pos;
  i0 = (OOC_INT32)StringSearch_RegexpDFA__NewMatchObject(i1, i2, (StringSearch_RegexpDFA__Matcher)i3, (Object__String8)i4, i5, i0);
  return (StringSearch_RegexpDFA__MatchObject)i0;
l96:
  _failed_function(15314); return 0;
  ;
}

StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__MatcherDesc_MatchChars(StringSearch_RegexpDFA__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l9;
  
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 20617)));
  i1 = i1==0u;
  if (!i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)matcher;
  i2 = pos;
  i0 = (OOC_INT32)StringSearch_RegexpDFA__Match((StringSearch_RegexpDFA__Matcher)i1, (void*)(OOC_INT32)string, string_0d, (-1), i2, i2, i0, (Object__String8)(OOC_INT32)0);
  return (StringSearch_RegexpDFA__MatchObject)i0;
  ;
}

StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__MatcherDesc_Match(StringSearch_RegexpDFA__Matcher matcher, Object__String8 string, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__CharsLatin1 chars;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l4;
  i0 = (OOC_INT32)string;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 20912));
  endpos = i0;
  
l4:
  i1 = (OOC_INT32)string;
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 20997)), 0);
  i4 = *(OOC_INT32*)(_check_pointer(i1, 21006));
  i5 = (OOC_INT32)matcher;
  i6 = pos;
  i0 = (OOC_INT32)StringSearch_RegexpDFA__Match((StringSearch_RegexpDFA__Matcher)i5, (void*)(_check_pointer(i2, 20997)), i3, i4, i6, i6, i0, (Object__String8)i1);
  return (StringSearch_RegexpDFA__MatchObject)i0;
  ;
}

static StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__Search(StringSearch_RegexpDFA__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 len, OOC_INT32 pos, OOC_INT32 endpos, Object__String8 s) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6,i7,i8;
  OOC_INT32 startpos;
  OOC_INT32 startPrefix;
  StringSearch_RegexpDFA__MatchObject m;

  i0 = pos;
  startpos = i0;
  i1 = (OOC_INT32)matcher;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21335))+16);
  i2 = i2!=(OOC_INT32)0;
  if (i2) goto l14;
  i2 = endpos;
  i3 = i0<=i2;
  if (!i3) goto l31;
  i3 = (OOC_INT32)s;
  i4 = len;
  i5=i0;
l5_loop:
  i6 = (OOC_INT32)StringSearch_RegexpDFA__Match((StringSearch_RegexpDFA__Matcher)i1, (void*)(OOC_INT32)string, string_0d, i4, i0, i5, i2, (Object__String8)i3);
  i7 = i6!=(OOC_INT32)0;
  if (!i7) goto l8;
  return (StringSearch_RegexpDFA__MatchObject)i6;
l8:
  i5 = i5+1;
  i6 = i5<=i2;
  if (i6) goto l5_loop;
  goto l31;
l14:
  i2 = endpos;
  i3 = i0<=i2;
  if (!i3) goto l31;
  i3 = (OOC_INT32)s;
  i4 = len;
  i5=i0;
l17_loop:
  i6 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 21449))+16);
  i6 = StringSearch_SubstringBM__SearchStart((StringSearch_SubstringBM__Matcher)i6, (void*)(OOC_INT32)string, string_0d, i5, i2);
  startPrefix = i6;
  i7 = i6>=0;
  if (i7) goto l20;
  return (StringSearch_RegexpDFA__MatchObject)(OOC_INT32)0;
  
  goto l25;
l20:
  i7 = (OOC_INT32)StringSearch_RegexpDFA__Match((StringSearch_RegexpDFA__Matcher)i1, (void*)(OOC_INT32)string, string_0d, i4, i0, i6, i2, (Object__String8)i3);
  m = (StringSearch_RegexpDFA__MatchObject)i7;
  i8 = i7!=(OOC_INT32)0;
  if (i8) goto l23;
  i5 = i6+1;
  pos = i5;
  
  goto l25;
l23:
  return (StringSearch_RegexpDFA__MatchObject)i7;
  
l25:
  i6 = i5<=i2;
  if (i6) goto l17_loop;
l31:
  return (StringSearch_RegexpDFA__MatchObject)(OOC_INT32)0;
  ;
}

StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__MatcherDesc_SearchChars(StringSearch_RegexpDFA__Matcher matcher, const OOC_CHAR8 string[], OOC_LEN string_0d, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l9;
  
l4_loop:
  i0 = i0+1;
  i1 = *(OOC_UINT8*)((OOC_INT32)string+(_check_index(i0, string_0d, OOC_UINT32, 22463)));
  i1 = i1==0u;
  if (!i1) goto l4_loop;
l9:
  i1 = (OOC_INT32)matcher;
  i2 = pos;
  i0 = (OOC_INT32)StringSearch_RegexpDFA__Search((StringSearch_RegexpDFA__Matcher)i1, (void*)(OOC_INT32)string, string_0d, (-1), i2, i0, (Object__String8)(OOC_INT32)0);
  return (StringSearch_RegexpDFA__MatchObject)i0;
  ;
}

StringSearch_RegexpDFA__MatchObject StringSearch_RegexpDFA__MatcherDesc_Search(StringSearch_RegexpDFA__Matcher matcher, Object__String8 string, OOC_INT32 pos, OOC_INT32 endpos) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  Object__CharsLatin1 chars;

  i0 = endpos;
  i1 = i0==(-1);
  if (!i1) goto l4;
  i0 = (OOC_INT32)string;
  i0 = *(OOC_INT32*)(_check_pointer(i0, 22756));
  endpos = i0;
  
l4:
  i1 = (OOC_INT32)string;
  i2 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i1);
  chars = (Object__CharsLatin1)i2;
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i2, 22842)), 0);
  i4 = *(OOC_INT32*)(_check_pointer(i1, 22851));
  i5 = (OOC_INT32)matcher;
  i6 = pos;
  i0 = (OOC_INT32)StringSearch_RegexpDFA__Search((StringSearch_RegexpDFA__Matcher)i5, (void*)(_check_pointer(i2, 22842)), i3, i4, i6, i0, (Object__String8)i1);
  return (StringSearch_RegexpDFA__MatchObject)i0;
  ;
}

void StringSearch_RegexpDFA__InitFactory(StringSearch_RegexpDFA__Factory f) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)f;
  StringSearch__InitFactory((StringSearch__Factory)i0);
  return;
  ;
}

static StringSearch_RegexpDFA__Factory StringSearch_RegexpDFA__NewFactory(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)RT0__NewObject(_td_StringSearch_RegexpDFA__Factory.baseTypes[0]);
  StringSearch_RegexpDFA__InitFactory((StringSearch_RegexpDFA__Factory)i0);
  return (StringSearch_RegexpDFA__Factory)i0;
  ;
}

StringSearch_RegexpDFA__Matcher StringSearch_RegexpDFA__FactoryDesc_Compile(StringSearch_RegexpDFA__Factory f, Object__String8 pattern, OOC_UINT32 flags) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)StringSearch_RegexpParser__NewBuilder();
  i1 = (OOC_INT32)pattern;
  i2 = flags;
  i0 = (OOC_INT32)StringSearch_RegexpParser__Parse((StringSearch_RegexpParser__Builder)i0, (Object__String8)i1, i2);
  i0 = (OOC_INT32)StringSearch_RegexpDFA__BuildDFA((StringSearch_RegexpParser__Group)i0);
  i3 = i0==(OOC_INT32)0;
  if (i3) goto l3;
  i0 = (OOC_INT32)StringSearch_RegexpDFA__NewMatcher((Object__String8)i1, i2, 0, (StringSearch_RegexpDFA__Node)i0);
  return (StringSearch_RegexpDFA__Matcher)i0;
  goto l4;
l3:
  return (StringSearch_RegexpDFA__Matcher)(OOC_INT32)0;
l4:
  _failed_function(27818); return 0;
  ;
}

void OOC_StringSearch_RegexpDFA_init(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)StringSearch_RegexpDFA__NewFactory();
  StringSearch_RegexpDFA__factory = (StringSearch_RegexpDFA__Factory)i0;
  return;
  ;
}

void OOC_StringSearch_RegexpDFA_destroy(void) {
}

/* --- */
