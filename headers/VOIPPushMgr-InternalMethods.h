//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VOIPPushMgr.h"

@interface VOIPPushMgr (InternalMethods)
- (void)handleMessageByUsrName:(id)arg1 MsgWrap:(id)arg2;
- (int)GenMessageAndOpenVoIPViewByUsrName:(id)arg1 andRoomId:(int)arg2 andRoomKey:(long long)arg3 andInviteType:(unsigned int)arg4 andCreateTime:(unsigned int)arg5;
- (id)genMessageForCancleVoip:(id)arg1 RoomId:(int)arg2 RoomKey:(long long)arg3 InviteType:(unsigned int)arg4 CreateTime:(unsigned int)arg5;
- (void)DeleteGotRoomInfoStatus:(long long)arg1;
- (void)AddGotRoomInfoStatus:(long long)arg1;
- (_Bool)CheckIfGotRoomInfo:(long long)arg1;
@end

