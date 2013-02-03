/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaItem, IUiPadVideoEpisodeTableViewCellContentView, MPMediaDownloadObserver;

@interface IUiPadVideoEpisodeTableViewCell : IUiPadVideoPartTableViewCell {
    MPMediaDownloadObserver *_mediaDownloadObserver;
    MPMediaItem *_mediaItem;
    SEL _moreButtonAction;
    id _moreButtonTarget;
}

@property BOOL expanded;
@property(retain) MPMediaItem * mediaItem;
@property SEL moreButtonAction;
@property id moreButtonTarget;
@property(readonly) IUiPadVideoEpisodeTableViewCellContentView * videoEpisodeContentView;

+ (Class)contentViewClass;

- (void)_cancelDownloadAction:(id)arg1;
- (void)_moreButtonSelected:(id)arg1;
- (void)_releaseMediaDownloadObserver;
- (void)_releaseMediaDownloadObserverAndProgressIndicator;
- (void)_updateContentViewDownloadProgress;
- (void)dealloc;
- (BOOL)expanded;
- (void)hideDeleteConfirmationView;
- (BOOL)imageRequestIsValid:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)mediaItem;
- (SEL)moreButtonAction;
- (id)moreButtonTarget;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setMediaItem:(id)arg1;
- (void)setMoreButtonAction:(SEL)arg1;
- (void)setMoreButtonTarget:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateContentView;
- (id)videoEpisodeContentView;
- (id)videoImageRequest;

@end
