/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class MZKeyValueStoreTransaction;

@interface MZKeyValueStoreSerializer : NSObject {
    MZKeyValueStoreTransaction *_transaction;
}

@property(retain) MZKeyValueStoreTransaction * transaction;

- (BOOL)_isGetAllSinceDomainVersionRequest;
- (BOOL)_isRemoveAllSinceDomainVersion;
- (id)baseDictionary;
- (id)dataWithNodes:(id)arg1;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1;
- (id)keys;
- (struct MZKeyValueStoreDataVerionPair { id x1; id x2; })objectVersionPairForKey:(id)arg1;
- (id)payload;
- (id)payloadWithNode:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)sinceDomainVersion;
- (id)transaction;

@end
