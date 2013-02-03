/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSObject, NSLock;

@interface PFUbiquityImportOperation : NSOperation {
    NSObject *_delegate;
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
}

@property NSObject * delegate;

- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)lockDelegateLock;
- (id)retainedDelegate;
- (void)setDelegate:(id)arg1;
- (void)unlockDelegateLock;

@end
