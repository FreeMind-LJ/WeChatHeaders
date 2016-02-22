//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PasswordLogicDelegate <NSObject>

@optional
- (void)passwordLogicPause;
- (void)passwordLogicStart;
- (void)passwordLogicCancel;
- (void)unknownFail;
- (void)checkHaveNotSetPassword;
- (void)checkHaveSetPassword;
- (void)setPasswordFail;
- (void)setPasswordOK;
- (void)verifyPasswordFail;
- (void)verifyPasswordOK:(NSString *)arg1;
@end
