/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSHashTable;

@interface SUScriptTextFieldDelegate : NSObject <SUScriptTextFieldDelegate> {
    NSHashTable *_delegates;
}

@property(readonly) int numberOfDelegates;

- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)numberOfDelegates;
- (void)removeDelegate:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
