/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKMatchRequest, GKButton, GKCollectionView, UIAlertView, UILabel, NSDictionary, NSString, GKMultiplayerCollectionViewLayout, NSArray;

@interface GKMultiplayerViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, GKFriendPickerViewControllerDelegate> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIAlertView *_alert;
    } _buttonGap;
    } _buttonSize;
    Class _contentsClass;
    NSDictionary *_contentsKeymap;
    NSString *_defaultInvitationMessage;
    BOOL _didLayout;
    BOOL _hosted;
    } _infoInsets;
    UILabel *_infoLabel;
    NSString *_infoText;
    float _infoWidth;
    GKButton *_inviteButton;
    GKMatchRequest *_matchRequest;
    int _maxParticipants;
    int _numberAccepted;
    int _numberInvited;
    int _numberInvitesRemaining;
    float _participantGap;
    } _participantSectionInsets;
    NSArray *_participants;
    } _participantsRange;
    GKButton *_playNowButton;
    BOOL _setupNotifications;
    int _status;
    } _statusSize;
    } _topSectionInsets;
}

@property UIAlertView * alert;
@property struct CGSize { float x1; float x2; } buttonGap;
@property struct CGSize { float x1; float x2; } buttonSize;
@property Class contentsClass;
@property(retain) NSDictionary * contentsKeymap;
@property(copy) NSString * defaultInvitationMessage;
@property BOOL didLayout;
@property(readonly) GKCollectionView * gkCollectionView;
@property(readonly) GKMultiplayerCollectionViewLayout * gkCollectionViewLayout;
@property(getter=isHosted) BOOL hosted;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } infoInsets;
@property(retain) UILabel * infoLabel;
@property NSString * infoText;
@property float infoWidth;
@property(retain) GKButton * inviteButton;
@property(copy) GKMatchRequest * matchRequest;
@property int maxParticipants;
@property int numberAccepted;
@property int numberInvited;
@property int numberInvitesRemaining;
@property float participantGap;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } participantSectionInsets;
@property(retain) NSArray * participants;
@property struct _NSRange { unsigned int x1; unsigned int x2; } participantsRange;
@property(retain) GKButton * playNowButton;
@property BOOL setupNotifications;
@property int status;
@property struct CGSize { float x1; float x2; } statusSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } topSectionInsets;

- (id)addPlayers:(id)arg1;
- (id)alert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)authenticatedStatusChanged:(id)arg1;
- (struct CGSize { float x1; float x2; })buttonGap;
- (struct CGSize { float x1; float x2; })buttonSize;
- (BOOL)canCancelParticipant:(id)arg1 atIndex:(int)arg2;
- (void)cancelAlertWithoutDelegateCallback;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureStatusView:(id)arg1;
- (Class)contentsClass;
- (id)contentsKeymap;
- (id)currentPlayerIDs;
- (void)dealloc;
- (id)defaultInvitationMessage;
- (BOOL)didLayout;
- (void)findPlayersIfNeeded;
- (void)finishWithError:(id)arg1;
- (void)friendPickerViewController:(id)arg1 didFinishWithPlayers:(id)arg2 inviteMessage:(id)arg3;
- (id)gkCollectionView;
- (id)gkCollectionViewLayout;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })infoInsets;
- (id)infoLabel;
- (id)infoText;
- (float)infoWidth;
- (id)init;
- (id)initWithMatchRequest:(id)arg1;
- (id)inviteButton;
- (id)invitedPlayers;
- (BOOL)isHosted;
- (void)layoutSubviewsForInterfaceOrientation:(int)arg1;
- (void)loadView;
- (id)localParticipant;
- (id)matchRequest;
- (int)maxParticipants;
- (int)numberAccepted;
- (int)numberInvited;
- (int)numberInvitesRemaining;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)participantAdded:(id)arg1;
- (void)participantCanceled:(id)arg1;
- (float)participantGap;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })participantSectionInsets;
- (id)participantWithID:(id)arg1;
- (id)participants;
- (struct _NSRange { unsigned int x1; unsigned int x2; })participantsRange;
- (void)playNow;
- (id)playNowButton;
- (void)revertToEmptyParticipant:(id)arg1 animated:(BOOL)arg2;
- (void)revertToEmptyParticipant:(id)arg1;
- (void)scrollBottom;
- (void)scrollUpFromBottom;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)sendStatusUpdate;
- (void)setAlert:(id)arg1;
- (void)setButtonGap:(struct CGSize { float x1; float x2; })arg1;
- (void)setButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentsClass:(Class)arg1;
- (void)setContentsKeymap:(id)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setDidLayout:(BOOL)arg1;
- (void)setHosted:(BOOL)arg1;
- (void)setInfoInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setInfoWidth:(float)arg1;
- (void)setInviteButton:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setMaxParticipants:(int)arg1;
- (void)setNumberAccepted:(int)arg1;
- (void)setNumberInvited:(int)arg1;
- (void)setNumberInvitesRemaining:(int)arg1;
- (void)setParticipantGap:(float)arg1;
- (void)setParticipantSectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setParticipants:(id)arg1;
- (void)setParticipantsRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPlayNowButton:(id)arg1;
- (void)setSetupNotifications:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTopSectionInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setupCollectionView;
- (BOOL)setupNotifications;
- (void)setupParticipants;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldShowInfoLabel;
- (void)showFriendPicker;
- (int)status;
- (struct CGSize { float x1; float x2; })statusSize;
- (BOOL)supportsNearbyPlayers;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })topSectionInsets;
- (void)updateButtonState;
- (void)updateParticipant:(id)arg1;
- (void)updateParticipants;
- (void)updateUI;
- (void)updateUIAndReload:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
