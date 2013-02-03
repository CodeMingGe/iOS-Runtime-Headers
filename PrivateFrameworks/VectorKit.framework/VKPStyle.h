/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, NSData, VKPStyleProperties, NSMutableArray;

@interface VKPStyle : PBCodable {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    NSMutableArray *_attributes;
    NSData *_contents;
    } _inherits;
    NSString *_name;
    VKPStyleProperties *_properties;
    NSMutableArray *_zooms;
}

@property(retain) NSMutableArray * attributes;
@property(retain) NSData * contents;
@property(readonly) BOOL hasContents;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasProperties;
@property(readonly) unsigned int* inherits;
@property(readonly) unsigned int inheritsCount;
@property(retain) NSString * name;
@property(retain) VKPStyleProperties * properties;
@property(retain) NSMutableArray * zooms;

- (void)addAttributes:(id)arg1;
- (void)addInherit:(unsigned int)arg1;
- (void)addZooms:(id)arg1;
- (id)attributes;
- (id)attributesAtIndex:(unsigned int)arg1;
- (unsigned int)attributesCount;
- (void)clearAttributes;
- (void)clearInherits;
- (void)clearZooms;
- (id)contents;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContents;
- (BOOL)hasName;
- (BOOL)hasProperties;
- (unsigned int)hash;
- (unsigned int)inheritAtIndex:(unsigned int)arg1;
- (unsigned int*)inherits;
- (unsigned int)inheritsCount;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)properties;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setInherits:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setZooms:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zooms;
- (id)zoomsAtIndex:(unsigned int)arg1;
- (unsigned int)zoomsCount;

@end
