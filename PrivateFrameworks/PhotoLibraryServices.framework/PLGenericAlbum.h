/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedAsset, NSMutableOrderedSet, NSURL, NSOrderedSet, NSObject<PLIndexMappingCache>, UIImage, PLPhotoLibrary, NSString, NSDictionary, NSNumber;

@interface PLGenericAlbum : _PLGenericAlbum <PLAssetContainer, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {
    NSObject<PLIndexMappingCache> *_derivededAlbums[5];
    BOOL didRegisteredWithUserInterfaceContext;
    BOOL isRegisteredForChanges;
}

@property(readonly) unsigned int approximateCount;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(readonly) BOOL canShowComments;
@property(readonly) unsigned int count;
@property BOOL didRegisteredWithUserInterfaceContext;
@property(readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(retain) NSString * importSessionID;
@property(readonly) unsigned int indexOfPosterImage;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property BOOL isRegisteredForChanges;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property int kindValue;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property(readonly) id sectioningComparator;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) id sortingComparator;
@property(retain) NSString * title;
@property(retain) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewEventIntoLibrary:(id)arg1;
+ (id)insertNewEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;

- (id)_compactDebugDescription;
- (id)_kindDescription;
- (id)_prettyDescription;
- (unsigned int)approximateCount;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (unsigned int)assetsCount;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canShowComments;
- (unsigned int)count;
- (unsigned int)countForAssetsOfKind:(int)arg1;
- (void)dealloc;
- (void)delete;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (void)enumerateDerivedAlbums:(id)arg1;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (id)groupURL;
- (BOOL)hasDerivedIndexMappers;
- (BOOL)hasUnseenContentBoolValue;
- (unsigned int)indexOfPosterImage;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isLibrary;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isRegisteredForChanges;
- (id)kind;
- (int)kindValue;
- (id)localizedTitle;
- (id)name;
- (id)photoLibrary;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (void)registerDerivedAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)registerForChanges;
- (id)sectioningComparator;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)setKind:(id)arg1;
- (void)setKindValue:(int)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)title;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (void)updateStackedImageShouldNotifyImmediately:(BOOL)arg1;
- (id)uuid;
- (unsigned int)videosCount;
- (void)willTurnIntoFault;

@end
