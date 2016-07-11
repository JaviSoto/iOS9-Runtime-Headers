/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSVerificationDataOperation : VSAsyncOperation {
    NSError * _error;
    AKAnisetteProvisioningController * _provisioningController;
    NSData * _verificationData;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) AKAnisetteProvisioningController *provisioningController;
@property (nonatomic, retain) NSData *verificationData;

- (void).cxx_destruct;
- (void)_finishWithData:(id)arg1;
- (void)_finishWithError:(id)arg1;
- (void)_finishWithResult:(int)arg1 bytes:(char *)arg2 length:(unsigned int)arg3;
- (id)error;
- (void)executionDidBegin;
- (id)init;
- (id)provisioningController;
- (void)setError:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setVerificationData:(id)arg1;
- (id)verificationData;

@end