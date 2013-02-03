/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSString, NSDictionary;

@interface FTProfileLinkHandleMessage : FTProfileMessage <NSCopying> {
    NSDictionary *_authenticationData;
    NSNumber *_responseVettingStatus;
    NSString *_uri;
}

@property(setter=setURI:,copy) NSString * URI;
@property(copy) NSDictionary * authenticationData;
@property(copy) NSNumber * responseVettingStatus;

- (id)URI;
- (id)additionalMessageHeaders;
- (id)authenticationData;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (id)responseVettingStatus;
- (void)setAuthenticationData:(id)arg1;
- (void)setResponseVettingStatus:(id)arg1;
- (void)setURI:(id)arg1;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;

@end
