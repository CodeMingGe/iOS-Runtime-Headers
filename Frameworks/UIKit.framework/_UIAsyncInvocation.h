/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIAsyncInvocationObserver;

@interface _UIAsyncInvocation : NSObject {
    id _invocationBlock;
    _UIAsyncInvocationObserver *_observer;
    long _performToken;
}

+ (id)invocationWithBlock:(id)arg1;

- (void)dealloc;
- (id)invoke;

@end
