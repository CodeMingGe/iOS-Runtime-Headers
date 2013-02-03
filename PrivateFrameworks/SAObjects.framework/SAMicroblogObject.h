/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, SAPersonAttribute, SALocation, NSDictionary, NSString, NSURL, NSDate, NSNumber;

@interface SAMicroblogObject : SADomainObject {
}

@property(copy) NSURL * attachment;
@property(copy) NSString * content;
@property(copy) NSDate * dateSent;
@property(copy) NSDictionary * hashtagAlternatives;
@property(retain) SALocation * location;
@property(copy) NSNumber * outgoing;
@property(copy) NSNumber * providerId;
@property(copy) NSArray * recipients;
@property(copy) NSURL * refereceId;
@property(retain) SAPersonAttribute * sender;
@property(copy) NSString * serviceType;
@property(copy) NSDictionary * socialProfileReferences;
@property(copy) NSNumber * useLocation;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachment;
- (id)content;
- (id)dateSent;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashtagAlternatives;
- (id)location;
- (id)outgoing;
- (id)providerId;
- (id)recipients;
- (id)refereceId;
- (id)sender;
- (id)serviceType;
- (void)setAttachment:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setHashtagAlternatives:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setOutgoing:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRefereceId:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setSocialProfileReferences:(id)arg1;
- (void)setUseLocation:(id)arg1;
- (id)socialProfileReferences;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)useLocation;

@end
