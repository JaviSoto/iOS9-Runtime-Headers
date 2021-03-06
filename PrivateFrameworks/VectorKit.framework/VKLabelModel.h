/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelModel : VKModelObject <GEOResourceManifestTileGroupObserver, LabelManagerDelegate, VKMapLayer, VKMapModeObserver, VKStyleManagerObserver> {
    struct vector<std::__1::shared_ptr<md::LabelMapTile>, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > > { 
        struct shared_ptr<md::LabelMapTile> {} *__begin_; 
        struct shared_ptr<md::LabelMapTile> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::LabelMapTile> *, std::__1::allocator<std::__1::shared_ptr<md::LabelMapTile> > > { 
            struct shared_ptr<md::LabelMapTile> {} *__first_; 
        } __end_cap_; 
    }  _currentTiles;
    bool  _debugSkipLabels;
    <VKLabelModelDelegate> * _delegate;
    bool  _drawLabels;
    bool  _inNavigation;
    struct shared_ptr<md::LabelManager> { 
        struct LabelManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelManager;
    int  _layoutStamp;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    VKMapModel * _mapModel;
    id /* block */  _observerIsReadyHook;
    bool  _shouldOuterHaloLabels;
    unsigned char  _targetDisplay;
}

@property (nonatomic, readonly) float currentRoadSignOffset;
@property (nonatomic, retain) NSArray *customFeatureDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKLabelModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawLabels;
@property (nonatomic, retain) NSArray *externalTrafficIncidents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; /* Warning: unhandled struct encoding: '{unordered_set<unsigned long long' */ struct x3; }*labelExternalObjectsModerator; /* unknown property attribute:  true> >=f}}}} */
@property (nonatomic, readonly) struct shared_ptr<md::LabelManager> { struct LabelManager {} *x1; struct __shared_weak_count {} *x2; } labelManager;
@property (nonatomic) bool labelMarkerSelectionEnabled;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) bool localizeLabels;
@property (nonatomic) VKMapModel *mapModel;
@property (nonatomic) long long navigationShieldSize;
@property (nonatomic) long long shieldIdiom;
@property (nonatomic) long long shieldSize;
@property (nonatomic) bool shouldOuterHaloLabels;
@property (nonatomic) bool showsPointsOfInterest;
@property (nonatomic, readonly) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;

+ (bool)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)clearScene;
- (struct shared_ptr<md::LabelFeatureMarker> { struct LabelFeatureMarker {} *x1; struct __shared_weak_count {} *x2; })closestRoadMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (float)currentRoadSignOffset;
- (id)customFeatureDataSources;
- (void)dealloc;
- (void)debugHighlightFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { }*)arg1;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)delegate;
- (void)deselectLabelMarker;
- (void)didReceiveMemoryWarning:(bool)arg1;
- (void)didTransitionFrom:(long long)arg1 To:(long long)arg2;
- (bool)drawLabels;
- (id)externalTrafficIncidents;
- (void)finishStyleBlend;
- (id)focusedPolylinePainter;
- (void)gglLayoutScene:(id)arg1 withContext:(struct LayoutContext { id x1; short x2; /* Warning: Unrecognized filer type: 'h' using 'void*' */ void*x3; void*x4; const void*x5; double x6; void*x7; void*x8; void*x9; const void*x10; void*x11; double x12; SEL x13; SEL x14; oneway int x15; void*x16; void*x17; void*x18; const void*x19; in short x20; float x21; out const void*x22; void*x23; void*x24; struct ViewTransform {} *x25; struct __shared_weak_count {} *x26; }*)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)initWithTarget:(id)arg1 purpose:(unsigned long long)arg2 sharedResources:(id)arg3 configuration:(id)arg4;
- (id)labelDebugString;
- (struct LabelExternalObjectsModerator { struct fast_shared_ptr<md::unsynchronized_weak_interface_ptr<md::LabelExternalObjectsModerator> > { struct _fast_shared_ptr_control {} *x_1_1_1; } x1; struct LabelExternalIconRenderer {} *x2; struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct __hash_table<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long> > { struct unique_ptr<std::__1::__hash_node<unsigned long long, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<unsigned long long, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > > { struct __hash_node<unsigned long long, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned long long, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned long long, void *> > > { struct __hash_node_base<std::__1::__hash_node<unsigned long long, void *> *> { struct __hash_node<unsigned long long, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; } x_3_1_1; } x3; }*)labelExternalObjectsModerator;
- (struct shared_ptr<md::LabelManager> { struct LabelManager {} *x1; struct __shared_weak_count {} *x2; })labelManager;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKDispatch *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 pendingArtworkIsReady:(bool)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKDispatch *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 selectedLabelMarkerDidChangeState:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKDispatch *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 selectedLabelMarkerWillDisappear:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKDispatch *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 setNeedsDisplay:(bool)arg2;
- (void)labelManager:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKDispatch *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1 setNeedsLayout:(bool)arg2;
- (void)labelManagerDidLayout:(struct LabelManager { int (**x1)(); struct weak_ptr<md::LabelManager> { struct LabelManager {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct _retain_ptr<VKDispatch *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_3_1_3; const void*x_3_1_4; void*x_3_1_5; void*x_3_1_6; int x_3_1_7; in void*x_3_1_8; out unsigned int x_3_1_9/* : ? */; void*x_3_1_10; BOOL x_3_1_11; void*x_3_1_12; } x3; struct _release_objc { } x4; }*)arg1;
- (struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; })labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2;
- (struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; })labelMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1 selectableLabelsOnly:(bool)arg2;
- (bool)labelMarkerSelectionEnabled;
- (struct vector<std::__1::shared_ptr<md::LabelMarker>, std::__1::allocator<std::__1::shared_ptr<md::LabelMarker> > > { struct shared_ptr<md::LabelMarker> {} *x1; struct shared_ptr<md::LabelMarker> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::LabelMarker> *, std::__1::allocator<std::__1::shared_ptr<md::LabelMarker> > > { struct shared_ptr<md::LabelMarker> {} *x_3_1_1; } x3; })labelMarkers;
- (unsigned char)labelScaleFactor;
- (bool)localizeLabels;
- (unsigned long long)mapLayerPosition;
- (id)mapModel;
- (long long)navigationShieldSize;
- (void)prepareForStylesheetTransitionToMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1 withReadinessBlock:(id /* block */)arg2;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (struct shared_ptr<md::LabelFeatureMarker> { struct LabelFeatureMarker {} *x1; struct __shared_weak_count {} *x2; })roadMarkerForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct vector<std::__1::shared_ptr<md::LabelFeatureMarker>, std::__1::allocator<std::__1::shared_ptr<md::LabelFeatureMarker> > > { struct shared_ptr<md::LabelFeatureMarker> {} *x1; struct shared_ptr<md::LabelFeatureMarker> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::LabelFeatureMarker> *, std::__1::allocator<std::__1::shared_ptr<md::LabelFeatureMarker> > > { struct shared_ptr<md::LabelFeatureMarker> {} *x_3_1_1; } x3; })roadMarkersForSelectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)selectLabelMarker:(const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (const struct shared_ptr<md::LabelMarker> { struct LabelMarker {} *x1; struct __shared_weak_count {} *x2; }*)selectedLabelMarker;
- (void)setContentScale:(double)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setCustomFeatureDataSources:(id)arg1;
- (void)setDataOverrideManager:(const struct shared_ptr<md::DataOverrideManager> { struct DataOverrideManager {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawLabels:(bool)arg1;
- (void)setExternalTrafficIncidents:(id)arg1;
- (void)setFocusedPolylinePainter:(id)arg1;
- (void)setIsShowingOuterHalo:(bool)arg1;
- (void)setLabelMarkerSelectionEnabled:(bool)arg1;
- (void)setLabelMode:(unsigned char)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLocalizeLabels:(bool)arg1;
- (void)setMapModel:(id)arg1;
- (void)setMapType:(long long)arg1;
- (void)setNavCameraIsDetached:(bool)arg1;
- (void)setNavigationPuckSize:(float)arg1;
- (void)setNavigationShieldSize:(long long)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLine:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(long long)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setShouldOuterHaloLabels:(bool)arg1;
- (void)setShowsPointsOfInterest:(bool)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1 sceneManager:(struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> > { struct StylesheetManager<gss::ScenePropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setTrafficEnabled:(bool)arg1;
- (long long)shieldIdiom;
- (long long)shieldSize;
- (bool)shouldLayoutWithoutStyleManager;
- (bool)shouldOuterHaloLabels;
- (bool)showsPointsOfInterest;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetDidChange;
- (void)stylesheetDoneChanging;
- (void)stylesheetTransitionDidProgress;
- (void)stylesheetWillTransition:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })arg1;
- (void)updateLabelMapTiles:(id)arg1;
- (void)willTransitionFrom:(long long)arg1 To:(long long)arg2;

@end
