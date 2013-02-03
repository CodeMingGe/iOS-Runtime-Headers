/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSFileHandle, SSLogFileOptions, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface SSRollableLog : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSFileHandle *_fileHandle;
    NSObject<OS_dispatch_source> *_fileObserverSource;
    double _lastFileStatTime;
    SSLogFileOptions *_options;
}

@property(readonly) SSLogFileOptions * logOptions;

- (id)_activeLogFilePath;
- (void)_checkLogFileSize;
- (void)_closeLogFile;
- (id)_logFilePathWithIndex:(int)arg1;
- (void)_openLogFile;
- (void)_rollLogFiles;
- (void)dealloc;
- (id)initWithLogOptions:(id)arg1;
- (id)logOptions;
- (void)writeString:(id)arg1;

@end
