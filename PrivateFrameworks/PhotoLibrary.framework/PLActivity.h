/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSArray;

@interface PLActivity : UIActivity {
    NSArray *_assetsToShare;
    int _interfaceIdiom;
    int _mode;
    BOOL _needsActivityViewControllerDismissed;
    int _status;
}

@property(retain) NSArray * assetsToShare;
@property int interfaceIdiom;
@property int mode;
@property BOOL needsActivityViewControllerDismissed;
@property int status;

- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)assetsToShare;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)initForMode:(int)arg1 interfaceIdiom:(int)arg2;
- (int)interfaceIdiom;
- (int)mode;
- (BOOL)needsActivityViewControllerDismissed;
- (void)setAssetsToShare:(id)arg1;
- (void)setInterfaceIdiom:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setNeedsActivityViewControllerDismissed:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
