/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject {
    AVMetadataFaceObjectInternal *_internal;
}

@property(readonly) int faceID;
@property(readonly) BOOL hasRollAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float rollAngle;
@property(readonly) float yawAngle;

+ (id)derivedFaceObjectFromFaceObject:(id)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 yaw:(float)arg3 roll:(float)arg4;
+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (void)dealloc;
- (id)description;
- (int)faceID;
- (BOOL)hasRollAngle;
- (BOOL)hasYawAngle;
- (id)initDerivedFaceObjectFromFaceObject:(id)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 yaw:(float)arg3 roll:(float)arg4;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)originalFaceObject;
- (float)rollAngle;
- (float)yawAngle;

@end
