/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PLAlbumTextField, UIImageView, UIButton, PLUnreadMarkerView, UIImage, NSString, PLImageView, UIView<PLStackableImage>, PLLabel;

@interface PLStackItemViewCell : UIView <UITextFieldDelegate> {
    UIImage *_badgeImage;
    UIImageView *_badgeView;
    id _closeAction;
    UIButton *_closeButton;
    PLAlbumTextField *_editField;
    BOOL _enabled;
    BOOL _ignoreEndEditing;
    BOOL _labelIsEditable;
    float _labelsAlpha;
    BOOL _labelsHidden;
    BOOL _labelsShadowEnabled;
    float _previousEnabledAlpha;
    id _renameAction;
    BOOL _showsUnreadIndicator;
    BOOL _showsUnreadStartMarker;
    UIView<PLStackableImage> *_sourceView;
    float _stackedAngle;
    NSString *_subtitle;
    PLLabel *_subtitleLabel;
    NSString *_title;
    PLLabel *_titleLabel;
    UIImageView *_unreadBadge;
    PLUnreadMarkerView *_unreadMarkerStartView;
    unsigned int _unreadStartMarkerCount;
    BOOL _unreadStartMarkerShowsProgress;
}

@property(retain) UIImage * badgeImage;
@property(copy) id closeAction;
@property(readonly) struct CGPoint { float x1; float x2; } closeBoxPosition;
@property BOOL enabled;
@property BOOL ignoreEndEditing;
@property unsigned int imageIndex;
@property(readonly) PLImageView * imageView;
@property(readonly) BOOL isLabelEditing;
@property(getter=isLabelEditable) BOOL labelIsEditable;
@property float labelsAlpha;
@property BOOL labelsHidden;
@property(getter=isLabelShadowEnabled) BOOL labelsShadowEnabled;
@property(copy) id renameAction;
@property(getter=isShadowEnabled) BOOL shadowEnabled;
@property(getter=isCloseBoxShown) BOOL showCloseBox;
@property BOOL showsUnreadIndicator;
@property BOOL showsUnreadStartMarker;
@property(retain) UIView<PLStackableImage> * sourceView;
@property float stackedAngle;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;
@property unsigned int unreadStartMarkerCount;
@property BOOL unreadStartMarkerShowsProgress;

+ (void)initialize;

- (void)_getTitleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 subtitleFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 unreadIndicatorFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_handleCloseBoxTap;
- (void)_updateBadgeViewAnimated:(BOOL)arg1 forImageChange:(BOOL)arg2;
- (void)_updateLabelsState;
- (void)_updateUnreadStartMarkerAnimated:(BOOL)arg1;
- (id)badgeImage;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (id)closeAction;
- (struct CGPoint { float x1; float x2; })closeBoxPosition;
- (void)dealloc;
- (BOOL)enabled;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)ignoreEndEditing;
- (unsigned int)imageIndex;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCloseBoxShown;
- (BOOL)isLabelEditable;
- (BOOL)isLabelEditing;
- (BOOL)isLabelShadowEnabled;
- (BOOL)isShadowEnabled;
- (float)labelsAlpha;
- (BOOL)labelsHidden;
- (void)layoutSubviews;
- (BOOL)pointIsInsideTitle:(struct CGPoint { float x1; float x2; })arg1;
- (id)renameAction;
- (void)resetToInitialSizeAndAngle;
- (void)setBadgeImage:(id)arg1 animated:(BOOL)arg2;
- (void)setBadgeImage:(id)arg1;
- (void)setCloseAction:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setIgnoreEndEditing:(BOOL)arg1;
- (void)setImageIndex:(unsigned int)arg1;
- (void)setLabelIsEditable:(BOOL)arg1;
- (void)setLabelsAlpha:(float)arg1;
- (void)setLabelsHidden:(BOOL)arg1;
- (void)setLabelsShadowEnabled:(BOOL)arg1;
- (void)setRenameAction:(id)arg1;
- (void)setShadowEnabled:(BOOL)arg1;
- (void)setShowCloseBox:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowCloseBox:(BOOL)arg1;
- (void)setShowsUnreadIndicator:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsUnreadIndicator:(BOOL)arg1;
- (void)setShowsUnreadStartMarker:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsUnreadStartMarker:(BOOL)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1 angle:(float)arg2;
- (void)setSourceView:(id)arg1;
- (void)setStackedAngle:(float)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnreadStartMarkerCount:(unsigned int)arg1;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1;
- (BOOL)showsUnreadIndicator;
- (BOOL)showsUnreadStartMarker;
- (id)sourceView;
- (float)stackedAngle;
- (id)subtitle;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })textField:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)title;
- (unsigned int)unreadStartMarkerCount;
- (BOOL)unreadStartMarkerShowsProgress;

@end
