/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;

@interface CKClientComposeConversation : CKConversation {
    NSMutableArray *_composeRecipients;
    BOOL _forceMMS;
    BOOL _supportsAttachments;
}

@property BOOL forceMMS;

+ (id)_copyEntityForAddressString:(id)arg1;
+ (id)_newMessageWithComposition:(id)arg1 guid:(id)arg2;
+ (id)_xpcConnection;
+ (double)maxTrimDurationForAudio;
+ (double)maxTrimDurationForMediaType:(int)arg1;
+ (double)maxTrimDurationForVideo;

- (int)_maxAttachmentCount;
- (id)_preferredServiceCheckWithServer:(BOOL)arg1 canSend:(BOOL*)arg2 error:(int*)arg3;
- (void*)abRecord;
- (void)addMessage:(id)arg1;
- (void)addRecipientAddress:(id)arg1;
- (int)buttonColor;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canSendMessageComposition:(id)arg1 error:(id*)arg2;
- (BOOL)canSendMessageWithMediaObjectTypes:(int*)arg1;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id*)arg3;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (id)copyEntityForAddressString:(id)arg1;
- (void)dealloc;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (BOOL)forceMMS;
- (id)groupID;
- (id)initWithChat:(id)arg1 updatesDisabled:(BOOL)arg2 supportsAttachments:(BOOL)arg3;
- (BOOL)isValidAddress:(id)arg1;
- (void)loadAllMessages;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (void)newMessageContentChangedWithComposition:(id)arg1;
- (id)newMessageWithComposition:(id)arg1 addToConversation:(BOOL)arg2;
- (id)newMessageWithComposition:(id)arg1 guid:(id)arg2 addToConversation:(BOOL)arg3;
- (id)newMessageWithComposition:(id)arg1;
- (id)preferredServiceWithCanSend:(BOOL*)arg1 error:(int*)arg2;
- (id)recipient;
- (id)recipients;
- (BOOL)reloadIfStale;
- (BOOL)restrictMediaObjects;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (id)serviceDisplayName;
- (void)setForceMMS:(BOOL)arg1;
- (BOOL)shouldShowCharacterCount;
- (id)unsentComposition;

@end
