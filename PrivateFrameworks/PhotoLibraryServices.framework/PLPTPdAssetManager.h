/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSObject<PhotoLibraryPTPDelegate>, NSMutableArray, NSString, NSFileManager, PLManagedObjectContext, NSArray;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {
    NSArray *_albumObjectIDs;
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    NSString *_firstDCIMFolderServiced;
    NSMutableArray *_inflightAssets;
    NSFileManager *fileManager;
    PLPhotoLibrary *photoLibrary;
}

@property(readonly) NSArray * albumObjectIDs;
@property NSObject<PhotoLibraryPTPDelegate> * delegate;
@property(retain) NSFileManager * fileManager;
@property(readonly) PLManagedObjectContext * managedObjectContext;
@property(retain) PLPhotoLibrary * photoLibrary;

- (id)_allAssetObjectIDs;
- (BOOL)_isPTPAlbum:(id)arg1;
- (void)_performBlockAndWait:(id)arg1;
- (void)_performTransactionAndWait:(id)arg1;
- (id)_ptpInformationForAllAssets;
- (id)albumHandles;
- (id)albumObjectIDs;
- (id)assetsInAssociation:(struct NSObject { Class x1; }*)arg1;
- (id)associationsInAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteAsset:(struct NSObject { Class x1; }*)arg1;
- (id)fileManager;
- (id)infoForAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)infoForAsset:(struct NSObject { Class x1; }*)arg1;
- (id)init;
- (BOOL)libraryIsAvailable;
- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssets:(id)arg2 deletedAssets:(id)arg3 changedAssets:(id)arg4;
- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)ptpCanDeleteFiles;
- (BOOL)ptpDeletePhotoWithKey:(struct NSObject { Class x1; }*)arg1 andExtension:(id)arg2;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)ptpInformationForPhotoWithObjectID:(id)arg1;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpThumbnailForPhotoWithKey:(struct NSObject { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileManager:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPtpDelegate:(id)arg1;

@end
