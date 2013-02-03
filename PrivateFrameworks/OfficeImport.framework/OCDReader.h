/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSError, NSString, NSData, CPImportTracing, <OCCancelDelegate>;

@interface OCDReader : NSObject {
    <OCCancelDelegate> *mCancelDelegate;
    NSData *mData;
    id mDelegate;
    NSString *mFileName;
    BOOL mIsThumbnail;
    NSError *mStartError;
    CPImportTracing *mTracing;
}

@property(retain) <OCCancelDelegate> * cancelDelegate;
@property(retain) NSData * data;
@property id delegate;
@property(retain) NSString * fileName;
@property BOOL isThumbnail;
@property(retain) NSError * startError;
@property(retain) CPImportTracing * tracing;

- (id)cancelDelegate;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)fileName;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (bool)isBinaryReader;
- (BOOL)isThumbnail;
- (id)read;
- (void)setCancelDelegate:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setStartError:(id)arg1;
- (void)setStartErrorMessageFromException:(id)arg1;
- (void)setTracing:(id)arg1;
- (BOOL)start;
- (id)startError;
- (id)tracing;
- (BOOL)verifyFileFormat;

@end
