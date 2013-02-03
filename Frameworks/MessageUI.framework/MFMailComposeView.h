/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFComposeMultiView, NSInvocation, NSString, UIPickerView, MFComposeBodyField, MFComposeFromView, <MFMailPopoverManagerDelegate>, MFComposeScrollView, UITableView, <MFMailComposeViewDelegate>, MFMailComposeRecipientView, MFComposeImageSizeView, MFFromAddressViewController, MFComposeTextContentView, MFMailComposeContactsSearchController, NSArray, <MFMailComposeRecipientViewDelegate>, UIResponder, MFComposeSubjectView, UIView;

@interface MFMailComposeView : UITransitionView <UITextContentViewDelegate, UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, MFMailComposeContactsSearchControllerDelegate, MFComposeBodyFieldDelegate, MFDragContext> {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _isChangingRecipients : 1;
    unsigned int _isLoading : 1;
    unsigned int _isShowingPeoplePicker : 1;
    unsigned int _isRotating : 1;
    unsigned int _isClosing : 1;
    unsigned int _isShowingFromAddressPickerWheel : 1;
    unsigned int _isForEditing : 1;
    unsigned int _isAnimationDisabled : 1;
    unsigned int _shouldShowOptionalHeaders : 1;
    unsigned int _isDraggingRecipients : 1;
    unsigned int _hasAppeared : 1;
    MFMailComposeRecipientView *_activeRecipientView;
    MFMailComposeRecipientView *_bccField;
    MFComposeBodyField *_bodyField;
    MFComposeScrollView *_bodyScroller;
    MFMailComposeRecipientView *_ccField;
    <MFMailComposeRecipientViewDelegate> *_composeRecipientViewDelegate;
    UIView *_contentView;
    } _currentContentSize;
    NSInvocation *_delayedPopoverInvocation;
    UIResponder *_firstResponderBeforeSheet;
    UIPickerView *_fromAddressPickerView;
    MFFromAddressViewController *_fromAddressViewController;
    MFComposeFromView *_fromField;
    UIView *_headerView;
    MFComposeImageSizeView *_imageSizeField;
    float _keyboardIntersection;
    MFMailComposeRecipientView *_lastChangedRecipientView;
    <MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    MFComposeMultiView *_multiField;
    unsigned int _notifyingBodyField;
    float _offsetBeforeSearch;
    unsigned int _options;
    UIResponder *_pinningResponder;
    <MFMailPopoverManagerDelegate> *_popoverOwner;
    MFMailComposeContactsSearchController *_searchController;
    NSArray *_searchResults;
    UITableView *_searchResultsTable;
    UIView *_shadowView;
    NSString *_signatureMarkupString;
    MFComposeSubjectView *_subjectField;
    MFComposeTextContentView *_textView;
    MFMailComposeRecipientView *_toField;
}

@property(getter=isAnimationDisabled) BOOL animationDisabled;
@property(readonly) MFMailComposeRecipientView * bccField;
@property(readonly) MFComposeBodyField * bodyField;
@property(readonly) MFComposeScrollView * bodyScroller;
@property(readonly) MFComposeTextContentView * bodyTextView;
@property(readonly) MFMailComposeRecipientView * ccField;
@property(getter=isChangingRecipients) BOOL changingRecipients;
@property <MFMailComposeRecipientViewDelegate> * composeRecipientDelegate;
@property <MFMailComposeViewDelegate> * composeViewDelegate;
@property(readonly) MFComposeFromView * fromField;
@property(readonly) MFComposeImageSizeView * imageSizeField;
@property BOOL isForEditing;
@property(getter=isLoading) BOOL loading;
@property(readonly) MFComposeMultiView * multiField;
@property <MFMailPopoverManagerDelegate> * popoverOwner;
@property(getter=isSearching,readonly) BOOL searching;
@property(getter=isShowingPeoplePicker) BOOL showingPeoplePicker;
@property(readonly) MFComposeSubjectView * subjectField;
@property(readonly) MFMailComposeRecipientView * toField;

- (void)_adjustScrollerContentSize;
- (void)_adjustScrollerForBottomView;
- (void)_cancelAnimations;
- (void)_cancelDelayedPopover;
- (void)_collectKeyViews:(id)arg1;
- (void)_finishUpRotationToInterfaceOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForFromAddressPicker;
- (float)_heightForBottomView;
- (void)_layoutFromFieldWithChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutMultiFieldWithChangingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2 fieldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3 searchResultsWereDismissed:(BOOL)arg4;
- (void)_layoutSubviews:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_layoutSubviews:(BOOL)arg1;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg1 changingView:(id)arg2 toSize:(struct CGSize { float x1; float x2; })arg3;
- (void)_multiFieldClicked;
- (void)_presentDelayedPopover;
- (id)_searchResultsTable;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 enclosingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 changingView:(id)arg3 frameToPin:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 wasSearching:(BOOL)arg5;
- (void)_setupField:(id*)arg1 withLabel:(id)arg2 navTitle:(id)arg3 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg1;
- (void)_updateSignatureMarkupString;
- (void)automaticKeyboardFinishedAppearing:(id)arg1;
- (void)automaticKeyboardFinishedDisappearing:(id)arg1;
- (id)bccField;
- (void)beginSearchForText:(id)arg1 recipientView:(id)arg2;
- (id)bodyField;
- (id)bodyScroller;
- (id)bodyTextView;
- (id)bottomView;
- (void)cancelDelayedPopover;
- (void)cancelSearch;
- (id)ccField;
- (BOOL)chooseSelectedSearchResult;
- (void)clearSearchForRecipientView:(id)arg1 reflow:(BOOL)arg2 clear:(BOOL)arg3;
- (void)composeBodyFieldDidDraw:(id)arg1;
- (void)composeBodyFieldDidFirstVisuallyNonEmptyLayout:(id)arg1;
- (void)composeBodyFieldFrameChanged:(id)arg1;
- (void)composeContactsSearchController:(id)arg1 didSortResults:(id)arg2;
- (void)composeContactsSearchController:(id)arg1 finishedWithResults:(BOOL)arg2;
- (void)composeHeaderViewClicked:(id)arg1;
- (id)composeRecipientDelegate;
- (id)composeViewDelegate;
- (void)dealloc;
- (void)didAppear;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dragBeganInWindow:(id)arg1;
- (void)dragEnded;
- (id)dragScrollView;
- (id)dragWindow;
- (BOOL)endEditing:(BOOL)arg1;
- (void)focusFirstResponderAfterRecipientView:(id)arg1;
- (void)fromAddressPickerNeedsToBeRefreshed;
- (void)fromAddressPickerPopoverWasDismissed;
- (id)fromField;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)imageSizeField;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 options:(unsigned int)arg2;
- (void)invalidateSearchResultRecipient:(id)arg1;
- (BOOL)isAnimationDisabled;
- (BOOL)isChangingRecipients;
- (BOOL)isForEditing;
- (BOOL)isFromAddressPickerVisible;
- (BOOL)isKeyboardVisible;
- (BOOL)isLoading;
- (BOOL)isSearchResultsPopoverVisible;
- (BOOL)isSearching;
- (BOOL)isShowingPeoplePicker;
- (void)layoutForChangedComposeRecipientView:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)layoutSubviews;
- (id)multiField;
- (void)parentDidClose;
- (void)parentWillClose;
- (id)popoverOwner;
- (BOOL)presentSearchResults:(id)arg1;
- (BOOL)presentSearchResults;
- (void)removeFromSuperview;
- (void)resetContentSize;
- (void)restoreFirstResponder;
- (void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)saveFirstResponder;
- (void)saveFirstResponderWithKeyboardPinning:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchResultsPopoverWasDismissed;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)selectSearchResultsRecipientAtIndexPath:(id)arg1;
- (id)sendingAddressForComposeContactsSearchController:(id)arg1;
- (void)setAnimationDisabled:(BOOL)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setChangingRecipients:(BOOL)arg1;
- (void)setComposeRecipientDelegate:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setFromAddressPickerVisible:(BOOL)arg1;
- (void)setIsForEditing:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setLoading:(BOOL)arg1;
- (void)setPopoverOwner:(id)arg1;
- (void)setRecipientFieldsEditable:(BOOL)arg1;
- (void)setScrollsToTop:(BOOL)arg1;
- (void)setShowingPeoplePicker:(BOOL)arg1;
- (id)subjectField;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize { float x1; float x2; })arg2;
- (id)toField;
- (void)toggleImageSizeFieldIfNecessary;
- (void)updateOptionalHeaderVisibility;
- (void)updateSignature;
- (void)viewDidBecomeFirstResponder:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willDisappear;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
