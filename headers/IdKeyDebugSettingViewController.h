//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class UILabel, UISwitch, UIView;

@interface IdKeyDebugSettingViewController : MMUIViewController
{
    UILabel *_labTip;
    UIView *_roundView;
    UILabel *_labelSwitchNotice;
    UISwitch *_switchView;
    _Bool m_debug_on;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)saveData;
- (void)onIdKeyDebug;
- (void)updateSwitch;
- (void)updateLableTip;
- (void)initView;

@end

