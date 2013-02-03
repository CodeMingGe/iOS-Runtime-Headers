/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttendee : EKPersistentParticipant {
}

@property int participantRole;
@property int participantStatus;
@property int participantType;
@property int pendingStatus;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (id)owner;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (int)pendingStatus;
- (void)setOwner:(id)arg1;
- (void)setParticipantRole:(int)arg1;
- (void)setParticipantStatus:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPendingStatus:(int)arg1;

@end
