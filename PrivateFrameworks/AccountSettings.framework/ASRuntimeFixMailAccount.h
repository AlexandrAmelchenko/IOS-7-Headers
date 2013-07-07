/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "ASRuntimeFixProtocol.h"

@class NSSet;

@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    BOOL _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}

- (id)supportedAccountTypes;
- (void)accountsHaveBeenSaved:(BOOL)arg1;
- (int)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)_cleanupAccountClass:(id)arg1;

@end
