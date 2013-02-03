/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSArray, NSString, NSDictionary, NSNumber, NSMutableArray;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableArray *_entityNames;
    NSString *_exportingPeerID;
    NSArray *_filesDeletedInTransaction;
    NSMutableArray *_filesInsertedInTransaction;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableArray *_globalObjectIDs;
    NSMutableDictionary *_insertedObjects;
    NSString *_localPeerID;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableArray *_peerIDs;
    NSMutableDictionary *_peerStates;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableArray *_primaryKeys;
    NSDictionary *_storeOptions;
    NSNumber *_transactionNumber;
    NSMutableDictionary *_updatedObjects;
}

@property(readonly) NSDictionary * deletedObjects;
@property(readonly) NSDictionary * entityNameToIndex;
@property(readonly) NSArray * entityNames;
@property(retain) NSString * exportingPeerID;
@property(readonly) NSDictionary * globalObjectIDToIndex;
@property(readonly) NSDictionary * globalObjectIDToPermanentManagedObjectID;
@property(readonly) NSArray * globalObjectIDs;
@property(readonly) NSDictionary * insertedObjects;
@property(retain) NSString * localPeerID;
@property(readonly) NSDictionary * managedObjectIDToGlobalObjectID;
@property(readonly) NSDictionary * peerIDToIndex;
@property(readonly) NSArray * peerIDs;
@property(readonly) NSDictionary * peerStates;
@property(readonly) NSDictionary * primaryKeyToIndex;
@property(readonly) NSArray * primaryKeys;
@property(readonly) NSDictionary * storeOptions;
@property(readonly) NSNumber * transactionNumber;
@property(readonly) NSDictionary * updatedObjects;

- (void)_setFilesDeletedInTransaction:(id)arg1;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id*)arg4;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)deletedObjects;
- (id)description;
- (id)entityNameToIndex;
- (id)entityNames;
- (id)exportingPeerID;
- (id)filesDeletedInTransaction;
- (id)filesInsertedInTransaction;
- (void)generatePeerStatesWithStoreExportContext:(id)arg1;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (id)globalObjectIDToIndex;
- (id)globalObjectIDToPermanentManagedObjectID;
- (id)globalObjectIDs;
- (id)init;
- (id)initWithExportingPeerID:(id)arg1;
- (id)initWithPersistentStoreOptions:(id)arg1 andExportingPeerID:(id)arg2;
- (id)insertedObjects;
- (id)localPeerID;
- (id)managedObjectIDToGlobalObjectID;
- (id)peerIDToIndex;
- (id)peerIDs;
- (id)peerStates;
- (id)primaryKeyToIndex;
- (id)primaryKeys;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (void)setDeletedObjects:(id)arg1;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5;
- (void)setExportingPeerID:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setLocalPeerID:(id)arg1;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (void)setUpdatedObjects:(id)arg1;
- (id)storeOptions;
- (id)transactionNumber;
- (id)transactionNumberFromPeerStates:(id)arg1;
- (id)updatedObjects;

@end
