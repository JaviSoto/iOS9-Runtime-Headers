/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGStorageEvent : NSObject {
    NSString *_content;
    double _creationTimestamp;
    BOOL _curated;
    SGDuplicateKey *_duplicateKey;
    double _lastModifiedTimestamp;
    NSArray *_locations;
    NSString *_sourceKey;
    unsigned int _state;
    NSData *_structuredData;
    NSSet *_tags;
    NSString *_title;
    SGSimpleTimeRange *_when;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly) BOOL curated;
@property (nonatomic, readonly) SGDuplicateKey *duplicateKey;
@property (nonatomic, readonly) double lastModifiedTimestamp;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *sourceKey;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) NSData *structuredData;
@property (nonatomic, readonly) NSSet *tags;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) SGSimpleTimeRange *when;

+ (id)storageEventFromEntity:(id)arg1 usingStore:(id)arg2;

- (void).cxx_destruct;
- (id)content;
- (id)convertToEvent:(id)arg1;
- (double)creationTimestamp;
- (BOOL)curated;
- (id)duplicateKey;
- (id)extraKeyTag;
- (id)fieldsToSaveOnConfirmation;
- (id)initWithDuplicateKey:(id)arg1 sourceKey:(id)arg2 content:(id)arg3 title:(id)arg4 creationTimestamp:(double)arg5 lastModifiedTimestamp:(double)arg6 tags:(id)arg7 when:(id)arg8 locations:(id)arg9 structuredData:(id)arg10 state:(unsigned int)arg11 curated:(BOOL)arg12;
- (BOOL)isAllDay;
- (BOOL)isCancelled;
- (BOOL)isFromDataDetectors;
- (BOOL)isFromSuggestions;
- (double)lastModifiedTimestamp;
- (id)locations;
- (id)sourceKey;
- (unsigned int)state;
- (id)structuredData;
- (id)tags;
- (id)title;
- (id)when;

@end