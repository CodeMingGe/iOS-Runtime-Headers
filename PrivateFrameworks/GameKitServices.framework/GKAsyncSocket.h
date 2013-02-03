/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSObject<OS_dispatch_queue>;

@interface GKAsyncSocket : NSObject {
}

@property(copy) id connectedHandler;
@property(copy) id receiveDataHandler;
@property(retain) id socketName;
@property NSObject<OS_dispatch_queue> * targetQueue;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)connectedHandler;
- (void)invalidate;
- (id)receiveDataHandler;
- (void)sendData:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setConnectedHandler:(id)arg1;
- (void)setReceiveDataHandler:(id)arg1;
- (void)setSocketName:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (id)socketName;
- (id)syncQueue;
- (id)targetQueue;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;

@end
