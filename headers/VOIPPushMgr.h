//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableSet, NSString;

@interface VOIPPushMgr : MMService <MMService>
{
    unsigned int m_gotRoomInfoEventId;
    NSMutableSet *mGotRoomInfoStatuses;
}

@property(nonatomic) unsigned int m_gotRoomInfoEventId; // @synthesize m_gotRoomInfoEventId;
@property(retain, nonatomic) NSMutableSet *mGotRoomInfoStatuses; // @synthesize mGotRoomInfoStatuses;
- (void).cxx_destruct;
- (void)InviteRemindByUsrName:(id)arg1 InviteType:(int)arg2;
- (void)GetRoomInfoByData:(id)arg1;
- (void)GetRoomInfoForAnsweredByData:(id)arg1;
- (_Bool)CanGetRoomInfoByUsrName:(id)arg1 andRoomId:(int)arg2 andRoomKey:(long long)arg3;
- (void)GetRoomInfoByUsrName:(id)arg1 andRoomId:(int)arg2 andRoomKey:(long long)arg3 IsFromApnsPush:(_Bool)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

