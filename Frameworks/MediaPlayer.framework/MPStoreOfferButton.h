/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPStoreOfferButton : UIButton {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _allowsMultiLineTitles;
    BOOL _allowsReload;
    } _animationFinalSize;
    int _animationHorizontalAlignment;
    NSString *_confirmationTitle;
    BOOL _isShowingConfirmation;
    NSString *_itemOfferButtonStyle;
    BOOL _needsReload;
    int _offerButtonStyle;
    NSString *_offerTitle;
    BOOL _shouldShowConfirmation;
    int _style;
    NSString *_styleVariant;
}

@property BOOL allowsMultiLineTitles;
@property int animationHorizontalAlignment;
@property(copy) NSString * confirmationTitle;
@property(copy) NSString * itemOfferButtonStyle;
@property int offerButtonStyle;
@property(copy) NSString * offerTitle;
@property BOOL shouldShowConfirmation;
@property(getter=isShowingConfirmation) BOOL showingConfirmation;

+ (BOOL)_applyConfiguration:(struct { int x1; id x2; float x3; int x4; int x5; struct UIEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct UIEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; id x8; id x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; float x_10_1_7; float x_10_1_8; } x10; })arg1 toButton:(id)arg2;
+ (void)applyStyle:(int)arg1 toButton:(id)arg2;
+ (double)defaultAnimationDuration;

- (void)_applyConfiguration:(struct { int x1; id x2; float x3; int x4; int x5; struct UIEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct UIEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; id x8; id x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; float x_10_1_7; float x_10_1_8; } x10; })arg1;
- (struct { int x1; id x2; float x3; int x4; int x5; struct UIEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct UIEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; id x8; id x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; float x_10_1_7; float x_10_1_8; } x10; })_configurationForStyleVariant:(id)arg1;
- (BOOL)_getConfiguration:(struct { int x1; id x2; float x3; int x4; int x5; struct UIEdgeInsets { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; } x6; struct UIEdgeInsets { float x_7_1_1; float x_7_1_2; float x_7_1_3; float x_7_1_4; } x7; id x8; id x9; struct { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; float x_10_1_5; float x_10_1_6; float x_10_1_7; float x_10_1_8; } x10; }*)arg1 forStyleVariant:(id)arg2 style:(int)arg3;
- (void)_reloadButton;
- (BOOL)allowsMultiLineTitles;
- (int)animationHorizontalAlignment;
- (BOOL)configureForEntity:(id)arg1 offer:(id)arg2;
- (id)confirmationTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithOfferButtonStyle:(int)arg1;
- (BOOL)isShowingConfirmation;
- (id)itemOfferButtonStyle;
- (void)layoutSubviews;
- (int)offerButtonStyle;
- (id)offerTitle;
- (void)setAllowsMultiLineTitles:(BOOL)arg1;
- (void)setAnimationHorizontalAlignment:(int)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setItemOfferButtonStyle:(id)arg1;
- (void)setOfferButtonStyle:(int)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setShouldShowConfirmation:(BOOL)arg1;
- (void)setShowingConfirmation:(BOOL)arg1 duration:(double)arg2;
- (void)setShowingConfirmation:(BOOL)arg1;
- (void)setStyleVariant:(id)arg1;
- (BOOL)shouldShowConfirmation;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
