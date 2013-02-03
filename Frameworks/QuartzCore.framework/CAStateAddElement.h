/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString;

@interface CAStateAddElement : CAStateElement {
    id _beforeObject;
    NSString *_keyPath;
    id _object;
}

@property(retain) id beforeObject;
@property(copy) NSString * keyPath;
@property(retain) id object;

- (void)apply:(id)arg1;
- (id)beforeObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPath;
- (BOOL)matches:(id)arg1;
- (id)object;
- (void)setBeforeObject:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;

@end
