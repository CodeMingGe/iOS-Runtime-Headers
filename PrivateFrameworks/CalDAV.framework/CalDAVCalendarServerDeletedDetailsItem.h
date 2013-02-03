/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {
    NSString *_componentType;
    NSString *_displayName;
    BOOL _hadMoreInstances;
    ICSDateValue *_nextInstance;
    NSString *_summary;
}

@property(retain) NSString * componentType;
@property(retain) NSString * displayName;
@property BOOL hadMoreInstances;
@property(retain) ICSDateValue * nextInstance;
@property(retain) NSString * summary;

- (id)componentType;
- (id)copyParseRules;
- (void)dealloc;
- (id)displayName;
- (BOOL)hadMoreInstances;
- (id)init;
- (id)nextInstance;
- (void)setComponentType:(id)arg1;
- (void)setComponentTypeItem:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameItem:(id)arg1;
- (void)setHadMoreInstances:(BOOL)arg1;
- (void)setHadMoreInstancesItem:(id)arg1;
- (void)setNextInstance:(id)arg1;
- (void)setNextInstanceItem:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setSummaryItem:(id)arg1;
- (id)summary;

@end
