/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKPlayer, GKSparseLeaderboard, NSIndexPath, GKThreadsafeDictionary, NSString, NSObject<GKLeaderboardDelegate>, GKDecoratedLabel, NSArray;

@interface GKLeaderboardSection : GKInterleavedListTableSection {
    NSString *_categoryID;
    GKSparseLeaderboard *_friendLeaderboard;
    GKGame *_game;
    GKSparseLeaderboard *_globalLeaderboard;
    NSObject<GKLeaderboardDelegate> *_leaderboardDelegate;
    NSArray *_leaderboards;
    GKPlayer *_player;
    GKThreadsafeDictionary *_playerDictionary;
    int _playerScope;
    NSIndexPath *_previouslySelectedIndexPath;
    NSArray *_searchPlayers;
    GKDecoratedLabel *_statusView;
    int _timeScope;
    NSString *_title;
    BOOL _usesUppercaseTitles;
}

@property(retain) NSString * categoryID;
@property(retain) GKSparseLeaderboard * friendLeaderboard;
@property(retain) GKGame * game;
@property(retain) GKSparseLeaderboard * globalLeaderboard;
@property NSObject<GKLeaderboardDelegate> * leaderboardDelegate;
@property(retain) NSArray * leaderboards;
@property(retain) GKPlayer * player;
@property(retain) GKThreadsafeDictionary * playerDictionary;
@property int playerScope;
@property(retain) NSIndexPath * previouslySelectedIndexPath;
@property(retain) NSArray * searchPlayers;
@property(retain) GKDecoratedLabel * statusView;
@property int timeScope;
@property BOOL usesUppercaseTitles;

- (int)_defaultPlayerScopeForColumnIndex:(int)arg1;
- (BOOL)_showDisclosureChevronForPlayer:(id)arg1;
- (void)cachePlayer:(id)arg1 inDictionary:(id)arg2;
- (BOOL)canSelectPlayer:(id)arg1;
- (id)categoryID;
- (int)contentRowCountInTableView:(id)arg1 column:(int)arg2;
- (void)dealloc;
- (void)filterWithSearchText:(id)arg1;
- (int)footerRowCountInTableView:(id)arg1 column:(int)arg2;
- (void)forwardHandlePressGesture:(id)arg1 forTableView:(id)arg2;
- (id)friendLeaderboard;
- (id)game;
- (id)globalLeaderboard;
- (int)headerRowCountInTableView:(id)arg1 column:(int)arg2;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)iconURLStringForItem:(id)arg1;
- (id)init;
- (id)initWithGame:(id)arg1;
- (Class)leaderboardCellClass;
- (Class)leaderboardCellContentsClass;
- (Class)leaderboardClass;
- (id)leaderboardDelegate;
- (id)leaderboardForCategoryID:(id)arg1 timeScope:(int)arg2 playerScope:(int)arg3;
- (id)leaderboards;
- (void)loadLeaderboards:(id)arg1 complete:(id)arg2;
- (int)numberOfContentColumnsInTableView:(id)arg1;
- (id)player;
- (id)playerDictionary;
- (id)playerForPlayerID:(id)arg1;
- (id)playerForScore:(id)arg1;
- (int)playerScope;
- (void)prepareLeaderboards;
- (id)previouslySelectedIndexPath;
- (void)purgeCachedData;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)searchPlayers;
- (id)searchableLeaderboard;
- (int)sectionItemCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (int)sectionScoreCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionShowcasedScoreCountInTableView:(id)arg1 column:(int)arg2;
- (void)setCategoryID:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setLeaderboards:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerDictionary:(id)arg1;
- (void)setPlayerScope:(int)arg1;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setStatusView:(id)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesUppercaseTitles:(BOOL)arg1;
- (BOOL)showPortraitForScoreAtRow:(int)arg1;
- (id)statusView;
- (float)tableView:(id)arg1 baseHeightForScoreRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 headerCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 headerTextForLeaderboard:(id)arg2 uppercase:(BOOL)arg3;
- (id)tableView:(id)arg1 headerTextForLeaderboardWithPlayerScope:(int)arg2 andScoreCount:(int)arg3 uppercase:(BOOL)arg4;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (id)tableView:(id)arg1 indexPathsForLeaderboardRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inSection:(unsigned int)arg3;
- (BOOL)tableView:(id)arg1 isShowMoreRow:(int)arg2;
- (BOOL)tableView:(id)arg1 isShowcasedScoreRow:(int)arg2;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2 column:(int)arg3;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 loadAdditionalDataForSection:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3 column:(int)arg4;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (void)tableView:(id)arg1 refreshCellAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2 column:(int)arg3;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifiersForRow:(int)arg2;
- (BOOL)tableView:(id)arg1 row:(int*)arg2 column:(int*)arg3 forItem:(id)arg4;
- (id)tableView:(id)arg1 scoreCellWithIdentifiers:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (id)tableView:(id)arg1 statusCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)timeScope;
- (id)title;
- (id)titleForHeaderInTableView:(id)arg1;
- (void)updateStatusViewInTableView:(id)arg1;
- (BOOL)usesUppercaseTitles;
- (id)viewForSectionHeaderInTableView:(id)arg1;

@end
