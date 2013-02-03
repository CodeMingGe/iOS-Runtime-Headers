/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class UIView, TintedView, UIImage;

@interface LineGraphView : UIView {
    UIImage *_lineImage;
    BOOL _showingTintedLine;
    UIView *_tintedLineClipView;
    TintedView *_tintedLineView;
}

+ (struct CGGradient { }*)_gradient;

- (void).cxx_destruct;
- (id)init;
- (void)resizeSelectedLineClipViewWithLeftX:(float)arg1 rightX:(float)arg2;
- (void)setGraphImageSet:(id)arg1;
- (void)setSelectedLineImage:(id)arg1;
- (void)setShowingSelectedLine:(BOOL)arg1;

@end
