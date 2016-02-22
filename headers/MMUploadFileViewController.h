//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "WebMailViewDelegate.h"

@class NSArray, NSString, WebMailViewController;

@interface MMUploadFileViewController : MMUIViewController <MFMailComposeViewControllerDelegate, WebMailViewDelegate>
{
    WebMailViewController *m_mailViewCtrl;
    NSArray *_uploadFileNames;
    NSString *_attachDataName;
}

- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)findEmailAddresses:(id)arg1 result:(id)arg2;
- (_Bool)checkStringSize:(id)arg1 minSize:(int)arg2 maxSize:(int)arg3;
- (id)mimeOfFile:(id)arg1;
- (void)addAttach;
- (_Bool)isJailbreak;
- (id)getPlatform;
- (void)sendMail:(id)arg1;
- (void)writeMailWithFileInformation:(id)arg1;
- (void)initView;
- (void)testData;
- (void)onSendComplete;
- (void)adjustTableViewRect;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
