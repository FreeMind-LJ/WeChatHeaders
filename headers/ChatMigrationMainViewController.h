//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CNetworkStatusExt.h"

@class MMTableViewInfo, MMUIView;

@interface ChatMigrationMainViewController : MMUIViewController <CNetworkStatusExt>
{
    MMTableViewInfo *m_tableViewInfo;
    MMUIView *m_tableHeadView;
    _Bool bEnableMigration;
    _Bool bEnoughBatteryLevel;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onActionCellClicked:(id)arg1 indexPath:(id)arg2;
- (void)onShowChatMigrationViewController;
- (void)onPushOldBackChatSolution:(id)arg1;
- (void)onShowUserIntruction:(id)arg1;
- (void)reloadTableDataAndView;
- (void)reloadFooterView;
- (void)reloadHeaderView;
- (void)makeCustomActionCell:(id)arg1 cellInfo:(id)arg2;
- (void)myReloadViewLogic;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)onBackBtnDone:(id)arg1;
- (void)dealloc;
- (id)init;

@end

