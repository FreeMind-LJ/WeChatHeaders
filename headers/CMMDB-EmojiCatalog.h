//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMMDB.h"

@interface CMMDB (EmojiCatalog)
- (_Bool)DeleteAllInEmojiCatalog;
- (_Bool)UpdateEmojiCatalog:(id)arg1 onProperty:(const vector_24c76cbd *)arg2 byServerId:(unsigned int)arg3;
- (_Bool)IsCatalogExistInEmojiCatalog:(unsigned int)arg1;
- (unsigned int)GetVersionInEmojiCatalog:(unsigned int)arg1;
- (unsigned int)GetLocalIDInEmojiCatalog:(unsigned int)arg1;
- (id)GetAllEmojiCatalog:(const vector_24c76cbd *)arg1;
- (_Bool)InsertEmojiCatalog:(id)arg1 onProperty:(const vector_24c76cbd *)arg2;
@end
