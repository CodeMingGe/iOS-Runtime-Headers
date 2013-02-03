/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOTileKeyList;

@interface _GEORegionalResourcesRemoteRequest : NSObject {
    unsigned long long _handle;
    GEOTileKeyList *_list;
    struct __CFRunLoop { } *_runLoop;
}

@property(readonly) unsigned long long handle;
@property(readonly) GEOTileKeyList * list;
@property(readonly) struct __CFRunLoop { }* runLoop;

- (void)dealloc;
- (unsigned long long)handle;
- (id)initWithList:(id)arg1 handle:(unsigned long long)arg2 runLoop:(struct __CFRunLoop { }*)arg3;
- (id)list;
- (struct __CFRunLoop { }*)runLoop;

@end
