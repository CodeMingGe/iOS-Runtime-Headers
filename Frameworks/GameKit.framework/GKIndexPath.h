/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKIndexPath : NSIndexPath {
}

@property(readonly) int column;
@property(readonly) int row;
@property(readonly) int section;

+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2 inColumn:(int)arg3;
+ (id)indexPathForRow:(int)arg1 inSection:(int)arg2;
+ (id)indexPathWithIndexPath:(id)arg1 andColumn:(int)arg2;
+ (id)indexPathsForIndexPath:(id)arg1 andColumnCount:(int)arg2;

- (int)_gkColumn;
- (int)column;
- (int)row;
- (int)section;

@end
