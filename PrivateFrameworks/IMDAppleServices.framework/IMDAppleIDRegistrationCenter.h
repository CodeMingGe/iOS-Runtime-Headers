/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class FTMessageDelivery, NSMutableDictionary, NSMutableArray;

@interface IMDAppleIDRegistrationCenter : NSObject <IMSystemMonitorListener, IMDAppleEmailInterfaceListener> {
    NSMutableArray *_handlers;
    FTMessageDelivery *_messageDelivery;
    NSMutableDictionary *_queues;
}

+ (id)sharedInstance;

- (BOOL)__reallySendAuthentication:(id)arg1 password:(id)arg2;
- (id)_displayStringForFTRegistrationServiceType:(int)arg1;
- (void)_fetchPasswordForRegistrationInfo:(id)arg1;
- (void)_fetchTokenForRegistrationInfo:(id)arg1 failureBlock:(id)arg2;
- (void)_handleServerResponse:(int)arg1 registration:(id)arg2;
- (BOOL)_haveQueuedMessageForRegistration:(id)arg1 inQueue:(id)arg2;
- (void)_noteSuccessfulToken:(id)arg1 profileID:(id)arg2 forRegistrationInfo:(id)arg3;
- (void)_notifyAuthenticating:(id)arg1;
- (void)_notifyAuthenticationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyAuthenticationSuccess:(id)arg1;
- (void)_notifyEmailConfirmationFailure:(id)arg1 emailAddress:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)_notifyEmailConfirmationSuccess:(id)arg1 emailAddress:(id)arg2;
- (void)_notifyEmailQueryFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;
- (void)_notifyEmailValidationRequestFailure:(id)arg1 emailAddress:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)_notifyEmailValidationRequestSuccess:(id)arg1 emailAddress:(id)arg2;
- (void)_notifyHandleUnlinkFailure:(id)arg1 handle:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)_notifyHandleUnlinkSuccess:(id)arg1 handle:(id)arg2;
- (void)_notifyInitialRegionQuerySuccess:(id)arg1;
- (void)_notifyRegionValidationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyRegionValidationSuccess:(id)arg1 regionID:(id)arg2 phoneNumber:(id)arg3 context:(id)arg4 verified:(BOOL)arg5;
- (void)_notifyRegistrationRequired:(id)arg1;
- (void)_postUserNotificationWithTitle:(id)arg1 message:(id)arg2 identifier:(id)arg3 completionHandler:(id)arg4;
- (void)_processAuthenticationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processDefaultInvitationContextMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processGetDevicesMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processGetHandlesMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processLinkHandleMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processRegionValidationMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processUnlinkHandleMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (void)_processValidateHandleRequestMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4;
- (BOOL)_queryDevicesForRegistration:(id)arg1 completionBlock:(id)arg2;
- (BOOL)_queryInitialInvitationContextForRegistration:(id)arg1;
- (BOOL)_queryValidatedEmailsForRegistration:(id)arg1 completionBlock:(id)arg2;
- (id)_queueForKey:(id)arg1;
- (BOOL)_registrationNeedsAuthentication:(id)arg1;
- (void)_renewTokenForRegistrationInfo:(id)arg1;
- (BOOL)_sendAuthenticationRequest:(id)arg1 forceNew:(BOOL)arg2;
- (BOOL)_sendConfirmationForEmail:(id)arg1 vettingToken:(id)arg2 registration:(id)arg3;
- (BOOL)_sendUnlinkForHandle:(id)arg1 registration:(id)arg2;
- (BOOL)_sendValidationForEmail:(id)arg1 registration:(id)arg2;
- (void)_serviceQueueForKey:(id)arg1;
- (BOOL)_validateRegionID:(id)arg1 phoneNumber:(id)arg2 registration:(id)arg3;
- (void)addListener:(id)arg1;
- (BOOL)authenticateRegistration:(id)arg1 forceNewToken:(BOOL)arg2;
- (BOOL)authenticateRegistration:(id)arg1;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (void)center:(id)arg1 foundEmail:(id)arg2 vettingToken:(id)arg3 forRegistrationInfo:(id)arg4;
- (void)dealloc;
- (id)init;
- (BOOL)isRegistering:(id)arg1;
- (BOOL)linkHandle:(id)arg1 vettingToken:(id)arg2 forRegistration:(id)arg3;
- (BOOL)queryDevicesForRegistration:(id)arg1 completionBlock:(id)arg2;
- (BOOL)queryInitialInvitationContextForRegistration:(id)arg1;
- (BOOL)queryValidatedEmailsForRegistration:(id)arg1 completionBlock:(id)arg2;
- (BOOL)removeEmail:(id)arg1 forRegistration:(id)arg2;
- (void)removeListener:(id)arg1;
- (BOOL)unlinkHandle:(id)arg1 forRegistration:(id)arg2;
- (BOOL)validateEmail:(id)arg1 forRegistration:(id)arg2;
- (BOOL)validateRegion:(id)arg1 phoneNumber:(id)arg2 forRegistration:(id)arg3;

@end
