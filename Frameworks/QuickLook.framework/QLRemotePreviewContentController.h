/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class _UIRemoteView, QLPreviewController, QLPrintPageRenderer, <QLPreviewContentDataSource>, <QLPreviewContentDelegate>, NSMutableDictionary;

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource> {
    int _currentPreviewItemIndex;
    <QLPreviewContentDataSource> *_dataSource;
    <QLPreviewContentDelegate> *_delegate;
    _UIRemoteView *_fullScreenView;
    BOOL _isHostingFullScreenWindow;
    int _numberOfPreviewItems;
    QLPreviewController *_previewController;
    NSMutableDictionary *_previewItemsForProxys;
    QLPrintPageRenderer *_printPageRenderer;
    BOOL _statusBarWasHidden;
}

@property <QLPreviewContentDataSource> * dataSource;
@property <QLPreviewContentDelegate> * delegate;
@property QLPreviewController * previewController;
@property int previewMode;

- (void)_contentWasTappedInPreviewContentController;
- (void)_didExitFullScreen;
- (void)_getPDFPreviewDataWithHandler:(id)arg1;
- (void)_overlayWasTappedInPreviewContentController;
- (void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)_previewContentControllerDidUnloadItem:(id)arg1;
- (void)_previewContentControllerGetPreviewItemAtIndex:(int)arg1 handler:(id)arg2;
- (void)_previewContentControllerReceivedTapOnURL:(id)arg1;
- (void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerWillMoveToItemAtIndex:(int)arg1;
- (void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerdidMoveToItem:(id)arg1 atIndex:(int)arg2;
- (void)_requestPreviewItemsAtIndexes:(id)arg1;
- (void)_setAVState:(id)arg1 forPreviewItem:(id)arg2;
- (void)_willEnterFullScreenWithContext:(id)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)beginScrubbing;
- (void)configureWithParameters:(id)arg1;
- (int)currentPreviewItemIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)endScrubbing;
- (void)enterBackground;
- (void)forceResignFirstResponder;
- (int)numberOfPageInPrintPageRenderer:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2;
- (int)numberOfPreviewItems;
- (id)pdfPreviewData;
- (id)previewController;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(int)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 printingDone:(BOOL*)arg4;
- (void)printPageRenderer:(id)arg1 prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)printPageRenderer;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
- (void)scrubToValue:(double)arg1;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadintTextForMissingFiles:(id)arg1;
- (void)setNumberOfPreviewItems:(int)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewController:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)togglePlayState;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
