/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext, <SSAuthenticateRequestDelegate>;

@interface SSAuthenticateRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
}

@property(readonly) SSAuthenticationContext * authenticationContext;
@property <SSAuthenticateRequestDelegate> * delegate;

- (id)authenticationContext;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;
- (void)startWithAuthenticateResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;

@end
