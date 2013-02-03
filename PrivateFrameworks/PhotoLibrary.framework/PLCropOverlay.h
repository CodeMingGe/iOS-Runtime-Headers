/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCropOverlayBottomBar, UIButton, UIImageView, UILabel, PLCropOverlayCropView, UIView, TPButton, TPBottomDoubleButtonBar, TPCameraButton, UIProgressHUD, PLToolbar;

@interface PLCropOverlay : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _previewMode : 1;
    unsigned int _cropRectIsVisible : 1;
    unsigned int _offsetStatusBar : 1;
    unsigned int _tookPhoto : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _controlsAreVisible : 1;
    unsigned int _isDisplayedInPopover : 1;
    PLCropOverlayBottomBar *_bottomBar;
    UIImageView *_bottomShineView;
    UIButton *_cancelButton;
    TPButton *_cancelPushButton;
    } _cropRect;
    PLCropOverlayCropView *_cropView;
    PLToolbar *_customToolbar;
    id _delegate;
    UIProgressHUD *_hud;
    int _mode;
    UIButton *_okButton;
    TPCameraButton *_okPushButton;
    TPBottomDoubleButtonBar *_oldBottomBar;
    UIView *_overlayContainerView;
    UIImageView *_shadowView;
    float _statusBarHeight;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    UIView *_wildcatPickerBottomView;
    UIView *_wildcatPickerTopView;
}

@property BOOL previewMode;

- (void)_backgroundSavePhoto:(id)arg1;
- (void)_createCropView;
- (void)_fadeOutCompleted:(id)arg1;
- (id)_irisView;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lighterEdgeOnTop:(BOOL)arg2;
- (void)_pauseButtonPressed:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)_setMode:(int)arg1;
- (void)_updateCropRectInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateTitle;
- (void)_updateToolbarItems:(BOOL)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;
- (id)bottomBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bottomBarFrame;
- (void)cancelButtonClicked:(id)arg1;
- (BOOL)controlsAreVisible;
- (void)cropOverlayBottomBarCancelButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarDoneButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarToggleButtonClicked:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (void)didCapturePhoto;
- (void)didCaptureVideo;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)dismiss;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(int)arg2 offsettingStatusBar:(BOOL)arg3 isDisplayedInPopover:(BOOL)arg4 buttonBarStyle:(int)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertIrisView:(id)arg1;
- (void)layoutSubviews;
- (int)mode;
- (id)modeSwitch;
- (void)okButtonClicked:(id)arg1;
- (id)overlayContainerView;
- (BOOL)previewMode;
- (void)removeProgress;
- (void)setCancelButtonHidden:(BOOL)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setModeSwitch:(id)arg1;
- (void)setOKButtonColor:(int)arg1;
- (void)setOKButtonShowsCamera:(BOOL)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setOverlayContainerView:(id)arg1;
- (void)setPreviewMode:(BOOL)arg1;
- (void)setProgressDone;
- (void)setShowProgress:(BOOL)arg1 title:(id)arg2;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitleHidden:(BOOL)arg1 animationDuration:(float)arg2;
- (id)shutterButton;
- (void)statusBarHeightDidChange:(id)arg1;
- (id)telephonyUIBottomBar;
- (id)telephonyUIShutterButton;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (id)toggleButton;

@end
