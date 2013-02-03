/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;

@interface GKDiscoveryBonjour : NSObject {
    struct _DNSServiceRef_t { } *_advertiseRef;
    id _browseCallback;
    struct _DNSServiceRef_t { } *_browseRef;
    BOOL _checkedInWithLaunchd;
    id _connectionCallback;
    NSMutableArray *_launchdSources;
    int _listeningPort;
    id _serviceNameCollisionCallback;
}

@property struct _DNSServiceRef_t { }* advertiseRef;
@property(copy) id browseCallback;
@property struct _DNSServiceRef_t { }* browseRef;
@property(copy) id connectionCallback;
@property(retain) NSMutableArray * launchdSources;
@property(copy) id serviceNameCollisionCallback;

- (struct _DNSServiceRef_t { }*)advertiseRef;
- (id)browseCallback;
- (struct _DNSServiceRef_t { }*)browseRef;
- (void)closeListeningSockets;
- (id)connectionCallback;
- (void)createDispatchEventWithSocket:(int)arg1;
- (void)dealloc;
- (id)init;
- (int)ipV4Socket;
- (int)ipV6Socket;
- (id)launchdSources;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(id)arg3;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (id)serviceNameCollisionCallback;
- (void)setAdvertiseRef:(struct _DNSServiceRef_t { }*)arg1;
- (void)setBrowseCallback:(id)arg1;
- (void)setBrowseRef:(struct _DNSServiceRef_t { }*)arg1;
- (void)setConnectionCallback:(id)arg1;
- (void)setLaunchdSources:(id)arg1;
- (void)setServiceNameCollisionCallback:(id)arg1;
- (void)setupBothListeningSockets;
- (void)setupListeningSockets;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (int)startBrowsing:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;

@end
