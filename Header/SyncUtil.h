//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SyncUtil : NSObject
{
}

+ (id)GetCurrentChatName:(id)arg1;
+ (BOOL)ParseCmds:(id)arg1;
+ (void)handleModUserImage:(id)arg1;
+ (void)handleModUserInfoExt:(id)arg1;
+ (void)handleModUserInfo:(id)arg1;
+ (void)handleDeleteContact:(id)arg1;
+ (void)handleModContact:(id)arg1;
+ (void)handleModMsg:(id)arg1;
+ (void)handleAddMsg:(id)arg1;
+ (void)ParseCmd:(unsigned int)arg1 Buff:(id)arg2;

@end
