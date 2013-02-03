/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLContext;

@interface VGLTexturePool : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    VGLContext *_context;
    } _textureSize;
    struct vector<unsigned int, vk_allocator<unsigned int> > { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, vk_allocator<unsigned int> > { unsigned int *x_3_1_1; } x3; } *_tokens;
}

- (id).cxx_construct;
- (id)checkoutTexture;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1 textureSize:(struct CGSize { float x1; float x2; })arg2 scale:(int)arg3 context:(id)arg4;

@end
