/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface OSDCameraDevice : NSObject {
    unsigned int _cameraPosition;
    struct H4ISPFrameReceiver {} *_pFrameReceiver[2];
    struct H4ISPDevice { int (*x1)(); void *x2; struct H4ISPDeviceController {} *x3; struct H4ISPCameraManager {} *x4; unsigned int x5; void *x6; struct __CFRunLoopSource {} *x7; unsigned int x8; unsigned int x9; unsigned int x10; struct _opaque_pthread_mutex_t { long x_11_1_1; BOOL x_11_1_2[40]; } x11; struct __IOHIDEventSystemClient {} *x12; struct __IOHIDServiceClient {} *x13; int x14; unsigned char x15; int x16; unsigned char x17; } *_pH4ISPDevice;
    struct H4ISPDeviceController { struct __CFArray {} *x1; unsigned int x2; struct IONotificationPort {} *x3; struct __CFRunLoopSource {} *x4; int (*x5)(); void *x6; struct __CFRunLoop {} *x7; unsigned int x8; struct _opaque_pthread_t {} *x9; } *_pH4ISPDeviceController;
}

@property unsigned int cameraPosition;

- (unsigned int)cameraPosition;
- (unsigned int)getErrorCount;
- (id)init;
- (id)initWithCameraPosition:(unsigned int)arg1;
- (BOOL)off;
- (BOOL)on;
- (BOOL)openISPDevice;
- (void)setCameraPosition:(unsigned int)arg1;
- (BOOL)startStreaming;
- (BOOL)stopStreaming;

@end
