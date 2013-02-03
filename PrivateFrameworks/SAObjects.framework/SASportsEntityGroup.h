/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASportsEntityGroup : SASportsEntity {
}

@property(copy) NSArray * entities;
@property(copy) NSString * groupType;

+ (id)entityGroup;
+ (id)entityGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entities;
- (id)groupIdentifier;
- (id)groupType;
- (void)setEntities:(id)arg1;
- (void)setGroupType:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
