//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayLogicMgr.h"

@interface WCPayLogicMgr (AddCard)
- (void)SetWCPayPasswordInBind:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 UserInfo:(id)arg5 isOverseasBankCard:(_Bool)arg6 BindCard:(_Bool)arg7;
- (void)SetWCPayPasswordInBind:(id)arg1 RepeatPassword:(id)arg2 PayKey:(id)arg3 VerifySMS:(id)arg4 UserInfo:(id)arg5 isOverseasBankCard:(_Bool)arg6;
- (void)BindCardVerifySMS:(id)arg1 UserInfo:(id)arg2;
- (void)BindCardVerifyCard:(id)arg1 UserInfo:(id)arg2;
- (void)BindCardVerifyCard:(id)arg1 UserInfo:(id)arg2 Retry:(_Bool)arg3;
- (void)GetTenpayImportBindQuery:(id)arg1;
- (void)insideCallBackSetWCPayPasswordInReset:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackSetWCPayPasswordInBind:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackBindCardVerifyCardSMS:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackBindCardVerifyCard:(id)arg1 OnRequest:(id)arg2;
- (void)insideCallBackTenpayImportBindQuery:(id)arg1 OnRequest:(id)arg2;
@end
