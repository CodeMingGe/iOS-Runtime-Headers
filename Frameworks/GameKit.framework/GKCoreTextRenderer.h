/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSAttributedString, NSString, UIColor, NSObject<GKTextLayout>;

@interface GKCoreTextRenderer : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    BOOL _adjustsFontSizeToFitWidth;
    NSAttributedString *_attributedText;
    int _baselineAdjustment;
    } _bounds;
    id _contentPath;
    BOOL _hasCalculatedBounds;
    float _leading;
    float _minimumFontSize;
    int _numberOfLines;
    UIColor *_shadowColor;
    } _shadowOffset;
    BOOL _shouldDrawEmoji;
    BOOL _shouldSizeToTextImageBounds;
    UIColor *_textColor;
    NSObject<GKTextLayout> *_textLayout;
    NSString *_truncationSymbol;
}

@property(readonly) unsigned int actualLineCount;
@property BOOL adjustsFontSizeToFitWidth;
@property(retain) NSAttributedString * attributedText;
@property int baselineAdjustment;
@property(readonly) float baselineYOffset;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(retain) id contentPath;
@property BOOL hasCalculatedBounds;
@property float leading;
@property float minimumFontSize;
@property int numberOfLines;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property BOOL shouldDrawEmoji;
@property BOOL shouldSizeToTextImageBounds;
@property(retain) UIColor * textColor;
@property(retain) NSObject<GKTextLayout> * textLayout;
@property(copy) NSString * truncationSymbol;

- (void)_drawInContext:(struct CGContext { }*)arg1 drawEmoji:(BOOL)arg2;
- (unsigned int)actualLineCount;
- (BOOL)adjustsFontSizeToFitWidth;
- (id)attributedText;
- (int)baselineAdjustment;
- (float)baselineYOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (float)calculatedFontSizeForString:(id)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (Class)classForTextLayout;
- (id)contentPath;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (BOOL)hasCalculatedBounds;
- (id)init;
- (void)invalidateTextLayout;
- (float)leading;
- (float)lineHeightForAttributedString:(id)arg1;
- (float)lineHeightForFont:(struct __CTFont { }*)arg1;
- (float)lineImageHeightForAttributedString:(id)arg1;
- (float)minimumFontSize;
- (int)numberOfLines;
- (id)overallAttribute:(id)arg1 forString:(id)arg2;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaselineAdjustment:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentPath:(id)arg1;
- (void)setHasCalculatedBounds:(BOOL)arg1;
- (void)setLeading:(float)arg1;
- (void)setMinimumFontSize:(float)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShouldDrawEmoji:(BOOL)arg1;
- (void)setShouldSizeToTextImageBounds:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextLayout:(id)arg1;
- (void)setTruncationSymbol:(id)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (BOOL)shouldDrawEmoji;
- (BOOL)shouldSizeToTextImageBounds;
- (id)string:(id)arg1 withCTFont:(struct __CTFont { }*)arg2;
- (struct CGSize { float x1; float x2; })suggestFrameSizeForString:(id)arg1 withConstraints:(struct CGSize { float x1; float x2; })arg2 fitsRange:(struct { int x1; int x2; }*)arg3;
- (struct CGSize { float x1; float x2; })suggestFrameSizeWithConstraints:(struct CGSize { float x1; float x2; })arg1 fitsRange:(struct { int x1; int x2; }*)arg2;
- (id)textColor;
- (id)textLayout;
- (id)textLayoutForString:(id)arg1 withConstraints:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;
- (id)truncationSymbol;

@end
