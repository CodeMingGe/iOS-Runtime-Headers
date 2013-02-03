/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSObject<NSCoding><NSCopying>, NSError, NSObject<OS_xpc_object>, NSString, NSArray, NSMutableDictionary;

@interface MBMessage : NSObject {
    NSMutableDictionary *_messageInfo;
    NSMutableDictionary *_replyInfo;
    NSObject<OS_xpc_object> *_xpcObject;
}

@property(readonly) NSArray * arguments;
@property(copy) NSError * error;
@property(readonly) NSString * name;
@property(copy) NSObject<NSCoding><NSCopying> * reply;
@property(copy) NSError * replyError;

+ (id)messageWithName:(id)arg1 arguments:(id)arg2;

- (id)_initWithXPCObject:(id)arg1;
- (id)_xpcObject;
- (id)arguments;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithName:(id)arg1 arguments:(id)arg2;
- (id)name;
- (id)reply;
- (id)replyError;
- (void)sendReply;
- (void)setError:(id)arg1;
- (void)setReply:(id)arg1;
- (void)setReplyError:(id)arg1;

@end
