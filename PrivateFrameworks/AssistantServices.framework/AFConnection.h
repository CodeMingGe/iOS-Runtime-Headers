/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class DKConnection, NSString, <AFAssistantUIService>, <AFSpeechDelegate>, NSMutableDictionary;

@interface AFConnection : NSObject <AFManagedStore> {
    unsigned int _stateInSync : 1;
    unsigned int _shouldSpeak : 1;
    unsigned int _isCapturingSpeech : 1;
    unsigned int _hasOutstandingRequest : 1;
    unsigned int _replyContextMayInitiateCall : 1;
    float _averagePower;
    DKConnection *_connection;
    <AFAssistantUIService> *_delegate;
    BOOL _hasActiveRequest;
    NSString *_outstandingRequestClass;
    float _peakPower;
    NSMutableDictionary *_replies;
    <AFSpeechDelegate> *_speechDelegate;
}

@property <AFAssistantUIService> * delegate;
@property(readonly) BOOL isRecording;
@property <AFSpeechDelegate> * speechDelegate;

+ (void)_reachabilityDidChange:(id)arg1;
+ (BOOL)assistantIsEnabled;
+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)beginMonitoringAvailability;
+ (void)defrost;
+ (void)initialize;
+ (BOOL)isAvailable;
+ (void)stopMonitoringAvailability;
+ (BOOL)userDataSyncNeeded;

- (void).cxx_destruct;
- (void)_asyncBarrierWithBlock:(id)arg1;
- (void)_barrier;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_clearConnection;
- (id)_connection;
- (void)_handleMessage:(id)arg1;
- (void)_invokeRequestTimeout;
- (void)_msgDismissAssistant:(id)arg1;
- (void)_msgDoCommand:(id)arg1;
- (void)_msgOpenURL:(id)arg1;
- (void)_msgReplyMayInitiateCall:(id)arg1;
- (void)_msgRequestCompleted:(id)arg1;
- (void)_msgRequestError:(id)arg1;
- (void)_msgSpeechLevelUpdate:(id)arg1;
- (void)_msgSpeechRecognitionDidFail:(id)arg1;
- (void)_msgSpeechRecognized:(id)arg1;
- (void)_msgSpeechRecordingDidBegin:(id)arg1;
- (void)_msgSpeechRecordingDidCancel:(id)arg1;
- (void)_msgSpeechRecordingDidEnd:(id)arg1;
- (void)_msgSpeechRecordingDidFail:(id)arg1;
- (void)_msgSpeechRecordingWillBegin:(id)arg1;
- (void)_msgStateUpdate:(id)arg1;
- (void)_requestDidEnd;
- (void)_requestStateUpdate;
- (void)_requestWillBeginWithRequestClass:(id)arg1 logAggregateData:(BOOL)arg2;
- (void)_scheduleRequestTimeout:(double)arg1;
- (void)_sendMessage:(id)arg1 withReply:(id)arg2;
- (void)_sendMessage:(id)arg1 withReplySync:(id)arg2;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_unhandledMessage:(id)arg1;
- (void)_willCancelRequest;
- (void)_willCompleteRequest;
- (void)_willFailRequest;
- (void)_willStartRequest;
- (float)averagePower;
- (void)cancelRequest;
- (void)cancelSpeech;
- (void)clearAndSetApplicationContext;
- (void)clearAndSetApplicationContextWithBulletins:(id)arg1;
- (void)clearContext;
- (void)clearUndoStack;
- (void)dealloc;
- (id)delegate;
- (id)domainObjectForKey:(id)arg1;
- (void)endSession;
- (id)init;
- (BOOL)isRecording;
- (float)peakPower;
- (void)preheat;
- (void)redoRequest;
- (BOOL)replyContextMayInitiateCall;
- (void)rollbackRequest;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (void)sendReplyCommand:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDomainObject:(id)arg1 forKey:(id)arg2;
- (BOOL)setLanguageCode:(id)arg1 error:(id*)arg2;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)setSpeechDelegate:(id)arg1;
- (BOOL)shouldSpeak;
- (id)speechDelegate;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)startRequestWithText:(id)arg1 timeout:(double)arg2;
- (void)startRequestWithText:(id)arg1;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)undoRequest;
- (void)updateSpeechOptions:(id)arg1;

@end
