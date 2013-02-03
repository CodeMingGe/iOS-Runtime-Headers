/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDBorder, NSDate, WDStyle, WDDocument, WDShading;

@interface WDTableProperties : NSObject <NSCopying> {
    struct { 
        WDStyle *baseStyle; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        int width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        int verticalPosition; 
        int horizontalPosition; 
        int leftDistanceFromText; 
        int topDistanceFromText; 
        int rightDistanceFromText; 
        int bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    struct { 
        WDStyle *baseStyle; 
        WDShading *shading; 
        WDBorder *topBorder; 
        WDBorder *leftBorder; 
        WDBorder *bottomBorder; 
        WDBorder *rightBorder; 
        WDBorder *insideHorizontalBorder; 
        WDBorder *insideVerticalBorder; 
        int justification; 
        int alignment; 
        int width; 
        int widthType; 
        short indent; 
        int indentType; 
        short cellSpacing; 
        int cellSpacingType; 
        int verticalAnchor; 
        int horizontalAnchor; 
        int verticalPosition; 
        int horizontalPosition; 
        int leftDistanceFromText; 
        int topDistanceFromText; 
        int rightDistanceFromText; 
        int bottomDistanceFromText; 
        int deleted; 
        int edited; 
        int formattingChanged; 
        unsigned short indexToAuthorIDOfDeletion; 
        unsigned short indexToAuthorIDOfEdit; 
        unsigned short indexToAuthorIDOfFormattingChange; 
        NSDate *deletionDate; 
        NSDate *editDate; 
        NSDate *formattingChangeDate; 
        unsigned int baseStyleOverridden : 1; 
        unsigned int shadingOverridden : 1; 
        unsigned int topBorderOverridden : 1; 
        unsigned int leftBorderOverridden : 1; 
        unsigned int bottomBorderOverridden : 1; 
        unsigned int rightBorderOverridden : 1; 
        unsigned int insideHorizontalBorderOverridden : 1; 
        unsigned int insideVerticalBorderOverridden : 1; 
        unsigned int justificationOverridden : 1; 
        unsigned int alignmentOverridden : 1; 
        unsigned int widthOverridden : 1; 
        unsigned int widthTypeOverridden : 1; 
        unsigned int indentOverridden : 1; 
        unsigned int indentTypeOverridden : 1; 
        unsigned int cellSpacingOverridden : 1; 
        unsigned int cellSpacingTypeOverridden : 1; 
        unsigned int verticalAnchorOverridden : 1; 
        unsigned int horizontalAnchorOverridden : 1; 
        unsigned int verticalPositionOverridden : 1; 
        unsigned int horizontalPositionOverridden : 1; 
        unsigned int leftDistanceFromTextOverridden : 1; 
        unsigned int topDistanceFromTextOverridden : 1; 
        unsigned int rightDistanceFromTextOverridden : 1; 
        unsigned int bottomDistanceFromTextOverridden : 1; 
        unsigned int deletedOverridden : 1; 
        unsigned int editedOverridden : 1; 
        unsigned int formattingChangedOverridden : 1; 
        unsigned int indexToAuthorIDOfDeletionOverridden : 1; 
        unsigned int indexToAuthorIDOfEditOverridden : 1; 
        unsigned int indexToAuthorIDOfFormattingChangeOverridden : 1; 
        unsigned int deletionDateOverridden : 1; 
        unsigned int editDateOverridden : 1; 
        unsigned int formattingChangeDateOverridden : 1; 
    unsigned int mOriginal : 1;
    unsigned int mTracked : 1;
    unsigned int mResolved : 1;
    WDDocument *mDocument;
    } mOriginalProperties;
    } mTrackedProperties;
}

- (id).cxx_construct;
- (int)alignment;
- (id)baseStyle;
- (id)bottomBorder;
- (long)bottomDistanceFromText;
- (short)cellSpacing;
- (int)cellSpacingType;
- (void)clearBottomBorder;
- (void)clearInsideHorizontalBorder;
- (void)clearInsideVerticalBorder;
- (void)clearLeftBorder;
- (void)clearRightBorder;
- (void)clearShading;
- (void)clearTopBorder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)deleted;
- (id)deletionDate;
- (id)document;
- (id)editDate;
- (int)edited;
- (id)formattingChangeDate;
- (int)formattingChanged;
- (int)horizontalAnchor;
- (long)horizontalPosition;
- (short)indent;
- (int)indentType;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)insideHorizontalBorder;
- (id)insideVerticalBorder;
- (BOOL)isAlignmentOverridden;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isBottomBorderOverridden;
- (BOOL)isBottomDistanceFromTextOverridden;
- (BOOL)isCellSpacingOverridden;
- (BOOL)isCellSpacingTypeOverridden;
- (BOOL)isDeletedOverridden;
- (BOOL)isDeletionDateOverridden;
- (BOOL)isEditDateOverridden;
- (BOOL)isEditedOverridden;
- (BOOL)isFormattingChangeDateOverridden;
- (BOOL)isFormattingChangedOverridden;
- (BOOL)isHorizontalAnchorOverridden;
- (BOOL)isHorizontalPositionOverridden;
- (BOOL)isIndentOverridden;
- (BOOL)isIndentTypeOverridden;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (BOOL)isInsideHorizontalBorderOverridden;
- (BOOL)isInsideVerticalBorderOverridden;
- (BOOL)isJustificationOverridden;
- (BOOL)isLeftBorderOverridden;
- (BOOL)isLeftDistanceFromTextOverridden;
- (BOOL)isRightBorderOverridden;
- (BOOL)isRightDistanceFromTextOverridden;
- (BOOL)isShadingOverridden;
- (BOOL)isTableFloating;
- (BOOL)isTopBorderOverridden;
- (BOOL)isTopDistanceFromTextOverridden;
- (BOOL)isVerticalAnchorOverridden;
- (BOOL)isVerticalPositionOverridden;
- (BOOL)isWidthOverridden;
- (BOOL)isWidthTypeOverridden;
- (int)justification;
- (id)leftBorder;
- (long)leftDistanceFromText;
- (void)moveOrignalToTracked;
- (id)mutableBottomBorder;
- (id)mutableInsideHorizontalBorder;
- (id)mutableInsideVerticalBorder;
- (id)mutableLeftBorder;
- (id)mutableRightBorder;
- (id)mutableShading;
- (id)mutableTopBorder;
- (int)resolveMode;
- (id)rightBorder;
- (long)rightDistanceFromText;
- (void)setAlignment:(int)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBottomDistanceFromText:(long)arg1;
- (void)setCellSpacing:(short)arg1;
- (void)setCellSpacingType:(int)arg1;
- (void)setDeleted:(int)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setEditDate:(id)arg1;
- (void)setEdited:(int)arg1;
- (void)setFormattingChangeDate:(id)arg1;
- (void)setFormattingChanged:(int)arg1;
- (void)setHorizontalAnchor:(int)arg1;
- (void)setHorizontalPosition:(long)arg1;
- (void)setIndent:(short)arg1;
- (void)setIndentType:(int)arg1;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (void)setJustification:(int)arg1;
- (void)setLeftDistanceFromText:(long)arg1;
- (void)setResolveMode:(int)arg1;
- (void)setRightDistanceFromText:(long)arg1;
- (void)setTopDistanceFromText:(long)arg1;
- (void)setVerticalAnchor:(int)arg1;
- (void)setVerticalPosition:(long)arg1;
- (void)setWidth:(long)arg1;
- (void)setWidthType:(int)arg1;
- (id)shading;
- (id)topBorder;
- (long)topDistanceFromText;
- (int)verticalAnchor;
- (long)verticalPosition;
- (long)width;
- (int)widthType;

@end
