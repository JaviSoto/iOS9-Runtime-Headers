/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CADisplayLink;

@interface VGLDisplayLink : NSObject  {
    SEL _selector;
    id _target;
    CADisplayLink *_displayLink;
    int _frameInterval;
    int _skippedFrames;
    BOOL _paused;
}

@property(getter=isPaused) BOOL paused;
@property int frameInterval;
@property(readonly) double timestamp;


- (void)_displayLinkFired:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isPaused;
- (double)timestamp;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (int)frameInterval;
- (void)invalidate;
- (void)dealloc;
- (void)setFrameInterval:(int)arg1;
- (id)target;

@end