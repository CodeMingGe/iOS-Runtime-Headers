/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIView<GKTableViewCellContents>, UIImageView, UIButton, GKUITheme;

@interface GKTableViewCell : UITableViewCell {
    struct { 
        unsigned int isGroupedTableView : 1; 
        unsigned int leaveAccessorySpace : 1; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _backgroundInsets;
    int _backgroundStyle;
    } _contentInsets;
    UIView<GKTableViewCellContents> *_contents;
    UIButton *_disclosureButton;
    UIImageView *_disclosureIndicator;
    BOOL _groupHighlightEnabled;
    } _styleFlags;
    GKUITheme *_theme;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property int backgroundStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property(retain) UIView<GKTableViewCellContents> * contents;
@property(retain) UIButton * disclosureButton;
@property BOOL groupHighlightEnabled;
@property(readonly) BOOL isGroupedTableView;
@property BOOL leaveAccessorySpace;
@property(retain) GKUITheme * theme;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (int)backgroundStyle;
- (void)configureBackgroundView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)contents;
- (void)dealloc;
- (id)description;
- (id)disclosureButton;
- (BOOL)groupHighlightEnabled;
- (id)initWithReuseIdentifier:(id)arg1 tableViewStyle:(int)arg2 backgroundStyle:(int)arg3;
- (id)initWithReuseIdentifier:(id)arg1 tableViewStyle:(int)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(int)arg3 backgroundStyle:(int)arg4;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isGroupedTableView;
- (BOOL)isSelectable;
- (void)layoutSubviews;
- (BOOL)leaveAccessorySpace;
- (void)prepareForReuse;
- (void)setAccessoryType:(int)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContents:(id)arg1;
- (void)setContentsInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDisclosureButton:(id)arg1;
- (void)setGroupHighlightEnabled:(BOOL)arg1;
- (void)setGroupSelectedOrHighlighted:(BOOL)arg1 isHighlight:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLeaveAccessorySpace:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectionStyle:(int)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
