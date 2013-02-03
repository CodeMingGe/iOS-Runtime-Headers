/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUMediaActionSheet, IUTableViewControllerInfo, NSObject<OS_dispatch_queue>, UISearchDisplayController, UITableView, UILabel, NSIndexPath, UIView, IUSearchHelper, IUMediaAlertView;

@interface IUTableViewController : IUiPodViewController <IUSearchHelperDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate> {
    IUMediaActionSheet *_deleteActionSheet;
    IUMediaAlertView *_deleteAlertView;
    struct __CFDictionary { } *_displayedSectionIndexToDataSourceSectionIndex;
    BOOL _editing;
    NSObject<OS_dispatch_queue> *_footerQueue;
    UIView *_footerView;
    UILabel *_globalHeaderLabel;
    UIView *_globalHeaderView;
    unsigned int _ignoreTableReloadCount;
    NSIndexPath *_indexPathToDeletePendingConfirmation;
    BOOL _isBeingRemoved;
    BOOL _keepSelectionOnAppear;
    BOOL _needsTableFooterViewScrolledToVisible;
    BOOL _reloadWhenAppEntersForeground;
    BOOL _reloadingData;
    IUTableViewControllerInfo *_restoreViewInfoAfterLoad;
    IUSearchHelper *_searchHelper;
    IUMediaAlertView *_selectionConfirmationAlert;
    BOOL _showingIndexBar;
    BOOL _startAtEndOnFirstAppear;
    UITableView *_tableView;
}

@property(readonly) BOOL allowsDisclosureInCells;
@property(getter=isEditing) BOOL editing;
@property BOOL fadeSelectionOnAppear;
@property(retain) UIView * footerView;
@property(readonly) BOOL hasSearchBar;
@property(getter=isIgnoringTableReload,readonly) BOOL ignoringTableReload;
@property BOOL needsTableFooterViewScrolledToVisible;
@property(readonly) UISearchDisplayController * searchDisplayController;
@property(readonly) IUSearchHelper * searchHelper;
@property(getter=isShowingIndexBar,readonly) BOOL showingIndexBar;
@property(retain) UITableView * tableView;

+ (id)tableViewBackgroundColor;
+ (Class)tableViewCellClass;
+ (Class)tableViewClass;

- (void)_addGlobalHeaderIfNecessary;
- (void)_cancelDeleteAction:(id)arg1;
- (void)_cancelDeleteAlertView:(BOOL)arg1;
- (void)_createTableIfNecessary;
- (void)_delayedDeselectIndexPath:(id)arg1;
- (void)_delayedUpdateAlternateStyles;
- (void)_delayedUpdateMovedCellData;
- (void)_deleteEntityAtIndexPath:(id)arg1;
- (void)_deselectSelection:(BOOL)arg1;
- (void)_fixupDataSource;
- (BOOL)_isEmptyAndDoesntWantDisplay:(BOOL)arg1;
- (void)_onMainThreadPopSelfIfEmpty;
- (void)_presentModalContextForTag:(int)arg1;
- (void)_reallyPopSelfIfEmpty;
- (void)_reloadDataIncludingDataSource:(BOOL)arg1 popIfEmpty:(BOOL)arg2;
- (void)_reloadDataSource;
- (void)_setDeleteActionSheet:(id)arg1;
- (void)_setDeleteAlertView:(id)arg1;
- (void)_tableViewController_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_tableViewController_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_tableViewController_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_tableViewController_networkTypeDidChangeNotification:(id)arg1;
- (void)_updateCellConfigurations;
- (void)_updateForChangedEditingState:(BOOL)arg1;
- (void)_updateHeightForTableHeaderViewHiding;
- (void)accessoryButtonTapped:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (BOOL)allowsDisclosureInCells;
- (void)applicationResumedEventsOnly:(BOOL)arg1;
- (void)autoscrollTableFooterViewToVisibleIfNeeded;
- (void)beginIgnoringTableReload;
- (void)concealCompletionOfferingItems;
- (id)copyArchivableContexts;
- (void)dealloc;
- (BOOL)deselectOnViewWillAppear;
- (void)doDeleteContinuationWithConfirmation:(BOOL)arg1;
- (void)endIgnoringTableReload;
- (BOOL)fadeSelectionOnAppear;
- (id)footerView;
- (BOOL)handleShortcutWithIdentifier:(id)arg1;
- (BOOL)hasSearchBar;
- (BOOL)hideActionRowsOnAppear;
- (BOOL)hideSearchRowOnAppear;
- (id)init;
- (BOOL)isEditing;
- (BOOL)isIgnoringTableReload;
- (BOOL)isShowingIndexBar;
- (void)loadView;
- (void)mediaListAggregateView:(id)arg1 performActionForSimpleCellPreset:(int)arg2;
- (BOOL)needsTableFooterViewScrolledToVisible;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2 existingContext:(id)arg3;
- (void)performActionForActionRow:(id)arg1 animated:(BOOL)arg2;
- (void)performDefaultActionForRow:(int)arg1 existingContext:(id)arg2;
- (void)performDefaultActionForRow:(int)arg1;
- (void)reloadActionRows;
- (void)reloadCellAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)reloadData;
- (void)reloadDataForDataSourceInvalidation;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)restoreViewControllerInfo:(id)arg1 animated:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchDisplayController;
- (id)searchHelper;
- (void)searchHelperWillBeginSearch:(id)arg1;
- (void)searchHelperWillEndSearch:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setFadeSelectionOnAppear:(BOOL)arg1;
- (void)setFooterView:(id)arg1;
- (void)setModalContext:(id)arg1;
- (void)setNeedsTableFooterViewScrolledToVisible:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (void)setVisibleCellsUseSubviewLayout:(BOOL)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (void)toggleVisibilityOfItemsInCompletionOffering:(id)arg1;
- (void)updateFooterView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
