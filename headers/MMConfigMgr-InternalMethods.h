//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMConfigMgr.h"

@interface MMConfigMgr (InternalMethods)
- (void)saveDynamicConfigSplit;
- (void)loadDynamicConfigSplit;
- (id)getDynamicConfigSplitFilePath;
- (id)getDynamicConfigFilePath;
- (void)initCacheStaticConfig;
- (void)initStaticConfig:(id)arg1;
- (void)mergeDynamicConfig:(id)arg1;
- (void)initDynamicConfig:(id)arg1;
- (id)parseDynamicConfig:(id)arg1 type:(const char *)arg2;
- (id)parseXMLToMenuItem:(struct XmlReaderNode_t *)arg1;
- (void)parseWebViewCustomizeConfig:(struct XmlReaderNode_t *)arg1 forMenuData:(id)arg2;
- (void)initConfig:(id)arg1 for:(id)arg2;
- (_Bool)isItemSupportCountry:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (_Bool)isItemSupportLanguage:(id)arg1 item:(struct XmlReaderNode_t *)arg2;
- (id)addConfigName:(id)arg1 forConfig:(id)arg2;
- (void)downLoadConfig;
@end
