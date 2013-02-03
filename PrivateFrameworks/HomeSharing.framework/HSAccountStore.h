/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, SSURLConnectionRequest;

@interface HSAccountStore : NSObject {
    int _defaultsDidChangeToken;
    SSURLConnectionRequest *_groupIDRequest;
}

@property(copy) NSString * appleID;
@property(copy) NSString * groupID;
@property(retain) SSURLConnectionRequest * groupIDRequest;
@property(copy) NSString * password;

+ (id)defaultStore;

- (id)appleID;
- (BOOL)canDetermineGroupID;
- (void)clearAllCredentials;
- (void)clearCaches;
- (void)clearGroupID;
- (void)dealloc;
- (void)determineGroupIDWithCompletionHandler:(id)arg1;
- (id)groupID;
- (id)groupIDRequest;
- (id)init;
- (id)password;
- (void)setAppleID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupIDRequest:(id)arg1;
- (void)setPassword:(id)arg1;

@end
