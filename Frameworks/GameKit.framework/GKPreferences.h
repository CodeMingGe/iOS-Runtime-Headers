/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKPreferences : NSObject {
    BOOL _HTTPShouldUsePipelining;
    BOOL __shouldSynchronizeOnNextRead;
    unsigned int _maxDefaultGameStateSizeTurnBasedd;
    unsigned int _maxDefaultPlayersHosted;
    unsigned int _maxDefaultPlayersP2P;
    unsigned int _maxDefaultPlayersTurnBased;
}

@property BOOL HTTPShouldUsePipelining;
@property BOOL _shouldSynchronizeOnNextRead;
@property(getter=isAccountModificationRestricted,readonly) BOOL accountModificationRestricted;
@property(getter=isAddingFriendsRestricted,readonly) BOOL addingFriendsRestricted;
@property BOOL allowUnsignedBag;
@property(getter=isAppInstallationRestricted,readonly) BOOL appInstallationRestricted;
@property double cacheTTLOverride;
@property int environment;
@property BOOL forceRelay;
@property(getter=isGameCenterRestricted,readonly) BOOL gameCenterRestricted;
@property double garbageCollectionInterval;
@property BOOL ignoreSandbox;
@property(readonly) BOOL isStoreDemoModeEnabled;
@property unsigned long logFilter;
@property unsigned int maxDefaultGameStateSizeTurnBased;
@property unsigned int maxDefaultPlayersHosted;
@property unsigned int maxDefaultPlayersP2P;
@property unsigned int maxDefaultPlayersTurnBased;
@property unsigned int maxGameStateSizeTurnBased;
@property unsigned int maxPlayersHosted;
@property unsigned int maxPlayersP2P;
@property unsigned int maxPlayersTurnBased;
@property double minimumCacheTTL;
@property(getter=isMultiplayerGamingRestricted,readonly) BOOL multiplayerGamingRestricted;
@property BOOL notificationAlertsEnabled;
@property BOOL notificationBadgesEnabled;
@property(getter=isNotificationCenterEnabled) BOOL notificationCenterEnabled;
@property BOOL notificationSoundsEnabled;
@property unsigned int operationRetryCount;
@property double operationRetryDelay;
@property double operationTimeout;
@property int pipeliningSetting;
@property BOOL preemptiveRelay;
@property int pushEnvironment;
@property BOOL shouldAddPlayerInfoToAddressBook;
@property BOOL shouldAnnotateImageUsage;
@property(readonly) BOOL shouldDisallowInvitesFromStrangers;
@property BOOL shouldLinkPlayerToFacebook;
@property BOOL shouldLinkPlayerToICloud;
@property BOOL shouldLinkPlayerToTwitter;
@property BOOL shouldTrackAtlasImageUsage;
@property BOOL shouldUseTestIcons;
@property(retain) NSString * storeBagURL;
@property double terminationInterval;
@property BOOL useInternalHeader;
@property BOOL useTestProtocols;
@property BOOL verboseLogging;

+ (id)hostNameForEnvironment:(int)arg1;
+ (id)sharedPreferences;

- (BOOL)HTTPShouldUsePipelining;
- (void)_didWriteKey:(struct __CFString { }*)arg1;
- (BOOL)_shouldSynchronizeOnNextRead;
- (BOOL)allowUnsignedBag;
- (void)applicationWillEnterBackground:(id)arg1;
- (BOOL)booleanValueForKey:(struct __CFString { }*)arg1 defaultValue:(BOOL)arg2;
- (BOOL)booleanValueForKey:(struct __CFString { }*)arg1;
- (double)cacheTTLOverride;
- (int)environment;
- (BOOL)forceRelay;
- (double)garbageCollectionInterval;
- (BOOL)ignoreSandbox;
- (id)init;
- (int)integerValueForKey:(struct __CFString { }*)arg1 defaultValue:(int)arg2;
- (void)invalidate;
- (BOOL)isAccountModificationRestricted;
- (BOOL)isAddingFriendsRestricted;
- (BOOL)isAppInstallationRestricted;
- (BOOL)isGameCenterRestricted;
- (BOOL)isMultiplayerGamingRestricted;
- (BOOL)isNotificationCenterEnabled;
- (BOOL)isStoreDemoModeEnabled;
- (unsigned long)logFilter;
- (BOOL)managedBooleanForKey:(id)arg1;
- (unsigned int)maxDefaultGameStateSizeTurnBased;
- (unsigned int)maxDefaultPlayersHosted;
- (unsigned int)maxDefaultPlayersP2P;
- (unsigned int)maxDefaultPlayersTurnBased;
- (unsigned int)maxGameStateSizeTurnBased;
- (unsigned int)maxPlayersHosted;
- (unsigned int)maxPlayersP2P;
- (unsigned int)maxPlayersTurnBased;
- (double)minimumCacheTTL;
- (BOOL)notificationAlertsEnabled;
- (BOOL)notificationBadgesEnabled;
- (BOOL)notificationSoundsEnabled;
- (unsigned int)operationRetryCount;
- (double)operationRetryDelay;
- (double)operationTimeout;
- (int)pipeliningSetting;
- (BOOL)preemptiveRelay;
- (int)pushEnvironment;
- (void)setAllowUnsignedBag:(BOOL)arg1;
- (void)setBooleanValue:(BOOL)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setCacheTTLOverride:(double)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setForceRelay:(BOOL)arg1;
- (void)setGarbageCollectionInterval:(double)arg1;
- (void)setHTTPShouldUsePipelining:(BOOL)arg1;
- (void)setIgnoreSandbox:(BOOL)arg1;
- (void)setIntegerValue:(int)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setLogFilter:(unsigned long)arg1;
- (void)setMaxDefaultGameStateSizeTurnBased:(unsigned int)arg1;
- (void)setMaxDefaultPlayersHosted:(unsigned int)arg1;
- (void)setMaxDefaultPlayersP2P:(unsigned int)arg1;
- (void)setMaxDefaultPlayersTurnBased:(unsigned int)arg1;
- (void)setMaxGameStateSizeTurnBased:(unsigned int)arg1;
- (void)setMaxPlayersHosted:(unsigned int)arg1;
- (void)setMaxPlayersP2P:(unsigned int)arg1;
- (void)setMaxPlayersTurnBased:(unsigned int)arg1;
- (void)setMinimumCacheTTL:(double)arg1;
- (void)setNotificationAlertsEnabled:(BOOL)arg1;
- (void)setNotificationBadgesEnabled:(BOOL)arg1;
- (void)setNotificationCenterEnabled:(BOOL)arg1;
- (void)setNotificationSoundsEnabled:(BOOL)arg1;
- (void)setOperationRetryCount:(unsigned int)arg1;
- (void)setOperationRetryDelay:(double)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setPipeliningSetting:(int)arg1;
- (void)setPreemptiveRelay:(BOOL)arg1;
- (void)setPushEnvironment:(int)arg1;
- (void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1;
- (void)setShouldAnnotateImageUsage:(BOOL)arg1;
- (void)setShouldLinkPlayerToFacebook:(BOOL)arg1;
- (void)setShouldLinkPlayerToICloud:(BOOL)arg1;
- (void)setShouldLinkPlayerToTwitter:(BOOL)arg1;
- (void)setShouldTrackAtlasImageUsage:(BOOL)arg1;
- (void)setShouldUseTestIcons:(BOOL)arg1;
- (void)setStoreBagURL:(id)arg1;
- (void)setTerminationInterval:(double)arg1;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setUnsignedIntegerValue:(int)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setUseInternalHeader:(BOOL)arg1;
- (void)setUseTestProtocols:(BOOL)arg1;
- (void)setVerboseLogging:(BOOL)arg1;
- (void)set_shouldSynchronizeOnNextRead:(BOOL)arg1;
- (BOOL)shouldAddPlayerInfoToAddressBook;
- (BOOL)shouldAnnotateImageUsage;
- (BOOL)shouldDisallowInvitesFromStrangers;
- (BOOL)shouldLinkPlayerToFacebook;
- (BOOL)shouldLinkPlayerToICloud;
- (BOOL)shouldLinkPlayerToTwitter;
- (BOOL)shouldTrackAtlasImageUsage;
- (BOOL)shouldUseTestIcons;
- (id)storeBagURL;
- (void)synchronize;
- (double)terminationInterval;
- (double)timeIntervalForKey:(struct __CFString { }*)arg1 defaultValue:(double)arg2;
- (int)unsignedIntegerValueForKey:(struct __CFString { }*)arg1 defaultValue:(int)arg2;
- (BOOL)useInternalHeader;
- (BOOL)useTestProtocols;
- (BOOL)verboseLogging;

@end
