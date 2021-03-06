/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditableMediaProviderImageDataNode : PXRunNode <PUImageDataNode, PUImageInfoNode> {
    <PUEditableAsset> * _asset;
    NSData * _imageData;
    NSURL * _imageDataURL;
    int  _imageExifOrientation;
    PUEditableMediaProvider * _mediaProvider;
    int  _requestID;
    int  _version;
}

@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (getter=isCanceled, readonly) BOOL canceled;
@property (getter=isComplete, readonly) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXRunNodeDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSURL *imageDataURL;
@property (nonatomic, readonly) int imageExifOrientation;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (getter=isRunning, readonly) BOOL running;
@property (readonly) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int version;
@property (getter=isWaiting, readonly) BOOL waiting;

- (void).cxx_destruct;
- (void)_handleLoadedImageData:(id)arg1 imageOrientation:(int)arg2 info:(id)arg3;
- (id)asset;
- (void)didCancel;
- (id)imageData;
- (id)imageDataURL;
- (int)imageExifOrientation;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(int)arg3;
- (id)mediaProvider;
- (void)run;
- (int)version;

@end
