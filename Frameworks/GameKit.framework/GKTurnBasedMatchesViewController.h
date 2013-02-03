/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSObject<GKTurnBasedMatchmakerViewControllerDelegate>, GKTurnBasedMatchesDataSource, GKTurnBasedInviteViewController, GKMatchRequest, GKTurnBasedMatchmakerViewController;

@interface GKTurnBasedMatchesViewController : GKTableViewControllerV2 <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate> {
    BOOL _authenticateViewControllerVisible;
    NSObject<GKTurnBasedMatchmakerViewControllerDelegate> *_delegateWeak;
    GKTurnBasedInviteViewController *_inviteController;
    GKMatchRequest *_matchRequest;
    GKTurnBasedMatchesDataSource *_matchesDataSource;
    GKTurnBasedMatchmakerViewController *_matchmakerViewController;
    int _maxMatchesSeen;
    BOOL _showExistingMatches;
    BOOL _showingExistingMatches;
    BOOL _suppressUpdateContents;
}

@property BOOL authenticateViewControllerVisible;
@property NSObject<GKTurnBasedMatchmakerViewControllerDelegate> * delegate;
@property(retain) GKTurnBasedInviteViewController * inviteController;
@property(retain) GKMatchRequest * matchRequest;
@property(retain) GKTurnBasedMatchesDataSource * matchesDataSource;
@property GKTurnBasedMatchmakerViewController * matchmakerViewController;
@property int maxMatchesSeen;
@property BOOL showExistingMatches;
@property BOOL showingExistingMatches;
@property BOOL suppressUpdateContents;

- (void)_gkResetContents;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (void)addPressed;
- (BOOL)authenticateViewControllerVisible;
- (void)authenticatedStatusChanged:(id)arg1;
- (void)cancelButtonPressed;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didSelectMatch:(id)arg1;
- (void)finishWithMatchID:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (id)inviteController;
- (void)loadView;
- (id)matchRequest;
- (id)matchesDataSource;
- (id)matchmakerViewController;
- (int)maxMatchesSeen;
- (void)navigationPopToSelfAndSuppressUpdateContents;
- (void)prepareDataSource;
- (id)prepareHeaderView;
- (void)receivedTurnBasedNotification:(id)arg1;
- (void)setAuthenticateViewControllerVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInviteController:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setMatchesDataSource:(id)arg1;
- (void)setMatchmakerViewController:(id)arg1;
- (void)setMaxMatchesSeen:(int)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)setShowingExistingMatches:(BOOL)arg1;
- (void)setSuppressUpdateContents:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showDetailControllerForMatch:(id)arg1 style:(int)arg2;
- (BOOL)showExistingMatches;
- (void)showInviteControllerAnimated:(BOOL)arg1;
- (BOOL)showingExistingMatches;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)suppressUpdateContents;
- (void)tableView:(id)arg1 didDeleteMatch:(id)arg2;
- (id)title;
- (void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2;
- (void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1;
- (void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1;
- (void)updateHeaderView;
- (void)updateHeaderViewForTableView:(id)arg1 isLandscape:(BOOL)arg2;
- (BOOL)usesCrossfade;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
