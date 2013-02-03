/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSURL, NSString, UIImage;

@interface IUUserMessageDataSource : IUMediaDataSource {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    NSURL *_findContentURL;
    UIImage *_image;
    NSString *_messageSubtitle;
    NSString *_messageTitle;
    float _modalContextTopInset;
    float _modalContextTopOffset;
    BOOL _showStrings;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(retain) NSURL * findContentURL;
@property(retain) UIImage * image;
@property(retain) NSString * messageSubtitle;
@property(retain) NSString * messageTitle;
@property float modalContextTopOffset;
@property(readonly) BOOL showStrings;

- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (id)findContentURL;
- (id)image;
- (id)init;
- (id)initForMusic;
- (id)initForVideo;
- (BOOL)isRestorableNavigationPathNode;
- (id)messageSubtitle;
- (id)messageTitle;
- (float)modalContextTopOffset;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFindContentURL:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMessageSubtitle:(id)arg1;
- (void)setMessageTitle:(id)arg1;
- (void)setModalContextTopOffset:(float)arg1;
- (BOOL)showStrings;

@end
