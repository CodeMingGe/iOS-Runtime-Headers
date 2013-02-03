/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation {
    NSString *_category;
    unsigned long long _context;
    NSDate *_date;
    NSString *_formattedValue;
    NSString *_groupCategory;
    NSString *_playerID;
    unsigned int _rank;
    long long _value;
}

@property(retain) NSString * category;
@property unsigned long long context;
@property(retain) NSDate * date;
@property(retain) NSString * formattedValue;
@property(retain) NSString * groupCategory;
@property(retain) NSString * playerID;
@property unsigned int rank;
@property long long value;

+ (id)codedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (id)category;
- (id)challengeServerRepresentationForCancel:(BOOL)arg1;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)formattedValue;
- (id)groupCategory;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeaderboardID:(id)arg1 serverRepresentation:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)playerID;
- (unsigned int)rank;
- (id)serverRepresentation;
- (void)setCategory:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattedValue:(id)arg1;
- (void)setGroupCategory:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setValue:(long long)arg1;
- (long long)value;

@end
