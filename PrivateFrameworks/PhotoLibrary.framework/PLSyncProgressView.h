/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, NSNumberFormatter, UIActivityIndicatorView;

@interface PLSyncProgressView : UIView {
    NSNumberFormatter *_countFormatter;
    unsigned int _currentCount;
    UILabel *_infoLabel;
    int _progressType;
    UIActivityIndicatorView *_spinner;
    int _style;
    unsigned int _totalCount;
}

@property(readonly) unsigned int currentCount;
@property(readonly) int progressType;
@property(readonly) int style;
@property(readonly) unsigned int totalCount;

- (id)_progressDescription;
- (unsigned int)currentCount;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)layoutSubviews;
- (int)progressType;
- (void)setCurrentCount:(unsigned int)arg1 totalCount:(unsigned int)arg2 progressType:(int)arg3;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (unsigned int)totalCount;

@end
