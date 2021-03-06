//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIButton.h"

#import "ITemplateMsgRecvExt.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, MMUIViewController, NSString;

@interface AppMessageBlockButton : MMUIButton <WCActionSheetDelegate, UIAlertViewDelegate, ITemplateMsgRecvExt>
{
    CMessageWrap *_messageWrap;
    MMUIViewController *_baseViewController;
}

@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
- (void).cxx_destruct;
- (void)onTemplateMsgConnectionChange:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBlockTemplateMsg;
- (void)onReport;
- (id)combineBaseUrl:(id)arg1 withParams:(id)arg2;
- (void)showActionSheet;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertView;
- (void)changeMessageState;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

