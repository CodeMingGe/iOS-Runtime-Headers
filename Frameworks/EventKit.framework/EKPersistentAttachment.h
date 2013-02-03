/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, NSDictionary, NSNumber, NSURL;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}

@property(copy) NSURL * URL;
@property(readonly) NSString * UUID;
@property(copy) NSDictionary * XProperties;
@property(copy) NSString * fileFormat;
@property(copy) NSString * fileName;
@property(copy) NSNumber * fileSize;
@property(readonly) BOOL isBinary;
@property(copy) NSURL * localURL;

+ (id)relations;

- (id)URL;
- (id)UUID;
- (id)XProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)fileFormat;
- (id)fileName;
- (id)fileSize;
- (BOOL)isBinary;
- (id)localURL;
- (void)setFileFormat:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setIsBinary:(BOOL)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setXProperties:(id)arg1;

@end
