/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIAlertView, NSString, UINavigationController, RUILoader, <AAUIGenericTermsRemoteUIDelegate>, ACAccount, NSMutableArray, UIViewController, ACAccountStore;

@interface AAUIGenericTermsRemoteUI : NSObject <RUIObjectModelDelegate> {
    UINavigationController *_parentNavController;
    UIViewController *_originatingViewController;
    UINavigationController *_genericTermsUIViewController;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    ACAccount *_account;
    ACAccountStore *_accountStore;
    bool_isModal;
    UIAlertView *_tcConfirmationAlert;
    NSString *_agreeURL;
    <AAUIGenericTermsRemoteUIDelegate> *_delegate;
}

@property <AAUIGenericTermsRemoteUIDelegate> * delegate;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)_cleanupRUILoader;
- (void)_cleanUpAndDismissWithSuccess:(bool)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_popObjectModelAnimated:(bool)arg1;
- (void)_displayConnectionErrorAndDismiss;
- (void)_addHeadersToRequest:(id)arg1;
- (void)presentFromViewController:(id)arg1 modal:(bool)arg2;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

@end