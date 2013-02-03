/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLCardGroupView, NSMutableArray, UIView, WLCardGroup, <WLCardStackViewDatasource>, WLReusableCardViewQueue, NSMutableDictionary, <WLCardStackViewDelegate><UIScrollViewDelegate>;

@interface WLCardGroupStackView : UIScrollView <WLCardShredderSheetDelegate, WLCardGroupViewDelegate> {
    unsigned int _isDeleting : 1;
    NSMutableDictionary *_animatorsByUniqueID;
    NSMutableArray *_cardPileViews;
    int _currentTestReps;
    <WLCardStackViewDatasource> *_datasource;
    NSMutableDictionary *_groupViewsByUniqueID;
    unsigned int _modalGroupIndex;
    WLCardGroup *_modallyPresentedGroup;
    WLCardGroupView *_modallyPresentedGroupView;
    UIView *_pileContainer;
    int _presentationState;
    WLReusableCardViewQueue *_reusableCardViewQueue;
    int _scrollingTestState;
}

@property <WLCardStackViewDatasource> * datasource;
@property <WLCardStackViewDelegate><UIScrollViewDelegate> * delegate;
@property unsigned int modalGroupIndex;
@property int presentationState;

- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned int)arg2;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_arrangeGroups;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (void)_cleanupCardPileContainerView;
- (struct CGSize { float x1; float x2; })_contentSize;
- (void)_createCardPileContainerView;
- (int)_defaultContentModeForPresentationState:(int)arg1 index:(unsigned int)arg2;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_enumerateVisibleGroupViews:(id)arg1;
- (void)_fanAndPageGroupView:(id)arg1;
- (void)_generateModalCardGroupPileWithVisibleIndexes:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (float)_groupHeightMultiplier;
- (id)_groupViewAtIndex:(unsigned int)arg1;
- (id)_groupViewWithGroup:(id)arg1 contentMode:(int)arg2;
- (void)_handleModalGroupGesture:(id)arg1;
- (unsigned int)_indexOfGroupView:(id)arg1;
- (BOOL)_isIngestingCard;
- (unsigned int)_lastIndex;
- (id)_loadGroupViewAtIndex:(unsigned int)arg1 forState:(int)arg2 contentMode:(int)arg3 cached:(BOOL*)arg4;
- (void)_loadModalGroupView;
- (float)_maxContentHeightForStackedCardViewAtIndex:(unsigned int)arg1;
- (void)_notifyDelegateOfStateChange;
- (void)_performAfterDelay:(double)arg1 block:(id)arg2;
- (struct CGPoint { float x1; float x2; })_positionForGroupView:(id)arg1 atIndex:(unsigned int)arg2 forState:(int)arg3;
- (void)_presentCardIngestionAcceptanceWithAnimation:(BOOL)arg1;
- (void)_presentCardIngestionWithAnimation:(BOOL)arg1;
- (void)_presentFlippedModalGroupView:(id)arg1 animated:(BOOL)arg2;
- (void)_presentGroupStackViewWithAnimation:(BOOL)arg1 fromGesture:(BOOL)arg2;
- (void)_presentModalGroupView:(id)arg1 animated:(BOOL)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfEagerLoadedIndexes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeOfVisibleIndexes;
- (void)_removeGroupViewAsSubviewWithUniqueID:(id)arg1;
- (void)_scaleCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 duration:(float)arg4;
- (float)_scaleForGroupView:(id)arg1 forState:(int)arg2;
- (void)_setModalGroupView:(id)arg1;
- (void)_setNonVisibleGroupsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_tileGroupsForState:(int)arg1 eager:(BOOL)arg2;
- (void)_translateCardGroupView:(id)arg1 toState:(int)arg2 startTime:(float)arg3 duration:(float)arg4;
- (void)_translateCardGroupView:(id)arg1 toState:(int)arg2 withMass:(float)arg3 stiffness:(float)arg4 damping:(float)arg5 startTime:(float)arg6 duration:(float)arg7;
- (float)_xPositionForGroupView:(id)arg1 forState:(int)arg2;
- (float)_yForModallyPresentedGroup;
- (float)_yPositionForGroupAtIndex:(unsigned int)arg1 forState:(int)arg2;
- (void)beginFlipCardTest;
- (void)beginScrollCardListTest;
- (void)beginSelectCardTest;
- (id)datasource;
- (void)dealloc;
- (void)deleteGroupAtIndex:(unsigned int)arg1;
- (void)flushCachesForUniqueID:(id)arg1;
- (void)gotoBaseTestState;
- (void)groupView:(id)arg1 deleteButtonPressedForCard:(id)arg2;
- (void)groupViewFrontCardDidFlip:(id)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
- (BOOL)groupViewPassesSuppressedContent:(id)arg1;
- (id)groupViewReusableCardViewQueue:(id)arg1;
- (BOOL)groupViewShouldAllowCardFlip:(id)arg1;
- (BOOL)groupViewShouldShowFullFrontCardInStack:(id)arg1;
- (void)groupViewTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)modalGroupIndex;
- (void)noteDidEndScrollingForTesting;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (int)presentationState;
- (void)reloadData;
- (void)reloadGroupViewAtIndex:(unsigned int)arg1;
- (void)scrollDownTest;
- (void)scrollNext;
- (void)scrollUpTest;
- (void)setDatasource:(id)arg1;
- (void)setModalGroupIndex:(unsigned int)arg1;
- (void)setPresentationState:(int)arg1 animated:(BOOL)arg2;
- (void)setPresentationState:(int)arg1;
- (void)shredderSheet:(id)arg1 didCompleteWithCancelled:(BOOL)arg2;
- (void)stageGroupInPresentationState:(int)arg1 atIndex:(unsigned int)arg2;
- (void)testFlipToBack;
- (void)testFlipToFront;
- (void)testGoModal;
- (void)testGroupSelection;
- (void)tileCardsEagerly:(BOOL)arg1;

@end
