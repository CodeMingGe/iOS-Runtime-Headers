/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendar, <EKStyleProvider>, EKEventStore, <EKCalendarEditItemDelegate>;

@interface EKCalendarEditItem : NSObject {
    EKCalendar *_calendar;
    <EKCalendarEditItemDelegate> *_delegate;
    EKEventStore *_store;
    <EKStyleProvider> *_styleProvider;
}

@property <EKCalendarEditItemDelegate> * delegate;
@property(retain) <EKStyleProvider> * styleProvider;

- (void)applyStyleProviderToCell:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(int)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)delegate;
- (float)footerHeightForSection;
- (id)footerViewForSection;
- (id)headerTitle;
- (int)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
