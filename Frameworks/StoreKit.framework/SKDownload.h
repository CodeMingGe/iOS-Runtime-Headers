/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKPaymentTransaction, NSError, NSString, NSNumber, NSURL;

@interface SKDownload : NSObject {
    NSString *_contentIdentifier;
    long long _contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    int _downloadState;
    NSError *_error;
    float _progress;
    double _timeRemaining;
    SKPaymentTransaction *_transaction;
    NSString *_version;
}

@property(getter=_downloadID,setter=_setDownloadID:,copy) NSNumber * _downloadID;
@property(readonly) NSString * contentIdentifier;
@property(readonly) long long contentLength;
@property(readonly) NSURL * contentURL;
@property(readonly) NSString * contentVersion;
@property(readonly) int downloadState;
@property(readonly) NSError * error;
@property(readonly) float progress;
@property(readonly) double timeRemaining;
@property(readonly) SKPaymentTransaction * transaction;

- (void)_applyChangeset:(id)arg1;
- (id)_downloadID;
- (void)_setContentIdentifier:(id)arg1;
- (void)_setContentLength:(long long)arg1;
- (void)_setContentURL:(id)arg1;
- (void)_setDownloadID:(id)arg1;
- (void)_setDownloadState:(int)arg1;
- (void)_setError:(id)arg1;
- (void)_setProgress:(float)arg1;
- (void)_setTimeRemaining:(double)arg1;
- (void)_setTransaction:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)contentIdentifier;
- (long long)contentLength;
- (id)contentURL;
- (id)contentVersion;
- (id)copyXPCEncoding;
- (void)dealloc;
- (int)downloadState;
- (id)error;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (float)progress;
- (double)timeRemaining;
- (id)transaction;

@end
