/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject {
    SSLookupRequest *_request;
}

@property(retain) id authenticatesIfNeeded;
@property(copy) NSString * keyProfile;
@property int localizationStyle;
@property(readonly) int localizationStyleDevice;
@property(readonly) int localizationStyleServer;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)attributeKeys;
- (id)authenticatesIfNeeded;
- (void)dealloc;
- (id)init;
- (id)keyProfile;
- (int)localizationStyle;
- (int)localizationStyleDevice;
- (int)localizationStyleServer;
- (id)scriptAttributeKeys;
- (void)setAuthenticatesIfNeeded:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setLocalizationStyle:(int)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)startWithLookupFunction:(id)arg1;
- (id)valueForRequestParameter:(id)arg1;

@end
