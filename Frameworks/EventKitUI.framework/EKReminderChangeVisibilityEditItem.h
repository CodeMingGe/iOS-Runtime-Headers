/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKReminderChangeVisibilityEditItem : EKReminderEditItem {
    int _visibilityToCommit;
}

@property(readonly) int visibilityToCommit;

- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2 inSubsection:(int)arg3;
- (id)cellForSubitemAtIndex:(int)arg1 inSubsection:(int)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(int)arg2 inSubsection:(int)arg3;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(int)arg2 inSubsection:(int)arg3;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)usesDetailViewControllerForSubitem:(int)arg1 inSubsection:(int)arg2;
- (int)visibilityToCommit;

@end
