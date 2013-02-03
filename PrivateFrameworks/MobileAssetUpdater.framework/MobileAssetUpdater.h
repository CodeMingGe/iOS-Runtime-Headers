/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAssetUpdater.framework/MobileAssetUpdater
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ASAsset, NSString;

@interface MobileAssetUpdater : NSObject {
    ASAsset *_asset;
    BOOL _assetDownloaded;
    NSString *_assetType;
    id _logger;
    NSString *_overrideFile;
    NSString *_purgeOverrideFile;
    BOOL _requireAssetMetadata;
}

@property(retain) ASAsset * asset;
@property(readonly) BOOL assetAvailable;
@property(readonly) BOOL assetDownloaded;
@property(retain) NSString * assetType;
@property(copy) id logger;
@property(retain) NSString * overrideFile;
@property(retain) NSString * purgeOverrideFile;
@property BOOL requireAssetMetadata;

- (id)asset;
- (BOOL)assetAvailable;
- (BOOL)assetDownloaded;
- (id)assetType;
- (id)assetWithMaxVersion:(id)arg1;
- (void)dealloc;
- (void)doneWithAsset;
- (id)downloadAsset:(id)arg1;
- (void)downloadComplete:(id)arg1 completion:(id)arg2;
- (void)downloadProgress:(id)arg1 error:(id)arg2 completion:(id)arg3;
- (BOOL)filterAsset:(id)arg1 osBuild:(id)arg2 osVersion:(id)arg3;
- (id)filterFoundAssets:(id)arg1;
- (id)findAsset:(BOOL)arg1 completion:(id)arg2;
- (id)initWithAssetType:(id)arg1;
- (void)log:(int)arg1 format:(id)arg2;
- (id)logger;
- (id)overrideFile;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (id)purgeOverrideFile;
- (void)queryComplete:(id)arg1 remote:(BOOL)arg2 error:(id)arg3 completion:(id)arg4;
- (id)queryPredicate;
- (BOOL)requireAssetMetadata;
- (void)setAsset:(id)arg1;
- (void)setAssetType:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setOverrideFile:(id)arg1;
- (void)setPurgeOverrideFile:(id)arg1;
- (void)setRequireAssetMetadata:(BOOL)arg1;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;

@end
