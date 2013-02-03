/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture;

@interface VGLSingleTexturedCullableMesh : VGLCullableMesh {
    VGLTexture *_texture;
}

@property(retain) VGLTexture * texture;

- (void)dealloc;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 numRects:(unsigned int)arg2 context:(id)arg3;
- (void)drawTrianglesWithContext:(id)arg1;
- (id)init;
- (void)setTexture:(id)arg1;
- (id)texture;

@end
