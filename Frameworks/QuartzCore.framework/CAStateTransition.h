/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSCoding> {
    NSArray *_elements;
    NSString *_fromState;
    NSString *_toState;
}

@property(copy) NSArray * elements;
@property(copy) NSString * fromState;
@property(copy) NSString * toState;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (double)duration;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)fromState;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setFromState:(id)arg1;
- (void)setToState:(id)arg1;
- (id)toState;

@end
