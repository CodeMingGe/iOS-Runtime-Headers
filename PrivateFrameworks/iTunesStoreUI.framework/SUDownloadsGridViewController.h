/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTableDataSource, NSArray;

@interface SUDownloadsGridViewController : SUGridViewController <SUDownloadsChildViewController> {
}

@property(retain) SUTableDataSource * dataSource;
@property(retain) NSArray * scriptButtons;

- (id)_downloadsViewController;
- (void)_reloadColumnCountForOrientation:(int)arg1;
- (BOOL)deleteCellAtIndexPath:(id)arg1;
- (id)init;
- (void)loadView;
- (void)reloadDownloadCellForDownload:(id)arg1;
- (id)scriptButtons;
- (void)setDataSource:(id)arg1;
- (void)setScriptButtons:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleDownloadCellForDownload:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
