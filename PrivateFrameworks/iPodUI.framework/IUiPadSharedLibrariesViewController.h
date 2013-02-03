/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIAlertView, UITapGestureRecognizer, UITableView, NSArray, MPMediaLibrary;

@interface IUiPadSharedLibrariesViewController : IUiPodViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {
    struct __CFDictionary { } *_landscapeLibraryImageViews;
    UIAlertView *_passwordAlertView;
    struct __CFDictionary { } *_portraitLibraryImageViews;
    BOOL _promptForPasswordAgainAfterDismissal;
    MPMediaLibrary *_selectedLibrary;
    NSArray *_sharedLibraries;
    UITableView *_tableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (BOOL)supportsViewControllerStyle:(int)arg1;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLibraryImageViewAtColumn:(unsigned int)arg1;
- (id)_imageViewForLibrary:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1;
- (void)_selectLibrary:(id)arg1;
- (void)_showPasswordPromptForLibrary:(id)arg1;
- (void)_updateConnectionProgressForCellAtIndexPath:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
