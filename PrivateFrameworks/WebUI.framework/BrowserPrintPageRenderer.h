/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class UIWebBrowserView, WebFrame, UIFont, NSNumberFormatter, UIWebPaginationInfo, NSString, UIColor;

@interface BrowserPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    NSString *_URLString;
    float _URLWidth;
    UIWebBrowserView *_browserView;
    } _contentOffset;
    NSString *_dateString;
    float _dateWidth;
    UIColor *_footerColor;
    UIFont *_footerFont;
    } _footerOffset;
    NSNumberFormatter *_numberFormatter;
    UIWebPaginationInfo *_paginationInfo;
    BOOL _printFooter;
    float _printWidth;
    WebFrame *_webFrame;
}

@property(retain) NSString * URLString;
@property(retain) UIWebBrowserView * browserView;
@property(retain) NSNumberFormatter * numberFormatter;
@property(readonly) UIWebPaginationInfo * paginationInfo;
@property BOOL printFooter;
@property(retain) WebFrame * webFrame;

- (id)URLString;
- (void)associateWithPrintController:(id)arg1;
- (id)browserView;
- (void)dealloc;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawFooterForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)init;
- (id)numberFormatter;
- (int)numberOfPages;
- (id)paginationInfo;
- (id)printControllerWithPageTitle:(id)arg1;
- (BOOL)printFooter;
- (id)printInfoWithPageTitle:(id)arg1;
- (void)printInteractionControllerDidFinishJob:(id)arg1;
- (void)printInteractionControllerWillStartJob:(id)arg1;
- (id)printingFrame;
- (void)setBrowserView:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setPrintFooter:(BOOL)arg1;
- (void)setURLString:(id)arg1;
- (void)setWebFrame:(id)arg1;
- (id)webFrame;

@end
