/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKSessionPrivateDelegate>, GKTable, GKConnection, GKAutoPeerIDTable, GKVoiceChatSessionListener, GKList, <GKSessionDelegate>, <GKSessionDataReceiveHandler>, <GKSessionDOOBReceiveHandler>, GKSession, NSString;

@interface GKSessionInternal : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    GKConnection *_connection;
    <GKSessionDataReceiveHandler> *_dataReceiveHandler;
    void *_dataReceiveHandlerContext;
    <GKSessionDelegate> *_delegate;
    } _delegateLock;
    NSString *_displayName;
    struct _DNSServiceRef_t { } *_dnsServiceConnection;
    struct _DNSServiceRef_t { } *_dnsServiceResolveConnection;
    void *_doobReceiveHandlerContext[2];
    <GKSessionDOOBReceiveHandler> *_doobReceiveHandler[2];
    BOOL _handleEventsRunning;
    BOOL _isBusy;
    BOOL _isPublishing;
    BOOL _isSearching;
    } _lock;
    int _mode;
    struct _DNSServiceRef_t { } *_oldService;
    GKAutoPeerIDTable *_peerIDTable;
    GKTable *_peerInfoTable;
    GKTable *_peerNameTable;
    GKList *_peersAvailable;
    GKList *_peersConnected;
    GKList *_peersForCleanup;
    GKList *_peersPendingIncomingInvitation;
    GKList *_peersPendingOutgoingInvitation;
    unsigned int _pid;
    unsigned int _port;
    <GKSessionPrivateDelegate> *_privateDelegate;
    int _sReset;
    struct _DNSServiceRef_t { } *_service;
    struct _DNSServiceRef_t { } *_serviceBrowser;
    GKSession *_session;
    BOOL _sessionStarted;
    BOOL _shutdown;
    BOOL _stopHandlingEvents;
    GKVoiceChatSessionListener *_voiceChatListener;
    BOOL _wifiEnabled;
    struct OpaqueAGPSession { } *agpSessionRef;
    double disconnectTimeout;
    NSString *displayName;
    NSString *domain;
    unsigned int maxPeers;
    NSString *serviceType;
    NSString *sessionID;
    struct OpaqueGCKSession { } *sessionRef;
}

@property struct OpaqueAGPSession { }* agpSessionRef;
@property(getter=isAvailable) BOOL available;
@property(getter=isBusy) BOOL busy;
@property(readonly) GKConnection * connection;
@property id dataReceiveHandler;
@property <GKSessionDelegate> * delegate;
@property double disconnectTimeout;
@property(readonly) NSString * displayName;
@property(copy) NSString * domain;
@property unsigned int maxPeers;
@property(readonly) NSString * peerID;
@property unsigned int port;
@property <GKSessionPrivateDelegate> * privateDelegate;
@property(copy) NSString * serviceType;
@property(readonly) NSString * sessionID;
@property(readonly) int sessionMode;
@property struct OpaqueGCKSession { }* sessionRef;
@property BOOL wifiEnabled;

- (BOOL)acceptConnectionFromPeer:(id)arg1 error:(id*)arg2;
- (struct OpaqueAGPSession { }*)agpSessionRef;
- (void)browse;
- (void)cancelConnectToPeer:(id)arg1;
- (BOOL)checkDNSConnection;
- (void)cleanupExAvailablePeers;
- (void)connectToPeer:(id)arg1 withTimeout:(double)arg2;
- (id)connection;
- (id)createNSErrorFromGKSessionError:(int)arg1 description:(id)arg2 reason:(id)arg3;
- (id)createNSErrorFromHRESULT:(long)arg1 description:(id)arg2 reason:(id)arg3;
- (id)dataReceiveHandler;
- (void)dealloc;
- (id)delegate;
- (void)denyConnectionFromPeer:(id)arg1;
- (id)description;
- (void)didFindService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didLookupHostname:(struct _DNSServiceRef_t { }*)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 address:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg4 interface:(unsigned int)arg5 withError:(int)arg6 moreComing:(BOOL)arg7;
- (void)didPublishWithError:(int)arg1;
- (void)didRemoveService:(const char *)arg1 fromIF:(const char *)arg2 withError:(int)arg3 moreComing:(BOOL)arg4;
- (void)didResolveService:(struct _DNSServiceRef_t { }*)arg1 forPeer:(id)arg2 hostName:(const char *)arg3 port:(unsigned short)arg4 interface:(unsigned int)arg5 txtLen:(unsigned short)arg6 txtRecord:(const void*)arg7 withError:(int)arg8 moreComing:(BOOL)arg9;
- (void)didUpdateTXTRecordForPeer:(id)arg1 fromIF:(const char *)arg2 txtLen:(unsigned short)arg3 txtRecord:(const void*)arg4 withError:(int)arg5 moreComing:(BOOL)arg6;
- (void)disconnectFromAllPeers;
- (void)disconnectPeerFromAllPeers:(id)arg1;
- (double)disconnectTimeout;
- (id)displayName;
- (id)displayNameForPeer:(id)arg1;
- (id)domain;
- (BOOL)filterService:(const char *)arg1 withPID:(unsigned int)arg2;
- (void)handleEvents;
- (id)initWithConnection:(id)arg1 session:(id)arg2 delegate:(id)arg3;
- (id)initWithSessionID:(id)arg1 displayName:(id)arg2 session:(id)arg3 sessionMode:(int)arg4;
- (BOOL)isAvailable;
- (BOOL)isBusy;
- (BOOL)isPeerBusy:(id)arg1;
- (BOOL)isShuttingDown;
- (void)lock;
- (unsigned int)maxPeers;
- (BOOL)parseServiceName:(const char *)arg1 intoDisplayName:(id*)arg2 pid:(unsigned int*)arg3 state:(id*)arg4;
- (BOOL)passesSendDataSanityCheck:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (id)peerID;
- (id)peersWithConnectionState:(int)arg1;
- (unsigned int)port;
- (void)printDictionaries;
- (id)privateDelegate;
- (void)processTXTRecordForPeer:(id)arg1 txtLen:(unsigned short)arg2 txtRecord:(const void*)arg3;
- (void)publish;
- (void)receiveDOOB:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4;
- (void)reset;
- (BOOL)sendAudioData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (void)sendCallbacksToDelegate:(struct { int x1; char *x2; int x3; unsigned int x4; }*)arg1 remotePeer:(unsigned int)arg2;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (BOOL)sendData:(id)arg1 toPeers:(id)arg2 withDataMode:(int)arg3 isAudio:(BOOL)arg4 error:(id*)arg5;
- (BOOL)sendDataToAllPeers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (id)serviceName;
- (id)serviceType;
- (id)sessionID;
- (int)sessionMode;
- (struct OpaqueGCKSession { }*)sessionRef;
- (void)setAgpSessionRef:(struct OpaqueAGPSession { }*)arg1;
- (void)setAvailable:(BOOL)arg1;
- (void)setBusy:(BOOL)arg1;
- (void)setDOOBReceiveHandler:(id)arg1 withContext:(void*)arg2 inBand:(unsigned int)arg3;
- (void)setDataReceiveHandler:(id)arg1 withContext:(void*)arg2;
- (void)setDataReceiveHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectTimeout:(double)arg1;
- (void)setDisplayName:(id)arg1 forPeer:(unsigned int)arg2;
- (void)setDomain:(id)arg1;
- (void)setMaxPeers:(unsigned int)arg1;
- (void)setPort:(unsigned int)arg1;
- (void)setPrivateDelegate:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSessionRef:(struct OpaqueGCKSession { }*)arg1;
- (void)setWifiEnabled:(BOOL)arg1;
- (void)stopOldService;
- (void)stopResolvingAllPeers;
- (id)stringForGCKID:(unsigned int)arg1;
- (void)tellDelegate_connectionRequestToPeerFailed:(id)arg1;
- (void)tellDelegate_didConnectPeer:(id)arg1;
- (void)tellDelegate_didDisconnectPeer:(id)arg1;
- (void)tellDelegate_didReceiveBand_RetryICE:(id)arg1;
- (void)tellDelegate_didReceiveData:(id)arg1;
- (void)tellDelegate_gotInvited:(id)arg1;
- (void)tellDelegate_initiateRelay:(id)arg1;
- (void)tellDelegate_isConnectingPeer:(id)arg1;
- (void)tellDelegate_networkStatisticsChanged:(id)arg1;
- (void)tellDelegate_peerDidBecomeAvailable:(id)arg1;
- (void)tellDelegate_peerDidBecomeBusy:(id)arg1;
- (void)tellDelegate_peerDidBecomeUnavailable:(id)arg1;
- (void)tellDelegate_sessionDidFailWithError:(id)arg1;
- (void)tellDelegate_updateRelay:(id)arg1;
- (void)timeoutConnectToPeer:(id)arg1;
- (BOOL)tryConnectToPeer:(id)arg1;
- (void)unlock;
- (id)voiceChatSessionListener;
- (BOOL)wifiEnabled;

@end
