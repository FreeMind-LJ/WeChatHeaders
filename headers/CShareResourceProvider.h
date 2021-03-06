//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMThemeManagerExt.h"

@interface CShareResourceProvider : NSObject <MMThemeManagerExt>
{
}

+ (id)GetFailReceiverImage;
+ (id)GetFailSenderImage;
+ (id)GetLocationReceiverImage;
+ (id)GetLocationSenderImage;
+ (id)GetLocationMessageReceiverContentBkgImage;
+ (id)GetLocationMessageSenderContentBkgImage;
+ (id)GetLocationMessageLabelBkgImage;
+ (id)GetVideoMessageCoverImage;
+ (id)GetMessageSenderCoverImage;
+ (id)GetMessageReceiverCoverImage;
+ (id)selfCreateImagePath;
+ (double)GetTableViewSeperatorLineHeight;
+ (id)GetContactIndexTitleColor;
+ (id)GetLinkBtnWithTitle:(id)arg1 image:(id)arg2;
+ (id)GetLinkBtnWithTitle:(id)arg1;
+ (id)GetTabBarSettingHLImage;
+ (id)GetTabBarFFHLImage;
+ (id)GetTabBarContactsHLImage;
+ (id)GetTabBarMainFrameHLImage;
+ (id)GetShadowLogoImage;
+ (id)GetNavigationBarTintColor;
+ (id)GetBlueButton;
+ (id)GetGreenBigButton;
+ (id)GetGreenButton;
+ (id)GetBackGroundViewOfDefaultTheme;
+ (id)GetBackGroundView;
+ (id)GetBlackBackGroundView;
+ (id)GetOperateBigFontSizeButton;
+ (id)GetOperateBigButton;
+ (id)GetOperateButton;
+ (id)CreateBackGroundImageWithImage:(id)arg1;
+ (id)GetGrayBlueColor;
+ (id)GetLoginLinkColor;
+ (id)GetSendMsgDisabledColor;
+ (id)GetTableViewValueColor;
+ (id)GetMessageNodeTimeColor;
+ (id)GetMessageListTimeColor;
+ (id)GetReturnButton:(id)arg1 andRect:(struct CGRect)arg2;
+ (id)GetButtonWithTitle:(id)arg1 normalImage:(id)arg2 highlightImage:(id)arg3 andRect:(struct CGRect)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCShareResourceProvider;
+ (void)initialize;
- (void)onThemeChanged;
- (void)dealloc;
- (id)init;

@end

