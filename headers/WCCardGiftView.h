//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString;

@interface WCCardGiftView : MMUIView
{
    NSString *_userName;
    NSString *_displayName;
    NSString *_detail;
    id <WCCardGiftViewDelegate> delegate;
}

@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <WCCardGiftViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
