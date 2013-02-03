/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TURemoteAppender, TUInMemoryAppender;

@interface TUPhoneLogger : NSObject <TULogger> {
    struct dispatch_queue_s { } *_appenderQueue;
    TUInMemoryAppender *_inMemoryAppender;
    int _lock;
    int _loggingConfiguration;
    BOOL _loggingConfigurationCached;
    TURemoteAppender *_remoteAppender;
    id _signalHandler;
}

+ (id)sharedPhoneLogger;

- (id)_appender;
- (void)_handleSignal:(int)arg1;
- (void)_loggingChanged;
- (int)_loggingConfiguration;
- (BOOL)_shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (void)dealloc;
- (id)identifier;
- (id)init;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4 args:(void*)arg5;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 format:(id)arg4;
- (void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(BOOL)arg3 text:(id)arg4;
- (BOOL)shouldLog;
- (BOOL)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
- (id)signalHandler;

@end
