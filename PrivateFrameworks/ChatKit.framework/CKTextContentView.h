/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UILabel;

@interface CKTextContentView : UITextContentView {
    UILabel *_defaultTextView;
    BOOL _isShowingDictationPlaceholder;
}

@property(readonly) BOOL isShowingDictationPlaceholder;

- (void)_adjustForSingleLineHeightIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultTextFrame;
- (void)_updateCSSMargins;
- (void)_updateDefaultText;
- (void)_updateFontSize;
- (void)_wvReflow;
- (void)_wvSetupCSSWithMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)automaticallySelectedOverlay;
- (void)dealloc;
- (void)fontSizeChanged;
- (BOOL)hasContent;
- (void)hideDefaultText:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)insertDictationResultPlaceholder;
- (BOOL)isShowingDictationPlaceholder;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)layoutSubviews;
- (void)reflow;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)setDefaultText:(id)arg1;
- (void)setText:(id)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)willMoveToSuperview:(id)arg1;

@end
