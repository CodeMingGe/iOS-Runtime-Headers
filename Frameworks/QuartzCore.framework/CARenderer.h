/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class <CARendererDelegate>, CALayer, CAContext;

@interface CARenderer : NSObject {
    struct CARendererPriv { id x1; struct Weak<id> { id x_2_1_1; } x2; id x3; struct Context {} *x4; struct Renderer {} *x5; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_6_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_6_1_2; } x6; struct Update {} *x7; unsigned int x8; unsigned int x9[2]; unsigned int x10[2]; unsigned int x11; unsigned int x12 : 8; unsigned int x13; BOOL x14[0]; } *_priv;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(retain) CAContext * context;
@property <CARendererDelegate> * delegate;
@property(retain) CALayer * layer;

+ (id)rendererWithEAGLContext:(id)arg1 options:(id)arg2;

- (id)_initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)_initWithOptions:(id)arg1;
- (void)addUpdateRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)beginFrameAtTime:(double)arg1 timeStamp:(struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)endFrame;
- (BOOL)hasMissingContent;
- (id)layer;
- (double)nextFrameTime;
- (void)render;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })updateBounds;

@end
