/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIView, UIActionSheet, UIPopoverController, UIPopoverBackgroundView;

@interface _UIPopoverView : UIView {
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIView *_contentView;
    UIPopoverController *_popoverController;
    UIActionSheet *_presentedActionSheet;
    BOOL _showsBackgroundComponentHighlights;
    BOOL _showsBackgroundViewHighlight;
    BOOL _showsContentViewHighlight;
    UIImageView *_toolbarShine;
}

@property unsigned int arrowDirection;
@property float arrowOffset;
@property int backgroundStyle;
@property UIPopoverController * popoverController;
@property(retain) UIActionSheet * presentedActionSheet;
@property BOOL showsBackgroundComponentHighlights;
@property BOOL showsBackgroundViewHighlight;
@property BOOL showsContentViewHighlight;

+ (id)popoverViewContainingView:(id)arg1;

- (BOOL)_allowsCustomizationOfContent;
- (void)_hideArrow;
- (BOOL)_isIgnoringTapsInDimmingView;
- (void)_layoutToolbarShine;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_presentationInPopoverDidBeginForViewController:(id)arg1;
- (void)_presentationInPopoverDidEndForViewController:(id)arg1;
- (void)_presentationInPopoverWillBeginForViewController:(id)arg1;
- (void)_presentationInPopoverWillEndForViewController:(id)arg1;
- (void)_setCornerRadius:(float)arg1;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowOffset:(float)arg2;
- (void)_setIgnoreTapsInDimmingView:(BOOL)arg1;
- (void)_showArrow;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_snapshotBounds;
- (int)_style;
- (id)_viewForModalPresentationOfViewController:(id)arg1;
- (unsigned int)arrowDirection;
- (float)arrowOffset;
- (int)backgroundStyle;
- (id)backgroundView;
- (id)contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 backgroundViewClass:(Class)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)motionBegan:(int)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(int)arg1 withEvent:(id)arg2;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (id)popoverController;
- (id)presentedActionSheet;
- (void)setArrowDirection:(unsigned int)arg1;
- (void)setArrowOffset:(float)arg1;
- (void)setBackgroundStyle:(int)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentedActionSheet:(id)arg1;
- (void)setShowsBackgroundComponentHighlights:(BOOL)arg1;
- (void)setShowsBackgroundViewHighlight:(BOOL)arg1;
- (void)setShowsContentViewHighlight:(BOOL)arg1;
- (void)setUseToolbarShine:(BOOL)arg1;
- (BOOL)showsBackgroundComponentHighlights;
- (BOOL)showsBackgroundViewHighlight;
- (BOOL)showsContentViewHighlight;
- (id)standardChromeView;
- (BOOL)toolbarIsVisible;
- (id)toolbarShine;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)viewController;
- (void)willMoveToWindow:(id)arg1;

@end
