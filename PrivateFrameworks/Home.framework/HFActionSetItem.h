/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionSetItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    HMActionSet * _actionSet;
    unsigned long long  _actionSetItemStyle;
    HMHome * _home;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMActionSet *actionSet;
@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_mostCommonRoomForActionSet:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)actionSet;
- (unsigned long long)actionSetItemStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)executeActionSet;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3;
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;
- (id)rooms;
- (id)turnOffActionSet;
- (id)valueSource;

@end
