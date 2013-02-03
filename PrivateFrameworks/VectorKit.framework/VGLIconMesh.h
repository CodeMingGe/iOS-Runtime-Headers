/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLIconMesh : NSObject {
    struct unordered_map<VGLUncompressedTexture *, VGLIconSubMesh *, std::__1::hash<VGLUncompressedTexture *>, std::__1::equal_to<VGLUncompressedTexture *>, std::__1::allocator<std::__1::pair<VGLUncompressedTexture *const, VGLIconSubMesh *>> > { 
        struct __hash_table<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, std::__1::__unordered_map_hasher<VGLUncompressedTexture *, VGLIconSubMesh *, std::__1::hash<VGLUncompressedTexture *>, true>, std::__1::__unordered_map_equal<VGLUncompressedTexture *, VGLIconSubMesh *, std::__1::equal_to<VGLUncompressedTexture *>, true>, std::__1::allocator<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>> > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *>> > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *>> > { 
                    struct __hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *>> > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> *> { 
                    struct __hash_node<std::__1::pair<VGLUncompressedTexture *, VGLIconSubMesh *>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<VGLUncompressedTexture *, VGLIconSubMesh *, std::__1::hash<VGLUncompressedTexture *>, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<VGLUncompressedTexture *, VGLIconSubMesh *, std::__1::equal_to<VGLUncompressedTexture *>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    } _textureToSubmeshes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addIcon:(id)arg1 corners:(const struct { float x1; float x2; }*)arg2 alpha:(float)arg3 snapToPixels:(BOOL)arg4;
- (void)addIcon:(id)arg1 point:(struct { float x1; float x2; })arg2 alpha:(float)arg3 snapToPixels:(BOOL)arg4;
- (void)dealloc;
- (void)drawDebug:(id)arg1;
- (void)drawWithContext:(id)arg1;
- (void)purge;
- (void)reset;

@end
