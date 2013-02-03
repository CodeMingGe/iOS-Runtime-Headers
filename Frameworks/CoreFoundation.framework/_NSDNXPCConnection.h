/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_group>, NSObject<OS_xpc_object>, NSMutableArray;

@interface _NSDNXPCConnection : NSObject <_NSDNXPCObject> {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_group> *_dgroup;
    NSObject<OS_dispatch_queue> *_dq;
    int _flavor;
    id _handleMessage;
    int _invalid;
    NSMutableArray *_invalidHandlers;
    int _lock;
    long long _mseqno;
    NSObject<OS_xpc_object> *_sconn;
    NSString *_serviceName;
    int _started;
    NSMutableArray *_termImminentHandlers;
}

@property(readonly) NSObject<OS_xpc_object> * XPCConnection;
@property(copy) id handleMessage;
@property(readonly) NSString * serviceName;

- (id)XPCConnection;
- (void)__invalidate;
- (void)__terminationImminent;
- (void)addInvalidationHandler:(id)arg1;
- (void)addTerminationImminentHandler:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)handleMessage;
- (id)initWithPeerConnection:(id)arg1;
- (id)initWithReceivedConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1 privileged:(BOOL)arg2;
- (id)initWithXPCConnection:(id)arg1 type:(int)arg2;
- (void)invalidate;
- (void)sendMessage:(id)arg1 waitForAck:(BOOL)arg2;
- (void)sendMessage:(id)arg1 waitForSend:(BOOL)arg2;
- (id)serviceName;
- (void)setDispatchQueue:(id)arg1;
- (void)setHandleMessage:(id)arg1;
- (void)start;

@end
