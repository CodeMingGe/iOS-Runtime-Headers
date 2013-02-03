/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKMapMatch : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    } coordinateOnFeature;
    double courseOnFeature;
    float distanceFromJunction;
    NSString *featureName;
}

@property(readonly) struct { double x1; double x2; } coordinateOnFeature;
@property(readonly) double courseOnFeature;
@property(readonly) float distanceFromJunction;
@property(readonly) NSString * featureName;

- (struct { double x1; double x2; })coordinateOnFeature;
- (double)courseOnFeature;
- (void)dealloc;
- (id)description;
- (float)distanceFromJunction;
- (id)featureName;
- (id)initWithGEORoadFeature:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)arg1 pointOnFeature:(struct { double x1; double x2; double x3; })arg2 courseOnFeature:(float)arg3 distanceFromJunction:(float)arg4;

@end
