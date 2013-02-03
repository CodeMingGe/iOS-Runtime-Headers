/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AAAccount;

@interface AAUpdateProvisioningRequest : AARequest {
    AAAccount *_account;
}

@property(retain) AAAccount * account;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)arg1;
- (id)initWithURLString:(id)arg1 account:(id)arg2;
- (void)setAccount:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
