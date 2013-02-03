/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADHyperlink, OADFill, OADColor, NSString, OADStroke, OADUnderline, NSArray;

@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
    unsigned int mHasOpacity : 1;
    unsigned int mHasIsBold : 1;
    unsigned int mIsBold : 1;
    unsigned int mHasIsItalic : 1;
    unsigned int mIsItalic : 1;
    unsigned int mHasFormatType : 1;
    unsigned int mHasFormatKerningType : 1;
    unsigned int mHasStrikeThroughType : 1;
    unsigned int mHasSize : 1;
    unsigned int mHasSpacing : 1;
    unsigned int mHasKerning : 1;
    unsigned int mHasIsVerticalText : 1;
    unsigned int mIsVerticalText : 1;
    unsigned int mHasBaseline : 1;
    unsigned int mHasIsHorizontalNormalized : 1;
    unsigned int mIsHorizontalNormalized : 1;
    unsigned int mHasCaps : 1;
    double mBaseline;
    NSString *mBidiFont;
    unsigned char mCaps;
    OADHyperlink *mClickHyperlink;
    NSString *mEastAsianFont;
    NSArray *mEffects;
    OADFill *mFill;
    unsigned char mFormatKerningType;
    unsigned char mFormatType;
    NSString *mHAnsiFont;
    OADColor *mHighlight;
    OADHyperlink *mHoverHyperlink;
    NSString *mLatinFont;
    double mOpacity;
    double mSize;
    double mSpacing;
    unsigned char mStrikeThroughType;
    OADStroke *mStroke;
    NSString *mSymbolFont;
    OADUnderline *mUnderline;
}

+ (void)initialize;

- (double)baseline;
- (id)bidiFont;
- (int)caps;
- (id)clickHyperlink;
- (void)dealloc;
- (id)eastAsianFont;
- (id)effects;
- (id)fill;
- (int)formatKerningType;
- (int)formatType;
- (id)hansiFont;
- (BOOL)hasBaseline;
- (BOOL)hasBidiFont;
- (BOOL)hasCaps;
- (BOOL)hasEastAsianFont;
- (BOOL)hasEffects;
- (BOOL)hasFill;
- (BOOL)hasFormatKerningType;
- (BOOL)hasFormatType;
- (BOOL)hasHAnsiFont;
- (BOOL)hasHighlight;
- (BOOL)hasIsBold;
- (BOOL)hasIsHorizontalNormalized;
- (BOOL)hasIsItalic;
- (BOOL)hasIsVerticalText;
- (BOOL)hasLatinFont;
- (BOOL)hasOpacity;
- (BOOL)hasSize;
- (BOOL)hasSpacing;
- (BOOL)hasStrikeThroughType;
- (BOOL)hasStroke;
- (BOOL)hasSymbolFont;
- (BOOL)hasUnderline;
- (unsigned int)hash;
- (id)highlight;
- (id)hoverHyperlink;
- (id)initWithDefaults;
- (BOOL)isBold;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHorizontalNormalized;
- (BOOL)isItalic;
- (BOOL)isVerticalText;
- (id)latinFont;
- (double)opacity;
- (void)overrideWithProperties:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setBaseline:(double)arg1;
- (void)setBidiFont:(id)arg1;
- (void)setCaps:(int)arg1;
- (void)setClickHyperlink:(id)arg1;
- (void)setEastAsianFont:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setFormatKerningType:(int)arg1;
- (void)setFormatType:(int)arg1;
- (void)setHAnsiFont:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setHoverHyperlink:(id)arg1;
- (void)setIsBold:(BOOL)arg1;
- (void)setIsHorizontalNormalized:(BOOL)arg1;
- (void)setIsItalic:(BOOL)arg1;
- (void)setIsVerticalText:(BOOL)arg1;
- (void)setLatinFont:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setSize:(double)arg1;
- (void)setSpacing:(double)arg1;
- (void)setStrikeThroughType:(int)arg1;
- (void)setStroke:(id)arg1;
- (void)setSymbolFont:(id)arg1;
- (void)setUnderline:(id)arg1;
- (double)size;
- (double)spacing;
- (int)strikeThroughType;
- (id)stroke;
- (id)symbolFont;
- (id)underline;

@end
