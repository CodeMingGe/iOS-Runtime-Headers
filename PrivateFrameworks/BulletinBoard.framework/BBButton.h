/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, BBAction;

@interface BBButton : NSObject <NSCopying, NSCoding> {
    BBAction *_action;
    NSString *_title;
}

@property(retain) BBAction * action;
@property(copy) NSString * title;

+ (void)_addButtonToCache:(id)arg1;
+ (id)_possiblyCachedButtonForInitializedButton:(id)arg1;
+ (void)_removeButtonFromCache:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;

- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
