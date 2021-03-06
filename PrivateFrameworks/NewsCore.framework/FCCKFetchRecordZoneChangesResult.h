/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKFetchRecordZoneChangesResult : NSObject {
    NSError * _error;
    bool  _moreChangesToFetch;
    CKServerChangeToken * _serverChangeToken;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool moreChangesToFetch;
@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (bool)moreChangesToFetch;
- (id)serverChangeToken;
- (void)setError:(id)arg1;
- (void)setMoreChangesToFetch:(bool)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
