/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <EAAccessoryDelegate>, NSArray, NSString, EAAccessoryInternal;

@interface EAAccessory : NSObject {
    EAAccessoryInternal *_internal;
}

@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) unsigned int connectionID;
@property <EAAccessoryDelegate> * delegate;
@property(readonly) NSString * firmwareRevision;
@property(readonly) NSString * hardwareRevision;
@property(readonly) NSString * manufacturer;
@property(readonly) NSString * modelNumber;
@property(readonly) NSString * name;
@property(readonly) NSArray * protocolStrings;
@property(readonly) NSString * serialNumber;

- (int (*)())cfAccessoryPortPropertyCallback;
- (void)_addSession:(id)arg1;
- (id)_createWakeToken;
- (void)_endSession:(unsigned int)arg1;
- (id)_initWithAccessory:(id)arg1;
- (unsigned int)_internalConnectionID;
- (BOOL)_internalNotPresentInIAPAccessoriesArray;
- (void)_openCompleteForSession:(unsigned int)arg1;
- (id)_protocolIDForProtocolString:(id)arg1;
- (void)_removeSession:(id)arg1;
- (void)_setConnected:(BOOL)arg1;
- (void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg1;
- (id)_shortDescription;
- (void)_updateAccessoryInfo:(id)arg1;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (id)allPublicProtocolStrings;
- (id)audioPorts;
- (struct __CFAccessory { }*)cfAccessory;
- (void*)cfAccessoryPortPropertyContext;
- (int)classType;
- (unsigned int)connectionID;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevision;
- (BOOL)getEphemerisExpirationInterval:(double*)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (BOOL)getEphemerisURL:(id*)arg1;
- (BOOL)getNMEASentence:(id*)arg1;
- (id)hardwareRevision;
- (int)iPodOutOptionsMask;
- (id)init;
- (BOOL)isConnected;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (id)preferredApp;
- (id)protocolStrings;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2;
- (id)serialNumber;
- (void)setCfAccessory:(struct __CFAccessory { }*)arg1;
- (void)setCfAccessoryPortPropertyCallback:(int (*)())arg1;
- (void)setCfAccessoryPortPropertyContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setIPodOutOptionsMask:(int)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;
- (BOOL)supportsAccessibility;
- (BOOL)supportsLocation;
- (BOOL)supportsPointOfInterest;
- (BOOL)supportsPublicIap;
- (void)updateItemProperty:(int)arg1 withValue:(id)arg2;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (id)wakeToken;

@end
