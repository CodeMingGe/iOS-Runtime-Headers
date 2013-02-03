/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
 */

@class NSObject<ACTQuaggaSessionDelegate>, ACQuaggaSessionACT;

@interface ACTQuaggaSession : NSObject <ACQuaggaSessionDelegateACT> {
    ACQuaggaSessionACT *_brain;
    NSObject<ACTQuaggaSessionDelegate> *delegate;
}

@property NSObject<ACTQuaggaSessionDelegate> * delegate;

- (void)ACTsession:(id)arg1 didRecognizeACT:(id)arg2 frameInfo:(id)arg3;
- (id)cobraTypesToDecode;
- (void)dealloc;
- (id)delegate;
- (id)initWithOptions:(id)arg1;
- (void)processCGImageRef:(struct CGImage { }*)arg1 interestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 orientation:(int)arg3;
- (void)processCVPixelBuffer:(struct __CVBuffer { }*)arg1 interestRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 orientation:(int)arg3;
- (void)setCobraTypesToDecode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)supportedCobraTypes;

@end
