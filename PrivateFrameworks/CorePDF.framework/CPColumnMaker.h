/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSMutableArray *allParagraphs;
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *images;
    float maxParagraphDistance;
    NSMutableArray *otherShapes;
    } pageBounds;
    NSMutableArray *paragraphWrappers;
    NSMutableArray *thinHorizontalShapes;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } pageBounds;

- (void)anchorImages;
- (float)averageSpacing:(id)arg1;
- (void)callOuts;
- (BOOL)canSafelyAdd:(id)arg1 to:(id)arg2;
- (id)chunkAbove:(id)arg1 in:(id)arg2;
- (BOOL)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (BOOL)column:(id)arg1 isLinkedBelowTo:(id)arg2;
- (id)columns;
- (BOOL)cuttingShapeBetween:(id)arg1 and:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)intersectionCallout:(id)arg1;
- (BOOL)intervalOverlapLeft:(float)arg1 right:(float)arg2 paragraphs:(id)arg3;
- (void)makeColumnsFrom:(id)arg1 zone:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pageBounds;
- (BOOL)paragraph:(id)arg1 isAbove:(id)arg2;
- (BOOL)paragraph:(id)arg1 isBelow:(id)arg2;
- (BOOL)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2;
- (BOOL)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2;
- (id)paragraphAbove:(id)arg1 in:(id)arg2;
- (id)paragraphBelow:(id)arg1 in:(id)arg2;
- (void)partitionShapes:(id)arg1;
- (void)setPageBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)splitColumns:(id)arg1;

@end
