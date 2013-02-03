/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKIdentityProtocol>, <EKEditItemViewControllerDelegate>;

@interface EKIdentityViewController : ABPersonViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol> {
    <EKIdentityProtocol> *_identity;
}

@property <EKEditItemViewControllerDelegate> * editDelegate;

- (void)dealloc;
- (id)initWithIdentity:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setIdentity:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;

@end
