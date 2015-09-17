/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMExposureResult : NSObject {
    BOOL _adjustingExposure;
    BOOL _deviceSupportsFocus;
    BOOL _exposureDidEnd;
    BOOL _exposureDidStart;
    int _exposureMode;
    float _exposureTargetBias;
    struct CGPoint { 
        float x; 
        float y; 
    } _pointOfInterest;
}

@property (getter=isAdjustingExposure, nonatomic, readonly) BOOL adjustingExposure;
@property (nonatomic, readonly) BOOL deviceSupportsFocus;
@property (nonatomic, readonly) BOOL exposureDidEnd;
@property (nonatomic, readonly) BOOL exposureDidStart;
@property (nonatomic, readonly) int exposureMode;
@property (nonatomic, readonly) float exposureTargetBias;
@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } pointOfInterest;

- (id)description;
- (BOOL)deviceSupportsFocus;
- (BOOL)exposureDidEnd;
- (BOOL)exposureDidStart;
- (int)exposureMode;
- (float)exposureTargetBias;
- (id)initWithMode:(int)arg1 pointOfInterest:(struct CGPoint { float x1; float x2; })arg2 exposureTargetBias:(float)arg3 adjusting:(BOOL)arg4 exposureDidStart:(BOOL)arg5 exposureDidEnd:(BOOL)arg6 deviceSupportsFocus:(BOOL)arg7;
- (BOOL)isAdjustingExposure;
- (struct CGPoint { float x1; float x2; })pointOfInterest;

@end