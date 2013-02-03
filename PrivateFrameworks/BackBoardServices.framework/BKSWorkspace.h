/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class <BKSWorkspaceDelegate>, NSObject<OS_dispatch_queue>, BKSApplicationActivationAssertion, NSMutableArray, NSObject<OS_xpc_object>, BKSSignal, NSString, BKSMachSendRight, NSMutableDictionary;

@interface BKSWorkspace : NSObject {
    NSMutableArray *_activatingApplications;
    NSMutableDictionary *_activationTokens;
    NSObject<OS_dispatch_queue> *_applicationInfoQueue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    <BKSWorkspaceDelegate> *_delegate;
    BKSSignal *_invalidationSignal;
    BOOL _locked;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_runningApplicationInfo;
    NSObject<OS_xpc_object> *_serverConnection;
    unsigned int _serverPort;
    BOOL _suspended;
    BKSApplicationActivationAssertion *_topApplicationAssertion;
    NSString *_topApplicationBundleID;
    BKSMachSendRight *_topEventPortOverride;
    BOOL _workspaceOwner;
}

@property <BKSWorkspaceDelegate> * delegate;
@property(readonly) unsigned int serverPort;
@property(readonly) BOOL suspended;
@property(retain) BKSMachSendRight * topEventPortOverride;

- (void)_acquireApplicationActivationAssertion:(id)arg1 uniqueID:(id)arg2 name:(id)arg3;
- (id)_activationTokenForBundleID:(id)arg1;
- (void)_clearActivationStateForBundleID:(id)arg1;
- (void)_handleDidBecomeReceiverFrom:(id)arg1 to:(id)arg2 workspaceWillResume:(BOOL)arg3;
- (void)_handleMessage:(id)arg1;
- (id)_handleWillBecomeReceiverFrom:(id)arg1 to:(id)arg2 activationToken:(id)arg3;
- (id)_infoForBundleIdentifier:(id)arg1;
- (void)_invalidateConnection;
- (BOOL)_isServerBeingDebugged;
- (void)_noteWillActivateBundleIdentifier:(id)arg1 suspended:(BOOL)arg2 activationToken:(id)arg3;
- (void)_receiveApplicationDidActivate:(id)arg1;
- (void)_receiveApplicationExited:(id)arg1;
- (void)_receiveApplicationIsBeingDebuggedStateChanged:(id)arg1;
- (void)_receiveApplicationLaunchBegan:(id)arg1;
- (void)_receiveApplicationSuspended:(id)arg1;
- (void)_receiveApplicationSuspensionSettingsUpdated:(id)arg1;
- (void)_receiveDidBecomeReceiver:(id)arg1;
- (void)_receiveHandleOpenURL:(id)arg1;
- (void)_receiveHandleStatusBarReturnActionFromApplication:(id)arg1;
- (void)_receiveWillBecomeReceiver:(id)arg1;
- (void)_receiveWorkspaceActivationResponse:(id)arg1;
- (void)_receiveWorkspaceIsSuspended:(id)arg1;
- (void)_registerWithServer;
- (void)_releaseApplicationActivationAssertion:(id)arg1;
- (void)_reregister;
- (void)_sendAcquireApplicationActivationAssertion:(id)arg1 uniqueID:(id)arg2 name:(id)arg3;
- (void)_sendActivate:(id)arg1 withActivation:(id)arg2 withDeactivation:(id)arg3 token:(id)arg4;
- (void)_sendApplication:(id)arg1 setIsConnectionToEA:(BOOL)arg2;
- (void)_sendApplication:(id)arg1 setNowPlayingAudio:(BOOL)arg2;
- (void)_sendApplication:(id)arg1 setRecordingAudio:(BOOL)arg2;
- (void)_sendApplication:(id)arg1 setTaskPort:(id)arg2;
- (void)_sendApplication:(id)arg1 simpleGSEvent:(int)arg2 withSubtype:(int)arg3;
- (void)_sendApplication:(id)arg1 simpleGSEvent:(int)arg2;
- (void)_sendClientBundleIdentifier:(id)arg1;
- (void)_sendLocked:(BOOL)arg1;
- (void)_sendMessage:(long long)arg1 withMessagePacker:(id)arg2 replyHandler:(id)arg3 replyQueue:(id)arg4;
- (void)_sendMessage:(long long)arg1 withMessagePacker:(id)arg2 replyHandler:(id)arg3;
- (void)_sendMessage:(long long)arg1 withMessagePacker:(id)arg2;
- (void)_sendReleaseApplicationActivationAssertion:(id)arg1;
- (void)_sendResume:(id)arg1;
- (void)_sendShutdown:(BOOL)arg1;
- (void)_sendSuspend:(id)arg1;
- (void)_sendTopEventPortOverride:(id)arg1;
- (void)activate:(id)arg1 withActivation:(id)arg2;
- (id)activatingApplications;
- (void)application:(id)arg1 resignActiveForReason:(int)arg2;
- (void)application:(id)arg1 resumeActiveForReason:(int)arg2;
- (void)application:(id)arg1 sendSimpleGSEvent:(int)arg2 withSubtype:(int)arg3;
- (void)application:(id)arg1 sendSimpleGSEvent:(int)arg2;
- (void)application:(id)arg1 setIsConnectedToExternalAccessory:(BOOL)arg2;
- (void)application:(id)arg1 setNowPlayingWithAudio:(BOOL)arg2;
- (void)application:(id)arg1 setRecordingAudio:(BOOL)arg2;
- (void)application:(id)arg1 setTaskPort:(id)arg2;
- (double)backgroundTimeRemaining:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)elapsedCPUTimesForApplications:(id)arg1 completion:(id)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (BOOL)isApplicationConnectedToExternalAccessory:(id)arg1;
- (BOOL)isApplicationRecordingAudio:(id)arg1;
- (BOOL)isBeingDebugged:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isLocked;
- (void)kill:(id)arg1 withReason:(int)arg2 description:(id)arg3;
- (void)kill:(id)arg1;
- (void)killall:(BOOL)arg1;
- (id)newActivationAssertionForApplication:(id)arg1 named:(id)arg2;
- (void)resume:(id)arg1;
- (id)runningApplications;
- (id)runningBundleIDForPID:(int)arg1;
- (unsigned int)serverPort;
- (void)setDelegate:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setTopEventPortOverride:(id)arg1;
- (void)shutdown:(BOOL)arg1;
- (void)suspend:(id)arg1;
- (BOOL)suspended;
- (id)topActivatingApplication;
- (id)topApplication;
- (id)topEventPortOverride;

@end
