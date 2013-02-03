/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKAttachment, UIDocumentInteractionController, EKEventAttachmentCell, <EKEventAttachmentCellControllerDelegate><UIDocumentInteractionControllerDelegate>;

@interface EKEventAttachmentCellController : NSObject {
    EKAttachment *_attachment;
    EKEventAttachmentCell *_cell;
    <EKEventAttachmentCellControllerDelegate><UIDocumentInteractionControllerDelegate> *_delegate;
    UIDocumentInteractionController *_documentController;
    id _downloadID;
}

@property(retain) EKAttachment * attachment;
@property(readonly) EKEventAttachmentCell * cell;
@property <EKEventAttachmentCellControllerDelegate><UIDocumentInteractionControllerDelegate> * delegate;

+ (BOOL)_attachmentIsViewable:(id)arg1;
+ (id)cellControllersForAttachments:(id)arg1 givenExistingControllers:(id)arg2;

- (void)_cleanupDocumentController;
- (void)_clearDownloadID;
- (id)_downloadProgressStringWithDownloadedBytes:(id)arg1 outOfTotalBytes:(id)arg2;
- (void)_presentPreviewOnMainThreadWithInfo:(id)arg1;
- (void)_presentPreviewWithURL:(id)arg1 filename:(id)arg2;
- (id)attachment;
- (id)cell;
- (void)cellSelected;
- (void)dealloc;
- (id)delegate;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)tearDown;

@end
