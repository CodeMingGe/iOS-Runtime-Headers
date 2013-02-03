/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class NSMutableDictionary, NSMutableArray;

@interface IMDAppleEmailInterface : NSObject <MSSearchDelegate> {
    NSMutableDictionary *_currentSearches;
    NSMutableArray *_handlers;
}

+ (id)sharedInstance;

- (void)_cancelAllSearches;
- (void)_cancelSearchesForEmail:(id)arg1;
- (id)_emailForSearch:(id)arg1;
- (id)_existingSearchForEmail:(id)arg1;
- (id)_registrationInfoIDForSearch:(id)arg1;
- (int)_searchAttemptForSearch:(id)arg1;
- (void)_startSearchingForRegistrationEmail:(id)arg1 registrationInfo:(id)arg2 attempt:(int)arg3;
- (id)_vettingIDForSearch:(id)arg1;
- (void)addListener:(id)arg1;
- (BOOL)cancelMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2;
- (void)dealloc;
- (void)removeListener:(id)arg1;
- (BOOL)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (BOOL)startMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2;

@end
