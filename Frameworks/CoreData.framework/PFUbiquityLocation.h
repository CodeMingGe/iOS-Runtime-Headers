/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, PFUbiquityLocation;

@interface PFUbiquityLocation : NSObject <NSCopying> {
    NSString *_exportingPeerID;
    NSString *_filename;
    unsigned int _hash;
    NSString *_modelVersionHash;
    NSArray *_otherPathComponents;
    NSString *_storeName;
    int _ubiquityLocationType;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
}

@property(readonly) NSString * exportingPeerID;
@property(readonly) NSString * filename;
@property(readonly) unsigned int hash;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSArray * otherPathComponents;
@property(readonly) NSString * storeName;
@property(readonly) int ubiquityLocationType;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * ubiquityRootLocationPath;
@property(readonly) BOOL usesBaselineDirectory;
@property(readonly) BOOL usesBaselineStagingDirectory;
@property(readonly) BOOL usesCurrentBaselineDirectory;
@property(readonly) BOOL usesStagingLogDirectory;
@property(readonly) BOOL usesTemporaryLogDirectory;

+ (id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id*)arg2;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 forFileNamed:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1;
+ (id)createMetadataStoreLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofPath:(id)arg2 withUbiquityRootPath:(id)arg3;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1;
+ (id)createVersionHashStringForModel:(id)arg1;
+ (void)initialize;
+ (BOOL)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)locationSentinel;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;
+ (void)setLocationSentinel:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createFullPath;
- (id)createFullURL;
- (void)dealloc;
- (id)description;
- (id)exportingPeerID;
- (BOOL)fileExistsAtLocation;
- (BOOL)fileExistsAtLocationWithLocalPeerID:(id)arg1;
- (id)filename;
- (unsigned int)hash;
- (id)init;
- (id)initWithUbiquityRootPath:(id)arg1;
- (id)initWithUbiquityRootURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToURL:(id)arg1;
- (id)modelVersionHash;
- (id)otherPathComponents;
- (void)setExportingPeerID:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setHash:(unsigned int)arg1;
- (void)setModelVersionHash:(id)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (id)storeName;
- (int)ubiquityLocationType;
- (id)ubiquityRootLocation;
- (id)ubiquityRootLocationPath;
- (void)updateHash;
- (BOOL)usesBaselineDirectory;
- (BOOL)usesBaselineStagingDirectory;
- (BOOL)usesCurrentBaselineDirectory;
- (BOOL)usesStagingLogDirectory;
- (BOOL)usesTemporaryLogDirectory;

@end
