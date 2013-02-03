/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOHours : PBCodable {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _days;
    NSMutableArray *_timeRanges;
}

@property(readonly) int* days;
@property(readonly) unsigned int daysCount;
@property(retain) NSMutableArray * timeRanges;

- (void)addDay:(int)arg1;
- (void)addTimeRange:(id)arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (void)copyTo:(id)arg1;
- (int)dayAtIndex:(unsigned int)arg1;
- (int*)days;
- (unsigned int)daysCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDays:(int*)arg1 count:(unsigned int)arg2;
- (void)setTimeRanges:(id)arg1;
- (id)timeRangeAtIndex:(unsigned int)arg1;
- (id)timeRanges;
- (unsigned int)timeRangesCount;
- (void)writeTo:(id)arg1;

@end
