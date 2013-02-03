/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDate, NSCalendar, NSTimeZone, NSLocale, UILabel, NSDateComponents, UIDatePicker, _UIDatePickerMode;

@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
    struct { 
        unsigned int staggerTimeIntervals : 1; 
        unsigned int loadingDateOrTime : 1; 
        unsigned int highlightsToday : 1; 
        unsigned int usesBlackChrome : 1; 
    BOOL _allowsZeroCountdownDuration;
    NSLocale *_compositeLocale;
    double _countDownDuration;
    UIDatePicker *_datePickerDelegate;
    } _datePickerFlags;
    id _delegateOfDatePicker;
    int _expectedAMPM;
    UILabel *_hourLabel;
    NSDateComponents *_lastSelectedDateComponents;
    int _loadingDate;
    NSDate *_maximumDate;
    NSDate *_minimumDate;
    UILabel *_minuteLabel;
    _UIDatePickerMode *_mode;
    NSTimeZone *_timeZone;
    NSCalendar *_userProvidedCalendar;
    NSLocale *_userProvidedLocale;
    NSDate *_userSuppliedDate;
    NSDate *_userSuppliedMaximumDate;
    NSDate *_userSuppliedMinimumDate;
}

@property(getter=_allowsZeroCountdownDuration,setter=_setAllowsZeroCountdownDuration:) BOOL allowsZeroCountdownDuration;
@property double countDownDuration;
@property(copy) NSDate * date;
@property(copy) NSDateComponents * dateComponents;
@property int datePickerMode;
@property id delegateOfDatePicker;
@property(getter=_hasCustomCalendar,readonly) BOOL hasCustomCalendar;
@property BOOL highlightsToday;
@property(copy) NSDate * maximumDate;
@property(copy) NSDate * minimumDate;
@property int minuteInterval;
@property BOOL staggerTimeIntervals;
@property(retain) NSTimeZone * timeZone;
@property(copy) NSCalendar * userProvidedCalendar;
@property(retain) NSLocale * userProvidedLocale;
@property(getter=_usesBlackChrome,setter=_setUsesBlackChrome:) BOOL usesBlackChrome;

- (BOOL)_allowsZeroCountdownDuration;
- (int)_amPmValue;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(int)arg2;
- (void)_datePickerReset:(id)arg1;
- (void)_doneLoadingDateOrTime;
- (void)_fadeLabelForCalendarUnit:(unsigned int)arg1 toText:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_hasCustomCalendar;
- (BOOL)_hasCustomLocale;
- (id)_hoursStringForHour:(int)arg1;
- (id)_hrMinFont;
- (BOOL)_isCurrentCalendar:(id)arg1;
- (id)_labelForCalendarUnit:(unsigned int)arg1 createIfNecessary:(BOOL)arg2;
- (id)_lastSelectedDateComponents;
- (void)_loadDate:(id)arg1 animated:(BOOL)arg2;
- (id)_makeNewAccessoryLabel;
- (id)_minutesStringForHour:(int)arg1 minutes:(int)arg2;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2 relativeTo:(id)arg3 order:(int)arg4;
- (void)_rebuildCompositeLocale;
- (void)_resetSelectionOfTables;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (int)_selectedHourForColumn:(int)arg1;
- (int)_selectedMinuteForColumn:(int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
- (int)_selectionBarRowInComponent:(int)arg1;
- (void)_setAllowsZeroCountdownDuration:(BOOL)arg1;
- (void)_setDate:(id)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2;
- (void)_setMode:(id)arg1;
- (void)_setUsesBlackChrome:(BOOL)arg1;
- (BOOL)_showingDate;
- (float)_tableRowHeight;
- (void)_todayChanged:(id)arg1;
- (BOOL)_updateDateOrTime;
- (void)_updateEnabledCellsIncludingWMDCells:(BOOL)arg1;
- (void)_updateLabels:(BOOL)arg1;
- (BOOL)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)arg1;
- (BOOL)_usesBlackChrome;
- (id)_viewForSelectedRowInComponent:(int)arg1;
- (id)calendar;
- (float)contentWidth;
- (double)countDownDuration;
- (id)date;
- (id)dateComponents;
- (int)datePickerMode;
- (void)dealloc;
- (id)delegateOfDatePicker;
- (BOOL)highlightsToday;
- (int)hour;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)locale;
- (id)maximumDate;
- (id)minimumDate;
- (int)minute;
- (int)minuteInterval;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerImageNamePrefix;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (int)second;
- (void)setCountDownDuration:(double)arg1;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)setDate:(id)arg1;
- (void)setDateComponents:(id)arg1;
- (void)setDatePickerMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateOfDatePicker:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)setMaximumDate:(id)arg1;
- (void)setMinimumDate:(id)arg1;
- (void)setMinuteInterval:(int)arg1;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUserProvidedCalendar:(id)arg1;
- (void)setUserProvidedLocale:(id)arg1;
- (id)shadowColor;
- (BOOL)staggerTimeIntervals;
- (id)timeZone;
- (id)userProvidedCalendar;
- (id)userProvidedLocale;

@end
