//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class EnterpriseSessionCellData, EnterpriseSessionCellLayoutParam, MMBadgeView, MMHeadImageView, UIImageView, UILabel, UIView;

@interface EnterpriseSessionItemView : MMMultiMenuTableViewCell
{
    EnterpriseSessionCellData *m_cellData;
    EnterpriseSessionCellLayoutParam *m_layoutParam;
    UIView *m_backgroudView;
    MMHeadImageView *m_headView;
    MMBadgeView *m_msgCountView;
    UIImageView *m_statusView;
    UILabel *m_nicknameLabel;
    UILabel *m_msgLabel;
    UILabel *m_alertLabel;
    UILabel *m_timeLabel;
    UIImageView *m_chatNotPushView;
    struct CGSize _chatNotPushIconSize;
}

+ (double)cellHeight;
- (void).cxx_destruct;
- (void)onUpdateCellWithCellData:(id)arg1;
- (void)initSubView;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (double)rightBoundOfStatusImage;
- (void)updateChatNotPushWithSessionCellData:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)updateAlertLabelWithSessionCellData:(id)arg1;
- (void)updateStatusWithSessionCellData:(id)arg1;
- (void)updateUnReadCountWithBrandCellData:(id)arg1;
- (void)updateUnReadCountWithSessionCellData:(id)arg1;
- (void)updateNameLabelWithSessionCellData:(id)arg1;
- (void)updateTimeLabelWithSessionCellData:(id)arg1;
- (void)updateHeadViewWithSessionCellData:(id)arg1;
- (void)layoutSubviews;
- (void)setHeadCategory:(unsigned char)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateWithSessionCellData:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end
