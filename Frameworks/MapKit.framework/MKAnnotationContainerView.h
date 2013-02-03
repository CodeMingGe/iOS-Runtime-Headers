/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKAnnotationContainerViewInternal, NSArray, MKPinAnnotationView, MKAnnotationView, NSMutableArray;

@interface MKAnnotationContainerView : UIView {
    MKAnnotationContainerViewInternal *_internal;
    NSMutableArray *_orderedAnnotations;
}

@property(readonly) NSArray * annotations;
@property(retain) MKAnnotationView * bubbleAnnotationView;
@property(readonly) MKPinAnnotationView * bubblePin;
@property Class calloutViewClass;
@property(copy) NSArray * selectedAnnotations;

- (void)_addCallout:(id)arg1 forAnnotationView:(id)arg2 anchorPoint:(struct CGPoint { float x1; float x2; })arg3 boundaryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animated:(BOOL)arg5;
- (id)_addViewForAnnotation:(id)arg1;
- (void)_addViewsForAnnotations:(id)arg1 animated:(BOOL)arg2;
- (id)_annotationViewForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })_bubbleAnchorPoint;
- (void)_calloutAccessoryControlTapped:(id)arg1;
- (void)_deselectAnnotationView;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2;
- (void)_deselectAnnotationViewWithAnimation:(BOOL)arg1;
- (void)_displayAnnotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includePending:(BOOL)arg2 animated:(BOOL)arg3 removeOffscreenAnnotations:(BOOL)arg4;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_displayRect;
- (void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1;
- (void)_dropPinsIfNeeded:(id)arg1 animated:(BOOL)arg2;
- (void)_findNextView:(id*)arg1 orientation:(int*)arg2 context:(id)arg3;
- (void)_liftForDragging:(id)arg1 mouseDownPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFraction:(double)arg1 ofVisible:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_notifyAddedAnnotationViews:(id)arg1 animated:(BOOL)arg2;
- (void)_refreshDisplayedAnnotations;
- (void)_registerObserverForAnnotation:(id)arg1;
- (void)_registerObserverForBubbleAnnotation:(id)arg1;
- (BOOL)_registeredForAddressBookChanges;
- (void)_removeAnnotationView:(id)arg1 updateCollections:(BOOL)arg2;
- (void)_removeAnnotationView:(id)arg1;
- (void)_removeAnnotationViews:(id)arg1;
- (void)_removeAnnotationViewsExcludingAnnotation:(id)arg1 ofClassType:(Class)arg2;
- (void)_removeBubbleWithAnimation:(BOOL)arg1 tellDelegate:(BOOL)arg2;
- (void)_removeBubbleWithAnimation:(BOOL)arg1;
- (void)_replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)_resetAnnotationViewPerspective;
- (void)_scrollToBubble;
- (void)_setRegisteredForAddressBookChanges:(BOOL)arg1;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5;
- (void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3;
- (void)_unregisterObserverForAnnotation:(id)arg1;
- (void)_unregisterObserverForBubbleAnnotation:(id)arg1;
- (void)_updateAnnotationView:(id)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)_updateBubble;
- (void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViews:(id)arg1;
- (void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(id)arg3;
- (void)_userLocationInView:(id)arg1 frame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 center:(struct CADoublePoint { double x1; double x2; }*)arg3 accuracy:(float*)arg4 location:(id)arg5;
- (void)_userLocationInView:(id)arg1 frame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 center:(struct CADoublePoint { double x1; double x2; }*)arg3 accuracy:(float*)arg4;
- (BOOL)_userLocationPosition:(struct CADoublePoint { double x1; double x2; }*)arg1 bounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 accuracy:(float*)arg3 location:(id)arg4;
- (id)_viewForInternalAnnotation:(id)arg1;
- (id)_viewForUserLocationAnnotation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleCenteringRectInView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRect;
- (void)_willRemoveInternalAnnotationView:(id)arg1;
- (struct CGSize { float x1; float x2; })accessoryPadding;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addManagedAnnotation:(id)arg1;
- (void)addOrderedAnnotations:(id)arg1;
- (void)addSubview:(id)arg1;
- (id)addViewForManagedAnnotation:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)annotationViewDidChangeZIndex:(id)arg1;
- (id)annotationViewForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)annotationViews;
- (void)annotationViewsDidChangeZIndex:(id)arg1;
- (id)annotations;
- (id)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bubbleAnnotationView;
- (id)bubblePin;
- (id)calloutAnnotationView;
- (void)calloutView:(id)arg1 didMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)calloutView:(id)arg1 willMoveToAnchorPoint:(struct CGPoint { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (id)calloutView;
- (Class)calloutViewClass;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { double x1; double x2; })coordinateForAnnotationView:(id)arg1;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; id x5; BOOL x6; })currentComparisonContext;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (BOOL)didAddUserLocationView;
- (void)draggingTouchMovedToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)forEachAnnotation:(id)arg1;
- (BOOL)freezeUserLocationView;
- (BOOL)hasDroppingPins;
- (BOOL)hasPendingAnimations;
- (unsigned int)indexForAnnotationView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAnimationsEnabled;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })mapTransform;
- (unsigned int)mapType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pinDidDrop:(id)arg1 animated:(BOOL)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotationViewsRotationAnimations;
- (void)removeAnnotations:(id)arg1;
- (void)resetBubble;
- (void)resetUserLocation;
- (void)restoreUserLocationViewUpdateMode;
- (id)searchResultPins;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (id)selectedAnnotations;
- (void)setAnimationsEnabled:(BOOL)arg1;
- (void)setAnnotationViewsRotationRadians:(float)arg1 animation:(id)arg2;
- (void)setBubbleAnnotationView:(id)arg1;
- (void)setCalloutViewClass:(Class)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidAddUserLocationView:(BOOL)arg1;
- (void)setMapTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setMapType:(unsigned int)arg1;
- (void)setSelectedAnnotations:(id)arg1;
- (void)setUserLocationView:(id)arg1;
- (void)setUserLocationViewUpdateMode:(int)arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)showAddedAnnotationsAnimated:(BOOL)arg1;
- (void)showAnnotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showBubbleAfterRegionChange;
- (void)showBubbleAfterScroll;
- (void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1;
- (void)updateUserLocationView:(BOOL)arg1;
- (void)updateUserLocationView;
- (id)userLocation;
- (BOOL)userLocationAnnotationDidHide;
- (BOOL)userLocationAnnotationWillShow;
- (id)userLocationView;
- (int)userLocationViewUpdateMode;
- (id)viewForAnnotation:(id)arg1;

@end
