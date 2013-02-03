/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarShareesEditItem, UITableView, EKSource, <EKStyleProvider>, EKEventStore, EKCalendar, <EKCalendarEditorDelegate>, NSArray;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate> {
    EKCalendar *_calendar;
    <EKCalendarEditorDelegate> *_delegate;
    NSArray *_editItems;
    unsigned int _entityType;
    EKEventStore *_eventStore;
    BOOL _isNewCalendar;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKSource *_source;
    <EKStyleProvider> *_styleProvider;
    UITableView *_tableView;
}

@property(retain) EKCalendar * calendar;
@property <EKCalendarEditorDelegate> * delegate;
@property(retain) EKEventStore * eventStore;
@property BOOL isNewCalendar;
@property(retain) <EKStyleProvider> * styleProvider;

- (void)_deleteCalendar;
- (void)_deleteClicked:(id)arg1;
- (id)_editItems;
- (void)_eventStoreChanged:(id)arg1;
- (void)_localeChanged;
- (void)_presentValidationAlert:(id)arg1;
- (BOOL)_shouldShowDeleteButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)calendar;
- (void)calendarItemStartedEditing:(id)arg1;
- (void)cancel:(id)arg1;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)done:(id)arg1;
- (id)eventStore;
- (id)initWithCalendar:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (id)initWithSource:(id)arg1 eventStore:(id)arg2 entityType:(unsigned int)arg3;
- (BOOL)isNewCalendar;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)owningNavigationController;
- (void)scrollViewDidScroll:(id)arg1;
- (int)sectionForCalendarEditItem:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setIsNewCalendar:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setupForCalendar;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;

@end
