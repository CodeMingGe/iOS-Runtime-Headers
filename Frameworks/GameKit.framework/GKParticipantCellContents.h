/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIButton, UILabel, UIProgressIndicator, UIImage, NSString;

@interface GKParticipantCellContents : GKCollectionCellContents {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIButton *_addButton;
    UIButton *_cancelBox;
    UIImage *_image;
    } _imageFrame;
    int _kind;
    UIProgressIndicator *_progressIndicator;
    UILabel *_statusLabel;
    UILabel *_titleLabel;
}

@property(retain) UIButton * addButton;
@property(retain) UIButton * cancelBox;
@property BOOL cancelBoxVisible;
@property(retain) UIImage * image;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageFrame;
@property int kind;
@property(retain) UIProgressIndicator * progressIndicator;
@property BOOL progressIndicatorVisible;
@property(retain) NSString * status;
@property(retain) UILabel * statusLabel;
@property(retain) NSString * title;
@property(retain) UILabel * titleLabel;

- (id)addButton;
- (void)addButtonPressed;
- (id)cancelBox;
- (BOOL)cancelBoxVisible;
- (void)cancelPressed;
- (void)dealloc;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrame;
- (id)init;
- (int)kind;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)progressIndicator;
- (BOOL)progressIndicatorVisible;
- (void)setAddButton:(id)arg1;
- (void)setCancelBox:(id)arg1;
- (void)setCancelBoxVisible:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKind:(int)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setProgressIndicatorVisible:(BOOL)arg1;
- (void)setStatus:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)status;
- (id)statusLabel;
- (id)title;
- (id)titleLabel;

@end
