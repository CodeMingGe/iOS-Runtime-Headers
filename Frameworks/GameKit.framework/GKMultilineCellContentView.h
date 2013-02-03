/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray;

@interface GKMultilineCellContentView : GKImageCellContents {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIImage *_accessoryImage;
    } _accessoryImageInsets;
    } _confirmationButtonRect;
    } _contentInsets;
    int _disclosureStyle;
    BOOL _highlighted;
    NSArray *_lines;
    } _textInsets;
}

@property(retain) UIImage * accessoryImage;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } accessoryImageInsets;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property int disclosureStyle;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) NSArray * lines;
@property(readonly) BOOL showingConfirmationButton;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textInsets;

+ (id)oneLineContentViewWithTheme:(id)arg1;
+ (id)threeLineContentViewWithTheme:(id)arg1 shouldHighlight:(BOOL)arg2;
+ (id)threeLineContentViewWithTheme:(id)arg1;
+ (id)twoLineContentViewWithTheme:(id)arg1;

- (id)accessibilityLabel;
- (id)accessoryImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })accessoryImageInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryImageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)adjustLineRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forLines:(id)arg2 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })confirmationButtonRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (int)disclosureStyle;
- (void)drawLines:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithNumberOfLines:(unsigned int)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isHighlighted;
- (id)lineAtIndex:(unsigned int)arg1;
- (id)lines;
- (void)prepareForReuse;
- (void)setAccessoryImage:(id)arg1;
- (void)setAccessoryImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setAttributedHighlightedText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setAttributedText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setConfirmationButtonRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDisclosureStyle:(int)arg1;
- (void)setFont:(id)arg1 forLine:(unsigned int)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLines:(id)arg1;
- (void)setText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setTextColor:(id)arg1 forLine:(unsigned int)arg2;
- (void)setTextInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)showingConfirmationButton;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
