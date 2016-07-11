/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCRadioStreamPing : NSObject {
    double  _timestamp;
    long long  _type;
    NSData * _value;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSData *value;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 value:(id)arg2 timestamp:(double)arg3;
- (bool)isEqual:(id)arg1;
- (double)timestamp;
- (long long)type;
- (id)value;

@end