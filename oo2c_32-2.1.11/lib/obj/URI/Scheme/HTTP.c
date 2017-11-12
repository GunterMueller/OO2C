#include <URI/Scheme/HTTP.d>
#include <__oo2c.h>
#include <setjmp.h>

void URI_Scheme_HTTP__Init(URI_Scheme_HTTP__URI http, Object__String schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)query;
  i1 = (OOC_INT32)authority;
  i2 = (OOC_INT32)schemeId;
  i3 = (OOC_INT32)http;
  URI_Scheme_Hierarchical__Init((URI_Scheme_Hierarchical__Generic)i3, (Object__String)i2, (URI__Authority)i1, (URI__Query)i0);
  return;
  ;
}

URI_Scheme_HTTP__URI URI_Scheme_HTTP__New(Object__String schemeId, URI__Authority authority, URI__Query query) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_HTTP__URI.baseTypes[0]);
  i1 = (OOC_INT32)query;
  i2 = (OOC_INT32)authority;
  i3 = (OOC_INT32)schemeId;
  URI_Scheme_HTTP__Init((URI_Scheme_HTTP__URI)i0, (Object__String)i3, (URI__Authority)i2, (URI__Query)i1);
  return (URI_Scheme_HTTP__URI)i0;
  ;
}

URI__Authority URI_Scheme_HTTP__URIDesc_NewAuthority(URI_Scheme_HTTP__URI http) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Authority_ServerBased__New((Object__String)(OOC_INT32)0, (Object__String)((OOC_INT32)_c0), (-1), 80);
  return (URI__Authority)i0;
  ;
}

URI__Query URI_Scheme_HTTP__URIDesc_NewQuery(URI_Scheme_HTTP__URI http) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Query_Unparsed__New((Object__String)((OOC_INT32)_c1));
  return (URI__Query)i0;
  ;
}

URI_Scheme_HTTP__URI URI_Scheme_HTTP__URIDesc_Clone(URI_Scheme_HTTP__URI http) {
  register OOC_INT32 i0,i1;
  URI_Scheme_HTTP__URI copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_URI_Scheme_HTTP__URI.baseTypes[0]);
  copy = (URI_Scheme_HTTP__URI)i0;
  i1 = (OOC_INT32)http;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 2101)))), URI_Scheme_Hierarchical__GenericDesc_Copy)),URI_Scheme_Hierarchical__GenericDesc_Copy)((URI_Scheme_Hierarchical__Generic)i1, (URI__URI)i0);
  return (URI_Scheme_HTTP__URI)i0;
  ;
}

IO_Buffer__Channel URI_Scheme_HTTP__URIDesc_GetChannel(URI_Scheme_HTTP__URI uri, OOC_INT8 mode) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  IO_SocketChannel__Channel sock;
  URI_Authority_ServerBased__Authority auth;
  IO_Address__Socket addr;
  OOC_CHAR8 connected;
  ADT_StringBuffer__StringBuffer req;
  OOC_CHAR8 number[32];
  ADT_StringBuffer__CharsLatin1 chars;
  OOC_INT32 done;
  IO_Buffer__Channel ch;
  Object__String8 str8;
  Object__CharsLatin1 resp;
  OOC_INT32 i;
  OOC_INT32 j;
  auto OOC_CHAR8 URI_Scheme_HTTP__URIDesc_GetChannel_LookingAt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d);
  auto OOC_CHAR8 URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit(void);
    
    OOC_CHAR8 URI_Scheme_HTTP__URIDesc_GetChannel_LookingAt(const OOC_CHAR8 str__ref[], OOC_LEN str_0d) {
      register OOC_INT32 i0,i1,i2,i3,i4,i5;
      OOC_ALLOCATE_VPAR(str,OOC_CHAR8 ,str_0d)
      OOC_INT32 j;

      OOC_INITIALIZE_VPAR(str__ref,str,OOC_CHAR8 ,str_0d)
      i0 = i;
      i1 = i0>=0;
      if (i1) goto l3;
      return 0u;
      goto l29;
l3:
      j = 0;
      i1 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2862)));
      i1 = i1!=0u;
      if (i1) goto l6;
      i1=0u;
      goto l8;
l6:
      i1 = (OOC_INT32)resp;
      i1 = _check_pointer(i1, 2879);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 2879)));
      i1 = i1!=0u;
      
l8:
      if (i1) goto l10;
      i1=0u;
      goto l12;
l10:
      i1 = (OOC_INT32)resp;
      i1 = _check_pointer(i1, 2905);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, str_0d, OOC_UINT32, 2895)));
      i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 2905)));
      i1 = i3==i1;
      
l12:
      if (i1) goto l14;
      i1=0;
      goto l28;
l14:
      i1 = (OOC_INT32)resp;
      i2=i0;i0=0;
l15_loop:
      i0 = i0+1;
      j = i0;
      i2 = i2+1;
      i = i2;
      i3 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2862)));
      i3 = i3!=0u;
      if (i3) goto l18;
      i3=0u;
      goto l20;
l18:
      i3 = _check_pointer(i1, 2879);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 2879)));
      i3 = i3!=0u;
      
l20:
      if (i3) goto l22;
      i3=0u;
      goto l24;
l22:
      i3 = _check_pointer(i1, 2905);
      i4 = OOC_ARRAY_LENGTH(i3, 0);
      i5 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i0, str_0d, OOC_UINT32, 2895)));
      i3 = *(OOC_UINT8*)(i3+(_check_index(i2, i4, OOC_UINT32, 2905)));
      i3 = i5==i3;
      
l24:
      if (i3) goto l15_loop;
l27:
      i1=i0;i0=i2;
l28:
      i = (i0-i1);
      i0 = *(OOC_UINT8*)((OOC_INT32)str+(_check_index(i1, str_0d, OOC_UINT32, 2992)));
      return (i0==0u);
l29:
      _failed_function(2728); return 0;
      ;
    }

    
    OOC_CHAR8 URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit(void) {
      register OOC_INT32 i0,i1,i2;

      i0 = i;
      i1 = i0>=0;
      if (i1) goto l3;
      i1=0u;
      goto l5;
l3:
      i1 = (OOC_INT32)resp;
      i1 = _check_pointer(i1, 3145);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 3145)));
      i1 = (OOC_UINT8)48u<=(OOC_UINT8)i1;
      
l5:
      if (i1) goto l7;
      i0=0u;
      goto l8;
l7:
      i1 = (OOC_INT32)resp;
      i1 = _check_pointer(i1, 3157);
      i2 = OOC_ARRAY_LENGTH(i1, 0);
      i0 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 3157)));
      i0 = (OOC_UINT8)i0<=(OOC_UINT8)57u;
      
l8:
      return i0;
      ;
    }


  i0 = (OOC_INT32)IO_SocketChannel__Open();
  sock = (IO_SocketChannel__Channel)i0;
  i1 = (OOC_INT32)uri;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3247))+4);
  i2 = i2==(OOC_INT32)0;
  if (i2) goto l3;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3353))+4);
  i2 = _type_guard(i2, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3377)))), &_td_URI_Authority_ServerBased__AuthorityDesc, 3377);
  auth = (URI_Authority_ServerBased__Authority)i2;
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3458))+4);
  i4 = *(OOC_INT32*)((_check_pointer(i2, 3485))+8);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 3458))+4);
  i2 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i3, 3463)))), Object__StringDesc_ToString8)),Object__StringDesc_ToString8)((Object__String)i2, 63u);
  i2 = (OOC_INT32)IO_Address__GetByName((Object__String8)i2);
  i2 = (OOC_INT32)IO_Address__GetSocketInet((IO_Address__Inet)i2, i4);
  addr = (IO_Address__Socket)i2;
  goto l4;
l3:
  i2 = (OOC_INT32)RT0__NewObject(_td_IO__Error.baseTypes[0]);
  IO__ErrorDesc_INIT((IO__Error)i2, (Object__String)((OOC_INT32)_c2));
  Exception__Raise((void*)i2);
l4:
  i2 = (OOC_INT32)addr;
  i2 = IO_SocketChannel__ChannelDesc_Connect((IO_SocketChannel__Channel)i0, (IO_Address__Socket)i2);
  connected = i2;
  _assert(i2, 127, 3548);
  i2 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c3));
  req = (ADT_StringBuffer__StringBuffer)i2;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3645)))), URI_Scheme_Hierarchical__GenericDesc_AppendPath)),URI_Scheme_Hierarchical__GenericDesc_AppendPath)((URI_Scheme_Hierarchical__Generic)i1, (ADT_StringBuffer__StringBuffer)i2);
  i3 = *(OOC_INT32*)((_check_pointer(i2, 3674))+4);
  i3 = i3==4;
  if (!i3) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3745)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)((OOC_INT32)_c4));
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3775)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)((OOC_INT32)_c5));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3817))+4);
  i1 = _type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3840)))), &_td_URI_Authority_ServerBased__AuthorityDesc, 3840);
  auth = (URI_Authority_ServerBased__Authority)i1;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3859)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)((OOC_INT32)_c6));
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 3897))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3885)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)i3);
  i3 = *(OOC_INT32*)((_check_pointer(i1, 3929))+12);
  i4 = *(OOC_INT32*)((_check_pointer(i1, 3917))+8);
  i3 = i4!=i3;
  if (!i3) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 3957)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)((OOC_INT32)_c7));
  i1 = *(OOC_INT32*)((_check_pointer(i1, 3997))+8);
  IntStr__IntToStr(i1, (void*)(OOC_INT32)number, 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4022)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i2, (void*)(OOC_INT32)number, 32);
l10:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4061)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i2, (Object__Object)((OOC_INT32)_c8));
  i1 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i2, 4141)))), ADT_StringBuffer__StringBufferDesc_CharsLatin1)),ADT_StringBuffer__StringBufferDesc_CharsLatin1)((ADT_StringBuffer__StringBuffer)i2);
  chars = (ADT_StringBuffer__CharsLatin1)i1;
  i3 = *(OOC_INT32*)((_check_pointer(i2, 4194))+4);
  i1 = IO_SocketChannel__ChannelDesc_Write((IO_SocketChannel__Channel)i0, (void*)(_check_pointer(i1, 4185)), (-1), 0, i3);
  done = i1;
  i2 = *(OOC_INT32*)((_check_pointer(i2, 4225))+4);
  _assert((i1==i2), 127, 4208);
  i0 = (OOC_INT32)IO_Buffer__Open((IO__ByteChannel)i0);
  ch = (IO_Buffer__Channel)i0;
  i0 = (OOC_INT32)IO_Buffer__ChannelDesc_ReadLineLF((IO_Buffer__Channel)i0);
  str8 = (Object__String8)i0;
  i1 = i0!=(OOC_INT32)0;
  if (!i1) goto l58;
  i0 = (OOC_INT32)Object__String8Desc_CharsLatin1((Object__String8)i0);
  resp = (Object__CharsLatin1)i0;
  i = 0;
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_LookingAt((OOC_CHAR8*)"HTTP/", 6);
  if (!i0) goto l58;
  i = 5;
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit();
  if (i0) goto l17;
  i = (-1);
  goto l23;
l17:
  i0=5;
l18_loop:
  i0 = i0+1;
  i = i0;
  i1 = URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit();
  i1 = !i1;
  if (!i1) goto l18_loop;
l23:
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_LookingAt((OOC_CHAR8*)".", 2);
  if (!i0) goto l26;
  i0 = i;
  i = (i0+1);
l26:
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit();
  if (i0) goto l29_loop;
  i = (-1);
  goto l34;
l29_loop:
  i0 = i;
  i = (i0+1);
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit();
  i0 = !i0;
  if (!i0) goto l29_loop;
l34:
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_LookingAt((OOC_CHAR8*)" ", 2);
  if (!i0) goto l37;
  i0 = i;
  i = (i0+1);
l37:
  j = 1;
  i0=1;
l38_loop:
  i1 = URI_Scheme_HTTP__URIDesc_GetChannel_IsDigit();
  if (i1) goto l41;
  i = (-1);
  
  goto l42;
l41:
  i1 = i;
  i = (i1+1);
  
l42:
  i0 = i0+1;
  j = i0;
  i1 = i0<=3;
  if (i1) goto l38_loop;
l46:
  i0 = URI_Scheme_HTTP__URIDesc_GetChannel_LookingAt((OOC_CHAR8*)" ", 2);
  if (!i0) goto l49;
  i0 = i;
  i = (i0+1);
l49:
  i0 = i;
  i1 = i0==(-1);
  if (i1) goto l55;
  i1 = (OOC_INT32)resp;
  i1 = _check_pointer(i1, 5157);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i0 = i0-4;
  i1 = *(OOC_UINT8*)(i1+(_check_index(i0, i2, OOC_UINT32, 5157)));
  i1 = i1!=50u;
  if (!i1) goto l58;
  i1 = (OOC_INT32)RT0__NewObject(_td_IO__ErrorResponse.baseTypes[0]);
  i2 = (OOC_INT32)str8;
  i3 = *(OOC_INT32*)(_check_pointer(i2, 5309));
  i0 = (OOC_INT32)Object__String8Desc_Substring((Object__String8)i2, i0, i3);
  IO__ErrorDesc_INIT((IO__Error)i1, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)_c9),(void*)i0)));
  Exception__Raise((void*)i1);
  goto l58;
l55:
  i0 = (OOC_INT32)RT0__NewObject(_td_IO__FormatError.baseTypes[0]);
  IO__ErrorDesc_INIT((IO__Error)i0, (Object__String)((OOC_INT32)_c10));
  Exception__Raise((void*)i0);
l58:
  i0 = (OOC_INT32)str8;
  i1 = (OOC_INT32)ch;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l61;
  i0=0u;
  goto l63;
l61:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 5463));
  i0 = i0>2;
  
l63:
  if (!i0) goto l73;
l64_loop:
  i0 = (OOC_INT32)IO_Buffer__ChannelDesc_ReadLineLF((IO_Buffer__Channel)i1);
  str8 = (Object__String8)i0;
  i2 = i0!=(OOC_INT32)0;
  if (i2) goto l67;
  i0=0u;
  goto l69;
l67:
  i0 = *(OOC_INT32*)(_check_pointer(i0, 5463));
  i0 = i0>2;
  
l69:
  if (i0) goto l64_loop;
l73:
  return (IO_Buffer__Channel)i1;
  ;
}

URI_Scheme_HTTP__URI URI_Scheme_HTTP__NewPrototype(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)URI_Scheme_HTTP__New((Object__String)((OOC_INT32)_c11), (URI__Authority)(OOC_INT32)0, (URI__Query)(OOC_INT32)0);
  return (URI_Scheme_HTTP__URI)i0;
  ;
}

void OOC_URI_Scheme_HTTP_init(void) {
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"No server name specified", 25, 0, 24);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)"GET ", 5, 0, 4);
  _c4 = Object__NewLatin1Char(47u);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)" HTTP/1.0\015\012", 12, 0, 11);
  _c6 = Object__NewLatin1Region((OOC_CHAR8*)"Host: ", 7, 0, 6);
  _c7 = Object__NewLatin1Char(58u);
  _c8 = Object__NewLatin1Region((OOC_CHAR8*)"\015\012\015\012", 5, 0, 4);
  _c9 = Object__NewLatin1Region((OOC_CHAR8*)"HTTP request failed: ", 22, 0, 21);
  _c10 = Object__NewLatin1Region((OOC_CHAR8*)"Malformed status line in response", 34, 0, 33);
  _c11 = Object__NewLatin1Region((OOC_CHAR8*)"http", 5, 0, 4);

  return;
  ;
}

void OOC_URI_Scheme_HTTP_destroy(void) {
}

/* --- */
