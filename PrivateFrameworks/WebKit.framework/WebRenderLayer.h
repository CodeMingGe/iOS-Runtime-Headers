/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface WebRenderLayer : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    NSArray *children;
    BOOL composited;
    NSString *compositingInfo;
    NSString *name;
    BOOL separator;
}

+ (id)compositingInfoForLayer:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 1; struct IntPoint { int x_9_1_1; int x_9_1_2; } x9; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 2; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 3; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; struct RenderBoxModelObject {} *x35; struct RenderLayer {} *x36; struct RenderLayer {} *x37; struct RenderLayer {} *x38; struct RenderLayer {} *x39; struct RenderLayer {} *x40; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_41_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_41_1_2; } x41; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_42_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_42_1_2; } x42; struct IntSize { int x_43_1_1; int x_43_1_2; } x43; struct IntPoint { int x_44_1_1; int x_44_1_2; } x44; struct IntSize { int x_45_1_1; int x_45_1_2; } x45; struct IntSize { int x_46_1_1; int x_46_1_2; } x46; struct IntSize { int x_47_1_1; int x_47_1_2; } x47; struct IntSize { int x_48_1_1; int x_48_1_2; } x48; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_49_1_1; } x49; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_50_1_1; } x50; struct Vector<WebCore::RenderLayer *, 0> {} *x51; struct Vector<WebCore::RenderLayer *, 0> {} *x52; struct Vector<WebCore::RenderLayer *, 0> {} *x53; struct OwnPtr<WebCore::ClipRectsCache> { struct ClipRectsCache {} *x_54_1_1; } x54; struct IntPoint { int x_55_1_1; int x_55_1_2; } x55; struct RenderMarquee {} *x56; int x57; int x58; struct OwnPtr<WebCore::TransformationMatrix> { struct TransformationMatrix {} *x_59_1_1; } x59; struct RenderReplica {} *x60; struct RenderScrollbarPart {} *x61; struct RenderScrollbarPart {} *x62; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_63_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_63_1_2; } x63; struct OwnPtr<WebCore::RenderLayerBacking> { struct RenderLayerBacking {} *x_64_1_1; } x64; }*)arg1;
+ (id)nameForLayer:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 1; struct IntPoint { int x_9_1_1; int x_9_1_2; } x9; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 2; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 3; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; struct RenderBoxModelObject {} *x35; struct RenderLayer {} *x36; struct RenderLayer {} *x37; struct RenderLayer {} *x38; struct RenderLayer {} *x39; struct RenderLayer {} *x40; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_41_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_41_1_2; } x41; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_42_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_42_1_2; } x42; struct IntSize { int x_43_1_1; int x_43_1_2; } x43; struct IntPoint { int x_44_1_1; int x_44_1_2; } x44; struct IntSize { int x_45_1_1; int x_45_1_2; } x45; struct IntSize { int x_46_1_1; int x_46_1_2; } x46; struct IntSize { int x_47_1_1; int x_47_1_2; } x47; struct IntSize { int x_48_1_1; int x_48_1_2; } x48; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_49_1_1; } x49; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_50_1_1; } x50; struct Vector<WebCore::RenderLayer *, 0> {} *x51; struct Vector<WebCore::RenderLayer *, 0> {} *x52; struct Vector<WebCore::RenderLayer *, 0> {} *x53; struct OwnPtr<WebCore::ClipRectsCache> { struct ClipRectsCache {} *x_54_1_1; } x54; struct IntPoint { int x_55_1_1; int x_55_1_2; } x55; struct RenderMarquee {} *x56; int x57; int x58; struct OwnPtr<WebCore::TransformationMatrix> { struct TransformationMatrix {} *x_59_1_1; } x59; struct RenderReplica {} *x60; struct RenderScrollbarPart {} *x61; struct RenderScrollbarPart {} *x62; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_63_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_63_1_2; } x63; struct OwnPtr<WebCore::RenderLayerBacking> { struct RenderLayerBacking {} *x_64_1_1; } x64; }*)arg1;

- (id).cxx_construct;
- (void)buildDescendantLayers:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 1; struct IntPoint { int x_9_1_1; int x_9_1_2; } x9; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 2; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 3; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; struct RenderBoxModelObject {} *x35; struct RenderLayer {} *x36; struct RenderLayer {} *x37; struct RenderLayer {} *x38; struct RenderLayer {} *x39; struct RenderLayer {} *x40; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_41_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_41_1_2; } x41; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_42_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_42_1_2; } x42; struct IntSize { int x_43_1_1; int x_43_1_2; } x43; struct IntPoint { int x_44_1_1; int x_44_1_2; } x44; struct IntSize { int x_45_1_1; int x_45_1_2; } x45; struct IntSize { int x_46_1_1; int x_46_1_2; } x46; struct IntSize { int x_47_1_1; int x_47_1_2; } x47; struct IntSize { int x_48_1_1; int x_48_1_2; } x48; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_49_1_1; } x49; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_50_1_1; } x50; struct Vector<WebCore::RenderLayer *, 0> {} *x51; struct Vector<WebCore::RenderLayer *, 0> {} *x52; struct Vector<WebCore::RenderLayer *, 0> {} *x53; struct OwnPtr<WebCore::ClipRectsCache> { struct ClipRectsCache {} *x_54_1_1; } x54; struct IntPoint { int x_55_1_1; int x_55_1_2; } x55; struct RenderMarquee {} *x56; int x57; int x58; struct OwnPtr<WebCore::TransformationMatrix> { struct TransformationMatrix {} *x_59_1_1; } x59; struct RenderReplica {} *x60; struct RenderScrollbarPart {} *x61; struct RenderScrollbarPart {} *x62; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_63_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_63_1_2; } x63; struct OwnPtr<WebCore::RenderLayerBacking> { struct RenderLayerBacking {} *x_64_1_1; } x64; }*)arg1;
- (id)children;
- (id)compositingInfo;
- (void)dealloc;
- (id)heightString;
- (id)initWithName:(id)arg1;
- (id)initWithRenderLayer:(struct RenderLayer { int (**x1)(); struct OwnPtr<WebCore::ScrollAnimator> { struct ScrollAnimator {} *x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; unsigned int x6 : 2; unsigned int x7 : 2; unsigned int x8 : 1; struct IntPoint { int x_9_1_1; int x_9_1_2; } x9; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 2; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 3; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; struct RenderBoxModelObject {} *x35; struct RenderLayer {} *x36; struct RenderLayer {} *x37; struct RenderLayer {} *x38; struct RenderLayer {} *x39; struct RenderLayer {} *x40; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_41_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_41_1_2; } x41; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_42_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_42_1_2; } x42; struct IntSize { int x_43_1_1; int x_43_1_2; } x43; struct IntPoint { int x_44_1_1; int x_44_1_2; } x44; struct IntSize { int x_45_1_1; int x_45_1_2; } x45; struct IntSize { int x_46_1_1; int x_46_1_2; } x46; struct IntSize { int x_47_1_1; int x_47_1_2; } x47; struct IntSize { int x_48_1_1; int x_48_1_2; } x48; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_49_1_1; } x49; struct RefPtr<WebCore::Scrollbar> { struct Scrollbar {} *x_50_1_1; } x50; struct Vector<WebCore::RenderLayer *, 0> {} *x51; struct Vector<WebCore::RenderLayer *, 0> {} *x52; struct Vector<WebCore::RenderLayer *, 0> {} *x53; struct OwnPtr<WebCore::ClipRectsCache> { struct ClipRectsCache {} *x_54_1_1; } x54; struct IntPoint { int x_55_1_1; int x_55_1_2; } x55; struct RenderMarquee {} *x56; int x57; int x58; struct OwnPtr<WebCore::TransformationMatrix> { struct TransformationMatrix {} *x_59_1_1; } x59; struct RenderReplica {} *x60; struct RenderScrollbarPart {} *x61; struct RenderScrollbarPart {} *x62; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_63_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_63_1_2; } x63; struct OwnPtr<WebCore::RenderLayerBacking> { struct RenderLayerBacking {} *x_64_1_1; } x64; }*)arg1;
- (id)initWithWebFrame:(id)arg1;
- (BOOL)isComposited;
- (BOOL)isSeparator;
- (id)name;
- (id)positionString;
- (id)widthString;

@end
