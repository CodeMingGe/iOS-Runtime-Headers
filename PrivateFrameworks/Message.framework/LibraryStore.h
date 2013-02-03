/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MessageLibrary, NSDate, MessageCriterion;

@interface LibraryStore : MailMessageStore {
    MessageCriterion *_criterion;
    NSDate *_earliestReceivedDate;
    MessageLibrary *_library;
    unsigned int _serverMessageCount;
    unsigned int _serverUnreadCount;
}

@property(retain) NSDate * earliestReceivedDate;

+ (BOOL)createEmptyStoreForPath:(id)arg1;
+ (unsigned int)defaultLoadOptions;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (BOOL)storeAtPathIsWritable:(id)arg1;
+ (id)storeWithCriterion:(id)arg1;
+ (id)storeWithMailbox:(id)arg1;

- (id)URLString;
- (void)_addInvocationToQueue:(id)arg1;
- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned int)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)_flushAllCachesLocking:(BOOL)arg1;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)_memberMessagesWithCompactionNotification:(id)arg1;
- (void)_queueMessageFlagsChanged:(id)arg1;
- (void)_queueMessagesAdded:(id)arg1;
- (void)_queueMessagesWereCompacted:(id)arg1;
- (void)_queueMessagesWillBeCompacted:(id)arg1;
- (void)_setNeedsAutosave;
- (void)_updateMailboxUnreadCount;
- (void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2;
- (BOOL)allMessagesAvailableLocally;
- (BOOL)allowsAppend;
- (int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (BOOL)canCompact;
- (void)compactMessages:(id)arg1;
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;
- (id)copyOfAllMessages;
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;
- (id)copyOfMessageInfos;
- (id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1;
- (id)copyOfMessageInfosMatchingCriterion:(id)arg1;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 generation:(unsigned int*)arg3;
- (id)copyOfMessagesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2;
- (id)criterion;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (void)dealloc;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)doCompact;
- (id)earliestReceivedDate;
- (id)filterMessagesByMembership:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (void)handleMessageFlagsChanged:(id)arg1;
- (void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (void)handleMessagesCompacted:(id)arg1;
- (void)handleMessagesWillBeCompacted:(id)arg1;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (BOOL)hasMessageForAccount:(id)arg1;
- (unsigned int)indexOfMessage:(id)arg1;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;
- (id)initWithCriterion:(id)arg1;
- (id)initWithMailbox:(id)arg1;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (id)library;
- (void)libraryFinishedSendingMessages;
- (id)mailbox;
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;
- (id)mutableCopyOfAllMessages;
- (unsigned int)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2;
- (void)openSynchronously;
- (void)purgeMessages:(id)arg1;
- (void)purgeMessagesBeyondLimit:(unsigned int)arg1 keepingMessage:(id)arg2;
- (id)serverSearchResults;
- (void)setEarliestReceivedDate:(id)arg1;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setLibrary:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (BOOL)shouldCancel;
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3;
- (unsigned int)totalCount;
- (unsigned int)unreadCount;
- (unsigned int)unreadCountMatchingCriterion:(id)arg1;
- (void)updateMetadata;
- (void)updateUserInfoToLatestValues;
- (void)willFetchMessages;
- (void)writeUpdatedMessageDataToDisk;

@end
