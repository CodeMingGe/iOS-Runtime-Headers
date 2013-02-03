/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, VKPolylineOverlay, NSMutableSet, VKGlobeViewWrapper, <VKRouteMatchedAnnotationPresentation>;

@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver> {
    struct map<VKPolylineOverlay *, unsigned int, std::__1::less<VKPolylineOverlay *>, vk_allocator<std::__1::pair<VKPolylineOverlay *const, unsigned int>> > { 
        struct __tree<std::__1::pair<VKPolylineOverlay *, unsigned int>, std::__1::__map_value_compare<VKPolylineOverlay *, unsigned int, std::__1::less<VKPolylineOverlay *>, true>, vk_allocator<std::__1::pair<VKPolylineOverlay *, unsigned int>> > { 
            struct __tree_node<std::__1::pair<VKPolylineOverlay *, unsigned int>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, vk_allocator<std::__1::__tree_node<std::__1::pair<VKPolylineOverlay *, unsigned int>, void *>> > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<VKPolylineOverlay *, unsigned int, std::__1::less<VKPolylineOverlay *>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    BOOL _needsRepaint;
    NSMutableArray *_overlays;
    NSMutableSet *_persistentOverlays;
    <VKRouteMatchedAnnotationPresentation> *_routeLineSplitAnnotation;
    struct VKGlobeRouteSplit { int (**x1)(); id x2; } *_routeSplit;
    VKPolylineOverlay *_selectedPolyline;
    VKGlobeViewWrapper *_wrapper;
    } polylinesToLines;
}

@property BOOL needsRepaint;
@property(retain) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_recreateLineIfNeeded:(id)arg1;
- (void)_updateRouteSplit;
- (void)addLine:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)clearLineSelection;
- (void)dealloc;
- (id)initWithGlobeViewWrapper:(id)arg1;
- (BOOL)needsRepaint;
- (id)overlays;
- (id)persistentOverlays;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)removeLine:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)setNeedsRepaint:(BOOL)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setSelected:(id)arg1 selected:(BOOL)arg2;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)update;

@end
