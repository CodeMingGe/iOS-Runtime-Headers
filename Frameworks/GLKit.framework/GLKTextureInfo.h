/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureInfo : NSObject <NSCopying> {
    unsigned int alphaState;
    BOOL containsMipmaps;
    unsigned int height;
    unsigned int name;
    unsigned int target;
    unsigned int textureOrigin;
    unsigned int width;
}

@property(readonly) unsigned int alphaState;
@property(readonly) BOOL containsMipmaps;
@property(readonly) unsigned int height;
@property(readonly) unsigned int name;
@property(readonly) unsigned int target;
@property(readonly) unsigned int textureOrigin;
@property(readonly) unsigned int width;

- (unsigned int)alphaState;
- (BOOL)containsMipmaps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)height;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;
- (unsigned int)name;
- (unsigned int)target;
- (unsigned int)textureOrigin;
- (unsigned int)width;

@end
