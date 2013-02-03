/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOTileServerProxy>, GEOTileCache, GEOExpiringTileCache, NSMutableArray, NSLock;

@interface GEOTileLoader : NSObject {
    int _diskHits;
    GEOExpiringTileCache *_expTiles;
    int _memoryHits;
    int _networkHits;
    NSMutableArray *_pendingLoads;
    NSLock *_pendingLoadsLock;
    <GEOTileServerProxy> *_serverConnection;
    NSMutableArray *_tileDecoders;
    GEOTileCache *_tiles;
}

@property(readonly) int diskHits;
@property(readonly) int memoryHits;
@property(readonly) int networkHits;

+ (id)diskCacheLocation;
+ (void)setDiskCacheLocation:(id)arg1;
+ (void)setMemoryCacheCountLimit:(unsigned int)arg1;
+ (void)setMemoryCacheMinCapacity:(unsigned int)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned int)arg1;
+ (id)sharedLoader;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;

- (void)_activeTileGroupChanged:(id)arg1;
- (void)_asyncDecodeTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 completion:(id)arg3;
- (id)_decodeTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)_loadTilesFromServer:(id)arg1 checkDisk:(BOOL)arg2 allowNetworking:(BOOL)arg3;
- (id)_pendingLoadForNetworkLoadList:(id)arg1 acquireLock:(BOOL)arg2;
- (id)_pendingLoadForOriginalList:(id)arg1 acquireLock:(BOOL)arg2;
- (void)_preempt:(id)arg1;
- (void)_tileEditionChanged:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)cancelRequest:(id)arg1;
- (void)clearAllCaches;
- (void)closeDatabase;
- (void)dealloc;
- (int)diskHits;
- (void)endPreloadSession;
- (id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3;
- (id)init;
- (void)loadTiles:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)loadTilesFromCache:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4 skipNetwork:(BOOL)arg5;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (int)memoryHits;
- (int)networkHits;
- (void)openDatabase;
- (void)preloadTiles:(id)arg1 progress:(id)arg2 finished:(id)arg3 error:(id)arg4;
- (void)registerTileDecoder:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id)arg2;
- (id)renderDataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)tileServerProxy:(id)arg1 receivedData:(id)arg2 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg3 forRequest:(id)arg4 fromDisk:(BOOL)arg5 userInfo:(id)arg6;
- (void)tileServerProxy:(id)arg1 receivedError:(id)arg2 forRequest:(id)arg3;
- (void)tileServerProxy:(id)arg1 requestFinished:(id)arg2;
- (void)tileServerProxy:(id)arg1 requestMovedToNetwork:(id)arg2;

@end
