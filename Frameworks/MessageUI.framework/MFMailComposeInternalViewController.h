/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class _UIAsyncInvocation, NSError, MFMailComposePlaceholderViewController, MFMailComposeRemoteViewController, <MFMailComposeViewControllerDelegate>, NSMutableArray, XPCProxy<MFMailComposeRemoteService>, NSString, NSMutableDictionary;

@interface MFMailComposeInternalViewController : UIViewController <MFMailComposeRemoteViewControllerDelegate> {
    unsigned int _hasDelayedPresentation : 1;
    unsigned int _didEndDelayedPresentation : 1;
    unsigned int _compositionValuesAreFinalized : 1;
    unsigned int _remoteViewControllerIsConfigured : 1;
    unsigned int _isAppearing : 1;
    unsigned int _didAppear : 1;
    unsigned int _didFinish : 1;
    unsigned int _delegateRespondsToBodyFinishedLoadingWithResult : 1;
    NSMutableArray *_attachments;
    id _autorotationDelegate;
    _UIAsyncInvocation *_cancellationInvocation;
    int _composeResult;
    NSError *_composeResultError;
    NSMutableDictionary *_compositionValues;
    <MFMailComposeViewControllerDelegate> *_mailComposeDelegate;
    NSString *_placeholderSubject;
    MFMailComposePlaceholderViewController *_placeholderViewController;
    double _presentationDelayBeganTimestamp;
    MFMailComposeRemoteViewController *_serviceViewController;
    XPCProxy<MFMailComposeRemoteService> *_serviceViewControllerProxy;
}

@property id autorotationDelegate;
@property <MFMailComposeViewControllerDelegate> * mailComposeDelegate;

- (void)_beginDelayingCompositionPresenation;
- (void)_cancelComposition:(id)arg1;
- (void)_cancelRemoteServiceViewControllerRequest;
- (void)_configureRemoteViewContoller;
- (void)_didEndDelayingCompositionPresentation;
- (void)_endDelayingCompositionPresentation;
- (void)_finishServiceViewControllerRequestWithSuccess:(BOOL)arg1;
- (void)_loadContentViewControllerForcingPlaceholder:(BOOL)arg1;
- (void)_notifyBodyDidFinishLoadingWithResult:(BOOL)arg1;
- (void)_notifyCompositionDidFinish;
- (void)_serviceViewControllerReady:(id)arg1 error:(id)arg2;
- (void)_setCompositionValue:(id)arg1 forKey:(id)arg2;
- (void)_setPlaceHolderSubject:(id)arg1;
- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)autorotationDelegate;
- (void)autosaveWithHandler:(id)arg1;
- (void)compositionFinishedWithResult:(int)arg1 error:(id)arg2;
- (void)compositionViewServiceTerminatedWithError:(id)arg1;
- (void)dealloc;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)mailComposeDelegate;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setAutosaveIdentifier:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (void)setURL:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
