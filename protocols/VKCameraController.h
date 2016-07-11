/* Generated by RuntimeBrowser.
 */

@protocol VKCameraController <NSObject>

@required

- (double)altitude;
- (bool)canZoomInForTileSize:(long long)arg1;
- (bool)canZoomOutForTileSize:(long long)arg1;
- (struct { double x1; double x2; })centerCoordinate;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)distanceFromCenterCoordinate;
- (double)heading;
- (bool)isFullyPitched;
- (bool)isPitched;
- (bool)isRotated;
- (GEOMapRegion *)mapRegion;
- (double)maxPitch;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)pitch;
- (bool)restoreViewportFromInfo:(VKViewportInfo *)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDistanceFromCenterCoordinate:(double)arg1;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (VKViewportInfo *)viewportInfo;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;

@end