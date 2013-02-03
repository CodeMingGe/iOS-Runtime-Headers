/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@class NSURL, <CUTFileCopierDelegate>;

@interface CUTFileCopier : NSObject {
    void *_BOMCopier;
    <CUTFileCopierDelegate> *_delegate;
    BOOL _didErrorOccur;
    id _identifier;
    BOOL _inProgress;
    NSURL *_inputURL;
    unsigned int _operation;
    NSURL *_outputURL;
    BOOL _shouldCancel;
}

@property void* _BOMCopier;
@property <CUTFileCopierDelegate> * delegate;
@property(readonly) BOOL didErrorOccur;
@property(readonly) id identifier;
@property BOOL inProgress;
@property(readonly) NSURL * inputURL;
@property unsigned int operation;
@property(readonly) NSURL * outputURL;
@property(readonly) BOOL wasCancelled;

- (void*)_BOMCopier;
- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)delegate;
- (BOOL)didErrorOccur;
- (id)identifier;
- (BOOL)inProgress;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned int)arg4 delegate:(id)arg5;
- (id)inputURL;
- (unsigned int)operation;
- (id)outputURL;
- (void)setDelegate:(id)arg1;
- (void)setInProgress:(BOOL)arg1;
- (void)setOperation:(unsigned int)arg1;
- (void)set_BOMCopier:(void*)arg1;
- (void)start;
- (BOOL)wasCancelled;

@end
