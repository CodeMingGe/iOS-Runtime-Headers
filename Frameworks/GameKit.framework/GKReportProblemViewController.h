/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSURL, NSString, GKPlayer;

@interface GKReportProblemViewController : GKServerWebViewController {
    NSString *_baseURL;
    GKPlayer *_player;
}

@property(retain) NSString * baseURL;
@property(retain) GKPlayer * player;
@property(readonly) NSURL * url;

- (id)baseURL;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)player;
- (void)processGameKitURLComponents:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)url;
- (void)viewWillAppear:(BOOL)arg1;

@end
