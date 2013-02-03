/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIColor, <SUWebViewDelegate>;

@interface SUWebView : UIWebView {
    unsigned int _scrollingDisabled : 1;
    UIColor *_originalBackgroundColor;
    BOOL _originalShowsBackgroundShadow;
    BOOL _showsTopBackgroundShadow;
    int _synchronousLayoutCount;
    UIColor *_topBackgroundColor;
}

@property <SUWebViewDelegate> * delegate;
@property(getter=isScrollingEnabled) BOOL scrollingEnabled;
@property BOOL showsTopBackgroundShadow;
@property(readonly) NSString * title;
@property(retain) UIColor * topBackgroundColor;
@property(readonly) id windowScriptObject;

- (void)_setRichTextReaderViewportSettings;
- (void)beginSynchronousLayout;
- (void)dealloc;
- (void)endSynchronousLayout;
- (BOOL)getStatusBarStyle:(int*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isScrollingEnabled;
- (void)loadArchive:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setShowsTopBackgroundShadow:(BOOL)arg1;
- (void)setTopBackgroundColor:(id)arg1;
- (BOOL)showsTopBackgroundShadow;
- (id)title;
- (id)topBackgroundColor;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)windowScriptObject;

@end
