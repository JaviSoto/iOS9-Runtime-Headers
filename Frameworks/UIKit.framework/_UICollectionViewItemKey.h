/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSIndexPath;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSIndexPath *_indexPath;
    NSString *_identifier;
    BOOL _isClone;
    unsigned int _type;
}

@property(readonly) unsigned int type;
@property(readonly) NSIndexPath * indexPath;
@property(readonly) NSString * identifier;
@property(readonly) BOOL isClone;

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)copyAsClone:(BOOL)arg1;
- (BOOL)isClone;
- (id)initWithType:(unsigned int)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4;
- (id)initWithType:(unsigned int)arg1 indexPath:(id)arg2 identifier:(id)arg3;
- (id)indexPath;
- (unsigned int)type;

@end