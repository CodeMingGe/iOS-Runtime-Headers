/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableSet, NSArray, NSSet, NSMutableArray;

@interface _GEORegionalResourcesNode : NSObject {
    NSMutableArray *_attributions;
    NSMutableSet *_resourceIdentifiers;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
}

@property(readonly) NSArray * attributions;
@property(readonly) NSSet * resourceIdentifiers;

- (void)addAttribution:(id)arg1;
- (void)addResourceName:(id)arg1 type:(int)arg2;
- (id)attributions;
- (BOOL)containsTileKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)dealloc;
- (id)initWithX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (id)resourceIdentifiers;

@end
