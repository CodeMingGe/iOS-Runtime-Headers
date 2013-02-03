/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASportsLeague, SAUIAppPunchOut, NSString, NSURL;

@interface SASportsEntity : SADomainObject {
}

@property(copy) NSURL * image;
@property(retain) SASportsLeague * league;
@property(copy) NSString * name;
@property(retain) SAUIAppPunchOut * punchout;

+ (id)entity;
+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)league;
- (id)name;
- (id)punchout;
- (void)setImage:(id)arg1;
- (void)setLeague:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
