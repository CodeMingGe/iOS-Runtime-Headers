/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class AVPlayer, UIImageView, UIImage, NSObject<OS_dispatch_source>, MPDownloadProgressIndicator, <IUAudioPreviewViewDelegate>;

@interface IUAudioPreviewView : UIView {
    AVPlayer *_AVPlayer;
    NSObject<OS_dispatch_source> *_animationTimer;
    UIImage *_artworkImage;
    UIImageView *_artworkImageView;
    double _currentItemDuration;
    <IUAudioPreviewViewDelegate> *_delegate;
    MPDownloadProgressIndicator *_progressIndicator;
}

@property(retain) AVPlayer * AVPlayer;
@property(retain) UIImage * artworkImage;
@property <IUAudioPreviewViewDelegate> * delegate;

- (id)AVPlayer;
- (void)_cancelAction:(id)arg1;
- (void)_cancelAnimationTimer;
- (void)_setProgress:(float)arg1;
- (void)_startAnimating;
- (void)_stopAnimating;
- (id)artworkImage;
- (void)dealloc;
- (id)delegate;
- (void)flipFromPreviewProgressAnimated:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)flipToPreviewProgressAnimated:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAVPlayer:(id)arg1;
- (void)setArtworkImage:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
