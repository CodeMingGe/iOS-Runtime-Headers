/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKLeaderboardCategoryInternal, NSString, UIImage;

@interface GKLeaderboardCategory : NSObject <NSCoding> {
    UIImage *_image;
    GKLeaderboardCategoryInternal *_internal;
}

@property(retain) NSString * categoryID;
@property int friendCount;
@property(retain) NSString * groupID;
@property(retain) UIImage * image;
@property(readonly) NSString * imageURL;
@property(retain) GKLeaderboardCategoryInternal * internal;
@property(retain) NSString * localizedTitle;
@property(readonly) NSString * miniImageURL;
@property int overallRank;
@property int overallRankCount;
@property int rankAmongFriends;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)image;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)miniImageURL;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setImage:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
