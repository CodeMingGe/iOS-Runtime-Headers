/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSArray, NSMutableArray, CALayer;

@interface IUSelectableImagesTableViewCell : UITableViewCell {
    CALayer *_dimmerLayer;
    NSMutableArray *_selectableImageViews;
    int _selectedViewIndex;
}

@property(readonly) NSArray * selectableImageViews;
@property(readonly) int selectedViewIndex;

- (void)_updateSelectedImage;
- (void)addSelectableImageView:(id)arg1;
- (void)clearSelectableImageViews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)selectableImageViews;
- (int)selectedViewIndex;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateConnectionProgress:(float)arg1 forLibraryAtIndex:(unsigned int)arg2;

@end
