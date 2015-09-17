/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImageAsset : NSObject <NSSecureCoding> {
    CUINamedLayerStack *__layerStack;
    struct { 
        unsigned int hasRegisteredImages : 1; 
        unsigned int supportsBlockGeneration : 1; 
        unsigned int disconnectedFromAssetManager : 1; 
    } _assetFlags;
    _UIAssetManager *_assetManager;
    NSString *_assetName;
    BOOL _cacheContents;
    id /* block */ _creationBlock;
    UITraitCollection *_defaultTraitCollection;
}

@property (nonatomic, readonly) _UIAssetManager *_assetManager;
@property (nonatomic, retain) CUINamedLayerStack *_layerStack;
@property (nonatomic, copy) NSString *assetName;
@property (nonatomic, copy) id /* block */ creationBlock;

+ (id)_assetGeneratingImagesWithDrawingBlock:(id /* block */)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_assetManager;
- (void)_clearResolvedImageResources;
- (BOOL)_containsImagesInPath:(id)arg1;
- (id)_defaultTraitCollection;
- (void)_disconnectFromAssetManager;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)_layerStack;
- (id)_mutableCatalog;
- (void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 cache:(BOOL)arg3;
- (id)_updateAssetFromBlockGenerationWithTraitCollection:(id)arg1 resolvedCatalogImage:(id)arg2;
- (id)assetName;
- (id /* block */)creationBlock;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)imageWithTraitCollection:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)registerImage:(id)arg1 withTraitCollection:(id)arg2;
- (void)setAssetName:(id)arg1;
- (void)setCreationBlock:(id /* block */)arg1;
- (void)set_layerStack:(id)arg1;
- (void)unregisterImageWithTraitCollection:(id)arg1;

@end