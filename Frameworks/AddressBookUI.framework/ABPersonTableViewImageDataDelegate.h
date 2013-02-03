/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
    struct __CFDictionary { } *_currentImageData;
    ABPersonTableViewDataSource *_dataSource;
    BOOL _didChangePreferredPersonForImage;
    BOOL _hasImageChanges;
    void *_personForImageData;
}

@property ABPersonTableViewDataSource * dataSource;

- (struct __CFDictionary { }*)currentImageData;
- (id)dataSource;
- (void)dealloc;
- (BOOL)didChangePreferredPersonForImage;
- (BOOL)hasImageChanges;
- (BOOL)hasImageDataForPerson:(void*)arg1;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3 isRemoved:(BOOL*)arg4;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3;
- (void)imageWillSave;
- (void)markImagesWith:(id)arg1 forPerson:(void*)arg2;
- (id)people;
- (void*)personForImageData;
- (void*)personForImageDataExcludingPeople:(id)arg1;
- (void)refreshImageData;
- (void)reloadImageData;
- (void)removeImageDataForPerson:(void*)arg1;
- (void)resetImageData;
- (void)setCurrentImageData:(struct __CFDictionary { }*)arg1;
- (void)setDataSource:(id)arg1;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(void*)arg4;
- (void)setPersonForImageData:(void*)arg1;
- (void)updateRecordImages;
- (id)writablePeople;

@end
