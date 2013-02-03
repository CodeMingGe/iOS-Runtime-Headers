/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKCalendarDate, NSString, NSDate, NSNumber, EKParticipant;

@interface EKEvent : EKCalendarItem {
    EKCalendarDate *_occurrenceEndDate;
    BOOL _occurrenceIsAllDay;
    EKCalendarDate *_occurrenceStartDate;
    EKCalendarDate *_originalOccurrenceEndDate;
    NSNumber *_originalOccurrenceIsAllDay;
    EKCalendarDate *_originalOccurrenceStartDate;
}

@property(getter=isAllDay) BOOL allDay;
@property int availability;
@property(readonly) int birthdayPersonID;
@property(copy) NSDate * endDate;
@property(readonly) NSString * eventIdentifier;
@property(readonly) BOOL isDetached;
@property(copy) EKCalendarDate * occurrenceEndDate;
@property BOOL occurrenceIsAllDay;
@property(copy) EKCalendarDate * occurrenceStartDate;
@property(readonly) EKParticipant * organizer;
@property(copy) EKCalendarDate * originalOccurrenceEndDate;
@property(copy) NSNumber * originalOccurrenceIsAllDay;
@property(copy) EKCalendarDate * originalOccurrenceStartDate;
@property(copy) NSDate * startDate;
@property(readonly) int status;

+ (id)eventWithEventStore:(id)arg1;

- (BOOL)_cancelWithSpan:(int)arg1 error:(id*)arg2;
- (BOOL)_checkStartDateConstraintAgainstDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2 error:(id*)arg3;
- (id)_dateForNextOccurrence;
- (void)_deleteThisOccurrence;
- (BOOL)_deleteWithSpan:(int)arg1 error:(id*)arg2;
- (void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3;
- (id)_effectiveTimeZone;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2;
- (BOOL)_isAlarmAcknowledgedPropertyDirty;
- (BOOL)_isAllDay;
- (BOOL)_isInitialOccurrenceDate:(id)arg1;
- (BOOL)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2;
- (int)_parentParticipationStatus;
- (id)_persistentEvent;
- (void)_sendModifiedNote;
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1;
- (BOOL)_shouldDeclineInsteadOfDelete;
- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id*)arg2;
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;
- (int)alarmCount;
- (BOOL)allowsAlarmModifications;
- (BOOL)allowsCalendarModifications;
- (BOOL)allowsRecurrenceModifications;
- (id)attachments;
- (int)attendeeCount;
- (id)attendees;
- (int)availability;
- (int)birthdayPersonID;
- (id)birthdayTitleWithAddressBook:(void*)arg1;
- (BOOL)canBeRespondedTo;
- (BOOL)canDetachSingleOccurrence;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (BOOL)canSetAvailability;
- (void)clearInvitationStatus;
- (BOOL)commitWithSpan:(int)arg1 error:(id*)arg2;
- (id)committedValueForKey:(id)arg1;
- (int)compareStartDateWithEvent:(id)arg1;
- (BOOL)dateChanged;
- (int)daySpan;
- (void)dealloc;
- (id)description;
- (void)didCommit;
- (id)dirtyPropertiesToSkip;
- (id)displayTitle;
- (double)duration;
- (id)endCalendarDate;
- (id)endDate;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDateGr;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })endDatePinnedForAllDay;
- (id)eventIdentifier;
- (id)eventStore;
- (id)exportToICS;
- (id)externalId;
- (id)externalURI;
- (id)externalURL;
- (BOOL)hasHumanInviteesToDisplay;
- (BOOL)hasSelfAttendee;
- (unsigned int)hash;
- (id)init;
- (id)initWithEventStore:(id)arg1;
- (id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2;
- (id)initWithPersistentObject:(id)arg1;
- (id)initialEndDate;
- (id)initialStartDate;
- (unsigned int)invitationStatus;
- (BOOL)isAllDay;
- (BOOL)isAllDayDirty;
- (BOOL)isDetached;
- (BOOL)isDirtyIgnoringCalendar;
- (BOOL)isEndDateDirty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStartDateDirty;
- (BOOL)isStatusDirty;
- (BOOL)isTentative;
- (BOOL)locationChanged;
- (unsigned int)modifiedProperties;
- (BOOL)needsOccurrenceCacheUpdate;
- (id)occurrenceDate;
- (id)occurrenceEndDate;
- (BOOL)occurrenceIsAllDay;
- (id)occurrenceStartDate;
- (id)organizer;
- (id)originalOccurrenceEndDate;
- (id)originalOccurrenceIsAllDay;
- (id)originalOccurrenceStartDate;
- (int)participationStatus;
- (int)pendingParticipationStatus;
- (id)recurrenceRule;
- (BOOL)refresh;
- (BOOL)removeWithSpan:(int)arg1 error:(id*)arg2;
- (BOOL)requiresDetach;
- (id)responseComment;
- (BOOL)responseMustApplyToAll;
- (void)revert;
- (void)rollback;
- (void)setAllDay:(BOOL)arg1;
- (void)setAvailability:(int)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setOccurrenceEndDate:(id)arg1;
- (void)setOccurrenceIsAllDay:(BOOL)arg1;
- (void)setOccurrenceStartDate:(id)arg1;
- (void)setOriginalOccurrenceEndDate:(id)arg1;
- (void)setOriginalOccurrenceIsAllDay:(id)arg1;
- (void)setOriginalOccurrenceStartDate:(id)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)sortedEKAttachmentsDisplayStrings;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;
- (id)startCalendarDate;
- (id)startDate;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDateGr;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })startDatePinnedForAllDay;
- (int)status;
- (BOOL)timeChanged;
- (BOOL)titleChanged;
- (id)uniqueId;
- (BOOL)validateWithSpan:(int)arg1 error:(id*)arg2;

@end
