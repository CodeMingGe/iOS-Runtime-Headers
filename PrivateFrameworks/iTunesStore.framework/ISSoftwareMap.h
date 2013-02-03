/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray;

@interface ISSoftwareMap : NSObject {
    NSArray *_applications;
}

@property(readonly) NSArray * applications;

+ (void)_startWatchingInstallationNotifications;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(struct __CFString { }*)arg2;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)currentMap;
+ (BOOL)currentMapIsValid;
+ (BOOL)haveApplicationsOfType:(struct __CFString { }*)arg1;
+ (void)invalidateCurrentMap;
+ (id)loadedMap;
+ (void)setCurrentMap:(id)arg1;
+ (void)startObservingNotifications;

- (void)_loadFromMobileInstallation;
- (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)applications;
- (id)copySoftwareUpdatesPropertyList;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end
