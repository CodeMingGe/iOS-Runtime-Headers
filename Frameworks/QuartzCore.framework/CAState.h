/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSArray, NSString, NSMutableArray;

@interface CAState : NSObject <NSCoding, NSCopying> {
    NSString *_basedOn;
    NSMutableArray *_elements;
    BOOL _initial;
    BOOL _locked;
    NSString *_name;
    double _nextDelay;
    double _previousDelay;
}

@property(copy) NSString * basedOn;
@property(copy) NSArray * elements;
@property(getter=isInitial) BOOL initial;
@property(getter=isLocked) BOOL locked;
@property(copy) NSString * name;
@property double nextDelay;
@property double previousDelay;

- (void)addElement:(id)arg1;
- (id)basedOn;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isInitial;
- (BOOL)isLocked;
- (id)name;
- (double)nextDelay;
- (double)previousDelay;
- (void)removeElement:(id)arg1;
- (void)setBasedOn:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setInitial:(BOOL)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNextDelay:(double)arg1;
- (void)setPreviousDelay:(double)arg1;

@end
