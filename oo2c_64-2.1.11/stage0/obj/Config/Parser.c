#include <Config/Parser.d>
#include <__oo2c.h>
#include <setjmp.h>

static void Config_Parser__InitBuilder(Config_Parser__Builder b) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)b;
  *(OOC_INT64*)(_check_pointer(i0, 1584)) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 1601))+24) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 1622))+16) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 1647))+32) = 0;
  *(OOC_INT64*)((_check_pointer(i0, 1674))+72) = 0;
  return;
  ;
}

static Config_Parser__Builder Config_Parser__NewBuilder(void) {
  register OOC_INT64 i0;

  i0 = (OOC_INT64)RT0__NewObject(_td_Config_Parser__Builder.baseTypes[0]);
  Config_Parser__InitBuilder((Config_Parser__Builder)i0);
  return (Config_Parser__Builder)i0;
  ;
}

static void Config_Parser__InitNode(Config_Parser__Node node, Config_Parser__Element parent, XML_Locator__Locator l, struct XML_Locator__Position *pos, RT0__Struct pos__tag) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)node;
  i1 = (OOC_INT64)parent;
  *(OOC_INT64*)((_check_pointer(i0, 1980))+40) = i1;
  *(OOC_INT64*)(_check_pointer(i0, 2008)) = 0;
  i1 = (OOC_INT64)l;
  i2 = i1==0;
  if (i2) goto l3;
  _copy_block((_check_pointer(i1, 2101)),((_check_pointer(i0, 2091))+8),32);
  goto l4;
l3:
  _copy_block((OOC_INT64)pos,((_check_pointer(i0, 2059))+8),32);
l4:
  return;
  ;
}

static void Config_Parser__InitElement(Config_Parser__Element e, Config_Parser__Element parent, struct XML_Locator__Position *pos, RT0__Struct pos__tag, XML_UnicodeBuffer__CharArray name, XML_Builder__AttributeList attrList) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)parent;
  i1 = (OOC_INT64)e;
  Config_Parser__InitNode((Config_Parser__Node)i1, (Config_Parser__Element)i0, (XML_Locator__Locator)(OOC_INT64)0, (void*)(OOC_INT64)pos, (RT0__Struct)((OOC_INT64)pos__tag));
  i0 = (OOC_INT64)name;
  *(OOC_INT64*)((_check_pointer(i1, 2356))+48) = i0;
  i0 = (OOC_INT64)attrList;
  *(OOC_INT64*)((_check_pointer(i1, 2377))+56) = i0;
  *(OOC_INT64*)((_check_pointer(i1, 2406))+64) = (OOC_INT64)0;
  *(OOC_INT64*)((_check_pointer(i1, 2429))+72) = (OOC_INT64)0;
  return;
  ;
}

static Config_Parser__Element Config_Parser__NewElement(Config_Parser__Element parent, struct XML_Locator__Position *pos, RT0__Struct pos__tag, XML_UnicodeBuffer__CharArray name, XML_Builder__AttributeList attrList) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)RT0__NewObject(_td_Config_Parser__Element.baseTypes[0]);
  i1 = (OOC_INT64)attrList;
  i2 = (OOC_INT64)name;
  i3 = (OOC_INT64)parent;
  Config_Parser__InitElement((Config_Parser__Element)i0, (Config_Parser__Element)i3, (void*)(OOC_INT64)pos, (RT0__Struct)((OOC_INT64)pos__tag), (XML_UnicodeBuffer__CharArray)i2, (XML_Builder__AttributeList)i1);
  return (Config_Parser__Element)i0;
  ;
}

static void Config_Parser__InitCharData(Config_Parser__CharData charData, Config_Parser__Element parent, XML_Locator__Locator l, XML_UnicodeBuffer__CharArray str) {
  register OOC_INT64 i0,i1,i2;
  struct XML_Locator__Position pos;

  i0 = (OOC_INT64)l;
  i1 = (OOC_INT64)parent;
  i2 = (OOC_INT64)charData;
  Config_Parser__InitNode((Config_Parser__Node)i2, (Config_Parser__Element)i1, (XML_Locator__Locator)i0, (void*)(OOC_INT64)&pos, (RT0__Struct)((OOC_INT64)&_td_XML_Locator__Position));
  i0 = (OOC_INT64)str;
  *(OOC_INT64*)((_check_pointer(i2, 3024))+48) = i0;
  return;
  ;
}

static Config_Parser__CharData Config_Parser__NewCharData(Config_Parser__Element parent, XML_Locator__Locator l, XML_UnicodeBuffer__CharArray str) {
  register OOC_INT64 i0,i1,i2,i3;

  i0 = (OOC_INT64)RT0__NewObject(_td_Config_Parser__CharData.baseTypes[0]);
  i1 = (OOC_INT64)str;
  i2 = (OOC_INT64)l;
  i3 = (OOC_INT64)parent;
  Config_Parser__InitCharData((Config_Parser__CharData)i0, (Config_Parser__Element)i3, (XML_Locator__Locator)i2, (XML_UnicodeBuffer__CharArray)i1);
  return (Config_Parser__CharData)i0;
  ;
}

void Config_Parser__BuilderDesc_SetLocator(Config_Parser__Builder b, XML_Locator__Locator l) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)l;
  *(OOC_INT64*)(_check_pointer(i0, 3386)) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_SetErrorListener(Config_Parser__Builder b, XML_Locator__ErrorListener errorListener) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)errorListener;
  *(OOC_INT64*)((_check_pointer(i0, 3508))+8) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_StartElement(Config_Parser__Builder b, XML_DTD__NamespaceDeclaration namespaceURI, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)localName;
  *(OOC_INT64*)((_check_pointer(i0, 3720))+32) = i1;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 3767));
  _copy_block((_check_pointer(i1, 3770)),((_check_pointer(i0, 3753))+40),32);
  i1 = (OOC_INT64)XML_Builder__NewAttributeList();
  *(OOC_INT64*)((_check_pointer(i0, 3778))+72) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_Attribute(Config_Parser__Builder b, XML_DTD__NamespaceDeclaration namespaceURI, XML_UnicodeBuffer__CharArray localName, XML_DTD__AttrDecl attrDecl, XML_DTD__AttValue value, OOC_CHAR8 specified) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 4306));
  i2 = (OOC_INT64)namespaceURI;
  i3 = (OOC_INT64)localName;
  i4 = (OOC_INT64)attrDecl;
  i5 = (OOC_INT64)value;
  i6 = specified;
  i1 = (OOC_INT64)XML_Builder__NewAttribute((XML_DTD__NamespaceDeclaration)i2, (XML_UnicodeBuffer__CharArray)i3, (XML_DTD__AttrDecl)i4, (XML_DTD__AttValue)i5, i6, (XML_Locator__Locator)i1);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4165))+72);
  XML_Builder__AttributeListDesc_Append((XML_Builder__AttributeList)i0, (XML_Builder__Attribute)i1);
  return;
  ;
}

void Config_Parser__BuilderDesc_AttributesDone(Config_Parser__Builder b) {
  register OOC_INT64 i0,i1,i2,i3;
  Config_Parser__Element element;

  i0 = (OOC_INT64)b;
  i1 = _check_pointer(i0, 4444);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4499))+72);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4456))+32);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4434))+24);
  i1 = (OOC_INT64)Config_Parser__NewElement((Config_Parser__Element)i3, (void*)((_check_pointer(i0, 4444))+40), (RT0__Struct)((OOC_INT64)&_td_XML_Locator__Position), (XML_UnicodeBuffer__CharArray)i2, (XML_Builder__AttributeList)i1);
  element = (Config_Parser__Element)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4525))+24);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l7;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4661))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 4668))+64);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l5;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4747))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 4754))+72);
  *(OOC_INT64*)(_check_pointer(i2, 4767)) = i1;
  goto l6;
l5:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4699))+24);
  *(OOC_INT64*)((_check_pointer(i2, 4706))+64) = i1;
l6:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 4807))+24);
  *(OOC_INT64*)((_check_pointer(i2, 4814))+72) = i1;
  goto l8;
l7:
  *(OOC_INT64*)((_check_pointer(i0, 4552))+16) = i1;
  *(OOC_INT64*)((_check_pointer(i0, 4578))+24) = i1;
l8:
  *(OOC_INT64*)((_check_pointer(i0, 4853))+24) = i1;
  return;
  ;
}

void Config_Parser__BuilderDesc_EndElement(Config_Parser__Builder b, XML_DTD__NamespaceDeclaration namespaceURI, XML_UnicodeBuffer__CharArray localName) {
  register OOC_INT64 i0,i1,i2;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5050))+24);
  i1 = i1!=(OOC_INT64)0;
  if (i1) goto l3;
  i1=0u;
  goto l5;
l3:
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5069))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5076))+48);
  i2 = (OOC_INT64)localName;
  i1 = (
  _cmp16((const void*)(_check_pointer(i1, 5082)),(const void*)(_check_pointer(i2, 5095))))==0;
  
l5:
  if (!i1) goto l7;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5122))+24);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 5129))+40);
  *(OOC_INT64*)((_check_pointer(i0, 5110))+24) = i1;
l7:
  return;
  ;
}

void Config_Parser__BuilderDesc_Characters(Config_Parser__Builder b, XML_DTD__StringVar chars, OOC_LEN chars_0d, OOC_INT32 charsStart, OOC_INT32 charsEnd, OOC_INT8 elementWhitespace) {
  register OOC_INT64 i0,i1,i2,i3,i4,i5,i6,i7;
  OOC_INT32 len;
  XML_UnicodeBuffer__CharArray ptr;
  OOC_INT32 i;
  Config_Parser__CharData charData;

  i0 = (OOC_INT64)b;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5470))+24);
  i1 = i1!=(OOC_INT64)0;
  if (!i1) goto l15;
  i1 = charsEnd;
  i2 = charsStart;
  i1 = i1-i2;
  len = i1;
  i3 = (OOC_INT64)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i1+1));
  ptr = (XML_UnicodeBuffer__CharArray)i3;
  i = 0;
  i4 = 0<i1;
  if (!i4) goto l10;
  i4=i2;i2=0;
l5_loop:
  i5 = _check_pointer(i3, 5588);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i7 = *(OOC_UINT16*)((OOC_INT64)chars+(_check_index(i4, chars_0d, OOC_UINT32, 5600))*2);
  *(OOC_UINT16*)(i5+(_check_index(i2, i6, OOC_UINT32, 5588))*2) = i7;
  i2 = i2+1;
  i = i2;
  i4 = i4+1;
  i5 = i2<i1;
  if (i5) goto l5_loop;
l10:
  i2 = _check_pointer(i3, 5635);
  i4 = OOC_ARRAY_LENGTH(i2, 0);
  *(OOC_UINT16*)(i2+(_check_index(i1, i4, OOC_UINT32, 5635))*2) = 0u;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 5697));
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5687))+24);
  i1 = (OOC_INT64)Config_Parser__NewCharData((Config_Parser__Element)i2, (XML_Locator__Locator)i1, (XML_UnicodeBuffer__CharArray)i3);
  charData = (Config_Parser__CharData)i1;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5719))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 5726))+64);
  i2 = i2==(OOC_INT64)0;
  if (i2) goto l13;
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5806))+24);
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i2, 5813))+72);
  *(OOC_INT64*)(_check_pointer(i2, 5826)) = i1;
  goto l14;
l13:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5757))+24);
  *(OOC_INT64*)((_check_pointer(i2, 5764))+64) = i1;
l14:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 5867))+24);
  *(OOC_INT64*)((_check_pointer(i0, 5874))+72) = i1;
l15:
  return;
  ;
}

Config_Parser__Parser Config_Parser__NewFile(Object__String filePath) {
  register OOC_INT64 i0,i1,i2,i3;
  Config_Parser__Parser p;
  Object__CharsLatin1 chars;

  i0 = (OOC_INT64)RT0__NewObject(_td_Config_Parser__Parser.baseTypes[0]);
  p = (Config_Parser__Parser)i0;
  i1 = (OOC_INT64)Config_Parser__NewBuilder();
  *(OOC_INT64*)((_check_pointer(i0, 6069))+8) = i1;
  i1 = (OOC_INT64)filePath;
  i1 = (OOC_INT64)OS_Path__Encode((Object__String)i1);
  chars = (Object__CharsLatin1)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 6176)), 0);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6195))+8);
  i1 = (OOC_INT64)XML_Parser__NewFile((void*)(_check_pointer(i1, 6176)), i2, (URI__URI)0, (XML_UnicodeCodec__Factory)0, (XML_EntityResolver__Resolver)0, (XML_Builder__Builder)i3);
  *(OOC_INT64*)(_check_pointer(i0, 6137)) = i1;
  return (Config_Parser__Parser)i0;
  ;
}

Config_Parser__Parser Config_Parser__NewChannel(IO__ByteChannel ch) {
  register OOC_INT64 i0,i1,i2;
  Config_Parser__Parser p;

  i0 = (OOC_INT64)RT0__NewObject(_td_Config_Parser__Parser.baseTypes[0]);
  p = (Config_Parser__Parser)i0;
  i1 = (OOC_INT64)Config_Parser__NewBuilder();
  *(OOC_INT64*)((_check_pointer(i0, 6351))+8) = i1;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6440))+8);
  i2 = (OOC_INT64)ch;
  i1 = (OOC_INT64)XML_Parser__NewChannel((IO__ByteChannel)i2, (URI__URI)0, (XML_UnicodeCodec__Factory)0, (XML_EntityResolver__Resolver)0, (XML_Builder__Builder)i1);
  *(OOC_INT64*)(_check_pointer(i0, 6383)) = i1;
  return (Config_Parser__Parser)i0;
  ;
}

void Config_Parser__ParserDesc_ParseDocument(Config_Parser__Parser p) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)p;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 6553));
  XML_Parser__ParserDesc_ParseDocument((XML_Parser__Parser)i1);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6599))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6608))+16);
  *(OOC_INT64*)((_check_pointer(i0, 6588))+24) = i1;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6641))+8);
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 6650))+8);
  *(OOC_INT64*)((_check_pointer(i0, 6621))+32) = i1;
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 6686));
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 6697));
  *(OOC_INT64*)((_check_pointer(i0, 6672))+16) = i1;
  return;
  ;
}

OOC_CHAR8 Config_Parser__NodeDesc_IsWhitespace(Config_Parser__Node node) {
  register OOC_INT64 i0,i1,i2,i3;
  XML_UnicodeBuffer__CharArray str;
  OOC_INT32 i;

  i0 = (OOC_INT64)node;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 6843)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l24;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 6885)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 6879)))), 6879);
  goto l25;
l5:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 6916))+48);
  str = (XML_UnicodeBuffer__CharArray)i0;
  i = 0;
  i1 = _check_pointer(i0, 6956);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 6956))*2);
  i1 = i1!=0u;
  if (i1) goto l8;
  i1=0u;
  goto l10;
l8:
  i1 = _check_pointer(i0, 6972);
  i2 = OOC_ARRAY_LENGTH(i1, 0);
  i1 = *(OOC_UINT16*)(i1+(_check_index(0, i2, OOC_UINT32, 6972))*2);
  i1 = (OOC_UINT16)i1<=(OOC_UINT16)32u;
  
l10:
  if (i1) goto l12;
  i1=0;
  goto l22;
l12:
  i1=0;
l13_loop:
  i1 = i1+1;
  i = i1;
  i2 = _check_pointer(i0, 6956);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 6956))*2);
  i2 = i2!=0u;
  if (i2) goto l16;
  i2=0u;
  goto l18;
l16:
  i2 = _check_pointer(i0, 6972);
  i3 = OOC_ARRAY_LENGTH(i2, 0);
  i2 = *(OOC_UINT16*)(i2+(_check_index(i1, i3, OOC_UINT32, 6972))*2);
  i2 = (OOC_UINT16)i2<=(OOC_UINT16)32u;
  
l18:
  if (i2) goto l13_loop;
l22:
  i0 = _check_pointer(i0, 7031);
  i2 = OOC_ARRAY_LENGTH(i0, 0);
  i0 = *(OOC_UINT16*)(i0+(_check_index(i1, i2, OOC_UINT32, 7031))*2);
  return (i0==0u);
  goto l25;
l24:
  return 0u;
l25:
  _failed_function(6754); return 0;
  ;
}

OOC_CHAR8 Config_Parser__NodeDesc_HasNoElementContent(Config_Parser__Node node) {
  register OOC_INT64 i0,i1;
  Config_Parser__Node ptr;

  i0 = (OOC_INT64)node;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7171)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7376)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7370)))), 7370);
  goto l19;
l5:
  return 1u;
  goto l19;
l7:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7201))+64);
  ptr = (Config_Parser__Node)i0;
  i1 = i0!=(OOC_INT64)0;
  if (!i1) goto l18;
l10_loop:
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7255)))), &_td_Config_Parser__ElementDesc);
  if (!i1) goto l13;
  return 0u;
l13:
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 7326));
  ptr = (Config_Parser__Node)i0;
  i1 = i0!=(OOC_INT64)0;
  if (i1) goto l10_loop;
l18:
  return 1u;
l19:
  _failed_function(7095); return 0;
  ;
}

OOC_CHAR8 Config_Parser__NodeDesc_IsEmpty(Config_Parser__Node node) {
  register OOC_INT64 i0,i1;

  i0 = (OOC_INT64)node;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7510)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7568)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7562)))), 7562);
  goto l8;
l5:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7600))+48);
  return ((
  _cmp16((const void*)(_check_pointer(i0, 7608)),(const void*)((OOC_CHAR16[]){0})))==0);
  goto l8;
l7:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7541))+64);
  return (i0==(OOC_INT64)0);
l8:
  _failed_function(7467); return 0;
  ;
}

XML_UnicodeBuffer__CharArray Config_Parser__NodeDesc_GetCharDataContent(Config_Parser__Node node) {
  register OOC_INT64 i0,i1,i2,i3,i4;
  OOC_INT32 len;
  Config_Parser__Node ptr;
  XML_UnicodeBuffer__CharArray str;

  i0 = (OOC_INT64)node;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 7779)))), &_td_Config_Parser__ElementDesc);
  if (i1) goto l7;
  i1 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8277)))), &_td_Config_Parser__CharDataDesc);
  if (i1) goto l5;
  _failed_with(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8271)))), 8271);
  goto l29;
l5:
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8308))+48);
  return (XML_UnicodeBuffer__CharArray)i0;
  goto l29;
l7:
  len = 0;
  i1 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 7825))+64);
  ptr = (Config_Parser__Node)i1;
  i2 = i1!=(OOC_INT64)0;
  if (i2) goto l10;
  i1=0;
  goto l20;
l10:
  i2=0;
l11_loop:
  i3 = OOC_TYPE_TEST(((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i1, 7879)))), &_td_Config_Parser__CharDataDesc);
  if (i3) goto l14;
  return (XML_UnicodeBuffer__CharArray)(OOC_INT64)0;
  
  goto l15;
l14:
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 7936))+48);
  i4 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i1, 7936))+48);
  i3 = OOC_ARRAY_LENGTH((_check_pointer(i3, 7944)), 0);
  i3 = LongStrings__Length((void*)(_check_pointer(i4, 7944)), i3);
  i2 = i2+i3;
  len = i2;
  
l15:
  i1 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i1, 8013));
  ptr = (Config_Parser__Node)i1;
  i3 = i1!=(OOC_INT64)0;
  if (i3) goto l11_loop;
l19:
  i1=i2;
l20:
  i1 = (OOC_INT64)RT0__NewObject(_td_XML_UnicodeBuffer__CharArray.baseTypes[0], (i1+1));
  str = (XML_UnicodeBuffer__CharArray)i1;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8085)), 0);
  _copy_16((const void*)((OOC_CHAR16[]){0}),(void*)(_check_pointer(i1, 8085)),i2);
  i0 = (OOC_INT64)*(OOC_INT64*)((_check_pointer(i0, 8106))+64);
  ptr = (Config_Parser__Node)i0;
  i2 = i0!=(OOC_INT64)0;
  if (!i2) goto l28;
l23_loop:
  i2 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8176)))), &_td_Config_Parser__CharDataDesc, 8176)), 8185))+48);
  i3 = (OOC_INT64)*(OOC_INT64*)((_check_pointer((_type_guard(i0, ((OOC_INT64)OOC_TYPE_TAG((_check_pointer(i0, 8176)))), &_td_Config_Parser__CharDataDesc, 8176)), 8185))+48);
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i2, 8193)), 0);
  i4 = OOC_ARRAY_LENGTH((_check_pointer(i1, 8199)), 0);
  LongStrings__Append((void*)(_check_pointer(i3, 8193)), i2, (void*)(_check_pointer(i1, 8199)), i4);
  i0 = (OOC_INT64)*(OOC_INT64*)(_check_pointer(i0, 8221));
  ptr = (Config_Parser__Node)i0;
  i2 = i0!=(OOC_INT64)0;
  if (i2) goto l23_loop;
l28:
  return (XML_UnicodeBuffer__CharArray)i1;
l29:
  _failed_function(7664); return 0;
  ;
}

void OOC_Config_Parser_init(void) {

  return;
  ;
}

void OOC_Config_Parser_destroy(void) {
}

/* --- */
