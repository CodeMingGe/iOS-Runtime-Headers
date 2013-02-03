/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString;

@interface FTProfileUnlinkHandleMessage : FTProfileMessage <NSCopying> {
    NSString *_uri;
}

@property(setter=setURI:,copy) NSString * URI;

- (id)URI;
- (id)additionalMessageHeaders;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (void)setURI:(id)arg1;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;

@end
