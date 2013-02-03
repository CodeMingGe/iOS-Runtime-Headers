/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaQueryShuffledItems, MPMediaLibraryConnectionAssertion, NSArray, MPMediaQuery, MPMediaItem;

@interface IUMediaQueryQueueFeeder : MPQueueFeeder {
    unsigned int _itemsChanged : 1;
    unsigned int _hasPendingLibraryChanges : 1;
    MPMediaLibraryConnectionAssertion *_connectionAssertion;
    MPMediaItem *_focusedItem;
    int _ignoreShuffleTypeChangesCount;
    MPMediaQueryShuffledItems *_items;
    NSArray *_prefixMediaItems;
    MPMediaQuery *_query;
}

@property(retain) MPMediaItem * focusedItem;
@property(retain) NSArray * prefixMediaItems;
@property(copy) MPMediaQuery * query;

+ (id)imageCache;

- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_handleMediaLibraryDidChange;
- (void)_libraryDidChangeNotification:(id)arg1;
- (void)_performWhileIgnoringShuffleChanges:(id)arg1;
- (BOOL)_reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2 force:(BOOL)arg3;
- (unsigned int)_shuffleItemsInFeederQueryWithShuffleType:(unsigned int)arg1 initialIndex:(unsigned int)arg2;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)errorResolverForItem:(id)arg1;
- (id)focusedItem;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)init;
- (unsigned int)initialPlaybackQueueDepth;
- (Class)itemClass;
- (unsigned int)itemCount;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (unsigned int)nonRepeatingItemCount;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)preferredLanguages;
- (id)prefixMediaItems;
- (id)query;
- (unsigned int)realRepeatType;
- (unsigned int)realShuffleType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)setFocusedItem:(id)arg1;
- (void)setPrefixMediaItems:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSubsequenceFocused:(BOOL)arg1 currentItemIndex:(unsigned int)arg2;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (BOOL)trackChangesCanEndPlayback;
- (unsigned int)unshuffledIndexOfAVItem:(id)arg1;

@end
