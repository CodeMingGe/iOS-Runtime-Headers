/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString, <SBCardItemsControllerRemoteInterface>;

@interface SBSCardItemsController : NSObject <XPCProxyTarget, SBSCardItemsControllerRemoteInterface> {
    NSString *_identifier;
    <SBCardItemsControllerRemoteInterface> *_remoteProxy;
}

- (void)addCardItems:(id)arg1;
- (void)clearAllCardItems;
- (void)dealloc;
- (void)getCardItemsWithHandler:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)removeCardItems:(id)arg1;
- (void)setCardItems:(id)arg1;

@end
