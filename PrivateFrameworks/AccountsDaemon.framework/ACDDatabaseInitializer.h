/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDDatabase, NSArray;

@interface ACDDatabaseInitializer : NSObject {
    NSArray *_accessKeys;
    NSArray *_accountTypes;
    NSArray *_accounts;
    ACDDatabase *_database;
    NSArray *_dataclasses;
}

- (void).cxx_destruct;
- (id)_accessKeyWithName:(id)arg1;
- (id)_accessKeys;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_accountTypes;
- (id)_accounts;
- (void)_addAccessKeyWithName:(id)arg1;
- (void)_addAccessKeysAttributeToFacebookAccountType;
- (void)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 credentialType:(id)arg5 credentialAvailability:(int)arg6 supportsAuthentication:(BOOL)arg7 supportsMultipleAccounts:(BOOL)arg8;
- (void)_addAppleIDAccountType;
- (void)_addCalDAVAccountType;
- (void)_addCardDAVAccountType;
- (void)_addContactsCalendarsDataclassesToFB;
- (void)_addDataclassWithName:(struct NSString { Class x1; }*)arg1;
- (void)_addFacebookAccessKeys;
- (void)_addFacebookAccountType;
- (void)_addFacebookAudienceAccessKey;
- (void)_addFacebookAudienceAccessKeyToFacebookAccountType;
- (void)_addFlickrAccountType;
- (void)_addLinkedInAccountType;
- (void)_addMissingAccountTypes;
- (void)_addSupportsAuthenticationAttributeToAccountTypes;
- (void)_addSupportsAuthenticationAttributeToAccounts;
- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;
- (void)_addSyncableDataclassesToCardAndCalDAV;
- (void)_addTudouAccountType;
- (void)_addTwitterAccountType;
- (void)_addVimeoAccountType;
- (void)_addWeiboAccountType;
- (void)_addYelpAccountType;
- (void)_addYoukuAccountType;
- (id)_dataclassWithName:(struct NSString { Class x1; }*)arg1;
- (id)_dataclasses;
- (void)_removeFacebookAppVersionAccessKey;
- (void)_removeFacebookPermissionGroupAccessKey;
- (id)_resultsForEntityNamed:(id)arg1;
- (void)_updateWeiboAccountTypeIfNecessary;
- (id)initWithDatabase:(id)arg1;
- (void)insertAllDefaultContent;
- (void)updateDefaultContent;

@end
