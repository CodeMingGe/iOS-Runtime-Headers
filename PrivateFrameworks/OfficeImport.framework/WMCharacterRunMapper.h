/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WMStyle, NSString, WDCharacterRun;

@interface WMCharacterRunMapper : CMMapper {
    float mFontSizeBumpFactor;
    BOOL mIsDeleted;
    WMStyle *mStyle;
    NSString *mText;
    WDCharacterRun *wdCharacterRun;
}

+ (void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2;

- (id)baseStyle;
- (id)boldStyle;
- (id)copyCharacterStyle;
- (unsigned int)countAndStripLeadingTabs;
- (void)dealloc;
- (int)defaultTabWidth;
- (id)initWithText:(id)arg1;
- (id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2;
- (BOOL)isDeleted;
- (void)map1At:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapSubstring:(id)arg1 at:(id)arg2;
- (void)mapTabs:(unsigned int)arg1 at:(id)arg2 afterText:(id)arg3;

@end
