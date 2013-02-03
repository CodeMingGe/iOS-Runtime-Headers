/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, NSDate, NSDictionary, GKGameInternal;

@interface GKPlayerInternal : GKInternalRepresentation {
    NSString *_accountName;
    NSString *_alias;
    BOOL _allowMultiplayerInvites;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    BOOL _findable;
    NSString *_firstName;
    NSArray *_friends;
    NSString *_lastName;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
    NSDate *_lastSeenDate;
    int _numberOfAchievementPoints;
    int _numberOfAchievements;
    int _numberOfFriends;
    int _numberOfFriendsInCommon;
    int _numberOfGames;
    int _numberOfGamesInCommon;
    BOOL _photoPending;
    NSDictionary *_photos;
    NSString *_playerID;
    BOOL _purpleBuddyAccount;
    NSString *_status;
    NSString *_twitterUserID;
    BOOL _underage;
    unsigned int _validPieces;
}

@property(retain) NSString * accountName;
@property(retain) NSString * alias;
@property BOOL allowMultiplayerInvites;
@property(retain) NSArray * emailAddresses;
@property(retain) NSString * facebookUserID;
@property(getter=isFindable) BOOL findable;
@property(retain) NSString * firstName;
@property(retain) NSArray * friends;
@property(retain) NSString * lastName;
@property(retain) NSDate * lastPlayedDate;
@property(retain) GKGameInternal * lastPlayedGame;
@property(retain) NSDate * lastSeenDate;
@property int numberOfAchievementPoints;
@property int numberOfAchievements;
@property int numberOfFriends;
@property int numberOfFriendsInCommon;
@property int numberOfGames;
@property int numberOfGamesInCommon;
@property(getter=isPhotoPending) BOOL photoPending;
@property(retain) NSDictionary * photos;
@property(retain) NSString * playerID;
@property(getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property(retain) NSString * status;
@property(retain) NSString * twitterUserID;
@property(getter=isUnderage) BOOL underage;
@property unsigned int validPieces;

+ (id)codedPropertyKeys;
+ (id)fullNameWithFirstName:(id)arg1 lastName:(id)arg2;

- (id)accountName;
- (id)alias;
- (BOOL)allowMultiplayerInvites;
- (void)dealloc;
- (id)displayName;
- (id)emailAddresses;
- (id)facebookUserID;
- (id)firstName;
- (id)friends;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFindable;
- (BOOL)isPhotoPending;
- (BOOL)isPurpleBuddyAccount;
- (BOOL)isUnderage;
- (id)lastName;
- (id)lastPlayedDate;
- (id)lastPlayedGame;
- (id)lastSeenDate;
- (int)numberOfAchievementPoints;
- (int)numberOfAchievements;
- (int)numberOfFriends;
- (int)numberOfFriendsInCommon;
- (int)numberOfGames;
- (int)numberOfGamesInCommon;
- (id)photos;
- (id)playerID;
- (id)serverRepresentation;
- (void)setAccountName:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setAllowMultiplayerInvites:(BOOL)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setFacebookUserID:(id)arg1;
- (void)setFindable:(BOOL)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFriends:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setLastSeenDate:(id)arg1;
- (void)setNumberOfAchievementPoints:(int)arg1;
- (void)setNumberOfAchievements:(int)arg1;
- (void)setNumberOfFriends:(int)arg1;
- (void)setNumberOfFriendsInCommon:(int)arg1;
- (void)setNumberOfGames:(int)arg1;
- (void)setNumberOfGamesInCommon:(int)arg1;
- (void)setPhotoPending:(BOOL)arg1;
- (void)setPhotos:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (void)setStatus:(id)arg1;
- (void)setTwitterUserID:(id)arg1;
- (void)setUnderage:(BOOL)arg1;
- (void)setValidPieces:(unsigned int)arg1;
- (id)status;
- (id)twitterUserID;
- (unsigned int)validPieces;

@end
