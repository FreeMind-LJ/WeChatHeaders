//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayPayUReserverResponse : NSObject
{
    unsigned int m_errCode;
    NSString *m_errMsg;
    NSString *m_trans_id;
    NSString *m_total_fee;
    NSString *m_fee_type;
    _Bool m_redirect;
    NSString *m_gateway_reference;
    NSString *m_gateway_code;
    NSString *m_pay_status;
    unsigned int m_timestamp;
    NSString *m_bank_type;
    NSString *m_pay_status_name;
    NSString *m_nsForceAdjustCode;
}

@property(retain, nonatomic) NSString *m_nsForceAdjustCode; // @synthesize m_nsForceAdjustCode;
@property(retain, nonatomic) NSString *m_trans_id; // @synthesize m_trans_id;
@property(nonatomic) unsigned int m_timestamp; // @synthesize m_timestamp;
@property(nonatomic) _Bool m_redirect; // @synthesize m_redirect;
@property(retain, nonatomic) NSString *m_pay_status_name; // @synthesize m_pay_status_name;
@property(retain, nonatomic) NSString *m_pay_status; // @synthesize m_pay_status;
@property(retain, nonatomic) NSString *m_gateway_reference; // @synthesize m_gateway_reference;
@property(retain, nonatomic) NSString *m_gateway_code; // @synthesize m_gateway_code;
@property(retain, nonatomic) NSString *m_fee_type; // @synthesize m_fee_type;
@property(retain, nonatomic) NSString *m_total_fee; // @synthesize m_total_fee;
@property(retain, nonatomic) NSString *m_bank_type; // @synthesize m_bank_type;
@property(retain, nonatomic) NSString *m_errMsg; // @synthesize m_errMsg;
@property(nonatomic) unsigned int m_errCode; // @synthesize m_errCode;
- (void).cxx_destruct;
- (void)dealloc;

@end
