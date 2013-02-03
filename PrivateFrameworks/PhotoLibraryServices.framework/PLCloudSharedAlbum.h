/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLManagedAsset, NSMutableOrderedSet, NSOrderedSet, UIImage, NSString, NSDictionary, NSURL, NSNumber;

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedContainer> {
}

@property(readonly) unsigned int approximateCount;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(readonly) BOOL canShowComments;
@property(retain) NSNumber * cloudOwnerEmailKey;
@property(retain) NSNumber * cloudRelationshipState;
@property(retain) NSNumber * cloudRelationshipStateLocal;
@property(readonly) unsigned int count;
@property(readonly) NSURL * groupURL;
@property(retain) NSNumber * hasUnseenContent;
@property BOOL hasUnseenContentBoolValue;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(retain) NSNumber * isOwned;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property unsigned int pendingItemsCount;
@property unsigned int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property(readonly) id sectioningComparator;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) id sortingComparator;
@property(readonly) NSString * title;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

+ (id)allCloudSharedAlbumsInLibrary:(id)arg1;
+ (id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;

- (id)_expectedKeyAsset;
- (id)_localizedRemoteOwnerAllowsEmail:(BOOL)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)albumDirectoryPath;
- (void)awakeFromInsert;
- (id)cloudAlbumSubscriberRecords;
- (id)cloudFirstRecentBatchDate;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (id)cloudOwnerEmail;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (void)delete;
- (void)getUnseenStartMarkerIndex:(unsigned int*)arg1 count:(unsigned int*)arg2 showsProgress:(BOOL*)arg3;
- (BOOL)hasUnseenContentBoolValue;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (id)localizedSharedWithLabel;
- (void)persistRecoveryMetadata;
- (void)publishBatchOfOriginalAssets:(id)arg1 withBatchCommentText:(id)arg2 isNewAlbum:(BOOL)arg3;
- (id)sectioningComparator;
- (void)setCloudOwnerEmail:(id)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setUnseenAssetsCountIntegerValue:(int)arg1;
- (id)sortingComparator;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
- (int)unseenAssetsCountIntegerValue;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;

@end
