/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UILabel;

@interface GKShareChallengeFooterTextSection : GKTableSection {
    UILabel *_footerLabel;
}

@property(retain) UILabel * footerLabel;

- (int)columnCountInTableView:(id)arg1;
- (void)dealloc;
- (id)footerLabel;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)init;
- (int)rowCountInTableView:(id)arg1;
- (void)setFooterLabel:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;

@end
