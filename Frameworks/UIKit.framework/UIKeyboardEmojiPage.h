/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITouch, NSArray, UIKeyboardEmojiInputController, UIKeyboardEmojiView;

@interface UIKeyboardEmojiPage : UIView {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UITouch *_activeTouch;
    NSArray *_emoji;
    } _emojiPadding;
    } _emojiSize;
    UIKeyboardEmojiInputController *_inputController;
    } _keyActivationRect;
    } _margin;
    BOOL _needsEmojiRendering;
    BOOL _needsLayout;
    int _numCols;
    int _numPages;
    int _numRows;
    UIKeyboardEmojiView *_onDisplay;
    UIKeyboardEmojiView *_pendingDisplay;
    UIKeyboardEmojiView *_touched;
}

@property(retain) UITouch * activeTouch;
@property(retain) NSArray * emoji;
@property(readonly) int emojiCountPerPage;
@property UIKeyboardEmojiInputController * inputController;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } keyActivationRect;
@property BOOL needsLayout;
@property(retain) UIKeyboardEmojiView * onDisplay;
@property(retain) UIKeyboardEmojiView * pendingDisplay;
@property(retain) UIKeyboardEmojiView * touched;

- (id)activeTouch;
- (void)cancelPendingPopupChanges;
- (void)checkForStalePopup:(id)arg1;
- (id)closestForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)deactivatePopUps;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)emoji;
- (int)emojiCountPerPage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })emojiRectForPoint:(struct CGPoint { float x1; float x2; })arg1 index:(unsigned int*)arg2;
- (void)generateSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inputController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })keyActivationRect;
- (BOOL)needsLayout;
- (id)onDisplay;
- (id)pendingDisplay;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRow:(int)arg1 Col:(int)arg2;
- (void)removeDisplayedPopup:(id)arg1;
- (void)removeFromSuperview;
- (void)setActiveTouch:(id)arg1;
- (void)setEmoji:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setInputController:(id)arg1;
- (void)setKeyActivationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setOnDisplay:(id)arg1;
- (void)setPendingDisplay:(id)arg1;
- (void)setTouched:(id)arg1;
- (void)showPendingPopup:(id)arg1;
- (int)takeEmoji:(id)arg1 fromIndex:(int)arg2;
- (void)touchBegan:(id)arg1;
- (void)touchCancelled:(id)arg1;
- (void)touchEnded:(id)arg1;
- (void)touchMoved:(id)arg1;
- (id)touched;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateLayoutConstants;

@end
