/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _VKCalloutWrapperView, UIView<VKInteractiveMap>, UIPopoverController, UICalloutView, <VKCalloutControllerDelegate>, <VKCalloutSource>;

@interface VKCalloutController : VKModelObject <VKMapLayer> {
    struct CGPoint { 
        float x; 
        float y; 
    id _accessoryTapHandler;
    } _anchorPoint;
    UIView<VKInteractiveMap> *_calloutContainerView;
    <VKCalloutSource> *_calloutSource;
    UICalloutView *_calloutView;
    Class _calloutViewClass;
    _VKCalloutWrapperView *_calloutWrapperView;
    <VKCalloutControllerDelegate> *_delegate;
    id _hideCallback;
    id _nextLayoutBlock;
    UIPopoverController *_popoverController;
}

@property UIView<VKInteractiveMap> * calloutContainerView;
@property(readonly) <VKCalloutSource> * calloutSource;
@property Class calloutViewClass;
@property <VKCalloutControllerDelegate> * delegate;

- (void)_calloutAccessoryControlTapped:(id)arg1;
- (struct CGPoint { float x1; float x2; })_calloutAnchorPoint;
- (id)_calloutWrapperView;
- (void)_showCalloutAnimated:(BOOL)arg1 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 afterPan:(BOOL)arg3 additionalInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (id)calloutContainerView;
- (id)calloutPopoverController;
- (id)calloutSource;
- (Class)calloutViewClass;
- (void)dealloc;
- (id)delegate;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)hideCalloutAnimated:(BOOL)arg1;
- (id)init;
- (BOOL)isCalloutExpanded;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (void)replaceSourceWithSource:(id)arg1;
- (void)setCalloutContainerView:(id)arg1;
- (void)setCalloutViewClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)showCalloutWithSource:(id)arg1 animated:(BOOL)arg2 accessoryTapHandler:(id)arg3 hideCallback:(id)arg4;
- (void)showCalloutWithSource:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 accessoryTapHandler:(id)arg4 hideCallback:(id)arg5;
- (void)updateCalloutAnimated:(BOOL)arg1;

@end
