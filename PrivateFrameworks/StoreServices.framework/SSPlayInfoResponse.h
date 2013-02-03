/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, NSData;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying> {
    NSError *_error;
    NSData *_playInfoData;
}

@property(readonly) NSError * error;
@property(readonly) NSData * playInfoData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)playInfoData;

@end
