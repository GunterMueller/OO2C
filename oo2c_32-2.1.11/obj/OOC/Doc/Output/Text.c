#include <OOC/Doc/Output/Text.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_Scanner_InputBuffer__CharArray OOC_Doc_Output_Text__Convert(OOC_Doc__Document document, OOC_INT32 indent, OOC_INT32 scrWidth, OOC_INT32 indentFirst) {
  register OOC_INT32 i0,i1,i2;
  OOC_Doc_TextBuffer__Buffer b;
  OOC_Doc_TextBuffer__Buffer currBlock;
  auto void OOC_Doc_Output_Text__Convert_BlockList(OOC_Doc__BlockElement blockList, OOC_INT32 indent, OOC_INT32 offsetFirst);
    
    void OOC_Doc_Output_Text__Convert_BlockList(OOC_Doc__BlockElement blockList, OOC_INT32 indent, OOC_INT32 offsetFirst) {
      register OOC_INT32 i0,i1,i2;
      OOC_Doc__BlockElement block;
      auto void OOC_Doc_Output_Text__Convert_BlockList_InlineList(OOC_Doc__InlineElement inlineList);
      auto void OOC_Doc_Output_Text__Convert_BlockList_Block(OOC_Doc__BlockElement block, OOC_INT32 indent, OOC_INT32 offsetFirst);
        
        void OOC_Doc_Output_Text__Convert_BlockList_InlineList(OOC_Doc__InlineElement inlineList) {
          register OOC_INT32 i0,i1,i2;
          OOC_Doc__InlineElement _inline;
          OOC_CHAR8 name[32];
          auto void OOC_Doc_Output_Text__Convert_BlockList_InlineList_ConvertMarkup(OOC_Doc__MarkedInline mi);
            
            void OOC_Doc_Output_Text__Convert_BlockList_InlineList_ConvertMarkup(OOC_Doc__MarkedInline mi) {
              register OOC_INT32 i0,i1,i2;
              OOC_INT32 h;

              i0 = (OOC_INT32)mi;
              i1 = *(OOC_INT32*)((_check_pointer(i0, 1861))+16);
              switch (i1) {
              case 0:
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1923))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                goto l10;
              case 1:
              case 2:
              case 3:
              case 6:
              case 7:
              case 8:
              case 12:
              case 13:
              case 16:
              case 17:
              case 18:
              case 14:
                i1 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"`", 2);
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2258))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                i0 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)"\047", 2);
                goto l10;
              case 4:
                i1 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"\"", 2);
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2397))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                i0 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)"\"", 2);
                goto l10;
              case 5:
                i1 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"_", 2);
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2537))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                i0 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)"_", 2);
                goto l10;
              case 9:
                i1 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"*", 2);
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2679))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                i0 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)"*", 2);
                goto l10;
              case 10:
              case 15:
                i1 = (OOC_INT32)currBlock;
                i1 = *(OOC_INT32*)((_check_pointer(i1, 2802))+4);
                h = i1;
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2835))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                i0 = (OOC_INT32)currBlock;
                i2 = *(OOC_INT32*)((_check_pointer(i0, 2897))+4);
                OOC_Doc_TextBuffer__BufferDesc_Capitalize((OOC_Doc_TextBuffer__Buffer)i0, i1, i2);
                goto l10;
              case 11:
                i1 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"<", 2);
                i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 2992))+20);
                OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
                i0 = (OOC_INT32)currBlock;
                OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)">", 2);
                goto l10;
              default:
                _failed_case(i1, 1854);
                goto l10;
              }
l10:
              return;
              ;
            }


          i0 = (OOC_INT32)inlineList;
          _inline = (OOC_Doc__InlineElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (!i1) goto l40;
          
l3_loop:
          OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3181)))), OOC_Doc__ElementDesc_NodeName)),OOC_Doc__ElementDesc_NodeName)((OOC_Doc__Element)i0, (void*)(OOC_INT32)name, 32);
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3221)))), &_td_OOC_Doc__GlyphDesc);
          if (i1) goto l34;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3326)))), &_td_OOC_Doc__MarkedInlineDesc);
          if (i1) goto l32;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3414)))), &_td_OOC_Doc__TextDesc);
          if (i1) goto l30;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3507)))), &_td_OOC_Doc__EmailDesc);
          if (i1) goto l24;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3982)))), &_td_OOC_Doc__UrefDesc);
          if (i1) goto l14;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3974)))), 3974);
          goto l35;
l14:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4018))+20);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l21;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4198))+24);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l19;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4480))+24);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
          goto l35;
l19:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4256))+20);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)" (", 3);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4337))+16);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
          i0 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)")", 2);
          goto l35;
l21:
          i1 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"`", 2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4127))+16);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
          i0 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)"\047", 2);
          goto l35;
l24:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3544))+20);
          i1 = i1==(OOC_INT32)0;
          if (i1) goto l27;
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3799))+20);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i1);
          i1 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)" <", 3);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3885))+16);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
          i0 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)">", 2);
          goto l35;
l27:
          i1 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)"<", 2);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3658))+16);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
          i0 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i0, (OOC_CHAR8*)">", 2);
          goto l35;
l30:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3465))+16);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 3465))+16);
          i1 = OOC_ARRAY_LENGTH((_check_pointer(i1, 3473)), 0);
          i2 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i2, (void*)(_check_pointer(i0, 3473)), i1);
          goto l35;
l32:
          OOC_Doc_Output_Text__Convert_BlockList_InlineList_ConvertMarkup((OOC_Doc__MarkedInline)i0);
          goto l35;
l34:
          i0 = *(OOC_INT32*)((_check_pointer(i0, 3286))+16);
          i1 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(i0, 7, OOC_UINT32, 3279))*4), 4);
l35:
          i0 = (OOC_INT32)_inline;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4552))+12);
          _inline = (OOC_Doc__InlineElement)i0;
          i1 = i0!=(OOC_INT32)0;
          if (i1) goto l3_loop;
l40:
          return;
          ;
        }

        
        void OOC_Doc_Output_Text__Convert_BlockList_Block(OOC_Doc__BlockElement block, OOC_INT32 indent, OOC_INT32 offsetFirst) {
          register OOC_INT32 i0,i1,i2,i3,i4,i5;
          OOC_Doc__BlockElement item;
          OOC_INT32 len;
          OOC_INT32 index;
          OOC_Doc__BlockElement firstColumn;
          auto OOC_INT32 OOC_Doc_Output_Text__Convert_BlockList_Block_ItemPrefix(OOC_Doc__InlineElement prefix);
          auto OOC_INT32 OOC_Doc_Output_Text__Convert_BlockList_Block_EnumPrefix(OOC_INT8 mode, OOC_INT32 index);
            
            OOC_INT32 OOC_Doc_Output_Text__Convert_BlockList_Block_ItemPrefix(OOC_Doc__InlineElement prefix) {
              register OOC_INT32 i0,i1;
              OOC_INT32 start;

              i0 = (OOC_INT32)currBlock;
              i0 = *(OOC_INT32*)((_check_pointer(i0, 4919))+4);
              start = i0;
              i1 = (OOC_INT32)prefix;
              OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i1);
              i1 = (OOC_INT32)currBlock;
              OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (OOC_CHAR8*)" ", 2);
              i1 = (OOC_INT32)currBlock;
              i1 = *(OOC_INT32*)((_check_pointer(i1, 5018))+4);
              return (i1-i0);
              ;
            }

            
            OOC_INT32 OOC_Doc_Output_Text__Convert_BlockList_Block_EnumPrefix(OOC_INT8 mode, OOC_INT32 index) {
              register OOC_INT32 i0,i1;
              OOC_INT32 start;
              OOC_CHAR8 str[16];

              i0 = (OOC_INT32)currBlock;
              i0 = *(OOC_INT32*)((_check_pointer(i0, 5238))+4);
              start = i0;
              i1 = mode;
              switch (i1) {
              case 0:
                i1 = index;
                IntStr__IntToStr(i1, (void*)(OOC_INT32)str, 16);
                goto l6;
              case 2:
                i1 = index;
                *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 16, OOC_UINT8, 5383))) = (64+i1);
                *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 16, OOC_UINT8, 5428))) = 0u;
                goto l6;
              case 1:
                i1 = index;
                *(OOC_UINT8*)((OOC_INT32)str+(_check_index(0, 16, OOC_UINT8, 5485))) = (96+i1);
                *(OOC_UINT8*)((OOC_INT32)str+(_check_index(1, 16, OOC_UINT8, 5530))) = 0u;
                goto l6;
              default:
                _failed_case(i1, 5255);
                goto l6;
              }
l6:
              Strings__Append((OOC_CHAR8*)". ", 3, (void*)(OOC_INT32)str, 16);
              i1 = (OOC_INT32)currBlock;
              OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i1, (void*)(OOC_INT32)str, 16);
              i1 = (OOC_INT32)currBlock;
              i1 = *(OOC_INT32*)((_check_pointer(i1, 5652))+4);
              return (i1-i0);
              ;
            }


          i0 = (OOC_INT32)block;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5719)))), &_td_OOC_Doc__ParagraphDesc);
          if (i1) goto l81;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6065)))), &_td_OOC_Doc__ExampleDesc);
          if (i1) goto l79;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6234)))), &_td_OOC_Doc__PreCondDesc);
          if (i1) goto l77;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6415)))), &_td_OOC_Doc__PostCondDesc);
          if (i1) goto l75;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 6597)))), &_td_OOC_Doc__ItemizeDesc);
          if (i1) goto l52;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7449)))), &_td_OOC_Doc__EnumerateDesc);
          if (i1) goto l29;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8371)))), &_td_OOC_Doc__TableRowDesc);
          if (i1) goto l19;
          i1 = OOC_TYPE_TEST(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8786)))), &_td_OOC_Doc__TableDesc);
          if (i1) goto l17;
          _failed_with(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8779)))), 8779);
          goto l90;
l17:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8827))+20);
          i1 = offsetFirst;
          i2 = indent;
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i0, i2, i1);
          goto l90;
l19:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8419))+20);
          firstColumn = (OOC_Doc__BlockElement)i1;
          i2 = indent;
          i3 = i1!=(OOC_INT32)0;
          if (!i3) goto l27;
l22_loop:
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 8517)))), &_td_OOC_Doc__FirstColumnDesc, 8517)), 8529))+20);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i3);
          i3 = scrWidth;
          i4 = (OOC_INT32)currBlock;
          i5 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__FormatBlock((OOC_Doc_TextBuffer__Buffer)i5, (OOC_Doc_TextBuffer__Buffer)i4, i2, i3, 0);
          i3 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Clear((OOC_Doc_TextBuffer__Buffer)i3);
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 8684))+12);
          firstColumn = (OOC_Doc__BlockElement)i1;
          i3 = i1!=(OOC_INT32)0;
          if (i3) goto l22_loop;
l27:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8737))+24);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8743))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i0, (i2+5), 0);
          goto l90;
l29:
          i1 = indent;
          i1 = i1+5;
          indent = i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7514))+28);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l35;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7561))+28);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 7567))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i2, i1, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7612))+28);
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 7618))+16);
          if (!i2) goto l35;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendEOL((OOC_Doc_TextBuffer__Buffer)i2);
l35:
          i2 = *(OOC_INT32*)((_check_pointer(i0, 7716))+24);
          index = i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7747))+32);
          item = (OOC_Doc__BlockElement)i0;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l90;
          i0 = i1-3;
          i1=i0;i0=i2;
l38_loop:
          i2 = offsetFirst;
          i2 = i2<0;
          if (i2) goto l41;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendSpaces((OOC_Doc_TextBuffer__Buffer)i2, i1);
          i1 = (OOC_INT32)block;
          i1 = *(OOC_INT8*)((_check_pointer(i1, 8089))+20);
          i0 = OOC_Doc_Output_Text__Convert_BlockList_Block_EnumPrefix(i1, i0);
          len = i0;
          i0 = (OOC_INT32)item;
          i1 = indent;
          i2 = i1-3;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 8138)))), &_td_OOC_Doc__ItemDesc, 8138)), 8143))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i3, i1, (-i2));
          i1=i2;
          goto l42;
l41:
          i1 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendSpaces((OOC_Doc_TextBuffer__Buffer)i1, 2);
          i1 = (OOC_INT32)block;
          i1 = *(OOC_INT8*)((_check_pointer(i1, 7902))+20);
          i0 = OOC_Doc_Output_Text__Convert_BlockList_Block_EnumPrefix(i1, i0);
          len = i0;
          i0 = (OOC_INT32)item;
          i1 = offsetFirst;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7951)))), &_td_OOC_Doc__ItemDesc, 7951)), 7956))+20);
          i3 = indent;
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i2, i3, (i1-2));
          i1 = i3-3;
          
l42:
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 8213))+16);
          if (!i2) goto l45;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendEOL((OOC_Doc_TextBuffer__Buffer)i2);
l45:
          i2 = index;
          i2 = i2+1;
          index = i2;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 8321))+12);
          item = (OOC_Doc__BlockElement)i0;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l90;
          i0=i2;
          goto l38_loop;
l52:
          i1 = indent;
          i1 = i1+5;
          indent = i1;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6660))+24);
          i2 = i2!=(OOC_INT32)0;
          if (!i2) goto l58;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6707))+24);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 6713))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i2, i1, 0);
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6758))+24);
          i2 = *(OOC_UINT8*)((_check_pointer(i2, 6764))+16);
          if (!i2) goto l58;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendEOL((OOC_Doc_TextBuffer__Buffer)i2);
l58:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6861))+28);
          item = (OOC_Doc__BlockElement)i0;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l90;
          i0 = i1-2;
          
l61_loop:
          i1 = offsetFirst;
          i1 = i1<0;
          if (i1) goto l64;
          i1 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendSpaces((OOC_Doc_TextBuffer__Buffer)i1, i0);
          i0 = (OOC_INT32)block;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7197))+20);
          i0 = OOC_Doc_Output_Text__Convert_BlockList_Block_ItemPrefix((OOC_Doc__InlineElement)i0);
          len = i0;
          i0 = (OOC_INT32)item;
          i1 = indent;
          i2 = i1-2;
          i3 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7240)))), &_td_OOC_Doc__ItemDesc, 7240)), 7245))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i3, i1, (-i2));
          i1=i2;
          goto l65;
l64:
          i0 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendSpaces((OOC_Doc_TextBuffer__Buffer)i0, 3);
          i0 = (OOC_INT32)block;
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7016))+20);
          i0 = OOC_Doc_Output_Text__Convert_BlockList_Block_ItemPrefix((OOC_Doc__InlineElement)i0);
          len = i0;
          i0 = (OOC_INT32)item;
          i1 = offsetFirst;
          i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 7059)))), &_td_OOC_Doc__ItemDesc, 7059)), 7064))+20);
          i3 = indent;
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i2, i3, (i1-3));
          i1 = i3-2;
          
l65:
          i2 = *(OOC_UINT8*)((_check_pointer(i0, 7315))+16);
          if (!i2) goto l68;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendEOL((OOC_Doc_TextBuffer__Buffer)i2);
l68:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 7399))+12);
          item = (OOC_Doc__BlockElement)i0;
          i0 = i0!=(OOC_INT32)0;
          if (!i0) goto l90;
          i0=i1;
          goto l61_loop;
l75:
          i1 = indent;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendSpaces((OOC_Doc_TextBuffer__Buffer)i2, i1);
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i2, (OOC_CHAR8*)"*Pre-condition*: ", 18);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6538))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i0, i1, (-(i1+18)));
          goto l90;
l77:
          i1 = indent;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendSpaces((OOC_Doc_TextBuffer__Buffer)i2, i1);
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_Append((OOC_Doc_TextBuffer__Buffer)i2, (OOC_CHAR8*)"*Pre-condition*: ", 18);
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6356))+20);
          OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i0, i1, (-(i1+17)));
          goto l90;
l79:
          i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 6109))+20);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i0);
          i0 = indent;
          i1 = (OOC_INT32)currBlock;
          i2 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__IndentBlock((OOC_Doc_TextBuffer__Buffer)i2, (OOC_Doc_TextBuffer__Buffer)i1, (i0+5));
          i0 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Clear((OOC_Doc_TextBuffer__Buffer)i0);
          goto l90;
l81:
          i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 5765))+20);
          OOC_Doc_Output_Text__Convert_BlockList_InlineList((OOC_Doc__InlineElement)i1);
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 5798))+24);
          if (i0) goto l84;
          i0=0u;
          goto l86;
l84:
          i0 = offsetFirst;
          i0 = i0>0;
          
l86:
          if (i0) goto l88;
          i0 = offsetFirst;
          i1 = scrWidth;
          i2 = indent;
          i3 = (OOC_INT32)currBlock;
          i4 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__FormatBlock((OOC_Doc_TextBuffer__Buffer)i4, (OOC_Doc_TextBuffer__Buffer)i3, i2, i1, i0);
          goto l89;
l88:
          i0 = scrWidth;
          i1 = indent;
          i2 = (OOC_INT32)currBlock;
          i3 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__FormatBlock((OOC_Doc_TextBuffer__Buffer)i3, (OOC_Doc_TextBuffer__Buffer)i2, i1, i0, 0);
l89:
          i0 = (OOC_INT32)currBlock;
          OOC_Doc_TextBuffer__BufferDesc_Clear((OOC_Doc_TextBuffer__Buffer)i0);
l90:
          i0 = (OOC_INT32)block;
          i0 = *(OOC_UINT8*)((_check_pointer(i0, 8888))+16);
          if (!i0) goto l93;
          i0 = (OOC_INT32)b;
          OOC_Doc_TextBuffer__BufferDesc_AppendEOL((OOC_Doc_TextBuffer__Buffer)i0);
l93:
          return;
          ;
        }


      i0 = (OOC_INT32)blockList;
      block = (OOC_Doc__BlockElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (!i1) goto l8;
      
l3_loop:
      i1 = offsetFirst;
      i2 = indent;
      OOC_Doc_Output_Text__Convert_BlockList_Block((OOC_Doc__BlockElement)i0, i2, i1);
      i0 = (OOC_INT32)block;
      i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9092))+12);
      block = (OOC_Doc__BlockElement)i0;
      i1 = i0!=(OOC_INT32)0;
      if (i1) goto l3_loop;
l8:
      return;
      ;
    }


  i0 = (OOC_INT32)OOC_Doc_TextBuffer__New();
  b = (OOC_Doc_TextBuffer__Buffer)i0;
  i0 = (OOC_INT32)OOC_Doc_TextBuffer__New();
  currBlock = (OOC_Doc_TextBuffer__Buffer)i0;
  i0 = (OOC_INT32)document;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9234));
  i1 = indent;
  i2 = indentFirst;
  OOC_Doc_Output_Text__Convert_BlockList((OOC_Doc__BlockElement)i0, i1, i2);
  i0 = (OOC_INT32)b;
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer(i0, 9286));
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  ;
}

OOC_Scanner_InputBuffer__CharArray OOC_Doc_Output_Text__ToComment(OOC_Doc__Document document) {
  register OOC_INT32 i0,i1,i2;
  OOC_Doc_Decoration__Decoration d;

  i0 = (OOC_INT32)document;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 9902))+8);
  d = (OOC_Doc_Decoration__Decoration)i1;
  i2 = *(OOC_INT32*)((_check_pointer(i1, 9956))+4);
  i1 = *(OOC_INT32*)(_check_pointer(i1, 9945));
  i0 = (OOC_INT32)OOC_Doc_Output_Text__Convert((OOC_Doc__Document)i0, i1, i2, 0);
  return (OOC_Scanner_InputBuffer__CharArray)i0;
  ;
}

void OOC_OOC_Doc_Output_Text_init(void) {

  _copy_8((const void*)(OOC_CHAR8*)"*",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(0, 7, OOC_UINT8, 10194))*4),4);
  _copy_8((const void*)(OOC_CHAR8*)"...",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(1, 7, OOC_UINT8, 10234))*4),4);
  _copy_8((const void*)(OOC_CHAR8*)"-",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(2, 7, OOC_UINT8, 10274))*4),4);
  _copy_8((const void*)(OOC_CHAR8*)"--",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(3, 7, OOC_UINT8, 10313))*4),4);
  _copy_8((const void*)(OOC_CHAR8*)"=>",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(4, 7, OOC_UINT8, 10354))*4),4);
  _copy_8((const void*)(OOC_CHAR8*)"\"",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(5, 7, OOC_UINT8, 10395))*4),4);
  _copy_8((const void*)(OOC_CHAR8*)"\"",(void*)((OOC_INT32)OOC_Doc_Output_Text__replacements+(_check_index(6, 7, OOC_UINT8, 10437))*4),4);
  return;
  ;
}

void OOC_OOC_Doc_Output_Text_destroy(void) {
}

/* --- */
