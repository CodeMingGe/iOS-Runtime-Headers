/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKAnnotationContainerViewDelegate>, UICalloutView, MKUserLocation, NSMapTable, NSMutableArray, MKUserLocationView, MKQuadTrie, NSMutableSet, MKAnnotationView, <MKAnnotation>;

@interface MKAnnotationContainerViewInternal : NSObject {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    BOOL animationsEnabled;
    <MKAnnotation> *annotationToSelect;
    NSMutableArray *annotationViews;
    float annotationViewsRotationRadians;
    NSMapTable *annotationsToViews;
    MKQuadTrie *annotationsTrie;
    NSMutableArray *awaitingDropPins;
    UICalloutView *bubble;
    MKAnnotationView *bubbleAnnotationView;
    UICalloutView *calculateBubble;
    BOOL calloutNeedsReset;
    Class calloutViewClass;
    BOOL clickedOnAnnotationView;
    <MKAnnotationContainerViewDelegate> *delegate;
    BOOL didAddUserLocationView;
    BOOL didDragAnnotationView;
    MKAnnotationView *draggingAnnotationView;
    } draggingAnnotationViewCenter;
    BOOL isAnimatingCallout;
    NSMutableArray *managedAnnotations;
    } mapTransform;
    unsigned int mapType;
    } mouseDownPoint;
    NSMutableSet *pendingAnnotations;
    BOOL registeredForAddressBookChanges;
    int restoreUserLocationViewUpdateMode;
    NSMapTable *reusableAnnotationViews;
    NSMutableArray *searchResultPins;
    MKAnnotationView *selectedAnnotationView;
    MKUserLocation *userLocation;
    MKUserLocationView *userLocationView;
    int userLocationViewUpdateMode;
    } visibleMapRect;
}

@end
