/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow;

@interface _UIFallbackPresentationViewController : UIViewController {
    UIWindow *_rotationDecider;
}

@property(retain) UIWindow * rotationDecider;

- (void)_presentViewController:(id)arg1 sendingView:(id)arg2 animated:(BOOL)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)rotationDecider;
- (void)setRotationDecider:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidUnload;

@end
