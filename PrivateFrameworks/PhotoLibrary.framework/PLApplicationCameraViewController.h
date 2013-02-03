/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIToolbar, NSObject<OS_dispatch_queue>, NSDictionary, PLCameraImageWellView, <PLApplicationCameraViewControllerDelegate>;

@interface PLApplicationCameraViewController : PLCameraViewController {
    UIToolbar *_bottomButtonBar;
    NSDictionary *_configuration;
    <PLApplicationCameraViewControllerDelegate> *_delegate;
    id _doneButtonAction;
    BOOL _isReadyToTest;
    NSObject<OS_dispatch_queue> *_photoStreamDispatchQueue;
    PLCameraImageWellView *_photosButton;
    id _previewButtonAction;
    int _testPictureCounter;
    double _testPictureRepeatDelay;
    int _testPicturesReceivedCounter;
    BOOL _usesSessionAlbum;
}

@property(readonly) UIToolbar * bottomButtonBar;
@property <PLApplicationCameraViewControllerDelegate> * delegate;
@property(copy) id previewButtonAction;
@property int testPictureCounter;
@property double testPictureRepeatDelay;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applyConfiguration;
- (BOOL)_cameraIsRunning;
- (void)_defaultCameraDevice:(id*)arg1 cameraMode:(id*)arg2;
- (void)_kickoffCameraControllerPreview;
- (void)_photosButtonClicked:(id)arg1;
- (void)_saveConfiguration;
- (BOOL)_shouldResetMode:(id)arg1;
- (void)_startPictureTestAfterSeconds:(double)arg1;
- (void)animateIrisForSuspension;
- (id)bottomButtonBar;
- (id)cameraButtonBar;
- (void)cameraViewDidEndRecordingVideo:(id)arg1;
- (void)cameraViewDidFinishOpeningIrisForPreview:(id)arg1;
- (void)cameraViewFinishedClosingIris:(id)arg1;
- (void)cameraViewFinishedTakingPicture:(id)arg1;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)cameraViewWillBeginRecordingVideo:(id)arg1;
- (void)cleanupForCameraEnd;
- (void)dealloc;
- (id)delegate;
- (void)handleVolumeButtonDownEvent;
- (void)handleVolumeButtonUpEvent;
- (id)init;
- (id)initWithSessionAlbum:(BOOL)arg1 usesCameraLocationBundleID:(BOOL)arg2 startPreviewImmediately:(BOOL)arg3;
- (void)loadView;
- (void)pausePhotoStreams;
- (void)prepareForDefaultImageSnapshot;
- (void)prepareForSuspension;
- (id)previewButtonAction;
- (void)resumePhotoStreams;
- (void)saveCameraConfiguration;
- (void)setDelegate:(id)arg1;
- (void)setPreviewButtonAction:(id)arg1;
- (void)setTestPictureCounter:(int)arg1;
- (void)setTestPictureRepeatDelay:(double)arg1;
- (void)setUsesSessionAlbum:(BOOL)arg1;
- (void)setupForCameraStart;
- (BOOL)shouldAnimateIrisForSuspension;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)showingCameraPreview;
- (void)startCameraPreview:(id)arg1;
- (void)startCameraPreview;
- (void)startCameraPreviewWithSavedConfiguration;
- (void)startPictureTest;
- (void)stopCameraPreviewAnimated:(BOOL)arg1;
- (void)takePicture;
- (int)testPictureCounter;
- (double)testPictureRepeatDelay;
- (void)testSetAutofocusDisabled:(BOOL)arg1;
- (void)testSetHDROn:(BOOL)arg1;
- (void)updatePreviewWellImage:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillShowForLaunch;

@end
