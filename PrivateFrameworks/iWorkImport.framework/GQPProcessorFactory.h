/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPProcessorFactory : NSObject {
}

+ (int)applicationForDocumentUti:(struct __CFString { }*)arg1;
+ (struct __CFString { }*)createUtiForDocument:(struct __CFString { }*)arg1;
+ (BOOL)isTangierDocumentUti:(struct __CFString { }*)arg1;
+ (struct __CFURL { }*)newEmbeddedSageUrlForTangierDocumentUrl:(struct __CFURL { }*)arg1 uti:(struct __CFString { }*)arg2 isBundle:(BOOL*)arg3;
+ (id)retainedProcessorForDocument:(struct __CFString { }*)arg1 zipArchive:(id)arg2 uti:(struct __CFString { }*)arg3 outputType:(int)arg4 outputPath:(struct __CFString { }*)arg5 previewRequest:(struct __QLPreviewRequest { }*)arg6 progressiveHelper:(id)arg7 cryptoKey:(id)arg8;
+ (id)retainedProcessorForZipArchive:(id)arg1 uti:(struct __CFString { }*)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 progressiveHelper:(id)arg6;

@end
