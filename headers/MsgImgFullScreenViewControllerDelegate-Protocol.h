//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap;

@protocol MsgImgFullScreenViewControllerDelegate <NSObject>

@optional
- (void)onCurrentPageMsgRevoked:(CMessageWrap *)arg1;
- (void)onHideStatusBar;
- (void)onShowStatusBar;
- (void)onDidHideToMsg:(CMessageWrap *)arg1;
- (void)onDidShowFromMsg:(CMessageWrap *)arg1;
- (void)onSingleTap;
@end

