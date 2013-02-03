/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIImage, NSMutableData, NSURLConnection, NSURL;

@interface UIWebClip : NSObject {
    NSMutableData *_customIconData;
    NSMutableData *_customStartupImageData;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_iconConnection;
    NSURLConnection *_startupImageConnection;
    NSURLConnection *_startupLandscapeImageConnection;
    BOOL classicMode;
    unsigned int currentIconIndex;
    id delegate;
    BOOL fullScreen;
    UIImage *iconImage;
    BOOL iconIsPrecomposed;
    BOOL iconIsPrerendered;
    BOOL iconIsScreenShotBased;
    NSArray *icons;
    NSString *identifier;
    NSURL *pageURL;
    BOOL removalDisallowed;
    UIImage *startupImage;
    NSURL *startupImageURL;
    UIImage *startupLandscapeImage;
    NSURL *startupLandscapeImageURL;
    int statusBarStyle;
    unsigned int supportedOrientations;
    NSString *title;
}

@property BOOL classicMode;
@property id delegate;
@property BOOL fullScreen;
@property(readonly) UIImage * iconImage;
@property(readonly) NSString * iconImagePath;
@property(readonly) BOOL iconIsPrecomposed;
@property(readonly) BOOL iconIsPrerendered;
@property(readonly) BOOL iconIsScreenShotBased;
@property(retain) NSArray * icons;
@property(copy) NSString * identifier;
@property(retain) NSURL * pageURL;
@property BOOL removalDisallowed;
@property(retain) UIImage * startupImage;
@property(retain) NSURL * startupImageURL;
@property(retain) UIImage * startupLandscapeImage;
@property(retain) NSURL * startupLandscapeImageURL;
@property int statusBarStyle;
@property unsigned int supportedOrientations;
@property(copy) NSString * title;

+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (BOOL)bundleIdentifierContainsWebClipIdentifier:(id)arg1;
+ (id)pathForWebClipCacheWithIdentifier:(id)arg1;
+ (id)pathForWebClipStorageWithIdentifier:(id)arg1;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (id)webClipIconsForWebDocumentView:(id)arg1;
+ (id)webClipIdentifierFromBundleIdentifier:(id)arg1;
+ (unsigned int)webClipOrientationsForWebDocumentView:(id)arg1;
+ (int)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (id)webClipTitleForWebDocumentView:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (id)webClipsDirectoryPath;

- (id)_bundleImageWithName:(id)arg1;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_info;
- (id)_initWithIdentifier:(id)arg1;
- (void)_readPropertiesFromBundle:(struct __CFBundle { }*)arg1;
- (void)_reloadProperties;
- (void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3;
- (BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (id)bundleIdentifier;
- (void)cancelMediaUpdate;
- (BOOL)classicMode;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)createOnDisk;
- (void)dealloc;
- (id)delegate;
- (BOOL)fullScreen;
- (id)generateIconImageForFormat:(int)arg1 scale:(float)arg2;
- (id)getStartupImage:(int)arg1;
- (id)iconImage;
- (id)iconImagePath;
- (BOOL)iconIsPrecomposed;
- (BOOL)iconIsPrerendered;
- (BOOL)iconIsScreenShotBased;
- (id)icons;
- (id)identifier;
- (id)pageURL;
- (BOOL)removalDisallowed;
- (BOOL)removeFromDisk;
- (void)requestCustomIconUpdate;
- (void)requestCustomLandscapeStartupImageUpdate;
- (void)requestCustomPortraitStartupImageUpdate;
- (void)requestIconUpdateInSpringBoard;
- (void)setClassicMode:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2;
- (void)setIconImageFromScreenshot:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setRemovalDisallowed:(BOOL)arg1;
- (void)setStartupImage:(id)arg1;
- (void)setStartupImageURL:(id)arg1;
- (void)setStartupLandscapeImage:(id)arg1;
- (void)setStartupLandscapeImageURL:(id)arg1;
- (void)setStatusBarStyle:(int)arg1;
- (void)setSupportedOrientations:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)startupImage;
- (id)startupImageURL;
- (id)startupLandscapeImage;
- (id)startupLandscapeImageURL;
- (int)statusBarStyle;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (unsigned int)supportedOrientations;
- (id)title;
- (BOOL)tryLoadingNextCustomIcon;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (BOOL)updateOnDisk;

@end
