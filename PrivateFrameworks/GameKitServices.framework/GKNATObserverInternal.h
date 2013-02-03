/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSObject<OS_dispatch_queue>, NSRecursiveLock, <GKNATObserverDelegate>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_group>, NSMutableDictionary, GKNATObserver_SCContext;

@interface GKNATObserverInternal : GKNATObserver {
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    BOOL _addCarrierFlag;
    BOOL _addInRangeFlag;
    BOOL _checkTCPAndSSL;
    NSMutableDictionary *_currentNetworkNames;
    <GKNATObserverDelegate> *_delegate;
    struct __SCDynamicStore { } *_dynamicStore;
    BOOL _fNATCheckInProgress;
    BOOL _fNATCheckQueued;
    BOOL _favorNonCarrier;
    BOOL _ignoreCarrierBundle;
    BOOL _ignoreNatTypeCache;
    NSMutableDictionary *_interfaceInfoDictionary;
    int _lastReportedCarrierNATType;
    int _lastReportedNATType;
    int _lastReportedNonCarrierNATType;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    BOOL _newCarrierType;
    BOOL _nonCarrierInterfacesOnly;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    GKNATObserver_SCContext *_sccontext;
    NSRecursiveLock *_xNATCheck;
}

- (void)HTTPCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(BOOL)arg2;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(BOOL)arg2;
- (void)NATCheckWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 useCache:(BOOL)arg2;
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;
- (void)calculateSummmaryNATType:(int*)arg1 andCarrierNATType:(int*)arg2 andNonCarrierNATType:(int*)arg3 copyInterfaceInfoDictionary:(id*)arg4;
- (struct tagCommNATInfo { unsigned int x1; unsigned int x2; unsigned short x3[3]; unsigned int x4; }*)callCommNATTestFromIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 ToServer:(id)arg2 isSSL:(BOOL)arg3;
- (void)clearRetries;
- (int)currentNATType;
- (void)dealloc;
- (id)delegate;
- (BOOL)ensureNatCachePathExists;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1 interfaceName:(id)arg2;
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(BOOL)arg2 commnatFlagsCached:(BOOL)arg3 tcpFlagsCached:(BOOL)arg4 sslFlagsCached:(BOOL)arg5;
- (void)registerForNetworkChanges;
- (oneway void)release;
- (void)reportNATType;
- (id)retrieveNatTypeCache;
- (unsigned int)setCommNATFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (void)setDelegate:(id)arg1;
- (unsigned int)setFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 isCachedKey:(id)arg4 mask:(unsigned int)arg5;
- (unsigned int)setSSLFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setTCPFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (void)tryNATCheckWithDelay:(double)arg1;
- (void)updateNatTypeCache:(id)arg1;

@end
