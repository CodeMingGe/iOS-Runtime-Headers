/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessagePartComposeResourcePool : NSObject {
}

+ (void)addComposeImages:(id)arg1 withID:(id)arg2 forProvider:(int)arg3;
+ (id)composeImagesWithPartID:(id)arg1 providerID:(int)arg2;
+ (void)relinquishProviderID:(int)arg1;
+ (void)removeAllPartsForProviderID:(int)arg1;
+ (void)removeComposeImagesWithID:(id)arg1 forProvider:(int)arg2;
+ (int)requestProviderID;

@end
