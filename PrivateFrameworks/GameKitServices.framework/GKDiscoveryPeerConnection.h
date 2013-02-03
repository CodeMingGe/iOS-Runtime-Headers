/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKSimpleTimer, NSString, NSMutableData, NSObject<OS_dispatch_queue>, GKAsyncSocket, NSMutableArray;

@interface GKDiscoveryPeerConnection : NSObject <GKSimpleTimerDelegate> {
    BOOL _connected;
    id _connectedHandler;
    GKAsyncSocket *_connectionSocket;
    double _connectionTimeoutInSeconds;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataReceived;
    NSMutableData *_dataToSendHoldingQueue;
    double _heartbeatIntervalInSeconds;
    GKSimpleTimer *_heartbeatTimeoutTimer;
    GKSimpleTimer *_heartbeatTimer;
    NSString *_localServiceName;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    id _peer;
    id _receiveDataHandler;
    NSMutableArray *_receivedDataHoldingQueue;
    NSString *_remoteServiceName;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    GKSimpleTimer *_timeoutTimer;
}

@property(copy) id connectedHandler;
@property(copy) NSString * localServiceName;
@property(copy) id receiveDataHandler;
@property(copy) NSString * remoteServiceName;
@property NSObject<OS_dispatch_queue> * syncQueue;
@property NSObject<OS_dispatch_queue> * targetQueue;

+ (void)checkConstants;
+ (unsigned int)receiveDataLimit;
+ (unsigned int)sendDataLimit;

- (void)attachSocketDescriptor:(int)arg1;
- (void)connectToSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;
- (id)connectedHandler;
- (void)dealloc;
- (id)initWithLocalServiceName:(id)arg1;
- (void)invalidate;
- (id)localServiceName;
- (id)receiveDataHandler;
- (id)remoteServiceName;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setConnectedHandler:(id)arg1;
- (void)setLocalServiceName:(id)arg1;
- (void)setReceiveDataHandler:(id)arg1;
- (void)setRemoteServiceName:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (BOOL)shouldDecideAboutConnection;
- (void)syncAcceptedConnection;
- (void)syncCloseConnectionNow;
- (void)syncConnected:(id)arg1;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (id)syncQueue;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (void)syncSendAccept;
- (void)syncSendHello;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(id)arg3;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (BOOL)syncSetupNewSocket;
- (id)targetQueue;
- (void)timeout:(id)arg1;

@end
