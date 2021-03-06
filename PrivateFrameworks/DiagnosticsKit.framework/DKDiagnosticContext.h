/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRemoteDiagnosticWithCompletion:(id /* block */)arg1;
- (void)enableVolumeHUD:(bool)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)startRemoteDiagnosticWithCompletion:(id /* block */)arg1;

@end
