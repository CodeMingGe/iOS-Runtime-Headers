/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateBarSegmentControl;

@interface UIKeyboardCandidatePageControl : UIView {
    UIKeyboardCandidateBarSegmentControl *_pageControl;
    BOOL _usingVerticalArrows;
}

- (void)_changePage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setUseVerticalArrows:(BOOL)arg1;
- (void)updatePageControlWithStatus:(BOOL)arg1 rightControlButtonEnabled:(BOOL)arg2;

@end
