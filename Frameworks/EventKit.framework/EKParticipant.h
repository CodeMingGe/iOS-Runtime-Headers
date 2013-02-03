/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSURL, NSString;

@interface EKParticipant : EKObject <NSCopying> {
}

@property(readonly) NSURL * URL;
@property(readonly) BOOL isCurrentUser;
@property(readonly) NSString * name;
@property(readonly) int participantRole;
@property(readonly) int participantStatus;
@property(readonly) int participantType;

+ (void*)findABPersonByURL:(id)arg1 inAddressBook:(void*)arg2;

- (void*)ABRecordWithAddressBook:(void*)arg1;
- (id)URL;
- (id)UUID;
- (id)_persistentItem;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)displayNameWithDecomposedFirstName:(id*)arg1 lastName:(id*)arg2 department:(id*)arg3;
- (id)emailAddress;
- (id)firstName;
- (BOOL)isCurrentUser;
- (BOOL)isEqualToParticipant:(id)arg1;
- (id)lastName;
- (id)name;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;

@end
