#include <Logger.d>
#include <__oo2c.h>
#include <setjmp.h>

void Logger__TargetDesc_INIT(Logger__Target lt, OOC_CHAR8 passOnReport, OOC_CHAR8 passOnDebug) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)lt;
  i1 = passOnReport;
  *(OOC_UINT8*)(_check_pointer(i0, 5334)) = i1;
  i1 = passOnDebug;
  *(OOC_UINT8*)((_check_pointer(i0, 5371))+1) = i1;
  return;
  ;
}

void Logger__TargetDesc_Write(Logger__Target lt, Object__String prefix, Object__String msg) {

  return;
  ;
}

void Logger__NullTargetDesc_INIT(Logger__NullTarget lt) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)lt;
  Logger__TargetDesc_INIT((Logger__Target)i0, 0u, 0u);
  return;
  ;
}

void Logger__NullTargetDesc_Write(Logger__NullTarget lt, Object__String prefix, Object__String msg) {

  return;
  ;
}

void Logger__ChannelTargetDesc_INIT(Logger__ChannelTarget lt, OOC_CHAR8 passOnReport, OOC_CHAR8 passOnDebug, IO__ByteChannel ch) {
  register OOC_INT32 i0,i1;

  i0 = passOnReport;
  i1 = (OOC_INT32)lt;
  Logger__TargetDesc_INIT((Logger__Target)i1, i0, i0);
  i0 = (OOC_INT32)ch;
  i0 = (OOC_INT32)IO_TextRider__ConnectWriter((IO__ByteChannel)i0);
  *(OOC_INT32*)((_check_pointer(i1, 5860))+4) = i0;
  return;
  ;
}

void Logger__ChannelTargetDesc_Write(Logger__ChannelTarget lt, Object__String prefix, Object__String msg) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  OOC_CHAR8 str[64];

  Logger_TimeStamp__LocalNow((void*)(OOC_INT32)str, 64, (OOC_CHAR8*)"%d %b %H:%M:%S ", 16);
  i0 = (OOC_INT32)lt;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6067))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6067))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6074)))), IO_TextRider__WriterDesc_WriteString)),IO_TextRider__WriterDesc_WriteString)((IO_TextRider__Writer)i2, (void*)(OOC_INT32)str, 64);
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6164))+4);
  i2 = (OOC_INT32)prefix;
  i3 = (OOC_INT32)msg;
  i4 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6164))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6171)))), IO_TextRider__WriterDesc_WriteObject)),IO_TextRider__WriterDesc_WriteObject)((IO_TextRider__Writer)i4, (Object__Object)((OOC_INT32)Object__Concat2((void*)i2,(void*)i3)));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6203))+4);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6203))+4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 6210)))), IO_TextRider__WriterDesc_WriteLn)),IO_TextRider__WriterDesc_WriteLn)((IO_TextRider__Writer)i0);
  return;
  ;
}

void Logger__HandleDesc_INIT(Logger__Handle lh, Logger__Target reportTarget, Logger__Target debugTarget, Object__String prefix) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)lh;
  i1 = (OOC_INT32)reportTarget;
  *(OOC_INT32*)(_check_pointer(i0, 6440)) = i1;
  i2 = (OOC_INT32)Logger__nullTarget;
  *(OOC_UINT8*)((_check_pointer(i0, 6477))+16) = (i1!=i2);
  i1 = (OOC_INT32)debugTarget;
  *(OOC_INT32*)((_check_pointer(i0, 6529))+4) = i1;
  *(OOC_UINT8*)((_check_pointer(i0, 6564))+17) = (i1!=i2);
  i1 = (OOC_INT32)prefix;
  i2 = i1==0;
  if (i2) goto l3;
  *(OOC_INT32*)((_check_pointer(i0, 6675))+8) = i1;
  goto l4;
l3:
  *(OOC_INT32*)((_check_pointer(i0, 6643))+8) = ((OOC_INT32)_c0);
l4:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6735))+8);
  *(OOC_INT32*)((_check_pointer(i0, 6709))+12) = ((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c1)));
  return;
  ;
}

void Logger__HandleDesc_EnableReport(Logger__Handle lh, OOC_CHAR8 enable) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)lh;
  i1 = enable;
  *(OOC_UINT8*)((_check_pointer(i0, 6837))+16) = i1;
  return;
  ;
}

void Logger__HandleDesc_EnableDebug(Logger__Handle lh, OOC_CHAR8 enable) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)lh;
  i1 = enable;
  *(OOC_UINT8*)((_check_pointer(i0, 6953))+17) = i1;
  return;
  ;
}

Logger__Handle Logger__HandleDesc_CloneTargets(Logger__Handle lh, Object__String newPrefix) {
  register OOC_INT32 i0,i1,i2,i3,i4;
  Logger__Handle copy;

  i0 = (OOC_INT32)RT0__NewObject(_td_Logger__Handle.baseTypes[0]);
  i1 = (OOC_INT32)lh;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 7139))+4);
  i3 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i1, 7122));
  i4 = (OOC_INT32)newPrefix;
  Logger__HandleDesc_INIT((Logger__Handle)i0, (Logger__Target)i3, (Logger__Target)i2, (Object__String)i4);
  copy = (Logger__Handle)i0;
  i2 = *(OOC_UINT8*)((_check_pointer(i1, 7192))+16);
  *(OOC_UINT8*)((_check_pointer(i0, 7173))+16) = i2;
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 7233))+17);
  *(OOC_UINT8*)((_check_pointer(i0, 7215))+17) = i1;
  return (Logger__Handle)i0;
  ;
}

void Logger__HandleDesc_Debug(Logger__Handle lh, Object__String msg) {
  register OOC_INT32 i0,i1,i2,i3;

  i0 = (OOC_INT32)lh;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 7348))+17);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7365))+4);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 7377))+1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7403))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7424))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7403))+4);
  i3 = (OOC_INT32)msg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 7415)))), Logger__TargetDesc_Write)),Logger__TargetDesc_Write)((Logger__Target)i0, (Object__String)i2, (Object__String)i3);
l7:
  return;
  ;
}

void Logger__HandleDesc_DebugObject(Logger__Handle lh, Object__String msg, Object__Object x) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)x;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7630)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  
  goto l4;
l3:
  i0 = (OOC_INT32)_c2;
  
l4:
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Debug((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c3))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_DebugInt(Logger__Handle lh, Object__String msg, OOC_INT32 x) {
  register OOC_INT32 i0,i1,i2;

  i0 = x;
  i0 = (OOC_INT32)Object_Boxed__IntToString(i0);
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Debug((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c4))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_DebugBool(Logger__Handle lh, Object__String msg, OOC_CHAR8 x) {
  register OOC_INT32 i0,i1,i2;

  i0 = x;
  i0 = (OOC_INT32)Object_Boxed__BooleanToString(i0);
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Debug((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c5))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_DebugLongReal(Logger__Handle lh, Object__String msg, OOC_REAL64 x) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;

  d0 = x;
  i0 = (OOC_INT32)Object_Boxed__LongRealToString(d0);
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Debug((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c6))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_Report(Logger__Handle lh, Object__String msg) {
  register OOC_INT32 i0,i1,i2,i3,i4;

  i0 = (OOC_INT32)lh;
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8238))+17);
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8255))+4);
  i1 = *(OOC_UINT8*)((_check_pointer(i1, 8267))+1);
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8293))+4);
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8314))+12);
  i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8293))+4);
  i4 = (OOC_INT32)msg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8305)))), Logger__TargetDesc_Write)),Logger__TargetDesc_Write)((Logger__Target)i3, (Object__String)i2, (Object__String)i4);
l7:
  i1 = *(OOC_UINT8*)((_check_pointer(i0, 8360))+16);
  if (i1) goto l10;
  i1=0u;
  goto l12;
l10:
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8378));
  i1 = *(OOC_UINT8*)(_check_pointer(i1, 8391));
  
l12:
  if (!i1) goto l14;
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8418));
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8440))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 8418));
  i3 = (OOC_INT32)msg;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8431)))), Logger__TargetDesc_Write)),Logger__TargetDesc_Write)((Logger__Target)i0, (Object__String)i2, (Object__String)i3);
l14:
  return;
  ;
}

void Logger__HandleDesc_ReportObject(Logger__Handle lh, Object__String msg, Object__Object x) {
  register OOC_INT32 i0,i1,i2;

  i0 = (OOC_INT32)x;
  i1 = i0==(OOC_INT32)0;
  if (i1) goto l3;
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8646)))), Object__ObjectDesc_ToString)),Object__ObjectDesc_ToString)((Object__Object)i0);
  
  goto l4;
l3:
  i0 = (OOC_INT32)_c7;
  
l4:
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Report((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c8))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_ReportInt(Logger__Handle lh, Object__String msg, OOC_INT32 x) {
  register OOC_INT32 i0,i1,i2;

  i0 = x;
  i0 = (OOC_INT32)Object_Boxed__IntToString(i0);
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Report((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c9))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_ReportBool(Logger__Handle lh, Object__String msg, OOC_CHAR8 x) {
  register OOC_INT32 i0,i1,i2;

  i0 = x;
  i0 = (OOC_INT32)Object_Boxed__BooleanToString(i0);
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Report((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c10))),(void*)i0)));
  return;
  ;
}

void Logger__HandleDesc_ReportLongReal(Logger__Handle lh, Object__String msg, OOC_REAL64 x) {
  register OOC_INT32 i0,i1,i2;
  register OOC_REAL64 d0;

  d0 = x;
  i0 = (OOC_INT32)Object_Boxed__LongRealToString(d0);
  i1 = (OOC_INT32)msg;
  i2 = (OOC_INT32)lh;
  Logger__HandleDesc_Report((Logger__Handle)i2, (Object__String)((OOC_INT32)Object__Concat2((void*)((OOC_INT32)Object__Concat2((void*)i1,(void*)((OOC_INT32)_c11))),(void*)i0)));
  return;
  ;
}

void OOC_Logger_init(void) {
  register OOC_INT32 i0,i1;
  _c0 = Object__NewLatin1Region((OOC_CHAR8*)"", 1, 0, 0);
  _c1 = Object__NewLatin1Region((OOC_CHAR8*)"REPORT: ", 9, 0, 8);
  _c2 = Object__NewLatin1Region((OOC_CHAR8*)"<NIL>", 6, 0, 5);
  _c3 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c4 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c5 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c6 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c7 = Object__NewLatin1Region((OOC_CHAR8*)"<NIL>", 6, 0, 5);
  _c8 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c9 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c10 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);
  _c11 = Object__NewLatin1Region((OOC_CHAR8*)": ", 3, 0, 2);

  i0 = (OOC_INT32)RT0__NewObject(_td_Logger__NullTarget.baseTypes[0]);
  Logger__NullTargetDesc_INIT((Logger__NullTarget)i0);
  Logger__nullTarget = (Logger__Target)i0;
  i1 = (OOC_INT32)RT0__NewObject(_td_Logger__Handle.baseTypes[0]);
  Logger__HandleDesc_INIT((Logger__Handle)i1, (Logger__Target)i0, (Logger__Target)i0, (Object__String)(OOC_INT32)0);
  Logger__nullHandle = (Logger__Handle)i1;
  i0 = (OOC_INT32)IO_StdChannels__stderr;
  i1 = (OOC_INT32)RT0__NewObject(_td_Logger__ChannelTarget.baseTypes[0]);
  Logger__ChannelTargetDesc_INIT((Logger__ChannelTarget)i1, 1u, 1u, (IO__ByteChannel)i0);
  Logger__stderrTarget = (Logger__Target)i1;
  i0 = (OOC_INT32)IO_StdChannels__stdout;
  i1 = (OOC_INT32)RT0__NewObject(_td_Logger__ChannelTarget.baseTypes[0]);
  Logger__ChannelTargetDesc_INIT((Logger__ChannelTarget)i1, 1u, 1u, (IO__ByteChannel)i0);
  Logger__stdoutTarget = (Logger__Target)i1;
  return;
  ;
}

void OOC_Logger_destroy(void) {
}

/* --- */
