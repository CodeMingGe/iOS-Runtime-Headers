/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKIngestibleCard, PKRemoteAddPassesViewController, _UIAsyncInvocation, NSDate, <PKAddPassesViewControllerDelegate>, NSURL;

@interface PKAddPassesViewController : UIViewController {
    NSURL *_URL;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    PKIngestibleCard *_card;
    <PKAddPassesViewControllerDelegate> *_delegate;
    NSDate *_perfTestingForIngestion;
    int _previousStatusBarStyle;
    PKRemoteAddPassesViewController *_remoteViewController;
    BOOL _viewHasAppeared;
}

@property(getter=_URL,setter=_setURL:,retain) NSURL * _URL;
@property(getter=_cancelViewServiceRequest,setter=_setCancelViewServiceRequest:,retain) _UIAsyncInvocation * _cancelViewServiceRequest;
@property(getter=_card,setter=_setCard:,retain) PKIngestibleCard * _card;
@property(getter=_previousStatusBarStyle,setter=_setPreviousStatusBarStyle:) int _previousStatusBarStyle;
@property(getter=_remoteViewController,setter=_setRemoteViewController:,retain) PKRemoteAddPassesViewController * _remoteViewController;
@property <PKAddPassesViewControllerDelegate> * delegate;

+ (BOOL)isAvailable;

- (id)_URL;
- (id)_cancelViewServiceRequest;
- (id)_card;
- (int)_previousStatusBarStyle;
- (id)_remoteViewController;
- (void)_setCancelViewServiceRequest:(id)arg1;
- (void)_setCard:(id)arg1;
- (void)_setPreviousStatusBarStyle:(int)arg1;
- (void)_setRemoteViewController:(id)arg1;
- (void)_setURL:(id)arg1;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)ingestionDidFinishWithResult:(int)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPass:(id)arg1 orURL:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
