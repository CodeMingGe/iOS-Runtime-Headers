/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, GKPlayer, GKAchievement, GKGame, GKAchievementDescription;

@interface GKAchievementSharingInfo : NSObject <NSCoding> {
    GKAchievement *_achievement;
    GKAchievementDescription *_achievementDescription;
    UIImage *_badgeImage;
    GKGame *_game;
    UIImage *_iconImage;
    GKPlayer *_player;
}

@property(retain) GKAchievement * achievement;
@property(retain) GKAchievementDescription * achievementDescription;
@property(retain) UIImage * badgeImage;
@property(retain) GKGame * game;
@property(retain) UIImage * iconImage;
@property(retain) GKPlayer * player;

- (id)achievement;
- (id)achievementDescription;
- (id)badgeImage;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (id)iconImage;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)player;
- (void)setAchievement:(id)arg1;
- (void)setAchievementDescription:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;

@end
