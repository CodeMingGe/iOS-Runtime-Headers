/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface DASharedCalendarContext : NSObject {
    NSString *_accountID;
    NSString *_calendarID;
    id _completionBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(id)arg4;

@end
