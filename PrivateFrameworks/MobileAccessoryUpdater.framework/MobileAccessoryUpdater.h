/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

@class <MobileAccessoryUpdaterDelegate>, NSString;

@interface MobileAccessoryUpdater : NSObject {
    NSString *_activeFilter;
    NSString *_bundleIdentifier;
    char *_cClientIdentifier;
    struct dispatch_queue_s { } *_callbackQueue;
    NSString *_clientIdentifier;
    struct _xpc_connection_s { } *_connection;
    <MobileAccessoryUpdaterDelegate> *_delegate;
    int _notifyToken;
    struct dispatch_queue_s { } *_sessionQueue;
}

- (void)createConnection;
- (BOOL)createSession;
- (void)dealloc;
- (BOOL)doesOperationCodeRequireFilter:(int)arg1;
- (id)getActiveDeviceClass;
- (const char *)getActiveDeviceClassCString;
- (int)getOperationCodeFromName:(id)arg1;
- (void)handleInboundEvent:(void*)arg1;
- (id)initWithGroupIdentifer:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPluginIdentifier:(id)arg1 delegate:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithPluginIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2 delegate:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)performNextStepWithOptions:(id)arg1;
- (void)performStep:(id)arg1 withOptions:(id)arg2;
- (id)queryNextStep:(id*)arg1;
- (BOOL)registerForBSDNotifications;
- (BOOL)registerForIdentifier:(id)arg1 isGroupIdentifier:(BOOL)arg2;
- (BOOL)sendMessageForCommand:(int)arg1 withOptions:(id)arg2 requiresFilter:(BOOL)arg3;
- (BOOL)setActiveDeviceClass:(id)arg1;
- (BOOL)setLastRemoteFindDate:(id)arg1;
- (void)unregister;

@end
