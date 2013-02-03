/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSOperationQueue, NSMutableArray;

@interface OSDRawAmbientLightDevice : NSObject {
    struct __IOHIDServiceClient { } *_AmbientLightPlugin;
    struct __IOHIDEventSystemClient { } *_HIDSystemClient;
    NSOperationQueue *_operationQueue;
    SEL _registeredCallback;
    id _registeredDelegate;
    NSMutableArray *_samples;
}

@property struct __IOHIDServiceClient { }* _AmbientLightPlugin;

- (struct __IOHIDServiceClient { }*)_AmbientLightPlugin;
- (void)dealloc;
- (void)enqueueCallback:(id)arg1;
- (struct __IOHIDServiceClient { }*)getAmbientLightPlugin;
- (struct __IOHIDEventSystemClient { }*)getHIDSystem;
- (id)init;
- (int)registerAmbientLightCallback:(SEL)arg1 delegate:(id)arg2 operationQueue:(id)arg3 sampleInterval:(float)arg4 testMode:(BOOL)arg5 monitorMode:(BOOL)arg6;
- (int)registerAmbientLightCallbackIOKit:(float)arg1 testMode:(BOOL)arg2 monitorMode:(BOOL)arg3;
- (id)sampleForDuration:(float)arg1 sampleInterval:(float)arg2 testMode:(BOOL)arg3 monitorMode:(BOOL)arg4;
- (void)sampleForDurationCallback:(id)arg1;
- (void)set_AmbientLightPlugin:(struct __IOHIDServiceClient { }*)arg1;
- (void)unregisterAmbientLightCallback;
- (void)unregisterAmbientLightCallbackIOKit;

@end
