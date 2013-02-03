/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSInvocation : NSObject {
    id _container;
    void *_frame;
    unsigned char _reserved[15];
    unsigned char _retainedArgs;
    void *_retdata;
    id _signature;
}

+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(void*)arg3;
+ (id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2;
+ (void)executeBlock:(id)arg1;
+ (id)invocationWithBlock:(id)arg1;
+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3;
+ (id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2;

- (void)_addAttachedObject:(id)arg1;
- (int)_firstXPCProxyReplyHandlerArgumentIndex;
- (void)_webkit_invokeAndHandleException:(id)arg1;
- (BOOL)argumentsRetained;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)getArgument:(void*)arg1 atIndex:(int)arg2;
- (void)getReturnValue:(void*)arg1;
- (id)init;
- (void)invoke;
- (void)invokeSuper;
- (void)invokeUsingIMP:(int (*)())arg1;
- (void)invokeWithTarget:(id)arg1;
- (id)methodSignature;
- (BOOL)mf_shouldLogInvocation;
- (void)retainArguments;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(int)arg2;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (BOOL)wantsReturnValue;
- (id)withProtocol:(id)arg1;

@end
