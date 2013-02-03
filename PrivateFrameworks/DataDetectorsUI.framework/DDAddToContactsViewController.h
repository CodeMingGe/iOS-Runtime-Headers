/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@class DDAction, XPCProxy<DDRemoteActionPresenter>, ABUnknownPersonViewController;

@interface DDAddToContactsViewController : UINavigationController <ABUnknownPersonViewControllerDelegate, DDRemoteActionViewControllerConfiguration> {
    DDAction *_action;
    ABUnknownPersonViewController *_personViewController;
    XPCProxy<DDRemoteActionPresenter> *_proxy;
}

@property(retain) DDAction * action;
@property(retain) XPCProxy<DDRemoteActionPresenter> * proxy;

- (void)_augmentRecord:(void*)arg1 withResultsFromAction:(id)arg2;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (id)action;
- (void)cancelPressed:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)prepareForAction:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)proxy;
- (void)setAction:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;

@end
