/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SURotationController, SUViewControllerScriptProperties, NSMutableArray, UIBarButtonItem, SUClientInterface, UIViewController, SUViewControllerContext, NSString, SUNavigationItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate> {
    SUViewControllerScriptProperties *_cachedScriptProperties;
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    SUClientInterface *_clientInterface;
    BOOL _excludeFromNavigationHistory;
    UIBarButtonItem *_exitStoreButton;
    UIViewController *_footerViewController;
    UIViewController *_inputAccessoryViewController;
    BOOL _isEnteringForeground;
    BOOL _loading;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    NSMutableArray *_pendingDialogs;
    SUViewControllerContext *_restoredContext;
    SURotationController *_rotationController;
    int _rotationState;
    BOOL _shouldInvalidateForMemoryPurge;
    BOOL _showsLibraryButton;
    int _transitionSafetyCount;
}

@property(getter=_cachedScriptProperties,readonly) SUViewControllerScriptProperties * _cachedScriptProperties;
@property(getter=_isEnteringForeground,readonly) BOOL _enteringForeground;
@property(getter=_pendingDialogs,readonly) NSArray * _pendingDialogs;
@property(getter=_restoredContext,readonly) SUViewControllerContext * _restoredContext;
@property(retain) SUClientInterface * clientInterface;
@property(readonly) double defaultPNGExpirationTime;
@property(readonly) NSString * defaultPNGName;
@property(readonly) UIViewController * footerViewController;
@property(retain) UIViewController * inputAccessoryViewController;
@property(getter=isLoading) BOOL loading;
@property(readonly) SUNavigationItem * navigationItem;
@property BOOL shouldExcludeFromNavigationHistory;
@property BOOL shouldInvalidateForMemoryPurge;
@property BOOL showsLibraryButton;
@property(getter=isVisible,readonly) BOOL visible;
@property(getter=isVisibleAndFrontmost,readonly) BOOL visibleAndFrontmost;

- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (id)_cachedScriptProperties;
- (BOOL)_canReloadView;
- (void)_dialogFinishedNotification:(id)arg1;
- (void)_dismissFooterAnimationDidStop:(id)arg1;
- (id)_existingNavigationItem;
- (void)_exitStoreButtonAction:(id)arg1;
- (void)_exitStoreButtonDidChangeNotification:(id)arg1;
- (void)_invalidateForMemoryPurge;
- (BOOL)_isEnteringForeground;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (id)_pendingDialogs;
- (void)_presentFooterAnimationDidStop;
- (void)_reloadExitStoreButtonWithParentViewController:(id)arg1;
- (void)_reloadLibraryButton;
- (id)_restoredContext;
- (id)_rotationController;
- (void)_setExistingNavigationItem:(id)arg1;
- (BOOL)_shouldUseDefaultFirstResponder;
- (void)applicationDidEnterBackground;
- (void)applicationDidResume;
- (void)applicationWillEnterForeground;
- (void)applicationWillSuspend;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancelOperations;
- (BOOL)clearsWeakScriptReferences;
- (id)clientInterface;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(int)arg1;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (void)dealloc;
- (double)defaultPNGExpirationTime;
- (id)defaultPNGName;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissAfterDialogs;
- (void)dismissFooterViewControllerAnimated:(BOOL)arg1;
- (void)enqueueOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (id)footerViewController;
- (void)handleApplicationURL:(id)arg1;
- (id)init;
- (id)initWithSection:(id)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (int)interfaceOrientation;
- (void)invalidate;
- (void)invalidateForMemoryPurge;
- (BOOL)isLoading;
- (BOOL)isVisible;
- (BOOL)isVisibleAndFrontmost;
- (void)loadView;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationItem;
- (id)newRotationController;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (BOOL)presentDialog:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (void)presentFooterViewController:(id)arg1 animated:(BOOL)arg2;
- (void)reload;
- (void)reloadContentSizeForViewInPopover;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setShouldExcludeFromNavigationHistory:(BOOL)arg1;
- (void)setShouldInvalidateForMemoryPurge:(BOOL)arg1;
- (void)setShowsLibraryButton:(BOOL)arg1;
- (void)setTitle:(id)arg1 changeTabBarItem:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (BOOL)shouldInvalidateForMemoryPurge;
- (BOOL)showsLibraryButton;
- (void)storePageProtocolDidChange;
- (id)tabBarItem;
- (void)trackOperation:(id)arg1 cancelOnDealloc:(BOOL)arg2;
- (id)viewControllerFactory;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;

@end
