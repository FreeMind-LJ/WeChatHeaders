//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayTransferMoneyStatusViewControllerDelegate.h"

@class NSString;

@interface WCPayPayUSenderControlTransferControlLogic : WCPayControlLogic <WCPayTransferMoneyStatusViewControllerDelegate>
{
}

- (void)OnTransferQueryStatusResponseStatus:(id)arg1 Error:(id)arg2;
- (void)OnQueryOrderResponseStatus:(id)arg1 Error:(id)arg2;
- (void)OnWCPayTransferMoneyStatusViewControllerRetrySendMsg;
- (void)OnWCPayTransferMoneyStatusViewControllerWatchBalance;
- (void)OnWCPayTransferMoneyStatusViewControllerRefused;
- (void)OnWCPayTransferMoneyStatusViewControllerConfirmTransfer;
- (void)OnWCPayTransferMoneyStatusViewControllerBack;
- (void)stopLogic;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
