/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class _WebSafeAsyncForwarder;

@interface _WebSafeForwarder : NSObject {
    _WebSafeAsyncForwarder *asyncForwarder;
    long asyncForwarderPred;
    BOOL catchExceptions;
    id defaultTarget;
    id target;
}

- (id)asyncForwarder;
- (void)clearTarget;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 defaultTarget:(id)arg2 catchExceptions:(BOOL)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end
