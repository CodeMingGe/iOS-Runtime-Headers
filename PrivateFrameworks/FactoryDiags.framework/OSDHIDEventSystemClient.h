/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSArray;

@interface OSDHIDEventSystemClient : NSObject {
    int (*_callback)();
    BOOL __unitTest_timedOut;
    SEL _callbackSel;
    void *_cbContext;
    void *_cbTarget;
    int _eventState;
    struct __IOHIDEventSystemClient { } *_hidClient;
    NSMutableArray *_matchingServices;
}

@property(readonly) struct __IOHIDEventSystemClient { }* ioHIDClient;
@property(readonly) NSArray * matchedServices;

+ (id)hidClient;

- (id)__unitTest;
- (void)__unitTestCallback:(id)arg1;
- (void)__unitTestTimeout;
- (void)_callbackBounceWithEvent:(id)arg1;
- (void)_resetMatchingServices;
- (BOOL)_setProperty:(struct __CFString { }*)arg1 forService:(struct __IOHIDServiceClient { }*)arg2 withValue:(void*)arg3;
- (void)addAllAppleServicesForMatching;
- (void)addAppleServiceForMatching:(unsigned long)arg1;
- (void)addUsagePage:(unsigned long)arg1 andServiceForMatching:(unsigned long)arg2;
- (void)dealloc;
- (struct __IOHIDServiceClient { }*)getAppleServiceForUsage:(unsigned long)arg1;
- (id)getProperty:(id)arg1 forService:(struct __IOHIDServiceClient { }*)arg2;
- (id)getProperty:(id)arg1;
- (struct __IOHIDServiceClient { }*)getServiceForPrimaryUsage:(unsigned long)arg1 andUsage:(unsigned long)arg2;
- (id)init;
- (struct __IOHIDEventSystemClient { }*)ioHIDClient;
- (id)matchedServices;
- (void)removeAllMatchedServices;
- (BOOL)service:(struct __IOHIDServiceClient { }*)arg1 matchesAppleUsage:(unsigned long)arg2;
- (BOOL)service:(struct __IOHIDServiceClient { }*)arg1 matchesPrimaryUsage:(unsigned long)arg2 andUsage:(unsigned long)arg3;
- (BOOL)setProperty:(id)arg1 withValue:(id)arg2 forService:(struct __IOHIDServiceClient { }*)arg3;
- (BOOL)setProperty:(id)arg1 withValue:(id)arg2;
- (BOOL)setReportInterval:(long)arg1 forAppleUsagePage:(unsigned long)arg2;
- (BOOL)setReportInterval:(long)arg1 forService:(struct __IOHIDServiceClient { }*)arg2;
- (id)startEventsWithCallback:(SEL)arg1 withTarget:(id)arg2;
- (id)startEventsWithCallback:(int (*)())arg1 target:(void*)arg2 andContext:(void*)arg3;
- (void)stopEvents;

@end
