/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIActivityIndicatorView, <QLProgressViewDelegate>, QLDisplayBundle, UILabel, NSString;

@interface QLProgressView : UIImageView {
    int _backgroundColorType;
    <QLProgressViewDelegate> *_delegate;
    QLDisplayBundle *_displayBundle;
    UILabel *_loadingTextLabel;
    NSString *_loadintTextForMissingFiles;
    UIActivityIndicatorView *_progressIndicator;
}

@property <QLProgressViewDelegate> * delegate;
@property(retain) NSString * loadintTextForMissingFiles;

- (int)backgroundColorType;
- (void)dealloc;
- (id)delegate;
- (id)initWithBackgroundColorType:(int)arg1 loadintTextForMissingFiles:(id)arg2;
- (void)layoutSubviews;
- (id)loadintTextForMissingFiles;
- (void)setDelegate:(id)arg1;
- (void)setLoadintTextForMissingFiles:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
