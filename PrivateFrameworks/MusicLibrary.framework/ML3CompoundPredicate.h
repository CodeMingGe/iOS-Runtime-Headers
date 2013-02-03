/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSArray;

@interface ML3CompoundPredicate : ML3Predicate {
    NSArray *_predicates;
}

@property(readonly) NSString * compoundOperatorJoiner;
@property(retain) NSArray * predicates;

+ (id)predicateMatchingPredicates:(id)arg1;

- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (void)bindToStatement:(id)arg1 bindingIndex:(inout int*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicates;
- (void)setPredicates:(id)arg1;

@end
