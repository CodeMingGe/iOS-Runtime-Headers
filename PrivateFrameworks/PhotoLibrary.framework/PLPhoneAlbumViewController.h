/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, UIActionSheet, PLSegmentedControl, PLAlbumPickerViewController, PLPhotosPickerSession, UIAlertView, PLActivityViewController, PLProgressView, PLVideoRemaker, UIBarButtonItem, NSDictionary, UINavigationController, NSArray, UIViewController, PLManagedAsset, NSTimer;

@interface PLPhoneAlbumViewController : PLAlbumViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate, PLAbstractAlbumPickerViewControllerDelegate, PLActivityViewControllerDelegate, PLPhotosPickerSessionParticipant, PLSlideshowSettingsViewControllerDelegate> {
    unsigned int _showPhotosVideosFilter : 1;
    unsigned int _remaking : 1;
    unsigned int _trimmingForMMS : 1;
    unsigned int _didSetPublishCapabilities : 1;
    unsigned int _deviceCannotShareVideo : 1;
    unsigned int _remakingWasCancelled : 1;
    unsigned int _toolbarWasHiddenWhenSelfWasPushed : 1;
    unsigned int _forceHideToolbar : 1;
    unsigned int _didSetHDVideoUploadCapability : 1;
    unsigned int _canUploadHDVideoOver3G : 1;
    unsigned int _remakeAfterPublish : 1;
    unsigned int _canPlaySlideshow : 1;
    unsigned int _ignoreAlbumDidChangeNotification : 1;
    unsigned int _hasChangesInEditSession : 1;
    UIActionSheet *_actionSheet;
    SEL _activityAction;
    id _activityTarget;
    PLActivityViewController *_activityViewController;
    UIBarButtonItem *_addToFromItem;
    PLAlbumPickerViewController *_albumPickerController;
    SEL _completionSelector;
    UINavigationController *_composeNavigationController;
    UIAlertView *_createAlbumAlert;
    PLPhotosPickerSession *_currentPickerSession;
    PLManagedAsset *_currentVideo;
    unsigned int _dataInsertionCount;
    UIBarButtonItem *_deleteItem;
    UIBarButtonItem *_doneItem;
    PLSegmentedControl *_filterControl;
    NSArray *_moveSheetActions;
    id _nextViewDidLayoutSubviewsHandler;
    int _previousAlbumFilter;
    NSTimer *_progressUpdateTimer;
    PLProgressView *_progressView;
    PLVideoRemaker *_remaker;
    int _remakerMode;
    int _selectedImageCount;
    int _selectedPlaceholderCount;
    int _selectedUnknownCount;
    int _selectedVideoCount;
    NSMutableArray *_shareButtonTitles;
    UIBarButtonItem *_shareItem;
    UIViewController *_slideshowSettingsViewController;
    NSDictionary *_trimDictionary;
    int allowedAlbumViewActions;
}

@property int allowedAlbumViewActions;
@property BOOL canPlaySlideshow;
@property(retain) PLPhotosPickerSession * currentPickerSession;
@property(retain) UIBarButtonItem * doneItem;
@property BOOL showPhotosVideosFilter;

- (id)_actionToolbarItems;
- (BOOL)_allowSavingToCameraRoll;
- (int)_allowedDeleteOperation;
- (BOOL)_appAllowsSupressionOfAlerts;
- (BOOL)_canAddAssets;
- (BOOL)_canAddToAssets;
- (BOOL)_canEmailMedia;
- (BOOL)_canUploadHDVideo;
- (void)_cancelRemaking:(id)arg1;
- (void)_clearPublishingAgentIfCurrent:(id)arg1;
- (void)_copySelectedItems:(id)arg1;
- (id)_currentPublishingAgent;
- (id)_defaultToolbarItems;
- (void)_deleteSelectedItems;
- (void)_dismissActionSheet;
- (void)_displayActivitySheet:(id)arg1;
- (void)_endSlideshowSettings;
- (void)_fadeOut;
- (void)_fadeOutAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_filterWasToggled:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_isCameraAlbum;
- (BOOL)_isPerformingModalTransitionFromCamera;
- (void)_loadConfiguration:(id)arg1;
- (void)_mailAccountsDidChange:(id)arg1;
- (void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)_playSlideshow;
- (void)_presentActionSheet;
- (void)_publishingAgentDidCancel:(id)arg1;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_publishingAgentsDidForceCancel:(id)arg1;
- (void)_remakerDidFinish:(id)arg1;
- (void)_removeSelectedItems;
- (void)_restoreAlbumViewSelectionFromPickerSession;
- (void)_saveAssetsToCameraRoll:(id)arg1;
- (void)_saveConfiguration:(id)arg1;
- (void)_sendViaEmail;
- (void)_sendViaMMS;
- (BOOL)_shouldApplyRecentsFilterInitially;
- (BOOL)_shouldShowActionButton;
- (void)_showAlbumPickerToAddPhotos:(id)arg1 removeFromCurrentAlbum:(BOOL)arg2;
- (void)_showCreateAlbumDialogWithPhotos:(id)arg1;
- (void)_showDeleteConfirmation:(id)arg1;
- (void)_showMMSCompositionForVideo:(id)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (void)_showMailCompositionForPhotos:(id)arg1;
- (void)_showMailCompositionForVideo:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showMoveActions:(id)arg1;
- (void)_showRemakerProgressView:(BOOL)arg1;
- (void)_showSlideshowSettings:(id)arg1;
- (void)_showTextMessageComposition:(id)arg1;
- (void)_showTrimViewControllerForVideo:(id)arg1 maximumTrimDuration:(double)arg2 trimButtonTitle:(id)arg3;
- (BOOL)_showTrimViewControllerIfNeededForVideo:(id)arg1 usingMode:(int)arg2;
- (id)_suppresionContexts;
- (id)_tabBar;
- (void)_toggleEditing:(id)arg1;
- (void)_transcodeVideo:(id)arg1 usingMode:(int)arg2 completionSelector:(SEL)arg3;
- (void)_updateActionButtons;
- (void)_updateProgressView;
- (void)_updateToolbarVisibilityAnimated:(BOOL)arg1 updateItems:(BOOL)arg2;
- (void)_updateTopRightButtonAnimated:(BOOL)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)activityViewControllerDidDismiss:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (BOOL)albumPickerController:(id)arg1 shouldEnableAlbum:(id)arg2;
- (BOOL)albumView:(id)arg1 canSelectPhotoAtIndexPath:(id)arg2;
- (void)albumView:(id)arg1 didTapPhotoAtIndexPath:(id)arg2;
- (void)albumView:(id)arg1 movePhotoAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)albumViewPhotoMoveDidComplete:(id)arg1;
- (void)albumViewSelectionDidChange:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (int)allowedAlbumViewActions;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canPlaySlideshow;
- (void)copy:(id)arg1;
- (id)currentPickerSession;
- (void)dealloc;
- (id)doneItem;
- (id)editButtonItem;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)initWithAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)libraryDidChange:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)paste:(id)arg1;
- (void)performBlockAfterNextViewDidLayoutSubviews:(id)arg1;
- (void)prepareForDefaultImageSnapshot;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 animated:(BOOL)arg2 delayImageLoading:(BOOL)arg3;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 animated:(BOOL)arg2;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 toComment:(id)arg2 animated:(BOOL)arg3 delayImageLoading:(BOOL)arg4;
- (void)pushPhotoScrollerViewControllerForPhoto:(id)arg1 toComment:(id)arg2 animated:(BOOL)arg3;
- (void)scrollToRevealPhoto:(id)arg1 animated:(BOOL)arg2;
- (id)selectedPhotos;
- (void)setAllowedAlbumViewActions:(int)arg1;
- (void)setCanPlaySlideshow:(BOOL)arg1;
- (void)setCurrentFilter:(int)arg1;
- (void)setCurrentPickerSession:(id)arg1;
- (void)setDoneItem:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowPhotosVideosFilter:(BOOL)arg1;
- (void)setShowingEmptyAlbumView:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showPhotosVideosFilter;
- (id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayService:(id)arg2;
- (void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayService:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayService:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayService:(id)arg2;
- (void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
