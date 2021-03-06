//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatMigrationBackupChatLogicDelegate.h"
#import "ChatMigrationRecoverChatLogicDelegate.h"

@class ChatMigrationBackupChatLogic, ChatMigrationProtocolLogic, ChatMigrationRecoverChatLogic, NSData, NSObject<OS_dispatch_queue>, NSString, PacketBackupDataResponse;

@interface ChatMigrationDataProcessMgr : NSObject <ChatMigrationBackupChatLogicDelegate, ChatMigrationRecoverChatLogicDelegate>
{
    NSObject<OS_dispatch_queue> *m_DataResponseProcessQueue;
    ChatMigrationProtocolLogic *m_ProtoHandle;
    ChatMigrationBackupChatLogic *m_BakChatLogic;
    ChatMigrationRecoverChatLogic *m_RecoverChatLogic;
    NSString *server_id;
    NSString *server_hello;
    NSString *server_ok;
    NSData *server_key;
    unsigned long long m_totalSize;
    unsigned long long m_sendOrRecvSize;
    _Bool m_bIsfinished;
    _Bool m_bIsAlreadySendFinished;
    _Bool bIsFirstClientAuthStep;
    PacketBackupDataResponse *mLastResponse;
    unsigned long long m_uiNotRecvCount;
    int firstResToken;
    id <ChatMigrationDataProcessMgrDelegate> m_delegate;
}

@property(nonatomic) __weak id <ChatMigrationDataProcessMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onClientCancelWithErrorCode:(int)arg1;
- (void)onDataToFileFinish:(id)arg1 Result:(_Bool)arg2;
- (void)onServerCancelWithErrorCode:(int)arg1;
- (void)onFinished;
- (void)onReadyOfBackupPkg:(id)arg1;
- (_Bool)sendBackupDataToRemote:(id)arg1;
- (void)process_backup_data_response:(id)arg1;
- (void)process_backup_data_push:(id)arg1;
- (void)process_finish_request:(id)arg1;
- (void)process_cancel_request:(id)arg1;
- (void)process_start_response:(id)arg1;
- (void)process_start_request:(id)arg1;
- (void)process_auth_response:(id)arg1 isFromServer:(_Bool)arg2;
- (void)process_auth_request:(id)arg1;
- (void)ServerDataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (void)ClientDataProcess:(id)arg1 andLength:(unsigned int)arg2;
- (id)MakeHelloPkgToServer;
- (void)StartTransferAndBeginSendData;
- (void)InjectAuthID:(id)arg1 key:(id)arg2 withHello:(id)arg3 andOK:(id)arg4;
- (void)ClientInjectAuthID:(id)arg1 key:(id)arg2 withHello:(id)arg3 andOK:(id)arg4;
- (void)ServerInjectAuthID:(id)arg1 key:(id)arg2 withHello:(id)arg3 andOK:(id)arg4;
- (void)doTermination;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

