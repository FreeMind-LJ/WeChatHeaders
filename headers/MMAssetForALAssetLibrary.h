//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAsset.h"

#import "MMAssetBigImageDelegate.h"

@class ALAsset, CLLocation, NSMutableArray, NSString;

@interface MMAssetForALAssetLibrary : MMAsset <MMAssetBigImageDelegate>
{
    id <MMAssetBigImageDelegate> m_bigImageDelegate;
    _Bool m_isNeedOriginImage;
    _Bool m_hasStartInitAsset;
    int m_compressType;
    int m_resolutionType;
    ALAsset *m_asset;
    NSString *m_assetUrlForSystem;
    NSMutableArray *m_bigImageResultBlocks;
    NSMutableArray *m_bigImageErrorBlocks;
    NSMutableArray *m_bigImageProcessBlocks;
    NSMutableArray *m_thumbImageResultBlocks;
    NSMutableArray *m_thumbImageErrorBlocks;
    CLLocation *m_location;
}

+ (id)getOriginImageDataFromRepresentaion:(id)arg1;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
- (void)setM_resolutionType:(int)arg1;
- (int)m_resolutionType;
@property(nonatomic) _Bool m_hasStartInitAsset; // @synthesize m_hasStartInitAsset;
- (void)setM_isNeedOriginImage:(_Bool)arg1;
- (_Bool)m_isNeedOriginImage;
- (void)setM_compressType:(int)arg1;
- (int)m_compressType;
@property(retain, nonatomic) NSMutableArray *m_thumbImageErrorBlocks; // @synthesize m_thumbImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_thumbImageResultBlocks; // @synthesize m_thumbImageResultBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageProcessBlocks; // @synthesize m_bigImageProcessBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageErrorBlocks; // @synthesize m_bigImageErrorBlocks;
@property(retain, nonatomic) NSMutableArray *m_bigImageResultBlocks; // @synthesize m_bigImageResultBlocks;
@property(retain, nonatomic) NSString *m_assetUrlForSystem; // @synthesize m_assetUrlForSystem;
@property(retain, nonatomic) ALAsset *m_asset; // @synthesize m_asset;
- (void).cxx_destruct;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (void)asyncGetVideoUrlWithBlock:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (id)videoDuration;
- (_Bool)isVideo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onGetBigImageError;
- (void)onGetBigImage:(id)arg1 data:(id)arg2;
- (void)callErrorBlocks;
- (void)callResultBlocksWith:(id)arg1 imageData:(id)arg2;
- (_Bool)needGetAssetFromLibrary;
- (id)fitShortEdgeForAsset:(id)arg1 toLongEdge:(double)arg2;
- (void)onGetImageErrorFromAsset;
- (void)onGetImageFromAsset:(id)arg1 data:(id)arg2;
- (void)onGetImageAsset:(id)arg1;
- (void)setBigImageDelegate:(id)arg1;
- (id)getOriginImageDataSize;
- (_Bool)isPicture;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getDisplayImageWithResultBlock:(CDUnknownBlockType)arg1 ErrorBlock:(CDUnknownBlockType)arg2;
- (void)getBigImageWithProcessBlock:(CDUnknownBlockType)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)retriveLocation;
- (id)retriveAssetUrl;
- (id)initWithAsset:(id)arg1 IsNeedOrigin:(_Bool)arg2 CompressType:(int)arg3;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2 CompressType:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
