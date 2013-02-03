/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSNumber, NSString, EKCalendarItem, EKCalendar, NSDate, NSURL;

@interface EKResourceChange : EKObject <EKIdentityProtocol> {
}

@property(readonly) BOOL alerted;
@property(readonly) EKCalendar * calendar;
@property(readonly) EKCalendarItem * calendarItem;
@property(readonly) unsigned int changeType;
@property(readonly) NSURL * changedByAddress;
@property(readonly) NSString * changedByDisplayName;
@property(readonly) NSString * changedByFirstName;
@property(readonly) NSString * changedByLastName;
@property(readonly) NSNumber * createCount;
@property(readonly) BOOL dateChanged;
@property(readonly) NSNumber * deleteCount;
@property(readonly) NSString * deletedTitle;
@property(readonly) BOOL locationChanged;
@property(readonly) unsigned int publicStatus;
@property(readonly) BOOL timeChanged;
@property(readonly) NSDate * timestamp;
@property(readonly) BOOL titleChanged;
@property(readonly) NSNumber * updateCount;

- (id)_calendarItemRelation;
- (id)_persistentResourceChange;
- (BOOL)alerted;
- (id)calendar;
- (id)calendarItem;
- (unsigned int)changeType;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (void)clearAlertedStatus;
- (id)createCount;
- (BOOL)dateChanged;
- (id)deleteCount;
- (id)deletedTitle;
- (id)emailAddress;
- (id)lazyLoadRelationForKey:(id)arg1;
- (BOOL)locationChanged;
- (id)name;
- (unsigned int)publicStatus;
- (BOOL)timeChanged;
- (id)timestamp;
- (BOOL)titleChanged;
- (id)updateCount;

@end
