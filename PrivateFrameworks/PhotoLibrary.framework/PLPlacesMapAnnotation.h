/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface PLPlacesMapAnnotation : NSObject <MKAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    unsigned int _animationOriginSet : 1;
    unsigned int _animationDestinationSet : 1;
    unsigned int _isAnimationOnlyAnnotation : 1;
    } _animationDestination;
    } _animationOrigin;
    id _context;
    } _coordinate;
    struct NSObject { Class x1; } *_photoAlbum;
    NSString *_subtitle;
    NSString *_title;
}

@property(retain) id context;
@property struct { double x1; double x2; } coordinate;

- (struct { double x1; double x2; })animationDestination;
- (struct { double x1; double x2; })animationOrigin;
- (void)clearAnimationInformation;
- (id)context;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (BOOL)hasAnimationDestination;
- (BOOL)hasAnimationOrigin;
- (id)initAnimationOnlyAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 photoAlbum:(struct NSObject { Class x1; }*)arg5;
- (BOOL)isAnimationOnlyAnnotation;
- (BOOL)isEqual:(id)arg1;
- (struct NSObject { Class x1; }*)photoAlbum;
- (void)resetAfterMapChange;
- (void)resetAfterMapChangeWhenVisible;
- (void)setAnimationDestination:(struct { double x1; double x2; })arg1;
- (void)setAnimationOrigin:(struct { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)updateCoordinate:(struct { double x1; double x2; })arg1;
- (void)updateToTitle:(id)arg1 subtitle:(id)arg2 album:(struct NSObject { Class x1; }*)arg3;

@end
