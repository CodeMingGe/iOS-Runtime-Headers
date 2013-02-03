/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAGradientLayer, UIImageView, UIView;

@interface PLSheetCardView : UIView {
    UIImageView *_bevel;
    UIView *_contentView;
    CAGradientLayer *_gradientLayer;
    UIView *_headerView;
    UIView *_paperBG;
    UIView *_paperTexture;
}

@property(readonly) UIView * contentView;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bevelRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_headerRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_paperBounds;
- (void)_setupSubviews;
- (void)_updateHeader;
- (id)contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
