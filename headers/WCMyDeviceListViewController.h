//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCDeviceBrandMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCDeviceNetworkLogicMgrDelegate.h"

@class MMLoadingView, MMTableView, NSMutableArray, NSString, UILabel, WCDevice;

@interface WCMyDeviceListViewController : MMUIViewController <WCDeviceNetworkLogicMgrDelegate, IWCDeviceBrandMgrExt, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    NSMutableArray *m_myDeviceList;
    WCDevice *m_deviceToDeleted;
    MMLoadingView *m_loadingView;
    UILabel *m_noDeviceLbl;
}

- (void).cxx_destruct;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceGetBoundDevices:(id)arg1;
- (void)onFinishedEditTableView:(id)arg1;
- (void)onEditTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)makeAddDeviceCell:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateNoDeviceLbl;
- (void)updateRightBarButton;
- (void)updateView;
- (void)initNoDeviceLabel;
- (void)initLoadingView;
- (void)initHeaderView;
- (void)initView;
- (void)reloadData;
- (void)requestDataFromDB;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
