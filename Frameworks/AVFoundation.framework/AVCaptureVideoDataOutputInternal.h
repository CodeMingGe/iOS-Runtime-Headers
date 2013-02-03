/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureVideoDataOutputSampleBufferDelegate>, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutputInternal : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    BOOL alwaysDiscardsLateVideoFrames;
    NSObject<OS_dispatch_queue> *clientQueue;
    <AVCaptureVideoDataOutputSampleBufferDelegate> *delegate;
    } deprecatedMinFrameDuration;
    NSDictionary *videoSettings;
}

- (void)dealloc;
- (id)init;

@end
