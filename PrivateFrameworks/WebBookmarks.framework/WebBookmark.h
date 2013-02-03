/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : NSObject {
    NSString *_UUID;
    int _archiveStatus;
    BOOL _deletable;
    BOOL _editable;
    NSDictionary *_extraAttributes;
    BOOL _fetchedIconData;
    BOOL _folder;
    BOOL _hidden;
    NSData *_iconData;
    unsigned int _id;
    BOOL _inserted;
    NSDictionary *_localAttributes;
    BOOL _locallyAdded;
    BOOL _needsSyncUpdate;
    unsigned int _orderIndex;
    unsigned int _parentID;
    NSString *_serverID;
    unsigned int _specialID;
    NSData *_syncData;
    NSString *_syncKey;
    NSString *_title;
    NSString *_url;
}

@property(readonly) NSString * UUID;
@property(retain) NSString * address;
@property int archiveStatus;
@property(retain) NSDate * dateAdded;
@property(retain) NSDate * dateLastArchived;
@property(retain) NSDate * dateLastFetched;
@property(retain) NSDate * dateLastViewed;
@property(getter=isDeletable,readonly) BOOL deletable;
@property(getter=isEditable,readonly) BOOL editable;
@property(retain) NSDictionary * extraAttributes;
@property BOOL fetchedIconData;
@property(getter=isFolder,readonly) BOOL folder;
@property(getter=isHidden,readonly) BOOL hidden;
@property(retain) NSData * iconData;
@property(readonly) unsigned int identifier;
@property(getter=isInserted,readonly) BOOL inserted;
@property(retain) NSDictionary * localAttributes;
@property(retain) NSString * localPreviewText;
@property BOOL locallyAdded;
@property BOOL needsSyncUpdate;
@property(retain) NSDictionary * nextPageURLs;
@property(readonly) unsigned int parentID;
@property(retain) NSString * previewText;
@property(retain) NSString * serverID;
@property(readonly) unsigned int specialID;
@property(retain) NSData * syncData;
@property(retain) NSString * syncKey;
@property(retain) NSString * title;

- (id)UUID;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1;
- (void)_markSpecial:(unsigned int)arg1;
- (void)_modifyExtraReadingListAttributes:(id)arg1;
- (void)_modifyLocalReadingListAttributes:(id)arg1;
- (unsigned int)_orderIndex;
- (id)_readingListPropertyNamed:(id)arg1;
- (void)_removeDirectoryAtPath:(id)arg1;
- (void)_setHidden:(BOOL)arg1;
- (void)_setID:(unsigned int)arg1;
- (void)_setInserted:(BOOL)arg1;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)_setParentID:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (id)_suggestedFileNameForWebView:(id)arg1;
- (id)address;
- (unsigned long long)archiveSize;
- (int)archiveStatus;
- (void)cleanupRedundantPreviewText;
- (void)clearArchive;
- (void)clearArchiveSynchronously;
- (id)dateAdded;
- (id)dateLastArchived;
- (id)dateLastFetched;
- (id)dateLastViewed;
- (void)dealloc;
- (id)description;
- (id)extraAttributes;
- (BOOL)fetchedIconData;
- (BOOL)fullArchiveAvailable;
- (id)iconData;
- (unsigned int)identifier;
- (id)init;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 iconData:(id)arg4;
- (id)initStaticWithTitle:(id)arg1 address:(id)arg2;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (BOOL)isDeletable;
- (BOOL)isEditable;
- (BOOL)isFolder;
- (BOOL)isHidden;
- (BOOL)isInserted;
- (BOOL)isReadingListFolder;
- (BOOL)isReadingListItem;
- (id)localAttributes;
- (id)localPreviewText;
- (id)localizedTitle;
- (BOOL)locallyAdded;
- (BOOL)needsSyncUpdate;
- (id)nextPageURLs;
- (unsigned int)parentID;
- (id)previewText;
- (id)serverID;
- (void)setAddress:(id)arg1;
- (void)setArchiveStatus:(int)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setDateLastArchived:(id)arg1;
- (void)setDateLastFetched:(id)arg1;
- (void)setDateLastViewed:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setFetchedIconData:(BOOL)arg1;
- (void)setIconData:(id)arg1;
- (void)setLocalAttributes:(id)arg1;
- (void)setLocalPreviewText:(id)arg1;
- (void)setLocallyAdded:(BOOL)arg1;
- (void)setNeedsSyncUpdate:(BOOL)arg1;
- (void)setNextPageURLs:(id)arg1;
- (void)setPreviewText:(id)arg1;
- (void)setServerID:(id)arg1;
- (void)setSyncData:(id)arg1;
- (void)setSyncKey:(id)arg1;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastViewed:(id)arg3 dateLastFetched:(id)arg4;
- (void)setTitle:(id)arg1;
- (id)shortTypeDescription;
- (BOOL)shouldReattemptArchive;
- (unsigned int)specialID;
- (id)syncData;
- (id)syncKey;
- (id)title;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (id)webarchivePathInReaderForm:(BOOL)arg1 fileExists:(BOOL*)arg2;
- (BOOL)writeOfflineWebView:(id)arg1 asArchive:(BOOL)arg2 inReaderForm:(BOOL)arg3;

@end
