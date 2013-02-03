/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSString, NSDictionary;

@interface Device : NSObject {
    NSString *_deviceName;
    NSDictionary *_versionDict;
}

+ (BOOL)hasBaseband;
+ (BOOL)hasCompass;
+ (BOOL)hasGyro;
+ (BOOL)hasWiFi;
+ (id)productBuildVersion;
+ (id)sharedInstance;

- (void)dealloc;
- (id)deviceName;
- (id)init;
- (id)modelName;
- (id)versionDict;

@end
