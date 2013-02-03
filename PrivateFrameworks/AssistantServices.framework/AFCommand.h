/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString, NSDictionary;

@interface AFCommand : NSObject {
    NSDictionary *_commandInfo;
    id _context;
    NSString *_name;
}

@property(readonly) NSString * domain;
@property(readonly) NSString * name;
@property(readonly) BOOL needsReply;

- (void).cxx_destruct;
- (id)aceDictionary;
- (id)commandValueForKey:(id)arg1;
- (id)context;
- (id)description;
- (id)domain;
- (id)initWithMessage:(id)arg1;
- (id)name;
- (BOOL)needsReply;

@end
