//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class MMImagePickerManagerOptionObj, NSMutableArray;

@interface MMImagePickerManager : MMObject
{
    id <MMImagePickerManagerDelegate> m_delegate;
    MMImagePickerManagerOptionObj *_optionObj;
    NSMutableArray *_tempImagePool;
}

+ (_Bool)isCaptureByImagePicker:(id)arg1;
+ (_Bool)isOldVersion;
+ (id)getImagePickerControllerWithOptionObj:(id)arg1;
+ (id)getImagePickerFromCameraWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (id)getImagePickerFromPhotoLibraryWithOptionObj:(id)arg1 withManager:(id)arg2;
+ (void)showWithOptionObj:(id)arg1 inViewController:(id)arg2;
+ (_Bool)isSupportViewController:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tempImagePool; // @synthesize tempImagePool=_tempImagePool;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(nonatomic) __weak id <MMImagePickerManagerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)OnShowDidFinished;
- (void)OnShowWillFinished;
- (id)init;

@end

