/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, SSAccount, NSDictionary, NSURL;

@interface HSMutableConnectionConfiguration : HSConnectionConfiguration {
}

@property(retain) SSAccount * account;
@property(copy) NSURL * baseURL;
@property(copy) NSString * buildIdentifier;
@property(copy) NSDictionary * cookieHeaders;
@property(copy) NSDictionary * urlBag;
@property(copy) NSString * userAgent;

- (id)account;
- (id)baseURL;
- (id)buildIdentifier;
- (id)cookieHeaders;
- (void)setAccount:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (void)setCookieHeaders:(id)arg1;
- (void)setUrlBag:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (id)urlBag;
- (id)userAgent;

@end
