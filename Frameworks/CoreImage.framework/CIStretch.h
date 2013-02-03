/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector;

@interface CIStretch : CIFilter {
    CIImage *inputImage;
    CIVector *inputPoint;
    CIVector *inputSize;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputPoint;
@property(copy) CIVector * inputSize;

+ (id)customAttributes;

- (id)_kernel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeDOD:(struct vec4 { float x1; float x2; float x3; float x4; })arg1;
- (id)inputImage;
- (id)inputPoint;
- (id)inputSize;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint:(id)arg1;
- (void)setInputSize:(id)arg1;

@end
