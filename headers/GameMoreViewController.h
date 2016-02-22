//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterGameInfoCellDelegate.h"
#import "GameCenterSearchLogicControllerDelegate.h"
#import "IGameCenterExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GameCenterLoadingFooterView, GameCenterSearchLogicController, GameMoreGameInfo, MMLoadingView, MMTableView, NSString;

@interface GameMoreViewController : MMUIViewController <GameCenterGameInfoCellDelegate, GameCenterSearchLogicControllerDelegate, UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, MMWebImageViewDelegate, IGameCenterExt>
{
    GameMoreGameInfo *_moreGameInfo;
    MMTableView *_tableView;
    GameCenterLoadingFooterView *_footerView;
    unsigned int _nextOffset;
    MMLoadingView *_loadingView;
    GameCenterSearchLogicController *_searchLogic;
    _Bool _isClassfiyGame;
    NSString *_classifyName;
    NSString *_classifyID;
}

@property(retain, nonatomic) NSString *classifyID; // @synthesize classifyID=_classifyID;
@property(retain, nonatomic) NSString *classifyName; // @synthesize classifyName=_classifyName;
@property(nonatomic) _Bool isClassfiyGame; // @synthesize isClassfiyGame=_isClassfiyGame;
- (void).cxx_destruct;
- (void)onStopSearch;
- (void)onStartSearch;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 resultType:(int)arg2 statExtInfo:(id)arg3;
- (void)searchBarDidEndSearch;
- (void)searchBarBecomeFirstResponder;
- (void)viewWillLayoutSubviews;
- (void)initSearchLogic;
- (void)popupSearchBar;
- (void)initRightBarBtns;
- (unsigned int)getGameType;
- (void)saveCacheData;
- (void)loadCacheData;
- (id)getCachePath;
- (void)showWebViewWithUrl:(id)arg1 title:(id)arg2;
- (unsigned int)openDetailView:(id)arg1 sourceScene:(int)arg2 logExtInfo:(id)arg3;
- (unsigned int)tryLaunchGame:(id)arg1;
- (unsigned int)launchGameOrShowDetailView:(id)arg1;
- (void)onSubscribeNewGameWithAppID:(id)arg1 alertTitle:(id)arg2 message:(id)arg3 error:(long long)arg4;
- (void)onGetMoreGameList:(id)arg1 classifyID:(id)arg2 errCode:(int)arg3;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)gameInfoCellDownloadButtonClicked:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
