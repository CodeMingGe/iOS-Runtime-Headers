/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABNamePropertyGroup, UILabel, NSString, ABStyleProvider, UIView, UIFont;

@interface ABPersonNameDisplayView : ABPasteboardControl {
    BOOL _alignOnBottom;
    NSString *_customHeadline;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
    NSString *_customTagLine;
    UILabel *_headlineLabel;
    UIFont *_messageDetailFont;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UILabel *_messageLabel;
    float _minimumHeight;
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    ABStyleProvider *_styleProvider;
    UILabel *_tagLineLabel;
}

@property BOOL alignOnBottom;
@property(retain) UIView * customMessageView;
@property(copy) NSString * headline;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property float minimumHeight;
@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property int primaryProperty;
@property(copy) NSString * primaryPropertyFormattingCountryCode;
@property(retain) ABStyleProvider * styleProvider;
@property(copy) NSString * tagLine;

- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (id)_copyPrimaryValue;
- (id)_copyTagLine;
- (float)_heightForLabelsForWidth:(float)arg1;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned int)arg2;
- (void)_setFont:(id)arg1 isDetail:(BOOL)arg2;
- (void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2;
- (void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateHeadlineText;
- (void)_updateTagLineText;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (BOOL)alignOnBottom;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)customMessageView;
- (void)dealloc;
- (id)headline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (void)layoutSubviews;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (float)minimumHeight;
- (struct CGSize { float x1; float x2; })multilineLabel:(id)arg1 sizeThatFits:(struct CGSize { float x1; float x2; })arg2;
- (id)namePropertyGroup;
- (int)primaryProperty;
- (id)primaryPropertyFormattingCountryCode;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)setAlignOnBottom:(BOOL)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHeadline:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMinimumHeight:(float)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)setPrimaryProperty:(int)arg1;
- (void)setPrimaryPropertyFormattingCountryCode:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTagLine:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)styleProvider;
- (id)tagLine;

@end
