/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class XPCEndpoint, NSMutableSet, _UIViewServiceXPCListener, NSObject<OS_dispatch_queue>, _UIAsyncInvocation, NSMutableDictionary;

@interface _UIViewServiceSession : NSObject <XPCProxyTarget, _UIViewServiceDeputyDelegate> {
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    NSMutableDictionary *_connectionHandlers;
    int _connectionHandlersLock;
    NSMutableSet *_deputies;
    _UIAsyncInvocation *_invalidationInvocation;
    _UIViewServiceXPCListener *_listener;
    NSMutableSet *_pendingConnectionCatchers;
    NSMutableSet *_pendingDeputyProxies;
    NSObject<OS_dispatch_queue> *_queue;
    id _terminationHandler;
}

@property(readonly) XPCEndpoint * endpoint;

- (int)__automatic_invalidation_logic;
- (void)_handleConnection:(id)arg1;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)checkDeputyForRotation:(id)arg1;
- (void)dealloc;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;
- (id)endpoint;
- (id)init;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)registerDeputyType:(id)arg1 withConnectionHandler:(id)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setTerminationHandler:(id)arg1;
- (void)unregisterDeputyType:(id)arg1;

@end
