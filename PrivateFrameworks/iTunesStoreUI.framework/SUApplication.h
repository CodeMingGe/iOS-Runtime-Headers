/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIWindow;

@interface SUApplication : UIApplication <UIApplicationDelegate> {
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
}

@property(retain) UIWindow * window;

- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_exitForStoreNotAvailable;
- (void)_exitIfStoreNotAvailable;
- (void)_runScriptTestWithOptions:(id)arg1;
- (void)_setupUI;
- (void)_storeEnabledChangeNotification:(id)arg1;
- (void)_teardownUI;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (BOOL)applicationSuspend:(struct __GSEvent { }*)arg1 settings:(id)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (id)init;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)runTestInvocation:(id)arg1;

@end
