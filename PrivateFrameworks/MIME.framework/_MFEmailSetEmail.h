/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface _MFEmailSetEmail : NSObject {
    NSString *_encodedAddress;
    unsigned long _hash;
}

@property(retain) NSString * address;
@property(readonly) unsigned long hash;

- (id)address;
- (void)dealloc;
- (id)description;
- (unsigned long)hash;
- (id)initWithAddress:(id)arg1;
- (BOOL)isEqualToEmail:(id)arg1;
- (void)setAddress:(id)arg1;

@end
