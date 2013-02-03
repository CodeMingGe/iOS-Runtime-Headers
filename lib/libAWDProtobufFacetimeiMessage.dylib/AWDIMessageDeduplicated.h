/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDIMessageDeduplicated : PBCodable {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deduplicationInterval : 1; 
    unsigned int _deduplicationInterval;
    NSString *_guid;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int deduplicationInterval;
@property(retain) NSString * guid;
@property BOOL hasDeduplicationInterval;
@property(readonly) BOOL hasGuid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (void)dealloc;
- (unsigned int)deduplicationInterval;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasDeduplicationInterval;
- (BOOL)hasGuid;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDeduplicationInterval:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeduplicationInterval:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
