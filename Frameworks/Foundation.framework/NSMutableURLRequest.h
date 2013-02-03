/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableURLRequest : NSURLRequest {
}

+ (id)_gkHTTPGETRequestWithURL:(id)arg1 playerID:(id)arg2 authToken:(id)arg3 pushToken:(id)arg4 gameDescriptor:(id)arg5;
+ (id)_gkHTTPPOSTRequestWithURL:(id)arg1 playerID:(id)arg2 authToken:(id)arg3 pushToken:(id)arg4 gameDescriptor:(id)arg5 postData:(id)arg6;
+ (id)_gkHTTPRequestWithURL:(id)arg1 playerID:(id)arg2 authToken:(id)arg3 pushToken:(id)arg4 gameDescriptor:(id)arg5;
+ (int)hashForPlayerID:(id)arg1;
+ (void)setPlayerIDHashParametersFromBag:(id)arg1;

- (void)_web_setHTTPContentType:(id)arg1;
- (void)_web_setHTTPReferrer:(id)arg1;
- (void)_web_setHTTPUserAgent:(id)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)bindToCommand:(struct __CNPluginCommand { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (unsigned int)requestPriority;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setCachePolicy:(unsigned int)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setDeviceScreenCapabilities:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPShouldHandleCookies:(BOOL)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setInternal:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setNetworkServiceType:(unsigned int)arg1;
- (void)setPlayerID:(id)arg1 authToken:(id)arg2;
- (void)setProcessName:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRequestPriority:(unsigned int)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setStoreMode:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

@end
