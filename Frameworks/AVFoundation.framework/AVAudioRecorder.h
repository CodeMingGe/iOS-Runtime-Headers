/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVAudioRecorderDelegate>, NSArray, NSDictionary, NSURL;

@interface AVAudioRecorder : NSObject {
    void *_impl;
}

@property(copy) NSArray * channelAssignments;
@property(readonly) double currentTime;
@property <AVAudioRecorderDelegate> * delegate;
@property(readonly) double deviceCurrentTime;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(getter=isRecording,readonly) BOOL recording;
@property(readonly) NSDictionary * settings;
@property(readonly) NSURL * url;

- (float)averagePowerForChannel:(unsigned int)arg1;
- (id)baseInit;
- (void)beginInterruption;
- (id)channelAssignments;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteRecording;
- (double)deviceCurrentTime;
- (void)endInterruption;
- (void)endInterruptionWithFlags;
- (void)finalize;
- (void)finishedRecording;
- (struct AudioRecorderImpl { id x1; id x2; id x3; id x4; id x5; unsigned int x6; struct AudioStreamBasicDescription { double x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; unsigned int x_7_1_8; unsigned int x_7_1_9; } x7; struct OpaqueAudioFileID {} *x8; struct OpaqueAudioQueue {} *x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; unsigned int x16; char *x17; unsigned int x18; struct AudioFormatListItem {} *x19; boolx20; boolx21; boolx22; boolx23; boolx24; boolx25; boolx26; struct AudioQueueLevelMeterState {} *x27; struct AudioQueueBuffer {} *x28[4]; struct AudioQueueBuffer {} *x29; boolx30; unsigned int x31; boolx32; }*)impl;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (BOOL)isMeteringEnabled;
- (BOOL)isRecording;
- (void)pause;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (BOOL)prepareToRecord;
- (void)privCommonCleanup;
- (BOOL)record;
- (BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (BOOL)recordAtTime:(double)arg1;
- (BOOL)recordForDuration:(double)arg1;
- (void)setChannelAssignments:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMeteringEnabled:(BOOL)arg1;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;

@end
