/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, PFUbiquityBaselineMetadata, NSPersistentStore, PFUbiquityLocation, NSString, _PFZipFileArchive, NSMutableDictionary, NSManagedObjectModel;

@interface PFUbiquityBaseline : PFUbiquitySafeSaveFile {
     /* Encoded args for previous method: v16@0:4D8 */
     /* Encoded args for previous method: D8@0:4 */
    _PFZipFileArchive *_baselineArchive;
    PFUbiquityLocation *_baselineStagingLocation;
    PFUbiquityBaselineMetadata *_metadata;
    NSManagedObjectModel *_model;
    NSString *_modelVersionHash;
    NSPersistentStore *_store;
    NSString *_storeFilename;
    NSMutableDictionary *_storeFilenameToData;
    NSString *_storeName;
}

@property(readonly) _PFZipFileArchive * baselineArchive;
@property(readonly) PFUbiquityLocation * baselineArchiveLocation;
@property(readonly) PFUbiquityLocation * baselinePeerArchiveLocation;
@property(readonly) PFUbiquityLocation * baselineStagingLocation;
@property(readonly) PFUbiquityBaselineMetadata * metadata;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSPersistentStore * store;
@property(readonly) NSString * storeFilename;
@property(readonly) NSDictionary * storeFilenameToData;
@property(readonly) NSString * storeName;

+ (BOOL)canRollBaselineForStoreMetadata:(id)arg1 withStack:(id)arg2 andManagedObjectModel:(id)arg3 error:(id*)arg4;
+ (BOOL)checkPeerReceiptsUnderRootLocation:(id)arg1 forAgreementWithLocalPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 error:(id*)arg5;
+ (id)createArchiveWithModel:(id)arg1 metadata:(id)arg2 storeFilenameToData:(id)arg3 storeFilename:(id)arg4 error:(id*)arg5;
+ (id)createBaselineGCModelForStoreName:(id)arg1 modelVersionHash:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createBaselineOptimizedModelForStoreName:(id)arg1 modelVersionHash:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createModelFromBaselineModelWithStoreMetadata:(id)arg1;
+ (BOOL)enoughTransactionsHavePassedToRollBaseline:(id)arg1 withLocalPeerID:(id)arg2 error:(id*)arg3;
+ (BOOL)logsConsumeEnoughDiskSpaceToRollBaseline:(id)arg1 withLocalPeerID:(id)arg2 andStoreURL:(id)arg3 error:(id*)arg4;
+ (id)metadataFromBaselineArchive:(id)arg1;
+ (id)metadataFromCurrentBaselineForStoreWithName:(id)arg1 modelVersionHash:(id)arg2 andUbiquityRootLocation:(id)arg3 withError:(id*)arg4;
+ (unsigned int)numRequiredTransactionsForBaselineRoll;
+ (BOOL)removePeerSpecificIdentifiersFromStore:(id)arg1 withLocalPeerID:(id)arg2;
+ (/* Warning: Unrecognized filer type: 'D' using 'void*' */ void*)requiredFractionOfDiskSpaceUsedForLogs;
+ (void)setNumRequiredTransactionsForBaselineRoll:(unsigned int)arg1;
+ (void)setRequiredFractionOfDiskSpaceUsedForLogs:(/* Warning: Unrecognized filer type: 'D' using 'void*' */ void*)arg1;

- (id)baselineArchive;
- (id)baselineArchiveLocation;
- (id)baselineMetadataData;
- (id)baselinePeerArchiveLocation;
- (id)baselineStagingLocation;
- (BOOL)canReplaceStoreAtKnowledgeVector:(id)arg1;
- (BOOL)clearOutStagingLocationWithError:(id*)arg1;
- (BOOL)constructBaselineArchive:(id*)arg1;
- (id)createManagedObjectModel;
- (void)dealloc;
- (id)description;
- (BOOL)gatherContentsAndConstructArchiveWithError:(id*)arg1;
- (BOOL)gatherContentsFromMigratedBaseline:(id)arg1 withStoreFileURL:(id)arg2 error:(id*)arg3;
- (BOOL)haveTransactionLogsForPeer:(id)arg1 between:(int)arg2 and:(int)arg3;
- (BOOL)importBaselineForStoreAtURL:(id)arg1 ofType:(id)arg2 options:(id)arg3 withLocalPeerID:(id)arg4 stack:(id)arg5 andPersistentStoreCoordinator:(id)arg6 error:(id*)arg7;
- (id)init;
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;
- (BOOL)initializeBaselineArchiveWithError:(id*)arg1;
- (BOOL)isUploaded:(id*)arg1;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (BOOL)makeCurrentBaselineWithError:(id*)arg1;
- (id)metadata;
- (BOOL)metadataMatchesCurrentMetadata:(id*)arg1;
- (id)modelVersionHash;
- (BOOL)moveToPermanentLocation:(id*)arg1;
- (id)optimizedModelData;
- (BOOL)prepareForBaselineRollOfPersistentStore:(id)arg1 withStoreMetadata:(id)arg2 andLocalPeerID:(id)arg3 error:(id*)arg4;
- (id)regularModelData;
- (BOOL)replaceLocalPersistentStoreAtURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 usingPersistentStoreCoordinator:(id)arg4 error:(id*)arg5;
- (void)setMetadata:(id)arg1;
- (id)store;
- (id)storeData;
- (id)storeFilename;
- (id)storeFilenameToData;
- (id)storeName;
- (BOOL)unpackStoreFilesToStagingLocation:(id*)arg1;
- (BOOL)writeArchiveContentsToDiskAndMonitorUploadSynchronously:(BOOL)arg1 error:(id*)arg2;

@end
