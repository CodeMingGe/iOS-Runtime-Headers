/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, UILabel, UIScrollView, UIKeyboardEmojiInputController, UIKeyboardEmojiCategory, NSMutableArray;

@interface UIKeyboardEmojiScrollView : UIKBKeyView <UIScrollViewDelegate, UIKeyboardEmojiInput> {
    UIKeyboardEmojiCategory *_category;
    UILabel *_categoryLabel;
    int _currentPage;
    UIKeyboardEmojiInputController *_inputController;
    UILabel *_optionalDescription;
    UIPageControl *_pageControl;
    NSMutableArray *_pages;
    UIScrollView *_scrollView;
}

- (void)clearPages;
- (int)currentPage;
- (void)dealloc;
- (void)delayLayout;
- (void)doLayout;
- (int)emojiCountPerPageForRotation;
- (void)ensureSurrounded;
- (void)forceLayout;
- (void)goToFirstPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (void)interruptScrolling;
- (void)layoutPages;
- (void)layoutRecents;
- (void)pageChanged;
- (void)reloadForCategory:(id)arg1;
- (void)saveFirstVisibleEmojiIndex;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setScrollDelay:(double)arg1;
- (BOOL)shouldCache;

@end
