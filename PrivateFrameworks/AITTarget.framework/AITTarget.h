/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@class AITXPCConnection, NSString, NSMutableArray, NSMutableDictionary;

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {
    struct dispatch_queue_s { } *_clientQueue;
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    NSMutableArray *_queuedProbes;
    struct dispatch_queue_s { } *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    double _startTime;
    struct dispatch_source_s { } *_watchdogSource;
    AITXPCConnection *_xpcConnection;
}

@property struct dispatch_queue_s { }* rpcDispatchQueue;
@property(copy) NSString * rpcSelectorPrefix;
@property(retain) id rpcTarget;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedTarget;

- (BOOL)_appIsWhitelisted;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (void)_flushQueuedProbes;
- (void)_probeBarrier:(id)arg1;
- (BOOL)_probeIsEnabled:(id)arg1;
- (id)_rpcTarget;
- (void)_sendAckForToken:(id)arg1 success:(BOOL)arg2 returnValue:(id)arg3 details:(id)arg4;
- (void)_setupXPCConnectionIfNeeded;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(struct dispatch_queue_s { }*)arg3 block:(id)arg4;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (oneway void)release;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (struct dispatch_queue_s { }*)rpcDispatchQueue;
- (id)rpcSelectorPrefix;
- (id)rpcTarget;
- (void)setRpcDispatchQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setRpcSelectorPrefix:(id)arg1;
- (void)setRpcTarget:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnectionUnhandledMessage:(void*)arg1;

@end
