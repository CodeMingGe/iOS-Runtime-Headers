/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMethodSignature : NSObject {
    void *_private;
    void *_reserved[6];
}

+ (id)signatureWithObjCTypes:(const char *)arg1;

- (struct NSMethodFrameArgInfo { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7; BOOL x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned char x25; BOOL x26[0]; }*)_argInfo:(int)arg1;
- (Class)_classForObjectAtArgumentIndex:(int)arg1;
- (struct { struct NSMethodFrameArgInfo {} *x1; struct NSMethodFrameArgInfo {} *x2; unsigned int x3; unsigned int x4; }*)_frameDescriptor;
- (id)_protocolsForObjectAtArgumentIndex:(int)arg1;
- (id)_signatureForBlockAtArgumentIndex:(int)arg1;
- (id)_typeString;
- (void)dealloc;
- (id)debugDescription;
- (void)finalize;
- (unsigned int)frameLength;
- (const char *)getArgumentTypeAtIndex:(unsigned int)arg1;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOneway;
- (unsigned int)methodReturnLength;
- (const char *)methodReturnType;
- (unsigned int)numberOfArguments;

@end
