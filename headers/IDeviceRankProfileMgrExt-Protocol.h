//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DeviceRankDetailResonse, NSString;

@protocol IDeviceRankProfileMgrExt

@optional
- (void)onGotUserRankDetail:(NSString *)arg1 rankDetailResp:(DeviceRankDetailResonse *)arg2 err:(int)arg3;
- (void)onUpdateCoverImageError:(int)arg1;
- (void)onCoverImageChanged;
@end

