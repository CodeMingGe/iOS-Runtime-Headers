/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDTitle, OADGraphicProperties, EDResources;

@interface CHDAxis : NSObject <EDKeyedObject> {
    boolmAutoCrossValue;
    boolmAutoMaximumValue;
    boolmAutoMinimumValue;
    boolmContentFormatDerived;
    boolmDateTimeFormattingFlag;
    boolmDeleted;
    boolmIsAutoRotation;
    boolmLineVisible;
    boolmReverseOrder;
    boolmSecondary;
    OADGraphicProperties *mAxisGraphicProperties;
    int mAxisId;
    int mAxisPosition;
    int mAxisType;
    unsigned int mContentFormatId;
    double mCrossAxisId;
    int mCrossBetween;
    int mCrosses;
    double mCrossesAt;
    int mFontIndex;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    int mMajorTickMark;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    int mMinorTickMark;
    int mOrientation;
    EDResources *mResources;
    double mScalingMaximum;
    double mScalingMinimum;
    int mTickLabelColorIndex;
    int mTickLabelPosition;
    double mTickLabelRotation;
    CHDTitle *mTitle;
}

- (void)adjustAxisPositionForHorizontalChart;
- (id)axisGraphicProperties;
- (int)axisId;
- (int)axisPosition;
- (int)axisType;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (double)crossAxisId;
- (int)crossBetween;
- (int)crosses;
- (double)crossesAt;
- (void)dealloc;
- (id)defaultDateTimeContentFormat;
- (id)font;
- (int)fontIndex;
- (id)initWithResources:(id)arg1;
- (bool)isAutoCrossValue;
- (bool)isAutoMaximumValue;
- (bool)isAutoMinimumValue;
- (bool)isContentFormatDerivedFromDataPoints;
- (bool)isDate;
- (bool)isDateTimeFormattingFlag;
- (bool)isDeleted;
- (bool)isHorizontalPosition;
- (bool)isLineVisible;
- (bool)isReverseOrder;
- (bool)isSecondary;
- (bool)isTickLabelAutoRotation;
- (bool)isTickLabelVisible;
- (int)key;
- (id)majorGridLinesGraphicProperties;
- (int)majorTickMark;
- (id)minorGridLinesGraphicProperties;
- (int)minorTickMark;
- (int)orientation;
- (double)scalingMaximum;
- (double)scalingMinimum;
- (void)setAxisGraphicProperties:(id)arg1;
- (void)setAxisId:(int)arg1;
- (void)setAxisPosition:(int)arg1;
- (void)setAxisType:(int)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (void)setCrossAxisId:(double)arg1;
- (void)setCrossBetween:(int)arg1;
- (void)setCrosses:(int)arg1;
- (void)setCrossesAt:(double)arg1;
- (void)setDateTimeFormattingFlag:(bool)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(int)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(bool)arg1;
- (void)setLineVisible:(bool)arg1;
- (void)setMajorGridLinesGraphicProperties:(id)arg1;
- (void)setMajorTickMark:(int)arg1;
- (void)setMinorGridLinesGraphicProperties:(id)arg1;
- (void)setMinorTickMark:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setReverseOrder:(bool)arg1;
- (void)setScalingMaximum:(double)arg1;
- (void)setScalingMinimum:(double)arg1;
- (void)setSecondary:(bool)arg1;
- (void)setTickLabelAutoRotation:(bool)arg1;
- (void)setTickLabelColorIndex:(int)arg1;
- (void)setTickLabelPosition:(int)arg1;
- (void)setTickLabelRotationAngle:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)tickLabelColor;
- (int)tickLabelColorIndex;
- (int)tickLabelPosition;
- (double)tickLabelRotationAngle;
- (id)title;

@end
