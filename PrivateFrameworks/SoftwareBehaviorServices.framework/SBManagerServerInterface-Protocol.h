/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol SBManagerServerInterface
- (void)setClientType:(int)arg1 withResult:(id)arg2;
- (void)checkForSoftwareBehaviorBundleUpdate:(id)arg1;
- (void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(id)arg2;
- (void)isSoftwareBehaviorBundleSupported:(id)arg1;
- (void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(id)arg3;
@end
