/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray, NSMutableSet, NSTimer, NSArray, DAAccount, <DATask>;

@interface DATaskManager : NSObject {
    DAAccount *_account;
    <DATask> *_activeExclusiveTask;
    <DATask> *_activeModalTask;
    <DATask> *_activeQueuedTask;
    NSMutableSet *_heldIndependentTasks;
    NSMutableSet *_independentTasks;
    NSTimer *_managerIdleTimer;
    <DATask> *_modalHeldActiveQueuedTask;
    NSMutableSet *_modalHeldIndependentTasks;
    NSMutableArray *_queuedExclusiveTasks;
    NSMutableArray *_queuedModalTasks;
    NSMutableArray *_queuedTasks;
    int _state;
}

@property DAAccount * account;
@property(readonly) <DATask> * activeModalTask;
@property(readonly) <DATask> * activeQueuedTask;
@property(readonly) NSArray * allTasks;
@property(readonly) NSArray * queuedTasks;

- (void)_cancelTasksWithReason:(int)arg1;
- (id)_getHeldIndependentTasks;
- (id)_getIndependentTasks;
- (id)_getModalHeldIndependentTasks;
- (id)_getQueuedExclusiveTasks;
- (id)_getQueuedModalTasks;
- (id)_getQueuedTasks;
- (BOOL)_hasTasksForcingNetworkConnection;
- (void)_makeStateTransition;
- (void)_performTask:(id)arg1;
- (void)_populateVersionDescriptions;
- (void)_reactivateHeldTasks;
- (void)_releasePowerAssertionForTask:(id)arg1;
- (void)_requestCancelTasksWithReason:(int)arg1;
- (void)_retainPowerAssertionForTask:(id)arg1;
- (void)_schedulePerformTask:(id)arg1;
- (void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2;
- (void)_scheduleStartModal:(id)arg1;
- (void)_startModal:(id)arg1;
- (BOOL)_taskForcesNetworking:(id)arg1;
- (BOOL)_taskInQueueForcesNetworkConnection:(id)arg1;
- (BOOL)_useFakeDescriptions;
- (void)_useOpportunisticSocketsAgain;
- (id)_version;
- (id)account;
- (id)accountID;
- (id)accountPersistentUUID;
- (id)activeModalTask;
- (id)activeQueuedTask;
- (id)allTasks;
- (void)cancelAllTasks;
- (void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2;
- (void)cancelTask:(id)arg1;
- (void)dealloc;
- (id)deviceType;
- (id)identityPersist;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)password;
- (int)port;
- (id)queuedTasks;
- (id)scheme;
- (id)server;
- (void)setAccount:(id)arg1;
- (void)shutdown;
- (id)stateString;
- (void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2;
- (void)submitExclusiveTask:(id)arg1;
- (void)submitIndependentTask:(id)arg1;
- (void)submitQueuedTask:(id)arg1;
- (void)taskDidFinish:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (BOOL)taskIsModal:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (BOOL)useSSL;
- (id)user;
- (id)userAgent;

@end
