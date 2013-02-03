/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableSet, WLCardImages;

@interface PKImageSetCacheItem : NSObject {
    NSMutableSet *_cardUniqueIDs;
    WLCardImages *_images;
}

@property(retain) NSMutableSet * cardUniqueIDs;
@property(retain) WLCardImages * images;

- (id)cardUniqueIDs;
- (void)dealloc;
- (id)images;
- (id)initWithImages:(id)arg1 cardUniqueID:(id)arg2;
- (void)setCardUniqueIDs:(id)arg1;
- (void)setImages:(id)arg1;

@end
