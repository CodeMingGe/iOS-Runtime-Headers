/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPShieldPack : PBCodable {
    NSMutableArray *_atlas;
    NSMutableArray *_shields;
}

@property(retain) NSMutableArray * atlas;
@property(retain) NSMutableArray * shields;

- (void)addAtlas:(id)arg1;
- (void)addShields:(id)arg1;
- (id)atlas;
- (id)atlasAtIndex:(unsigned int)arg1;
- (unsigned int)atlasCount;
- (void)clearAtlas;
- (void)clearShields;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAtlas:(id)arg1;
- (void)setShields:(id)arg1;
- (id)shields;
- (id)shieldsAtIndex:(unsigned int)arg1;
- (unsigned int)shieldsCount;
- (void)writeTo:(id)arg1;

@end
