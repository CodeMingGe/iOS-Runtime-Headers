/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UILabel, SLTwitterUserRecord, SLTwitterMentionImageView, SLTwitterSession;

@interface SLTwitterMentionTableViewCell : UITableViewCell {
    UILabel *_bottomNameLabel;
    SLTwitterMentionImageView *_iconView;
    UILabel *_searchTextLabel;
    SLTwitterSession *_session;
    UILabel *_topNameLabel;
    int _type;
    SLTwitterUserRecord *_userRecord;
}

@property(retain) SLTwitterSession * session;
@property int type;
@property(retain) SLTwitterUserRecord * userRecord;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bottomNameLableFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconViewRect;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)refreshFields;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })searchTextLabelFrame;
- (id)session;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSession:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserRecord:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })topNameLableFrame;
- (int)type;
- (void)updateCellSubviews;
- (void)updateLabelColors:(BOOL)arg1;
- (id)userRecord;

@end
