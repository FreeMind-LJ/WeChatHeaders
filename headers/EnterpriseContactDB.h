//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface EnterpriseContactDB : MMObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_friendTable;
    WCDataBaseTable *m_myTable;
}

- (void).cxx_destruct;
- (void)deleteAllContacts;
- (id)getAllFriendContacts;
- (id)getMyAllContacts;
- (id)getMyContact;
- (_Bool)setMyContact:(id)arg1;
- (_Bool)tryInsertOrUpdateContact:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (_Bool)deleteContact:(id)arg1;
- (id)getEnterpriseContact:(id)arg1;
- (id)getTableByName:(id)arg1;
- (id)DBContext;
- (id)initWithPath:(id)arg1;

@end

