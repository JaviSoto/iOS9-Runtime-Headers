/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCountryConfigurationUpdateHandler : NSObject {
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (id /* block */)callback;
- (id)callbackQueue;
- (void)dealloc;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;

@end