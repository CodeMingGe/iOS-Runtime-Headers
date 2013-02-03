/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSMutableData, NSData;

@interface GEOVectorTile : NSObject {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; id x_1_2_12; int x_1_2_13; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_1_1_8; struct { /* ? */ } *x_1_1_9; } x1; unsigned int x2; BOOL x3; } *_buildingFootprints;
    unsigned int _buildingFootprintsCount;
    unsigned int _coastlineCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_coastlineCharacteristicPoints;
    struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; } *_coastlineVertices;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; } *_coastlines;
    unsigned int _coastlinesCount;
    struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; } *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    NSMutableData *_extrusionHeightsPool;
    struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; } *_footprintVertices;
    BOOL _hasComputedJunctions;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_junctions;
    unsigned int _junctionsCount;
    } _key;
    struct { char *x1; char *x2; unsigned int x3; } *_labelIndex;
    unsigned int _labelIndexCount;
    NSData *_labelPool;
    struct { unsigned int x1; unsigned int x2; char *x3; } *_labelPoolLanguages;
    unsigned int _labelPoolLanguagesLength;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_laneConnections;
    unsigned int _laneConnectionsCount;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; } *_laneGeometry;
    unsigned int _lineCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_lineCharacteristicPoints;
    struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; } *_lineVertices;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; } *_lines;
    unsigned int _linesCount;
    unsigned int _linesVertexCount;
    struct { unsigned int x1; unsigned int x2; unsigned char x3; } *_localizationTable;
    unsigned int _localizationTableCount;
    NSMutableData *_localizedLabelPool;
    char *_localizedLabelsLanguage;
    struct { /* ? */ } **_namedPoints;
    unsigned int _namedPointsCount;
    struct { /* ? */ } **_namedPolygons;
    unsigned int _namedPolygonsCount;
    struct { /* ? */ } **_namedRoads;
    unsigned int _namedRoadsCount;
    unsigned int _namedRoadsVertexCount;
    struct { unsigned short x1; } *_overpasses;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_pointsOnRoad;
    unsigned int _pointsOnRoadCount;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; BOOL x4; BOOL x5; } *_pois;
    unsigned int _poisCount;
    unsigned int _polygonCharacteristicPointCount;
    struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; } *_polygonCharacteristicPoints;
    struct { float x1; float x2; } *_polygonLabelPositions;
    unsigned int _polygonLabelPositionsCount;
    struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; } *_polygonVertices;
    struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; id x_1_2_12; int x_1_2_13; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_1_1_8; struct { /* ? */ } *x_1_1_9; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; unsigned int x4; unsigned int x5; } *_polygons;
    unsigned int _polygonsCount;
    unsigned int _polygonsVertexCount;
    struct GEOFeatureShield { struct { char *x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; } x1; long long x2; } *_shieldIndex;
    unsigned int _shieldIndexCount;
    struct { /* ? */ } **_sortedPointsOnRoad;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; char *x2; unsigned int x3; } *_threeDBuildings;
    unsigned int _threeDBuildingsCount;
    NSMutableArray *_uniqueAttributes;
}

@property(readonly) struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; id x_1_2_12; int x_1_2_13; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_1_1_8; struct { /* ? */ } *x_1_1_9; } x1; unsigned int x2; BOOL x3; }* buildingFootprints;
@property(readonly) unsigned int buildingFootprintsCount;
@property(readonly) unsigned int coastlineCharacteristicPointCount;
@property(readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }* coastlineCharacteristicPoints;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }* coastlines;
@property(readonly) unsigned int coastlinesCount;
@property(readonly) struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; }* curveLineVertices;
@property(readonly) BOOL dataIncludesConnectivity;
@property(readonly) BOOL hasComputedJunctions;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* junctions;
@property(readonly) unsigned int junctionsCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* laneConnections;
@property(readonly) unsigned int laneConnectionsCount;
@property(readonly) unsigned int lineCharacteristicPointCount;
@property(readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }* lineCharacteristicPoints;
@property(readonly) struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; }* lineVertices;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }* lines;
@property(readonly) unsigned int linesCount;
@property(readonly) unsigned int linesVertexCount;
@property(readonly) struct { /* ? */ }** namedPoints;
@property(readonly) unsigned int namedPointsCount;
@property(readonly) struct { /* ? */ }** namedPolygons;
@property(readonly) unsigned int namedPolygonsCount;
@property(readonly) struct { /* ? */ }** namedRoads;
@property(readonly) unsigned int namedRoadsCount;
@property(readonly) unsigned int namedRoadsVertexCount;
@property(readonly) struct { unsigned short x1; }* overpasses;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* pointsOnRoad;
@property(readonly) unsigned int pointsOnRoadCount;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; BOOL x4; BOOL x5; }* pois;
@property(readonly) unsigned int poisCount;
@property(readonly) unsigned int polygonCharacteristicPointCount;
@property(readonly) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }* polygonCharacteristicPoints;
@property(readonly) struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; id x_1_2_12; int x_1_2_13; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_1_1_8; struct { /* ? */ } *x_1_1_9; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; unsigned int x4; unsigned int x5; }* polygons;
@property(readonly) unsigned int polygonsCount;
@property(readonly) unsigned int polygonsVertexCount;
@property(readonly) struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; char *x2; unsigned int x3; }* threeDBuildings;
@property(readonly) unsigned int threeDBuildingsCount;
@property(readonly) struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } tileKey;

- (BOOL)_addGenericPolygonWithAttributes:(int*)arg1;
- (void)_attachRoadPoints;
- (void)_buildSortedFeatureLists;
- (void)_findJunctions;
- (void)_findOverpasses;
- (BOOL)_handleGenericTile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (id)_initWithVMP3:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (unsigned int)_makeSpaceForLabels:(unsigned int)arg1;
- (unsigned int)_makeSpaceForShields:(unsigned int)arg1;
- (BOOL)_read3DBuildings:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readCoastlines:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readInfoChapter:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readLabels:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readLines:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readPois:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readPolygons:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1 ofType:(unsigned short)arg2;
- (BOOL)_readPolygons:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg1;
- (BOOL)_readSimpleCoastlines:(struct { unsigned char x1; struct { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; char *x4; unsigned int x5; unsigned int x6; }*)arg1 tile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg2;
- (BOOL)_readWrappingCoastlines:(struct { unsigned char x1; struct { char *x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; boolx3; char *x4; unsigned int x5; unsigned int x6; }*)arg1 tile:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned short x3; unsigned int x4; char *x5; unsigned int x6; struct { unsigned int x_7_1_1; boolx_7_1_2; } x7; }*)arg2;
- (void)_sortStyleAttributes;
- (void)_trimWhitespace;
- (struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; id x_1_2_12; int x_1_2_13; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_1_1_8; struct { /* ? */ } *x_1_1_9; } x1; unsigned int x2; BOOL x3; }*)buildingFootprints;
- (unsigned int)buildingFootprintsCount;
- (unsigned int)coastlineCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)coastlineCharacteristicPoints;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)coastlines;
- (unsigned int)coastlinesCount;
- (struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; }*)curveLineVertices;
- (BOOL)dataIncludesConnectivity;
- (void)dealloc;
- (id)description;
- (id)extrusionHeightsPool;
- (void)forEachEdgeInRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)arg1 visitTwice:(BOOL)arg2 visitor:(id)arg3;
- (void)forEachEdgeOnJunction:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 visitor:(id)arg2;
- (void)forEachJunction:(id)arg1;
- (void)forEachJunctionInRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)arg1 visitor:(id)arg2;
- (void)forEachRoad:(id)arg1;
- (BOOL)hasComputedJunctions;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg3;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)junctions;
- (unsigned int)junctionsCount;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)laneConnections;
- (unsigned int)laneConnectionsCount;
- (unsigned int)lineCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)lineCharacteristicPoints;
- (struct { struct { /* ? */ } *x1; unsigned int x2; struct _NSRange {} *x3; unsigned int x4; }*)lineVertices;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)lines;
- (unsigned int)linesCount;
- (unsigned int)linesVertexCount;
- (struct { /* ? */ }**)namedPoints;
- (unsigned int)namedPointsCount;
- (struct { /* ? */ }**)namedPolygons;
- (unsigned int)namedPolygonsCount;
- (struct { /* ? */ }**)namedRoads;
- (unsigned int)namedRoadsCount;
- (unsigned int)namedRoadsVertexCount;
- (struct { unsigned short x1; }*)overpasses;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)pointsOnRoad;
- (unsigned int)pointsOnRoadCount;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; unsigned char x3; BOOL x4; BOOL x5; }*)pois;
- (unsigned int)poisCount;
- (unsigned int)polygonCharacteristicPointCount;
- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)polygonCharacteristicPoints;
- (struct { float x1; float x2; }*)polygonLabelPositions;
- (struct { struct { struct { id x_1_2_1; char *x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7; unsigned long long x_1_2_8; BOOL x_1_2_9; unsigned long long x_1_2_10; float x_1_2_11; id x_1_2_12; int x_1_2_13; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; int x_1_1_4; int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; struct { float x_8_2_1; float x_8_2_2; float x_8_2_3; float x_8_2_4; } x_1_1_8; struct { /* ? */ } *x_1_1_9; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; BOOL x3; unsigned int x4; unsigned int x5; }*)polygons;
- (unsigned int)polygonsCount;
- (unsigned int)polygonsVertexCount;
- (struct { /* ? */ }**)sortedPointsOnRoad;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; char *x2; unsigned int x3; }*)threeDBuildings;
- (unsigned int)threeDBuildingsCount;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })tileKey;

@end
