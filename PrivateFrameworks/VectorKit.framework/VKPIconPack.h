/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKPIconPack : PBCodable {
    NSMutableArray *_atlas;
    NSMutableArray *_icons;
    unsigned int _identifier;
}

@property(retain) NSMutableArray * atlas;
@property(retain) NSMutableArray * icons;
@property unsigned int identifier;

- (void)addAtlas:(id)arg1;
- (void)addIcons:(id)arg1;
- (id)atlas;
- (id)atlasAtIndex:(unsigned int)arg1;
- (unsigned int)atlasCount;
- (void)clearAtlas;
- (void)clearIcons;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (id)icons;
- (id)iconsAtIndex:(unsigned int)arg1;
- (unsigned int)iconsCount;
- (unsigned int)identifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAtlas:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
