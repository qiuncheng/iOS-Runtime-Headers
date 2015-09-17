/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {
    NSData *_activityPayload;
    NSData *_advertisementPayload;
    int _advertisementVersion;
    SFPeerDevice *_device;
    NSDictionary *_options;
}

@property (readonly, copy) NSData *activityPayload;
@property (readonly, copy) NSData *advertisementPayload;
@property (readonly) int advertisementVersion;
@property (readonly, retain) SFPeerDevice *device;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSString *deviceModelIdentifier;
@property (readonly, copy) NSString *deviceName;
@property (readonly, copy) NSDictionary *options;

+ (BOOL)supportsSecureCoding;

- (id)activityPayload;
- (id)advertisementPayload;
- (int)advertisementVersion;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)deviceIdentifier;
- (id)deviceModelIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisementVersion:(unsigned int)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)options;

@end