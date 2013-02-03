/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSData, NSObject<OS_dispatch_queue>;

@interface WLImage : NSObject <NSSecureCoding> {
    struct WLEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _capInsets;
    NSData *_imageData;
    struct CGImage { } *_imageRef;
    int _orientation;
    NSObject<OS_dispatch_queue> *_queue;
    float _scale;
    BOOL _shouldStretch;
    BOOL _shouldTile;
}

@property(readonly) struct WLEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;
@property(readonly) NSData * imageData;
@property(readonly) struct CGImage { }* imageRef;
@property(readonly) int orientation;
@property(readonly) float scale;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) BOOL stretches;
@property(readonly) BOOL tiles;

+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(float*)arg3;
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)passesImageNamed:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_queue_createImageRefIfNecessary;
- (id)blurredImageWithRadius:(unsigned int)arg1 constraints:(id)arg2;
- (struct WLEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (void)dealloc;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withBlendMode:(int)arg3 alpha:(float)arg4;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)notificationIconData;
- (int)orientation;
- (void)preheatBitmapData;
- (id)resizableImageByStretchingWithCapInsets:(struct WLEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)resizableImageByTilingCenterPixel;
- (id)resizableImageByTilingWithCapInsets:(struct WLEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)resizedImageWithConstraints:(id)arg1;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)stretches;
- (BOOL)tiles;

@end
