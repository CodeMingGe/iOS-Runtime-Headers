/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UILayoutContainerView : UIView <NSCoding> {
    float _cornerRadius;
    id _delegate;
    UIView *_shadowView;
    BOOL _shadowViewsInstalled;
    BOOL _usesInnerShadow;
    BOOL _usesRoundedCorners;
}

@property id delegate;
@property BOOL usesInnerShadow;
@property BOOL usesRoundedCorners;

- (void)_installShadowViews;
- (void)_tearDownShadowViews;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUsesInnerShadow:(BOOL)arg1;
- (void)setUsesRoundedCorners:(BOOL)arg1;
- (BOOL)usesInnerShadow;
- (BOOL)usesRoundedCorners;

@end
