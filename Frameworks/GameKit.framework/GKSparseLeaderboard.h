/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError, NSObject<OS_dispatch_queue>, GKGame, GKPlayer, NSMutableArray, GKScore, NSArray;

@interface GKSparseLeaderboard : GKLeaderboard {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSMutableArray *_allScores;
    GKScore *_comparePlayerScore;
    } _currentRange;
    } _displayedRange;
    NSError *_error;
    GKGame *_game;
    NSObject<OS_dispatch_queue> *_loadQueue;
    BOOL _loaded;
    unsigned int _maxLoaded;
    GKPlayer *_player;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_showcasedScores;
    } _totalRange;
}

@property(retain) GKScore * comparePlayerScore;
@property(readonly) BOOL displayComparePlayer;
@property(readonly) BOOL displayLocalPlayer;
@property struct _NSRange { unsigned int x1; unsigned int x2; } displayedRange;
@property(retain) NSError * error;
@property(retain) GKGame * game;
@property(readonly) NSObject<OS_dispatch_queue> * loadQueue;
@property(readonly) BOOL loaded;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } loadedRange;
@property(readonly) BOOL moreScoresAvailable;
@property(retain) GKPlayer * player;
@property(readonly) BOOL showcasedScoresAdjacent;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } totalRange;

- (void)addScores:(id)arg1;
- (id)comparePlayerScore;
- (void)dealloc;
- (id)description;
- (BOOL)displayComparePlayer;
- (BOOL)displayLocalPlayer;
- (struct _NSRange { unsigned int x1; unsigned int x2; })displayedRange;
- (id)error;
- (id)game;
- (unsigned int)indexOfScoreForPlayerID:(id)arg1;
- (id)initWithGame:(id)arg1;
- (id)loadQueue;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)loaded;
- (struct _NSRange { unsigned int x1; unsigned int x2; })loadedRange;
- (BOOL)moreScoresAvailable;
- (id)placeholderScoresForRankRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withPlaceholderPlayerID:(id)arg2;
- (id)player;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeToLoadForRank:(unsigned int)arg1;
- (id)scoreAtIndex:(unsigned int)arg1;
- (id)scoreForPlayerID:(id)arg1;
- (id)scoresForPlayerIDs:(id)arg1;
- (void)setComparePlayerScore:(id)arg1;
- (void)setDisplayedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setError:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)showcasedScoreAtShowcaseIndex:(unsigned int)arg1;
- (BOOL)showcasedScoresAdjacent;
- (struct _NSRange { unsigned int x1; unsigned int x2; })totalRange;
- (id)visibleScoreAtIndex:(unsigned int)arg1;

@end
