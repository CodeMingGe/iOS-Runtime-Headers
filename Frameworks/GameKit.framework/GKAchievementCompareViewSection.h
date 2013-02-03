/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, GKGameRecord, NSOrderedSet;

@interface GKAchievementCompareViewSection : GKAchievementSection {
    UIImage *_compositeCheckMark;
    NSOrderedSet *_friendAchievements;
    GKGameRecord *_friendRecord;
}

@property(retain) UIImage * compositeCheckMark;
@property(retain) NSOrderedSet * friendAchievements;
@property(retain) GKGameRecord * friendRecord;

- (id)achievements;
- (int)columnCountInTableView:(id)arg1;
- (id)compositeCheckMark;
- (void)dealloc;
- (id)friendAchievements;
- (id)friendRecord;
- (id)init;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (void)setCompositeCheckMark:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendRecord:(id)arg1;
- (float)tableView:(id)arg1 heightForContentRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)title;
- (void)updateStatusWithError:(id)arg1;
- (id)viewForSectionHeaderInTableView:(id)arg1;

@end
