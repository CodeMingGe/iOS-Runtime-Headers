/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CALight : NSObject <NSCopying, NSCoding> {
    void *_attr;
    void *_priv;
}

@property float ambientIntensity;
@property struct CGColor { }* color;
@property float coneAngle;
@property float coneEdgeSoftness;
@property float diffuseIntensity;
@property struct CAPoint3D { float x1; float x2; float x3; } direction;
@property(getter=isEnabled) BOOL enabled;
@property float falloff;
@property float falloffDistance;
@property(retain) id image;
@property(copy) NSString * imageBlendMode;
@property float imageNormalAngle;
@property float imageRotation;
@property float intensity;
@property(copy) NSString * name;
@property struct CAPoint3D { float x1; float x2; float x3; } position;
@property float specularIntensity;
@property(copy) NSString * type;

+ (id)defaultValueForKey:(id)arg1;
+ (id)lightWithType:(id)arg1;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (float)ambientIntensity;
- (struct CGColor { }*)color;
- (float)coneAngle;
- (float)coneEdgeSoftness;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)diffuseIntensity;
- (struct CAPoint3D { float x1; float x2; float x3; })direction;
- (void)encodeWithCoder:(id)arg1;
- (float)falloff;
- (float)falloffDistance;
- (id)image;
- (id)imageBlendMode;
- (float)imageNormalAngle;
- (float)imageRotation;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;
- (float)intensity;
- (BOOL)isEnabled;
- (id)name;
- (struct CAPoint3D { float x1; float x2; float x3; })position;
- (void)setAmbientIntensity:(float)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setConeAngle:(float)arg1;
- (void)setConeEdgeSoftness:(float)arg1;
- (void)setDiffuseIntensity:(float)arg1;
- (void)setDirection:(struct CAPoint3D { float x1; float x2; float x3; })arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFalloff:(float)arg1;
- (void)setFalloffDistance:(float)arg1;
- (void)setImage:(id)arg1;
- (void)setImageBlendMode:(id)arg1;
- (void)setImageNormalAngle:(float)arg1;
- (void)setImageRotation:(float)arg1;
- (void)setIntensity:(float)arg1;
- (void)setName:(id)arg1;
- (void)setPosition:(struct CAPoint3D { float x1; float x2; float x3; })arg1;
- (void)setSpecularIntensity:(float)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (float)specularIntensity;
- (id)type;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
