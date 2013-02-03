/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUSongsDataSource : IUMediaQueriesDataSource {
    unsigned int _syncAssetTotal;
    int _syncAssetTotalToken;
    BOOL _syncAssetTotalTokenIsValid;
    unsigned int _syncCurrentAssetNumber;
    int _syncCurrentAssetNumberToken;
    BOOL _syncCurrentAssetNumberTokenIsValid;
    NSString *_syncProgressString;
}

+ (int)mediaEntityType;
+ (id)queryItemPropertiesToFetch;
+ (id)tabBarItemIconName;
+ (id)tabBarItemTitleKey;

- (int)_containingParentEntityType;
- (void)_updateSyncProgressString;
- (BOOL)allowsDeletion;
- (BOOL)allowsDownloadingAllEntities;
- (BOOL)canShowDownloadAllEntities;
- (Class)cellConfigurationClass;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)countStringFormat;
- (void)createGlobalContexts;
- (void)dealloc;
- (id)init;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (void)reloadActionRows;
- (unsigned int)requiredEntityCountForSections;
- (Class)songCellConfigurationGlobalContextClass;
- (id)viewControllerContextForIndex:(unsigned int)arg1;

@end
