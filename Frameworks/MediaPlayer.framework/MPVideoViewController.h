/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage, UIColor, UIAlertView, MPImageCacheRequest, MPAVItem, MPImageCache, UIActivityIndicatorView, MPAVController, MPVideoBackgroundView, UIView, MPVideoView, MPSwipableView, MPClosedCaptionDisplay, UIView<MPVideoOverlay>, _UIHostedWindow, MPTVOutWindow;

@interface MPVideoViewController : MPViewController <MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoTransferViewController, UIModalViewDelegate> {
    unsigned int _tvOutEnabled : 1;
    unsigned int _allowsTVOutInBackground : 1;
    unsigned int _canAnimateControlsOverlay : 1;
    unsigned int _canShowControlsOverlay : 1;
    unsigned int _disableControlsAutohide : 1;
    unsigned int _ownsStatusBar : 1;
    unsigned int _playAfterPop : 1;
    unsigned int _scheduledLoadingIndicator : 1;
    unsigned int _displayPlaybackErrorAlerts : 1;
    unsigned int _allowsDetailScrubbing : 1;
    unsigned int _attemptAutoPlayWhenControlsHidden : 1;
    unsigned int _alwaysAllowHidingControlsOverlay : 1;
    unsigned int _hasShownFirstVideoFrame : 1;
    unsigned int _allowsWirelessPlayback : 1;
    unsigned int _disableAutoRotation : 1;
    unsigned int _inlinePlaybackUsesTVOut : 1;
    UIAlertView *_alertSheet;
    MPImageCache *_artworkImageCache;
    MPImageCacheRequest *_artworkImageRequest;
    int _artworkImageStyle;
    unsigned int _backgroundTaskId;
    MPVideoBackgroundView *_backgroundView;
    UIColor *_backstopColor;
    MPSwipableView *_backstopView;
    BOOL _batteryMonitoringWasEnabled;
    MPClosedCaptionDisplay *_captionView;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    int _extendedModeNotifyToken;
    unsigned int _itemTypeOverride;
    UIActivityIndicatorView *_loadingIndicator;
    UIImage *_posterImage;
    unsigned int _scaleMode;
    unsigned int _scaleModeOverride;
    MPTVOutWindow *_tvOutWindow;
    unsigned long long _visibleParts;
}

@property BOOL TVOutEnabled;
@property BOOL allowsDetailScrubbing;
@property BOOL allowsTVOutInBackground;
@property BOOL allowsWirelessPlayback;
@property BOOL alwaysAllowHidingControlsOverlay;
@property int artworkImageStyle;
@property(readonly) UIView * artworkImageView;
@property BOOL attemptAutoPlayWhenControlsHidden;
@property(readonly) UIView * backgroundView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } backgroundViewSnapshotFrame;
@property(retain) UIColor * backstopColor;
@property BOOL canAnimateControlsOverlay;
@property(readonly) BOOL canChangeScaleMode;
@property BOOL canShowControlsOverlay;
@property(readonly) BOOL canShowQTAudioOnlyUI;
@property BOOL controlsOverlayVisible;
@property id delegate;
@property unsigned long long desiredParts;
@property BOOL disableAutoRotation;
@property BOOL disableControlsAutohide;
@property unsigned long long disabledParts;
@property BOOL displayPlaybackErrorAlerts;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property BOOL inhibitOverlay;
@property BOOL inlinePlaybackUsesTVOut;
@property(retain) MPAVItem * item;
@property unsigned int itemTypeOverride;
@property int orientation;
@property BOOL ownsStatusBar;
@property(retain) MPAVController * player;
@property(retain) UIImage * posterImage;
@property unsigned int scaleMode;
@property(readonly) BOOL showArtworkForTVOut;
@property(readonly) BOOL showArtworkInImageView;
@property(getter=isTransitioningFromFullscreen,readonly) BOOL transitioningFromFullscreen;
@property(getter=isTransitioningToFullscreen,readonly) BOOL transitioningToFullscreen;
@property(readonly) UIView<MPVideoOverlay> * videoOverlayView;
@property(readonly) UIView<MPVideoOverlay> * videoOverlayViewIfLoaded;
@property(readonly) MPVideoView * videoView;
@property(readonly) UIView * view;
@property(readonly) BOOL viewControllerWillRequestExit;
@property unsigned long long visibleParts;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateArtworkImageViewFrameInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (BOOL)supportsFullscreenDisplay;

- (BOOL)TVOutEnabled;
- (BOOL)_canEnableAirPlayVideoRoutes;
- (void)_cancelArtworkImageRequest;
- (void)_delayedPopForTimeJump;
- (void)_delayedShowLoading;
- (void)_delayedUpdateBackgroundView;
- (void)_endBackgroundTask;
- (void)_exitPlayerForPlaybackError;
- (void)_fixupViewHierarchyIfNecessary;
- (void)_hideLoadingIndicator;
- (void)_itemDurationDidChange:(id)arg1;
- (unsigned int)_itemTypeWithActualTypePreference;
- (void)_popForTimeJump:(id)arg1;
- (void)_scheduleLoadingIndicatorIfNeeded;
- (void)_screenDidConnect:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (BOOL)_showDestinationPlaceholder;
- (void)_showStillFrameIfNotAlreadyPlaying;
- (void)_updateAlwaysPlayWheneverPossible;
- (void)_updateBackgroundView:(BOOL)arg1;
- (void)_updateClosedCaptionDisplay;
- (void)_updateIdleTimerDisabledFromPlaybackState:(unsigned int)arg1;
- (void)_updateProgressControlForItem:(id)arg1;
- (void)_videoView_applicationSuspendedNotification:(id)arg1;
- (void)_videoView_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_videoView_availableRoutesDidChangeNotification:(id)arg1;
- (void)_videoView_batteryStateDidChangeNotification:(id)arg1;
- (void)_videoView_effectiveScaleModeChangedNotification:(id)arg1;
- (void)_videoView_isAirPlayVideoActiveDidChangeNotification:(id)arg1;
- (void)_videoView_playbackErrorNotification:(id)arg1;
- (void)_videoView_resumeEventsOnlyNotification:(id)arg1;
- (void)_videoView_scaleModeChangedNotification:(id)arg1;
- (void)_videoView_sizeChangedNotification:(id)arg1;
- (void)_videoView_timedImageMetadataAvailableNotification:(id)arg1;
- (void)_videoView_validityChangedNotification:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)allowsDetailScrubbing;
- (BOOL)allowsTVOutInBackground;
- (BOOL)allowsWirelessPlayback;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (int)artworkImageStyle;
- (id)artworkImageView;
- (BOOL)attemptAutoPlayWhenControlsHidden;
- (id)backgroundView;
- (void)backgroundViewDidUpdate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundViewSnapshotFrame;
- (id)backstopColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateArtworkImageViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateFullScreenArtworkImageViewFrame;
- (BOOL)canAnimateControlsOverlay;
- (BOOL)canChangeScaleMode;
- (BOOL)canHideOverlay:(BOOL)arg1;
- (BOOL)canShowControlsOverlay;
- (BOOL)canShowQTAudioOnlyUI;
- (void)chapterList:(id)arg1 selectedChapter:(unsigned int)arg2;
- (void)chapterListDidDisappear:(id)arg1;
- (BOOL)controlsOverlayVisible;
- (id)createChapterFlipTransition;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (unsigned long long)desiredParts;
- (BOOL)disableAutoRotation;
- (BOOL)disableControlsAutohide;
- (unsigned long long)disabledParts;
- (unsigned long long)disabledPartsForProposedParts:(unsigned long long)arg1;
- (int)displayArtworkImageStyle;
- (BOOL)displayPlaybackErrorAlerts;
- (void)displayVideoView;
- (void)displayVideoViewOnScreen;
- (void)displayVideoViewOnTV;
- (void)enableAirPlayVideoRoutesIfNecessary;
- (void)handleScaleModeChange;
- (id)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (id)init;
- (BOOL)inlinePlaybackUsesTVOut;
- (BOOL)isFullscreen;
- (BOOL)isFullscreenForLayoutPurposes;
- (BOOL)isStatusBarHidden;
- (BOOL)isTransitioningFromFullscreen;
- (BOOL)isTransitioningToFullscreen;
- (unsigned int)itemTypeOverride;
- (void)loadView;
- (id)newAlternateTracksTransition;
- (id)newArtworkImageView;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)ownsStatusBar;
- (id)posterImage;
- (void)prepareToDisplayVideo;
- (void)registerForPlayerNotifications;
- (void)reloadArtworkImageView;
- (void)removeChildViewController:(id)arg1;
- (unsigned int)scaleMode;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsTVOutInBackground:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (void)setArtworkImageStyle:(int)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setBackstopColor:(id)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1;
- (void)setDisableAutoRotation:(BOOL)arg1;
- (void)setDisableControlsAutohide:(BOOL)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setItemTypeOverride:(unsigned int)arg1;
- (void)setOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setScaleMode:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setScaleMode:(unsigned int)arg1;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)showAlternateTracksController:(id)arg1;
- (BOOL)showArtworkForTVOut;
- (BOOL)showArtworkInImageView;
- (void)showChaptersController;
- (void)showChaptersControllerAndFadeViews:(id)arg1;
- (int)statusBarStyle;
- (void)tearDownTVOutWindow;
- (void)toggleScaleMode:(BOOL)arg1;
- (void)unregisterForPlayerNotifications;
- (id)videoOverlayView;
- (id)videoOverlayViewIfLoaded;
- (id)videoView;
- (void)videoView_bufferingStateChangedNotification:(id)arg1;
- (void)videoView_firstVideoFrameDisplayedNotification:(id)arg1;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)videoView_playbackStateChangedNotification:(id)arg1;
- (void)videoView_tvOutCapabilityDidChangeNotification:(id)arg1;
- (BOOL)viewControllerWillRequestExit;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (unsigned long long)visibleParts;
- (unsigned long long)visiblePartsForProposedParts:(unsigned long long)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;

@end
