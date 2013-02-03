/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@class NSData;

@interface FirmwareBundle : NSObject {
    NSData *certificate;
    NSData *firmwareImage;
    unsigned int firmwareImageBaseAddress;
    unsigned int firmwareImageSize;
    NSData *hash;
    unsigned int productIDCode;
    NSData *signature;
}

@property(readonly) NSData * certificate;
@property(readonly) NSData * firmwareImage;
@property(readonly) unsigned int firmwareImageBaseAddress;
@property(readonly) unsigned int firmwareImageSize;
@property(readonly) NSData * hash;
@property(readonly) unsigned int productIDCode;
@property(readonly) NSData * signature;

+ (id)parseResourceFileIntoData:(id)arg1;

- (id)certificate;
- (void)dealloc;
- (id)firmwareImage;
- (unsigned int)firmwareImageBaseAddress;
- (unsigned int)firmwareImageSize;
- (id)hash;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)parseFirmwareImageFileIntoData:(id)arg1;
- (unsigned int)productIDCode;
- (id)signature;

@end
