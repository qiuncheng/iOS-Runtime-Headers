/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadFileManifest : NSObject {
    SSXPCConnection *_connection;
    int _manifestType;
}

@property (readonly) int manifestType;

- (void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)getPathsForFilesWithClass:(int)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithManifestType:(int)arg1;
- (int)manifestType;
- (void)rebuildManifestWithCompletionBlock:(id /* block */)arg1;
- (void)removeItemWithAssetPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(id /* block */)arg2;

@end