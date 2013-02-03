/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString, UIImage;

@interface IUSimpleCellConfiguration : IUArrayCellConfiguration {
    int _imagePosition;
    int _preset;
}

@property(retain) UIImage * highlightedImage;
@property(retain) UIImage * image;
@property int preset;
@property(retain) NSString * title;

+ (float)rowHeightForGlobalContext:(id)arg1;

- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)highlightedImage;
- (id)image;
- (int)imagePosition;
- (id)init;
- (id)initWithPreset:(int)arg1;
- (int)preset;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagePosition:(int)arg1;
- (void)setPreset:(int)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showsUntruncationCallout;
- (id)title;

@end
