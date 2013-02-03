/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, <CLLocationManagerDelegate>, NSString, CLHeading, NSSet;

@interface CLLocationManager : NSObject {
    id _internal;
}

@property int activityType;
@property(readonly) double bestAccuracy;
@property <CLLocationManagerDelegate> * delegate;
@property double desiredAccuracy;
@property double distanceFilter;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) CLHeading * heading;
@property(readonly) BOOL headingAvailable;
@property double headingFilter;
@property int headingOrientation;
@property(readonly) struct __CLClient { }* internalClient;
@property(readonly) CLLocation * location;
@property(readonly) BOOL locationServicesApproved;
@property(readonly) BOOL locationServicesAvailable;
@property(readonly) BOOL locationServicesEnabled;
@property(getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(readonly) double maximumRegionMonitoringDistance;
@property(readonly) NSSet * monitoredRegions;
@property BOOL pausesLocationUpdatesAutomatically;
@property(getter=isPersistentMonitoringEnabled) BOOL persistentMonitoringEnabled;
@property BOOL privateMode;
@property(copy) NSString * purpose;
@property BOOL supportInfo;

+ (int)_authorizationStatus;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (unsigned int)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (int)authorizationStatus;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (BOOL)deferredLocationUpdatesAvailable;
+ (BOOL)dumpLogsWithMessage:(id)arg1;
+ (unsigned int)entityClassesForLocationDictionary:(id)arg1;
+ (BOOL)headingAvailable;
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (BOOL)isLocationActiveForLocationDictionary:(id)arg1;
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned int)arg1;
+ (BOOL)locationServicesEnabled:(BOOL)arg1;
+ (BOOL)locationServicesEnabled;
+ (BOOL)mapCorrectionAvailable;
+ (unsigned int)primaryEntityClassForLocationDictionary:(id)arg1;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned int)arg2;
+ (id)sharedManager;
+ (BOOL)shutdownDaemon;
+ (BOOL)significantLocationChangeMonitoringAvailable;

- (int)activityType;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (id)appsUsingLocation;
- (id)appsUsingLocationWithDetails;
- (double)bestAccuracy;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)disallowDeferredLocationUpdates;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (double)expectedGpsUpdateInterval;
- (id)heading;
- (BOOL)headingAvailable;
- (double)headingFilter;
- (int)headingOrientation;
- (void)historicLocationsFromDate:(id)arg1 forInterval:(double)arg2;
- (id)init;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (struct __CLClient { }*)internalClient;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (BOOL)isPersistentMonitoringEnabled;
- (id)location;
- (BOOL)locationServicesApproved;
- (BOOL)locationServicesAvailable;
- (BOOL)locationServicesEnabled;
- (double)maximumRegionMonitoringDistance;
- (id)monitoredRegions;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)pauseLocationUpdates:(BOOL)arg1;
- (BOOL)pausesLocationUpdatesAutomatically;
- (BOOL)privateMode;
- (id)purpose;
- (void)registerAsLocationClient;
- (void)resetApps;
- (void)resumeLocationUpdates;
- (void)setActivityType:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (void)setPersistentMonitoringEnabled:(BOOL)arg1;
- (void)setPrivateMode:(BOOL)arg1;
- (void)setPurpose:(id)arg1;
- (void)setSupportInfo:(BOOL)arg1;
- (void)startAppStatusUpdates;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startMonitoringSignificantLocationChanges;
- (void)startTechStatusUpdates;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithPrompt;
- (void)stopAppStatusUpdates;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)stopMonitoringSignificantLocationChanges;
- (void)stopTechStatusUpdates;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (BOOL)supportInfo;
- (id)technologiesInUse;

@end
