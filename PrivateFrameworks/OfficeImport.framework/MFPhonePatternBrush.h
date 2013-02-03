/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {
    MFPhoneBitmap *m_pattern;
    BOOL m_usePaletteForBilevel;
}

+ (id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2;

- (void)dealloc;
- (void)fillPath:(id)arg1 :(struct CGPath { }*)arg2;
- (id)initWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2;

@end
