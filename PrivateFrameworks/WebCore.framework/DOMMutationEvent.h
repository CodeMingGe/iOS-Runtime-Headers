/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMNode, NSString;

@interface DOMMutationEvent : DOMEvent {
}

@property(readonly) unsigned short attrChange;
@property(readonly) NSString * attrName;
@property(readonly) NSString * newValue;
@property(readonly) NSString * prevValue;
@property(readonly) DOMNode * relatedNode;

- (unsigned short)attrChange;
- (id)attrName;
- (void)initMutationEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(id)arg5 :(id)arg6 :(id)arg7 :(unsigned short)arg8;
- (void)initMutationEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 relatedNode:(id)arg4 prevValue:(id)arg5 newValue:(id)arg6 attrName:(id)arg7 attrChange:(unsigned short)arg8;
- (id)newValue;
- (id)prevValue;
- (id)relatedNode;

@end
