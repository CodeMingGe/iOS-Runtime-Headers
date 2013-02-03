/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SAMPMediaItem, NSString;

@interface SAMPGetStateResponse : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(retain) SAMPMediaItem * listeningToItem;
@property(copy) NSNumber * listeningToMusicApplication;
@property(copy) NSString * refId;
@property int state;

+ (id)getStateResponse;
+ (id)getStateResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listeningToItem;
- (id)listeningToMusicApplication;
- (void)setListeningToItem:(id)arg1;
- (void)setListeningToMusicApplication:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
