/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKChallengeEventHandlerDelegate>, GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject {
    <GKChallengeEventHandlerDelegate> *_delegateWeak;
    GKChallengeInternal *_pendingCompletedChallenge;
    GKChallengeInternal *_pendingReceivedChallenge;
}

@property <GKChallengeEventHandlerDelegate> * delegate;
@property(retain) GKChallengeInternal * pendingCompletedChallenge;
@property(retain) GKChallengeInternal * pendingReceivedChallenge;

+ (id)challengeEventHandler;

- (void)challengeCompleted:(id)arg1;
- (void)challengeReceived:(id)arg1;
- (void)completedChallengeSelected:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)loadPhotoAndGoalTextForPlayer:(id)arg1 challenge:(id)arg2 hander:(id)arg3;
- (id)pendingCompletedChallenge;
- (id)pendingReceivedChallenge;
- (void)receivedChallengeSelected:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingCompletedChallenge:(id)arg1;
- (void)setPendingReceivedChallenge:(id)arg1;
- (void)showBannerForChallenge:(id)arg1 complete:(id)arg2;
- (void)showLocallyCompletedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(id)arg3;
- (void)showReceivedBannerForIssuingPlayer:(id)arg1 challenge:(id)arg2 handler:(id)arg3;
- (void)showRemotelyCompletedBannerForReceivingPlayer:(id)arg1 challenge:(id)arg2 handler:(id)arg3;

@end
