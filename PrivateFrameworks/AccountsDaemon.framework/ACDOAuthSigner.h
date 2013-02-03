/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDClientAuthorizationManager, ACDDatabase, ACDClient;

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol, XPCProxyTarget> {
    ACDClientAuthorizationManager *_authorizationManager;
    ACDClient *_client;
    ACDDatabase *_database;
    BOOL _shouldIncludeAppIdInRequest;
}

- (void).cxx_destruct;
- (BOOL)_permissionGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (void)_presentAccessRequestForAccountType:(id)arg1 client:(id)arg2 withHandler:(id)arg3;
- (id)_signedRequest:(id)arg1 withAccountObject:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;
- (id)ckForAccountType:(id)arg1;
- (id)csForAccountType:(id)arg1;
- (id)initWithClient:(id)arg1 database:(id)arg2;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (void)setShouldIncludeAppIdInRequest:(id)arg1;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(id)arg5;
- (void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(id)arg5;
- (id)signedRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4;

@end
