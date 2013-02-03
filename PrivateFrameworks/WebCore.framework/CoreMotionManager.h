/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CMMotionManager, NSTimer, CLLocationManager;

@interface CoreMotionManager : NSObject {
    struct HashSet<WebCore::DeviceMotionClientIOS *, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > { 
        struct HashTable<WebCore::DeviceMotionClientIOS *, WebCore::DeviceMotionClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *>, WTF::HashTraits<WebCore::DeviceMotionClientIOS *> > { 
            struct DeviceMotionClientIOS {} **m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    struct HashSet<WebCore::DeviceOrientationClientIOS *, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > { 
        struct HashTable<WebCore::DeviceOrientationClientIOS *, WebCore::DeviceOrientationClientIOS *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *>, WTF::HashTraits<WebCore::DeviceOrientationClientIOS *> > { 
            struct DeviceOrientationClientIOS {} **m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } m_deviceMotionClients;
    } m_deviceOrientationClients;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
    CLLocationManager *m_locationManager;
    CMMotionManager *m_motionManager;
    NSTimer *m_updateTimer;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMotionClient:(struct DeviceMotionClientIOS { int (**x1)(); id x2; struct DeviceMotionController {} *x3; struct RefPtr<WebCore::DeviceMotionData> { struct DeviceMotionData {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)addOrientationClient:(struct DeviceOrientationClientIOS { int (**x1)(); id x2; struct DeviceOrientationController {} *x3; struct RefPtr<WebCore::DeviceOrientation> { struct DeviceOrientation {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)checkClientStatus;
- (void)dealloc;
- (BOOL)gyroAvailable;
- (BOOL)headingAvailable;
- (id)init;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(struct DeviceMotionClientIOS { int (**x1)(); id x2; struct DeviceMotionController {} *x3; struct RefPtr<WebCore::DeviceMotionData> { struct DeviceMotionData {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)removeOrientationClient:(struct DeviceOrientationClientIOS { int (**x1)(); id x2; struct DeviceOrientationController {} *x3; struct RefPtr<WebCore::DeviceOrientation> { struct DeviceOrientation {} *x_4_1_1; } x4; boolx5; }*)arg1;
- (void)sendAccelerometerData:(id)arg1;
- (void)sendMotionData:(id)arg1 withHeading:(id)arg2;
- (void)update;

@end
