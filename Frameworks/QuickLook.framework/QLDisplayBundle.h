/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString, <QLPreviewItemInteractionDelegate>, <QLPreviewItem>;

@interface QLDisplayBundle : UIViewController {
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    <QLPreviewItemInteractionDelegate> *_delegate;
    int _index;
    BOOL _loaded;
    BOOL _loading;
    BOOL _overlayHidden;
    NSString *_password;
    <QLPreviewItem> *_previewItem;
    int _previewMode;
    } clientContext;
}

@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property <QLPreviewItemInteractionDelegate> * delegate;
@property int index;
@property BOOL loaded;
@property BOOL loading;
@property(retain) NSString * password;
@property(retain) <QLPreviewItem> * previewItem;
@property int previewMode;

+ (double)allowedLoadingDelay;
+ (id)backgroundColorForBackgroundType:(int)arg1;
+ (int)backgroundTypeForUTI:(id)arg1 andMode:(int)arg2;
+ (BOOL)needsAVControls;

- (void)_notifyDidLoadWithError:(id)arg1;
- (void)_performCancelLoad;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (int)backgroundType;
- (void)beginScrubbing;
- (BOOL)canBeCached;
- (BOOL)canCopyToPasteboard;
- (void)cancelLoad;
- (void)cancelLoadIfNeeded;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didFailLoadingWithError:(id)arg1;
- (void)didLoad;
- (void)didReceiveMemoryWarning;
- (void)endScrubbing;
- (void)enterBackground;
- (int)index;
- (id)init;
- (void)loadIfNeededWithHints:(id)arg1;
- (void)loadWithHints:(id)arg1;
- (BOOL)loaded;
- (BOOL)loading;
- (int)modalPresentationStyle;
- (BOOL)overlayIsHidden;
- (BOOL)overlayOwnedByDisplayBundle;
- (id)password;
- (id)pdfPreviewData;
- (id)previewItem;
- (int)previewMode;
- (id)printPageHelper;
- (id)printPageRenderer;
- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;
- (void)scrubToValue:(double)arg1;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)setLoaded:(BOOL)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPassword:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (void)togglePlayState;
- (void)viewDidAppear:(BOOL)arg1;

@end
