/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImage, NSData, NSString;

@interface CKImageData : NSObject {
    unsigned int _count;
    NSData *_data;
    struct CGImageSource { } *_imageSource;
    int _orientation;
}

@property(readonly) NSString * MIMEType;
@property(readonly) NSString * UTIType;
@property(readonly) unsigned int count;
@property(retain) NSData * data;
@property(readonly) UIImage * image;
@property(readonly) int orientation;
@property(readonly) struct CGSize { float x1; float x2; } ptSize;
@property(readonly) struct CGSize { float x1; float x2; } pxSize;

+ (id)MIMETypeForData:(id)arg1;

- (id)MIMEType;
- (id)UTIType;
- (id)_thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1 atIndex:(unsigned int)arg2;
- (unsigned int)count;
- (id)data;
- (void)dealloc;
- (id)durationsWithMaxCount:(unsigned int)arg1;
- (id)image;
- (id)initWithData:(id)arg1;
- (int)orientation;
- (struct CGSize { float x1; float x2; })ptSize;
- (struct CGSize { float x1; float x2; })pxSize;
- (void)setData:(id)arg1;
- (id)thumbnailFitToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)thumbnailsFitToSize:(struct CGSize { float x1; float x2; })arg1 maxCount:(unsigned int)arg2;

@end
