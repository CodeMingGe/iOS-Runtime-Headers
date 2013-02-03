/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class VCVideoRule;

@interface VCBitrateRule : NSObject {
    unsigned int _bitrate;
    int _connectionType;
    VCVideoRule *limitingRule;
}

@property unsigned int bitrate;
@property int connectionType;
@property(readonly) VCVideoRule * limitingRule;

- (unsigned int)bitrate;
- (int)compare:(id)arg1;
- (int)connectionType;
- (void)dealloc;
- (id)description;
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;
- (id)limitingRule;
- (void)setBitrate:(unsigned int)arg1;
- (void)setConnectionType:(int)arg1;

@end
