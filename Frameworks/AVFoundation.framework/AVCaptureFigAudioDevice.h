/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSDictionary;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSDictionary *_deviceProperties;
    BOOL _isConnected;
    BOOL _levelMeteringEnabled;
    NSString *_localizedName;
}

+ (id)_devices;

- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (void)dealloc;
- (id)devicePropertiesDictionary;
- (id)formats;
- (BOOL)hasMediaType:(id)arg1;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (BOOL)isConnected;
- (BOOL)isInUseByAnotherApplication;
- (id)localizedName;
- (id)modelID;
- (BOOL)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (id)uniqueID;

@end
