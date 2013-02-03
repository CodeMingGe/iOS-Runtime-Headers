/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressBookManager : NSObject {
    void *_addressBook;
    struct __CFArray { } *_clients;
}

+ (id)sharedManager;

- (void)_applicationResumed:(id)arg1;
- (void)_handleAddressBookChangeNotification;
- (void)addClient:(id)arg1;
- (void*)addressBook;
- (void)dealloc;
- (id)init;
- (void)removeClient:(id)arg1;

@end
