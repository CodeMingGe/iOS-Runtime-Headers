/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKScoreInternal, NSString, GKGame, NSDate;

@interface GKScore : NSObject <NSCopying, NSCoding> {
    GKGame *_game;
    GKScoreInternal *_internal;
    BOOL _shouldSetDefaultLeaderboard;
    BOOL _valueSet;
}

@property(retain) NSString * category;
@property unsigned long long context;
@property(readonly) NSDate * date;
@property(retain) NSString * formattedValue;
@property GKGame * game;
@property(retain) NSString * groupIdentifier;
@property(retain) GKScoreInternal * internal;
@property(retain) NSString * playerID;
@property int rank;
@property BOOL shouldSetDefaultLeaderboard;
@property long long value;
@property BOOL valueSet;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)reportScores:(id)arg1 withCompletionHandler:(id)arg2;

- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (BOOL)canBeShared;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned int)hash;
- (id)init;
- (id)initWithCategory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)reportScoreWithCompletionHandler:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setGame:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setShouldSetDefaultLeaderboard:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(long long)arg1;
- (void)setValueSet:(BOOL)arg1;
- (BOOL)shouldSetDefaultLeaderboard;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)valueSet;

@end
