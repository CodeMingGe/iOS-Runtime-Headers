/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, WLCardColorProfile, UIImageView, NSMutableArray, WLCardFaceTemplate, UIView, UIImage, <WLCardFaceDelegate>, NSMutableSet, PKPass, WLBarCodeStickerView;

@interface WLCardFaceView : WLEasyToHitCustomView {
    BOOL _allowBackgroundPlaceHolders;
    int _backgroundMode;
    UIImageView *_backgroundView;
    WLBarCodeStickerView *_barcodeView;
    NSMutableArray *_bodyBucketViews;
    NSMutableSet *_bodyContentViews;
    NSMutableSet *_bodyInvariantViews;
    NSArray *_buckets;
    PKPass *_card;
    float _clippedContentHeight;
    BOOL _clipsContent;
    WLCardColorProfile *_colorProfile;
    UIView *_contentView;
    int _contentViewCreatedRegions;
    <WLCardFaceDelegate> *_delegate;
    UIImageView *_dimmingView;
    UIImage *_faceImage;
    WLCardFaceTemplate *_faceTemplate;
    NSMutableArray *_headerBucketViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_headerInvariantViews;
    int _invariantViewCreatedRegions;
    UIImage *_partialFaceImage;
    int _template;
    int _visibleRegions;
}

@property BOOL allowBackgroundPlaceHolders;
@property int backgroundMode;
@property(readonly) NSMutableSet * bodyContentViews;
@property(readonly) NSMutableSet * bodyInvariantViews;
@property(readonly) NSArray * buckets;
@property(readonly) PKPass * card;
@property float clippedContentHeight;
@property BOOL clipsContent;
@property(readonly) WLCardColorProfile * colorProfile;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentBounds;
@property(readonly) UIView * contentView;
@property <WLCardFaceDelegate> * delegate;
@property(retain) NSMutableArray * headerBucketViews;
@property(readonly) NSMutableSet * headerContentViews;
@property(readonly) NSMutableSet * headerInvariantViews;
@property(readonly) BOOL isFrontFace;
@property int template;
@property int visibleRegions;

+ (Class)_faceClassForTemplate:(int)arg1 front:(BOOL)arg2;
+ (id)newBackFaceViewForTemplate:(int)arg1 tall:(BOOL)arg2;
+ (id)newFrontFaceViewForTemplate:(int)arg1;

- (int)_backgroundForBucketTemplate:(id)arg1;
- (void)_createContentViewsForRegions:(int)arg1;
- (void)_createInvariantViewsForRegions:(int)arg1;
- (id)_relevantBuckets;
- (void)_setContentViewsAlpha:(float)arg1;
- (void)_setShowsBackgroundView:(BOOL)arg1;
- (void)_setShowsBodyViews:(BOOL)arg1;
- (void)_setShowsHeaderViews:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (BOOL)allowBackgroundPlaceHolders;
- (int)backgroundMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })barcodeFrame;
- (id)bodyContentViews;
- (id)bodyInvariantViews;
- (id)buckets;
- (id)card;
- (id)cardFaceTemplate;
- (float)clippedContentHeight;
- (BOOL)clipsContent;
- (id)colorProfile;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)contentView;
- (void)createBodyContentViews;
- (void)createBodyInvariantViews;
- (void)createContentViewsWithFade:(BOOL)arg1;
- (void)createHeaderContentViews;
- (void)createHeaderInvariantViews;
- (void)dealloc;
- (id)delegate;
- (id)headerBucketViews;
- (id)headerContentViews;
- (id)headerInvariantViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFrontFace;
- (void)layoutSubviews;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)setAllowBackgroundPlaceHolders:(BOOL)arg1;
- (void)setBackgroundMode:(int)arg1;
- (void)setCard:(id)arg1 colorProfile:(id)arg2;
- (void)setClippedContentHeight:(float)arg1;
- (void)setClipsContent:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmer:(float)arg1 animated:(BOOL)arg2;
- (void)setHeaderBucketViews:(id)arg1;
- (void)setTemplate:(int)arg1;
- (void)setVisibleRegions:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })shadowInsets;
- (int)template;
- (int)visibleRegions;

@end
