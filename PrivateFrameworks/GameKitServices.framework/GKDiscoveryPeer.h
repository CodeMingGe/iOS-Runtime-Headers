/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscoveryPeerConnection, NSObject<OS_dispatch_queue>, NSMutableArray, NSMutableSet, NSString, GKSimpleTimer, NSNumber;

@interface GKDiscoveryPeer : NSObject <GKSimpleTimerDelegate> {
    NSMutableArray *_attemptedInterfaces;
    NSNumber *_chosenInterface;
    GKDiscoveryPeerConnection *_connection;
    NSString *_deviceID;
    double _discoveryTimeStamp;
    NSMutableSet *_interfaces;
    NSMutableArray *_orderedInterfaces;
    NSString *_playerID;
    id _resolveTimeoutHandler;
    GKSimpleTimer *_resolveTimer;
    NSMutableArray *_sendDataBuffer;
    NSString *_serviceName;
    BOOL _shouldSignalDiscovery;
    int _state;
    NSObject<OS_dispatch_queue> *_syncQueue;
    GKDiscoveryPeerConnection *_trialConnection;
}

@property(retain) NSMutableArray * attemptedInterfaces;
@property(retain) NSNumber * chosenInterface;
@property(retain) GKDiscoveryPeerConnection * connection;
@property(copy) NSString * deviceID;
@property double discoveryTimeStamp;
@property(retain) NSMutableSet * interfaces;
@property(retain) NSMutableArray * orderedInterfaces;
@property(copy) NSString * playerID;
@property(copy) id resolveTimeoutHandler;
@property(retain) GKSimpleTimer * resolveTimer;
@property(retain) NSMutableArray * sendDataBuffer;
@property(copy) NSString * serviceName;
@property BOOL shouldSignalDiscovery;
@property int state;
@property(readonly) NSObject<OS_dispatch_queue> * syncQueue;
@property(retain) GKDiscoveryPeerConnection * trialConnection;

- (id)attemptedInterfaces;
- (id)chosenInterface;
- (void)cleanUpForBrowse;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)deviceID;
- (void)didLoseInterface:(id)arg1;
- (double)discoveryTimeStamp;
- (void)flushDataBuffer;
- (id)initWithServiceName:(id)arg1;
- (id)interfaces;
- (void)invalidate;
- (id)nextInterfaceIndex;
- (id)orderedInterfaces;
- (BOOL)parseServiceNameForInit:(id)arg1;
- (id)playerID;
- (id)resolveTimeoutHandler;
- (id)resolveTimer;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (id)sendDataBuffer;
- (id)serviceName;
- (void)setAttemptedInterfaces:(id)arg1;
- (void)setChosenInterface:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDiscoveryTimeStamp:(double)arg1;
- (void)setInterfaces:(id)arg1;
- (void)setOrderedInterfaces:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setResolveTimeoutHandler:(id)arg1;
- (void)setResolveTimer:(id)arg1;
- (void)setSendDataBuffer:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldSignalDiscovery:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)setTrialConnection:(id)arg1;
- (BOOL)shouldSignalDiscovery;
- (void)startResolveTimerWithHandler:(id)arg1;
- (int)state;
- (void)stopResolveTimer;
- (id)stringForState:(int)arg1;
- (id)syncQueue;
- (void)timeout:(id)arg1;
- (id)trialConnection;

@end
