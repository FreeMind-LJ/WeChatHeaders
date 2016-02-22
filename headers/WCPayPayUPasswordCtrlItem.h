//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "PayUPasswordCtrlDelegate.h"
#import "WCPayLogicMgrExt.h"

@class NSString, PayUPasswordCtrl, UIImage;

@interface WCPayPayUPasswordCtrlItem : WCBaseInfoItem <PayUPasswordCtrlDelegate, WCPayLogicMgrExt>
{
    PayUPasswordCtrl *m_textField;
    UIImage *m_image;
}

- (void).cxx_destruct;
- (void)autoRemarkKeyBoradType;
- (void)OnPayUTimeSeedResponseStatus:(id)arg1 Error:(id)arg2;
- (void)OnGetTenpaySecureCtrlSalt:(id)arg1 Date:(id)arg2 Error:(id)arg3;
- (_Bool)onError:(id)arg1;
- (void)passwordCtrlDidEndEditing:(id)arg1;
- (void)passwordCtrlDidBeginEditing:(id)arg1;
- (void)passwordCtrlShouldChange:(id)arg1;
- (id)getHashData;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)clearInput;
- (void)initView:(struct CGRect)arg1;
- (id)getNoHashValue;
- (id)getValue;
- (struct CGSize)getSize;
- (long long)getTextLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
