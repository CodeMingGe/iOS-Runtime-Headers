/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTableView, UISearchBar, GKTableViewControllerV2, UISearchDisplayController, NSOrderedSet;

@interface GKTableHeaderSearchController : NSObject <UISearchBarDelegate, UISearchDisplayDelegate> {
    UISearchBar *_searchBar;
    BOOL _searchBarHidden;
    UISearchDisplayController *_searchController;
    NSOrderedSet *_searchTableSections;
    GKTableViewControllerV2 *_tableController;
    GKTableView *_tableView;
}

@property(retain) UISearchBar * searchBar;
@property BOOL searchBarHidden;
@property(retain) UISearchDisplayController * searchDisplayController;
@property(retain) NSOrderedSet * searchTableSections;
@property GKTableViewControllerV2 * tableController;
@property(readonly) GKTableView * tableView;

+ (id)playerNamePredicateForSearchText:(id)arg1;
+ (id)searchControllerForTableView:(id)arg1 withController:(id)arg2;

- (Class)_resultsTableViewClass;
- (void)cancelSearchAndDismiss;
- (void)dealloc;
- (void)didTouchOverlayView;
- (BOOL)isSearchActive;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (BOOL)searchBarHidden;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (id)searchDisplayController;
- (id)searchTableSections;
- (void)setSearchBar:(id)arg1;
- (void)setSearchBarHidden:(BOOL)arg1;
- (void)setSearchDisplayController:(id)arg1;
- (void)setSearchTableSections:(id)arg1;
- (void)setTableController:(id)arg1;
- (void)setTableView:(id)arg1 tableController:(id)arg2;
- (id)tableController;
- (id)tableView;
- (void)updateStatusViewWithResults:(BOOL)arg1;

@end
