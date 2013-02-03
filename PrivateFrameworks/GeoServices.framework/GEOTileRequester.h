/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSThread, NSString, <GEOTileRequesterDelegate>, GEOTileKeyList;

@interface GEOTileRequester : NSObject {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    id _context;
    <GEOTileRequesterDelegate> *_delegate;
    GEOTileKeyList *_keyList;
    NSThread *_thread;
}

@property(retain) NSString * bundleIdentifier;
@property(retain) NSString * bundleVersion;
@property(retain) id context;
@property(retain) <GEOTileRequesterDelegate> * delegate;
@property(readonly) GEOTileKeyList * keyList;
@property(retain) NSThread * thread;

+ (struct { unsigned int x1; double x2; }*)expiringTilesets;
+ (unsigned int)expiringTilesetsCount;
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (unsigned char)tileProviderIdentifier;

- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)cancel;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)initWithKeyList:(id)arg1;
- (id)keyList;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setThread:(id)arg1;
- (void)start;
- (id)thread;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
