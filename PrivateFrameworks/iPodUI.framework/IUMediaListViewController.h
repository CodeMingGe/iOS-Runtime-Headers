/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUCoverFlowTransitionController, NSOperationQueue, IUMediaListAggregateView, IUCoverFlowViewController;

@interface IUMediaListViewController : IUTableViewController <IUCoverFlowOwner> {
    unsigned int _searchEnabled : 1;
    unsigned int _hasPendingDynamicChanges : 1;
    unsigned int _hasPendingNowPlayingItemChanges : 1;
    IUMediaListAggregateView *_aggregateHeaderView;
    IUCoverFlowTransitionController *_coverFlowTransition;
    IUCoverFlowViewController *_coverFlowViewController;
    NSOperationQueue *_downloadableEntitiesOperationQueue;
    unsigned long long _lastAttemptedAutoscrollPersistentID;
    double _nowPlayingAutoScrollEnableTime;
}

@property(retain) IUCoverFlowViewController * coverFlowViewController;
@property(readonly) BOOL isShowingCoverFlow;

+ (Class)tableViewClass;

- (void)_accessorySplashViewWillAppearNotification:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_autoscrollNowPlayingItemToVisibleWithIndexPath:(id)arg1 persistentID:(unsigned long long)arg2;
- (id)_baseViewController;
- (BOOL)_canShowCoverFlow;
- (void)_coverFlowDidTransitionOut:(id)arg1;
- (void)_coverFlowTransitionInDidStop:(id)arg1 finished:(id)arg2;
- (void)_dataSourceCountStringFormatDidChange:(id)arg1;
- (void)_delayedPushContext:(id)arg1;
- (void)_downloadAllAction:(id)arg1;
- (BOOL)_handleControllerContext:(id)arg1;
- (void)_handleNowPlayingItemChangedAndScrollToVisible;
- (void)_handleTrackDynamicPropertiesChanged;
- (void)_localizedDateFormatsDidChange:(id)arg1;
- (void)_nowPlayingItemChanged:(id)arg1;
- (void)_trackDynamicPropertiesChangedNotification:(id)arg1;
- (void)_transitionFromCoverFlow;
- (void)_transitionToCoverFlowWithInterfaceOrientation:(int)arg1;
- (id)coverFlowViewController;
- (void)dealloc;
- (void)deviceOrientationChanged:(int)arg1;
- (BOOL)handlePlaybackDataSource:(id)arg1;
- (BOOL)hasSearchBar;
- (id)init;
- (BOOL)isShowingCoverFlow;
- (void)loadView;
- (void)modalContextDidDismiss:(id)arg1 withSuccess:(BOOL)arg2;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (void)performDefaultActionForRow:(int)arg1;
- (id)query;
- (void)registerForPlayerNotifications;
- (void)remoteEventMoveDown;
- (void)remoteEventMoveUp;
- (void)remoteEventSelectItem;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCoverFlowViewController:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)unregisterForPlayerNotifications;
- (void)updateFooterView;
- (void)viewControllerDidFinishReloadForDataSourceInvalidation;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillAppearForRemoteEvent;

@end
