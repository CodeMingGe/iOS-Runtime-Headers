/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownloadAuthenticationSession, NSObject<OS_dispatch_queue>;

@interface SSDownloadAuthenticationChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadAuthenticationSession *_session;
}

@property(readonly) SSDownloadAuthenticationSession * authenticationSession;

- (id)authenticationSession;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)initWithAuthenticationSession:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
