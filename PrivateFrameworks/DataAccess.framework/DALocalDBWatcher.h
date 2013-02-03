/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NoteContext;

@interface DALocalDBWatcher : NSObject {
    void *_abWatcher;
    struct CalDatabase { } *_calWatcher;
    struct __CFDictionary { } *_concernedABPartyToBlockMap;
    struct __CFDictionary { } *_concernedBookmarkPartyToBlockMap;
    struct __CFDictionary { } *_concernedCalPartyToBlockMap;
    struct __CFDictionary { } *_concernedNotePartyToBlockMap;
    int _lastSavedABSequenceNumber;
    int _lastSavedCalSequenceNumber;
    NoteContext *_noteWatcher;
    BOOL _watchingBookmarks;
}

@property int lastSavedABSequenceNumber;
@property int lastSavedCalSequenceNumber;

+ (id)sharedDBWatcher;

- (void)_handleABChangeNotificationWithInfo:(id)arg1;
- (void)_handleBookmarkChangeNotification;
- (void)_handleCalChangeNotification;
- (void)_notesChangedExternally:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)lastSavedABSequenceNumber;
- (int)lastSavedCalSequenceNumber;
- (void)noteABDBDirChanged;
- (void)noteCalDBDirChanged;
- (void)registerConcernedABParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedBookmarkParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedCalParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)registerConcernedNoteParty:(id)arg1 withChangedBlock:(id)arg2;
- (void)removeConcernedABParty:(id)arg1;
- (void)removeConcernedBookmarkParty:(id)arg1;
- (void)removeConcernedCalParty:(id)arg1;
- (void)removeConcernedNoteParty:(id)arg1;
- (void)setLastSavedABSequenceNumber:(int)arg1;
- (void)setLastSavedCalSequenceNumber:(int)arg1;

@end
