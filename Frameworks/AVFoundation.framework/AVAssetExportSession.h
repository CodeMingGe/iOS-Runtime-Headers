/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSError, AVAsset, AVAudioMix, AVAssetExportSessionInternal, NSString, NSURL, AVVideoComposition, NSArray;

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal *_exportSession;
}

@property(readonly) AVAsset * asset;
@property(copy) AVAudioMix * audioMix;
@property(readonly) NSError * error;
@property(readonly) long long estimatedOutputFileLength;
@property long long fileLengthLimit;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property(copy) NSArray * metadata;
@property(copy) NSString * outputFileType;
@property(copy) NSURL * outputURL;
@property(readonly) NSString * presetName;
@property(readonly) float progress;
@property BOOL shouldOptimizeForNetworkUse;
@property(readonly) int status;
@property(readonly) NSArray * supportedFileTypes;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(copy) AVVideoComposition * videoComposition;

+ (id)_audioOnlyPresets;
+ (id)_audioVideoPresets;
+ (BOOL)_canWriteMediaOfAsset:(id)arg1 toFileType:(id)arg2;
+ (long long)_estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)_figRemakerNotificationNames;
+ (int)_getPassthroughExportPolicyForAssetTrack:(id)arg1 fileType:(id)arg2 asChapterTrack:(BOOL)arg3;
+ (BOOL)_isCompositionWithMultipleNonEmptyEdits:(id)arg1;
+ (BOOL)_isExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAsset:(id)arg2 outputFileType:(id)arg3;
+ (BOOL)_isNonPassthroughExportPreset:(id)arg1 compatibleWithAssetContainingPlayableAudio:(BOOL)arg2 playableVideo:(BOOL)arg3 outputFileType:(id)arg4;
+ (BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)arg1 outputFileType:(id)arg2;
+ (BOOL)_isPassthroughSupportedForAsset:(id)arg1;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_maximumDurationForPreset:(id)arg1 fileSizeBytesLimit:(long long)arg2 properties:(id)arg3;
+ (id)_settingForPreset:(id)arg1;
+ (id)_utTypesForAudioOnly;
+ (id)_utTypesForDefaultPassthroughPreset;
+ (id)_utTypesForPresets;
+ (id)allExportPresets;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(id)arg4;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;

- (id)_actualPresetName;
- (id)_actualSettingForPreset:(id)arg1;
- (void)_addListeners;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_canPassThroughVideo:(id)arg1 checkEnabled:(BOOL)arg2 checkAll:(BOOL)arg3 checkProtected:(BOOL)arg4;
- (struct OpaqueFigRemaker { }*)_createFigRemaker;
- (id)_determineCompatibleFileTypes;
- (struct CGSize { float x1; float x2; })_getSourceDimension;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (void)_handleFigRemakerNotification:(id)arg1 payload:(id)arg2;
- (void)_handleFigRemakerNotificationAsync:(id)arg1 payload:(id)arg2;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (BOOL)_isAudioMixdownRequired:(struct __CFString { }*)arg1 error:(id*)arg2;
- (void)_removeListeners;
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)arg1 fromAudioSetting:(id)arg2;
- (id)_settingForFigRemaker;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (void)_updateProgress;
- (BOOL)_validateSettablePropertiesReturningError:(id*)arg1;
- (id)asset;
- (id)audioMix;
- (void)cancelExport;
- (void)dealloc;
- (id)description;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id)arg1;
- (id)error;
- (long long)estimatedOutputFileLength;
- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (long long)fileLengthLimit;
- (void)finalize;
- (id)init;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (id)metadata;
- (id)outputFileType;
- (id)outputURL;
- (id)presetName;
- (float)progress;
- (void)setAudioMix:(id)arg1;
- (void)setFileLengthLimit:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setUsesHardwareVideoEncoderIfAvailable:(BOOL)arg1;
- (void)setVideoComposition:(id)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (int)status;
- (id)supportedFileTypes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (BOOL)usesHardwareVideoEncoderIfAvailable;
- (id)videoComposition;

@end
