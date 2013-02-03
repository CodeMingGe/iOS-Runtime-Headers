/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSString, NSDictionary;

@interface MBFileInfo : NSObject <NSCopying, NSCoding> {
    NSDictionary *_extendedAttributes;
    BOOL _isDirectory;
    NSString *_path;
    int _priority;
}

@property(copy) NSDictionary * extendedAttributes;
@property BOOL isDirectory;
@property(copy) NSString * path;
@property int priority;

+ (id)fileInfoWithPath:(id)arg1 extendedAttributes:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAttributes;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 extendedAttributes:(id)arg2;
- (BOOL)isDirectory;
- (id)path;
- (int)priority;
- (void)setExtendedAttributes:(id)arg1;
- (void)setIsDirectory:(BOOL)arg1;
- (void)setPath:(id)arg1;
- (void)setPriority:(int)arg1;

@end
