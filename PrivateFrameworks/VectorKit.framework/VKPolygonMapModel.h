/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLRenderState;

@interface VKPolygonMapModel : VKVectorMapModel {
    BOOL _drawShapes;
    VGLRenderState *_renderState;
    int _renderStepCount;
    int _renderStepMax;
    struct { id x1; id x2; BOOL x3; BOOL x4; struct _VGLColor { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; struct _VGLColor { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; float x7; unsigned int x8; } *_renderSteps;
}

@property BOOL drawShapes;

- (void)dealloc;
- (void)drawCoastlinesWithContext:(id)arg1;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawPolygonsWithContext:(id)arg1;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (BOOL)drawShapes;
- (id)init;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (void)reset;
- (void)setDrawShapes:(BOOL)arg1;
- (unsigned int)textureSize;

@end
