/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, UIView;

@interface GKDetailHeaderView : UIView {
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
    float _accessoryHeightBelowFrame;
    float _accessoryMarginX;
    float _accessoryMarginY;
    UIView *_accessoryView;
    } _backgroundInsets;
    UIImageView *_backgroundView;
    } _contentInsets;
    float _maxWidth;
    BOOL _shouldUseNarrowWoodenFrame;
    BOOL _showsWoodenFrame;
}

@property float accessoryHeightBelowFrame;
@property float accessoryMarginX;
@property float accessoryMarginY;
@property(retain) UIView * accessoryView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property(retain) UIImageView * backgroundView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property float maxWidth;
@property BOOL shouldUseNarrowWoodenFrame;
@property BOOL showsWoodenFrame;

- (BOOL)_usePadUI;
- (float)accessoryHeightBelowFrame;
- (float)accessoryMarginX;
- (float)accessoryMarginY;
- (id)accessoryView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (id)backgroundView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (void)dealloc;
- (id)framedHeaderBackgroundImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)invalidateBackgroundImage;
- (void)layoutAccessoryViewForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutSubviewsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutWoodenFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)maxWidth;
- (void)setAccessoryHeightBelowFrame:(float)arg1;
- (void)setAccessoryMarginX:(float)arg1;
- (void)setAccessoryMarginY:(float)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setShouldUseNarrowWoodenFrame:(BOOL)arg1;
- (void)setShowsWoodenFrame:(BOOL)arg1;
- (BOOL)shouldUseNarrowWoodenFrame;
- (BOOL)showsWoodenFrame;

@end
