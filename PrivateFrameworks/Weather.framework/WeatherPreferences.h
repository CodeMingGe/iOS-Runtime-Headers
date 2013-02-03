/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class <SynchronizedDefaultsDelegate>, NSString, NSArray;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {
    NSString *_UUID;
    BOOL _isCelsius;
    NSArray *_lastUbiquitousWrittenDefaults;
    BOOL _serviceDebugging;
    NSString *_serviceHost;
    <SynchronizedDefaultsDelegate> *_syncDelegate;
    NSString *_twcURLString;
    NSString *_yahooWeatherURLString;
}

@property <SynchronizedDefaultsDelegate> * syncDelegate;
@property(copy) NSString * twcURLString;
@property(copy) NSString * yahooWeatherURLString;

+ (void)clearSharedPreferences;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;

- (id)UUID;
- (BOOL)_areDefaultCities:(id)arg1;
- (id)_cacheDirectoryPath;
- (id)_cityArrayToCloudCityArray:(id)arg1;
- (void)_clearCachedObjects;
- (id)_defaultCities;
- (BOOL)_defaultsAreValid;
- (BOOL)_defaultsCurrent;
- (id)_ppt_addFakeTestCities;
- (void)_saveUbiquitousDefaults:(id)arg1;
- (void)_setLastUbiquitousWrittenDefaults:(id)arg1 isCloudCityArray:(BOOL)arg2;
- (void)_syncToCloudIfNotDefaultCities:(id)arg1;
- (void)_synchronizedDefaultsDidChange:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)combineCloudCities:(id)arg1 withExisting:(id)arg2 byAppending:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)isCelsius;
- (BOOL)isLocalWeatherEnabled;
- (int)loadActiveCity;
- (id)loadSavedCities;
- (id)loadSavedCityAtIndex:(int)arg1;
- (BOOL)loadUnits;
- (id)localWeatherCity;
- (id)logoButtonImage;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)primaryBacksideLogoImage;
- (id)readDefaultValueForKey:(id)arg1;
- (void)registerDefaultUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(int)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(int)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (id)secondBacksideLogoImage;
- (BOOL)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(int)arg1;
- (void)setCelsius:(BOOL)arg1;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setTwcURLString:(id)arg1;
- (void)setYahooWeatherURLString:(id)arg1;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (id)twcLogoURL;
- (id)twcURLString;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)yahooLogoURL;
- (id)yahooWeatherURLString;

@end
