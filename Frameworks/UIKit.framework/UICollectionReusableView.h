/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICollectionView, NSString, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView {
    struct { 
        unsigned int inUpdateAnimation : 1; 
    UICollectionView *_collectionView;
    UICollectionViewLayoutAttributes *_layoutAttributes;
    } _reusableViewFlags;
    NSString *_reuseIdentifier;
}

@property(readonly) NSString * reuseIdentifier;

- (id)_collectionView;
- (BOOL)_isInUpdateAnimation;
- (id)_layoutAttributes;
- (void)_setCollectionView:(id)arg1;
- (void)_setInUpdateAnimation:(BOOL)arg1;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setReuseIdentifier:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
