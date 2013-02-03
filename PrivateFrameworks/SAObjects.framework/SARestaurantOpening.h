/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAUIAppPunchOut, SACalendar, NSNumber, NSURL;

@interface SARestaurantOpening : AceObject <SAAceSerializable> {
}

@property(copy) NSURL * bookingId;
@property(retain) SAUIAppPunchOut * makeReservationPunchOut;
@property(copy) NSNumber * partySize;
@property(retain) SACalendar * timeSlot;

+ (id)opening;
+ (id)openingWithDictionary:(id)arg1 context:(id)arg2;

- (id)bookingId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)makeReservationPunchOut;
- (id)partySize;
- (void)setBookingId:(id)arg1;
- (void)setMakeReservationPunchOut:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setTimeSlot:(id)arg1;
- (id)timeSlot;

@end
