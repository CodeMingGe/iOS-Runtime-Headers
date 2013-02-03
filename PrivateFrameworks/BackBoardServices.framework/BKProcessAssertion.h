/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSString, NSObject<OS_xpc_object>, NSLock, <BKProcessAssertionDelegate>;

@interface BKProcessAssertion : NSObject {
    unsigned int _preventSuspend : 1;
    unsigned int _preventThrottleDownCPU : 1;
    unsigned int _preventThrottleDownUI : 1;
    unsigned int _preventIdleSleep : 1;
    unsigned int _preventingIdleSleep : 1;
    unsigned int _allowIdleSleepOverrideEnabled : 1;
    unsigned int _wantsForegroundResourcePriority : 1;
    NSObject<OS_xpc_object> *_client;
    <BKProcessAssertionDelegate> *_delegate;
    NSString *_identifier;
    unsigned int _lastLimitlessAssertionReason;
    NSLock *_lock;
    int _ownerPID;
    unsigned int _reason;
    unsigned int _savedFlags;
}

@property BOOL allowIdleSleepOverrideEnabled;
@property NSObject<OS_xpc_object> * client;
@property <BKProcessAssertionDelegate> * delegate;
@property(readonly) BOOL hasFixedStartTime;
@property(retain) NSString * identifier;
@property(readonly) int ownerPID;
@property(readonly) double permittedBackgroundDuration;
@property BOOL preventIdleSleep;
@property BOOL preventSuspend;
@property BOOL preventThrottleDownCPU;
@property BOOL preventThrottleDownUI;
@property(readonly) unsigned int reason;
@property(getter=isTimeLimited,readonly) BOOL timeLimited;
@property BOOL wantsForegroundResourcePriority;

+ (double)GetTaskCompletionMustTerminateDuration:(unsigned int)arg1;
+ (BOOL)isRateLimitedReason:(unsigned int)arg1;
+ (BOOL)isValidProcessAssertionReason:(unsigned int)arg1;

- (BOOL)_hasSavedFlags;
- (BOOL)_lock_shouldActuallyPreventIdleSleep;
- (unsigned int)_savedFlags;
- (void)_setSavedFlags:(unsigned int)arg1;
- (BOOL)allowIdleSleepOverrideEnabled;
- (unsigned int)assertionState;
- (id)client;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (unsigned int)flags;
- (BOOL)hasFixedStartTime;
- (id)identifier;
- (id)initWithClient:(id)arg1 ownerPID:(int)arg2 reason:(unsigned int)arg3 name:(id)arg4 flags:(unsigned int)arg5;
- (id)initWithReason:(unsigned int)arg1 identifier:(id)arg2;
- (void)invalidate;
- (BOOL)isTimeLimited;
- (BOOL)isValid;
- (int)ownerPID;
- (double)permittedBackgroundDuration;
- (BOOL)preventIdleSleep;
- (BOOL)preventSuspend;
- (BOOL)preventThrottleDownCPU;
- (BOOL)preventThrottleDownUI;
- (unsigned int)reason;
- (void)restoreSavedFlags;
- (void)saveFlagsAndApplyNewFlags:(unsigned int)arg1;
- (void)setAllowIdleSleepOverrideEnabled:(BOOL)arg1;
- (void)setClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastLimitlessAssertionReason:(unsigned int)arg1;
- (void)setPreventIdleSleep:(BOOL)arg1;
- (void)setPreventSuspend:(BOOL)arg1;
- (void)setPreventThrottleDownCPU:(BOOL)arg1;
- (void)setPreventThrottleDownUI:(BOOL)arg1;
- (void)setWantsForegroundResourcePriority:(BOOL)arg1;
- (BOOL)shouldReallyPreventIdleSleep;
- (BOOL)wantsForegroundResourcePriority;
- (BOOL)wantsForegroundResourcePriority_withoutLocking;

@end
