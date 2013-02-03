/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl : UIControl {
    UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;
    BOOL _visible;
}

@property(getter=isVisible) BOOL visible;

+ (struct CGSize { float x1; float x2; })defaultSizeForTitle:(id)arg1;

- (void)_confirmationAnimationDidEnd;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelDeleteConfirmationWithGesture:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })defaultSize;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (BOOL)isVisible;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVisible:(BOOL)arg1;
- (void)touchUpInside:(id)arg1;
- (void)touchUpOutside:(id)arg1;

@end
