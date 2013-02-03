/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableAttributedString : NSAttributedString {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_changeIntAttribute:(id)arg1 by:(int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)appendString:(id)arg1 withAttributes:(id)arg2;
- (void)beginEditing;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned int)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned int x1; unsigned int x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned int)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)endEditing;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)mf_addAttribute:(id)arg1 value:(id)arg2;
- (void)mf_removeAttribute:(id)arg1;
- (void)mf_setString:(id)arg1;
- (id)mutableString;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)replaceNewlinesWithSpaces;
- (void)replaceOccurrencesOfCharactersFromSet:(id)arg1 withString:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setAlignment:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBaseWritingDirection:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)trimWhitespace;
- (void)unscriptRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
