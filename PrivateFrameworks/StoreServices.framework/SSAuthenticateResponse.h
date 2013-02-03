/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, SSAccount, NSDictionary;

@interface SSAuthenticateResponse : NSObject <SSXPCCoding> {
    SSAccount *_authenticatedAccount;
    NSError *_error;
    NSDictionary *_responseDictionary;
    int _responseType;
}

@property int authenticateResponseType;
@property(retain) SSAccount * authenticatedAccount;
@property(readonly) NSError * error;
@property(copy) NSDictionary * responseDictionary;

- (void)_setError:(id)arg1;
- (int)authenticateResponseType;
- (id)authenticatedAccount;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (id)responseDictionary;
- (void)setAuthenticateResponseType:(int)arg1;
- (void)setAuthenticatedAccount:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end
