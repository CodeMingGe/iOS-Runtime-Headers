/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKLabelNavJunction, NSString, VKLabelTile, VKLabelNavRoadLabel;

@interface VKLabelNavRoad : NSObject {
    struct { 
        float x; 
        float y; 
    struct { 
        unsigned int index; 
        float offset; 
    BOOL _areLabelsDisabled;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; } *_data;
    } _direction;
    int _intraRoadPriority;
    BOOL _isAwayFromRoute;
    BOOL _isInGuidance;
    BOOL _isRoadLabelUnique;
    BOOL _isStartOfRoadName;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_junctionA;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *_junctionB;
    double _length;
    NSString *_name;
    VKLabelNavJunction *_navJunctionA;
    BOOL _onRoute;
    VKLabelNavRoadLabel *_roadShield;
    VKLabelNavRoadLabel *_roadSign;
    float _routeCrossProduct;
    } _routeOffset;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelTile *_tile;
    int _vertexIndexA;
    int _vertexIndexB;
}

@property BOOL areLabelsDisabled;
@property struct { float x1; float x2; } direction;
@property int intraRoadPriority;
@property(readonly) BOOL isAwayFromRoute;
@property BOOL isInGuidance;
@property(readonly) BOOL isOnewayToJunction;
@property(readonly) BOOL isRamp;
@property BOOL isRoadLabelUnique;
@property BOOL isStartOfRoadName;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }* junctionB;
@property(readonly) NSString * name;
@property BOOL onRoute;
@property float routeCrossProduct;
@property struct { unsigned int x1; float x2; } routeOffset;
@property(readonly) NSString * shieldDisplayGroup;
@property(readonly) NSString * shieldGroup;
@property(readonly) BOOL suppressRoadSignIfShieldPresent;
@property(readonly) VKLabelTile * tile;

- (id).cxx_construct;
- (id)_newLabelWithLabelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(struct { double x1; double x2; double x3; })arg3;
- (BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct { double x1; double x2; double x3; }*)arg2;
- (BOOL)areLabelsDisabled;
- (void)createLabelWithLabelContext:(struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; }*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (void)dealloc;
- (id)description;
- (struct { float x1; float x2; })direction;
- (void)getRoadEdge:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (BOOL)hasShield;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 navJunctionA:(id)arg2 routeOffset:(struct { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (int)intraRoadPriority;
- (BOOL)isAwayFromRoute;
- (BOOL)isInGuidance;
- (BOOL)isOnewayToJunction;
- (BOOL)isRamp;
- (BOOL)isRoadLabelUnique;
- (BOOL)isStartOfRoadName;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)junctionB;
- (id)labelWithType:(BOOL)arg1;
- (double)length;
- (BOOL)matchesRoad:(id)arg1;
- (BOOL)matchesRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (id)name;
- (BOOL)onRoute;
- (float)routeCrossProduct;
- (struct { unsigned int x1; float x2; })routeOffset;
- (void)setAreLabelsDisabled:(BOOL)arg1;
- (void)setDirection:(struct { float x1; float x2; })arg1;
- (void)setIntraRoadPriority:(int)arg1;
- (void)setIsInGuidance:(BOOL)arg1;
- (void)setIsRoadLabelUnique:(BOOL)arg1;
- (void)setIsStartOfRoadName:(BOOL)arg1;
- (void)setOnRoute:(BOOL)arg1;
- (void)setRouteCrossProduct:(float)arg1;
- (void)setRouteOffset:(struct { unsigned int x1; float x2; })arg1;
- (id)shieldDisplayGroup;
- (id)shieldGroup;
- (BOOL)suppressRoadSignIfShieldPresent;
- (id)tile;

@end
