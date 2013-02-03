/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTheme, OADTextListStyle;

@interface PDNotesMaster : PDSlideBase {
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
    OADTheme *mTheme;
}

- (id)colorMap;
- (id)colorScheme;
- (void)dealloc;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)fontScheme;
- (id)init;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)notesTextStyle;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)styleMatrix;
- (id)theme;

@end
