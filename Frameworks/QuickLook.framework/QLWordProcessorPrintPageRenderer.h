/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLRemotePrintPageHelper {
    UIWebPaginationInfo *_paginationInfo;
}

- (id)_paginationInfo;
- (void)dealloc;
- (int)numberOfPages;
- (id)pdfDataForPageAtIndex:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 printingDone:(BOOL*)arg3;

@end
