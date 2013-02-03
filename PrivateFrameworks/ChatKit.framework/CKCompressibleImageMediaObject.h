/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKCompressibleImageMediaObject : CKMediaObject <CKPreviewableAttachment> {
}

+ (id)mimeTypesToFileExtensions;
+ (struct CGSize { float x1; float x2; })transcodeMaxSize;

- (void)copyToPasteboard:(id)arg1;
- (id)imageData;
- (int)mediaType;
- (id)previewForOrientation:(int)arg1 highlight:(BOOL)arg2;
- (BOOL)savePreview:(id)arg1 toPath:(id)arg2 forOrientation:(int)arg3;
- (id)savedPreviewFromPath:(id)arg1 forOrientation:(int)arg2;

@end
