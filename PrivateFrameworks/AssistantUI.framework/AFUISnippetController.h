/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUISnippetDelegate>, NSArray, NSString, UIView;

@interface AFUISnippetController : NSObject {
    NSArray *_context;
    <AFUISnippetDelegate> *_delegate;
    int _phase;
    NSString *_speakableText;
    NSString *_title;
}

@property(copy) NSArray * context;
@property(readonly) <AFUISnippetDelegate> * delegate;
@property(copy) NSString * speakableText;
@property(copy) NSString * title;
@property(readonly) UIView * view;

- (void).cxx_destruct;
- (BOOL)_affectsMagicPocket;
- (BOOL)_forcesNoAnimationOnTableUpdates;
- (BOOL)_isServerResponse;
- (BOOL)_presentationShouldAnimate;
- (void)_resetSnippetEditingState;
- (id)_speakableTextForAceObject:(id)arg1;
- (BOOL)_supportsReload;
- (BOOL)_wantsFullWidthOfScreen;
- (BOOL)_wantsStaticPresentation;
- (BOOL)_wantsUnmodifiedHeight;
- (void)assistantInterrupted;
- (void)assistantWillActivate;
- (void)beginFadeInAnimation;
- (id)context;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithAceObject:(id)arg1 delegate:(id)arg2;
- (void)markWithStamp:(int)arg1;
- (id)parentViewController;
- (int)phase;
- (void)pushSirilandSnippet:(id)arg1;
- (double)resizeAnimationDuration;
- (void)setContext:(id)arg1;
- (void)setIsLastInTranscript:(BOOL)arg1;
- (void)setPhase:(int)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)speakableText;
- (id)title;
- (void)updateWithAceObject:(id)arg1;
- (id)view;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidPresent;
- (BOOL)viewIsReadyToAppear;
- (void)viewWillAppear;
- (void)viewWillAppearFromSirilandWithAnimationDuration:(double)arg1;
- (void)viewWillDisappear;
- (void)viewWillPresent;
- (float)wantedHeightUpdate;
- (BOOL)wantsConfirmationTossBehavior;
- (void)willLeaveConversation;

@end
