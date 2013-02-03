/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABStyleProvider, ABPersonViewControllerHelper, ABPersonTableViewDataSource, ABImagePickerController;

@interface ABPersonPickersDelegate : NSObject <ABPickerViewControllerDelegate, ABImagePickerControllerDelegate> {
    ABPersonTableViewDataSource *_dataSource;
    ABPersonViewControllerHelper *_helper;
    ABImagePickerController *_imagePicker;
    ABStyleProvider *_styleProvider;
}

@property ABPersonTableViewDataSource * dataSource;
@property ABPersonViewControllerHelper * helper;
@property(readonly) ABImagePickerController * imagePicker;
@property BOOL popoverSizeUpdatesDisabled;
@property(retain) ABStyleProvider * styleProvider;

- (id)_contentViewForPicker:(id)arg1;
- (void)_dismissCountryPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissProfilesPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissPropertyPicker:(id)arg1 afterSelectingItem:(id)arg2;
- (void)_dismissRingtonePicker:(id)arg1 afterSelectingItem:(id)arg2;
- (id)_propertyGroupForPicker:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (void)finishTearingDownImagePickerController;
- (id)helper;
- (void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (id)imagePicker;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2;
- (BOOL)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2;
- (id)personImageView;
- (BOOL)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2;
- (BOOL)pickerViewControllerShouldDismissKeyboard:(id)arg1;
- (BOOL)popoverSizeUpdatesDisabled;
- (id)primarySourceNameForPerson:(void*)arg1;
- (void)removeImagePickerControllerFromUI;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)selectedPeople;
- (void)setDataSource:(id)arg1;
- (void)setHelper:(id)arg1;
- (void)setPopoverSizeUpdatesDisabled:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)showImageMenuForHelper:(id)arg1;
- (id)styleProvider;

@end
