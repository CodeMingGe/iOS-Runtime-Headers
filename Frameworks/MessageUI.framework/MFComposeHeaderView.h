/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFHeaderLabelView, NSString, UIView;

@interface MFComposeHeaderView : UIView {
    id _delegate;
    BOOL _drawsLetterpress;
    NSString *_label;
    MFHeaderLabelView *_labelView;
    NSString *_navTitle;
    UIView *_separator;
}

@property BOOL drawsLetterpress;

+ (float)defaultHeight;

- (id)_automationID;
- (BOOL)_canBecomeFirstResponder;
- (void)dealloc;
- (BOOL)drawsLetterpress;
- (void)handleTouchesEnded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGColor { }*)labelColor;
- (void)layoutSubviews;
- (float)maxLabelX;
- (id)navTitle;
- (void)setDelegate:(id)arg1;
- (void)setDrawsLetterpress:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelHighlighted:(BOOL)arg1;
- (void)setNavTitle:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
