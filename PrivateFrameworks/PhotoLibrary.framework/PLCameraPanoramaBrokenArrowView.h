/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAShapeLayer, UIImageView, UIView;

@interface PLCameraPanoramaBrokenArrowView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    UIImageView *_arrowTailGlow;
    CAShapeLayer *_arrowTailPiecesLayer;
    } _arrowTailRect;
    float _currentNormalizedSpeed;
    struct CGPath { } *_currentTailPiecesPath;
    float _tailBigDelta;
    float _tailBiggestDelta;
    float _tailMediumDelta;
    float _tailSmallDelta;
}

- (struct CGPath { }*)_newTailPiecesPathOfWidth:(float*)arg1;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (void)animateArrowSpeedWithNormalizedSpeed:(float)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)resetArrow;

@end
