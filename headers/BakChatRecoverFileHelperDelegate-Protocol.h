//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BakChatRecoverPacketInfo, BakChatRecoverProgressInfo;

@protocol BakChatRecoverFileHelperDelegate <NSObject>
- (void)onMessageRecoverError:(long long)arg1;
- (void)onMessageRecoverDone:(BakChatRecoverPacketInfo *)arg1;
- (void)onMessageRecoverFileProgress:(BakChatRecoverProgressInfo *)arg1;
- (void)onMessageRecoverProgress:(BakChatRecoverProgressInfo *)arg1;
@end
