/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOCategory : PBCodable {
    struct { 
        unsigned int geoOntologyId : 1; 
    NSString *_alias;
    long long _geoOntologyId;
    } _has;
    int _level;
    NSMutableArray *_localizedNames;
}

@property(retain) NSString * alias;
@property long long geoOntologyId;
@property BOOL hasGeoOntologyId;
@property int level;
@property(retain) NSMutableArray * localizedNames;

- (void)addLocalizedNames:(id)arg1;
- (id)alias;
- (void)clearLocalizedNames;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)geoOntologyId;
- (BOOL)hasGeoOntologyId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)level;
- (id)localizedNames;
- (id)localizedNamesAtIndex:(unsigned int)arg1;
- (unsigned int)localizedNamesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setGeoOntologyId:(long long)arg1;
- (void)setHasGeoOntologyId:(BOOL)arg1;
- (void)setLevel:(int)arg1;
- (void)setLocalizedNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end
