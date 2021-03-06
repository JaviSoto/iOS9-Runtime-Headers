/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionResult : PBCodable <NSCopying> {
    NSString * _addressID;
    NSMutableArray * _significantLocations;
}

@property (nonatomic, retain) NSString *addressID;
@property (nonatomic, readonly) bool hasAddressID;
@property (nonatomic, retain) NSMutableArray *significantLocations;

+ (Class)significantLocationType;

- (void)addSignificantLocation:(id)arg1;
- (id)addressID;
- (void)clearSignificantLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressID:(id)arg1;
- (void)setSignificantLocations:(id)arg1;
- (id)significantLocationAtIndex:(unsigned long long)arg1;
- (id)significantLocations;
- (unsigned long long)significantLocationsCount;
- (void)writeTo:(id)arg1;

@end
