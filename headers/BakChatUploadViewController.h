//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IBakChatUploadMgrExt.h"
#import "IdleTimerUtilExt.h"
#import "UIAlertViewDelegate.h"

@class MMProgressView, NSArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextView;

@interface BakChatUploadViewController : MMUIViewController <IdleTimerUtilExt, IBakChatUploadMgrExt, UIAlertViewDelegate>
{
    UIImageView *m_uploadIcon;
    MMProgressView *m_uploadProgressView;
    UILabel *m_successLabel;
    UITextView *m_successRemarkLabel;
    UILabel *m_uploadLabel;
    UIButton *m_restartButton;
    UIButton *m_cancelButton;
    UIActivityIndicatorView *m_activityIndicatorView;
    _Bool m_inmidiated;
    _Bool m_bSuccessUpload;
    _Bool m_allSelected;
    NSArray *m_sessionUsrnameArray;
    unsigned int PopViewControllerCount;
    NSString *m_oPassword;
}

- (void).cxx_destruct;
- (void)onIdleTimerUtilVoipQuit;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnBakChatUploadMessage:(id)arg1;
- (void)BackButtonDown:(id)arg1;
- (void)ReturnButtonDown:(id)arg1;
- (void)comeToMainFrame;
- (void)pauseButtonDone:(id)arg1;
- (void)retryButtonDone:(id)arg1;
- (void)cancelButtonDone:(id)arg1;
- (void)inPauseStatus;
- (void)inNoDataError;
- (void)inErrorStatus;
- (void)inSuccessStatus;
- (void)inGetEndStatus;
- (void)inUploadPackageStatus:(float)arg1;
- (void)inGetHeadStatus;
- (void)inCopyDBStatus;
- (void)loadView;
- (void)dealloc;
- (id)initWithBakCHatBreakPointInmidiatedStart:(_Bool)arg1;
- (id)initWithBakChatSessionUsrnameArray:(id)arg1 InmidiatedStart:(_Bool)arg2 AllSelected:(_Bool)arg3;
- (id)initWithBakChatSessionUsrnameArray:(id)arg1 Password:(id)arg2 InmidiatedStart:(_Bool)arg3 AllSelected:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
