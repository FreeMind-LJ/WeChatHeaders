//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LocalSearch : NSObject
{
}

+ (id)searchContactsByName:(id)arg1 allContact:(id)arg2 limit:(unsigned int)arg3;
+ (id)searchFromWCGameItem:(id)arg1 withSearchText:(id)arg2;
+ (id)searchFromFeatureItem:(id)arg1 allFeatureItem:(id)arg2 dicMatchTip:(id)arg3;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 matchTips:(id)arg3;
+ (id)searchFromGoogleContacts:(id)arg1 allContact:(id)arg2;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2;
+ (_Bool)isMatchChatRoom:(id)arg1 usrName:(id)arg2 MemberCount:(unsigned int *)arg3 CheckList:(id)arg4;
+ (_Bool)isMatchObject:(id)arg1 object:(id)arg2;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2 dicAddressBook:(id)arg3 dicCheckList:(id)arg4 dicMatchTip:(id)arg5 helpDataItem:(id)arg6;
+ (id)getValidKeywords:(id)arg1;
+ (id)searchFromGroupContacts:(id)arg1 allContact:(id)arg2 dicAddressBook:(id)arg3 dicCheckList:(id)arg4 dicMatchTip:(id)arg5 helpDataItem:(id)arg6;
+ (_Bool)isMatchChatRoomWithoutMySelf:(id)arg1 groupContact:(id)arg2 MemberCount:(unsigned int *)arg3 dicAddressBook:(id)arg4 CheckList:(id)arg5 matchTips:(id)arg6 helpDataItem:(id)arg7;
+ (_Bool)isMultiMatchChatRoomWithoutMySelf:(id)arg1 groupContact:(id)arg2 MemberCount:(unsigned int *)arg3 dicAddressBook:(id)arg4 CheckList:(id)arg5 matchTips:(id)arg6 helpDataItem:(id)arg7;
+ (id)getChatRoomMemberWithoutMyself:(id)arg1 helpDataItem:(id)arg2;
+ (_Bool)isMatchObject:(id)arg1 object:(id)arg2 dicAddressBook:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 dicAddressBook:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5;
+ (_Bool)isMultiMatchText:(id)arg1 searchItem:(id)arg2 location:(id *)arg3;
+ (_Bool)isMatchText:(id)arg1 searchText:(id)arg2 regexMode:(_Bool)arg3 location:(id *)arg4;
+ (void)initialize;

@end

