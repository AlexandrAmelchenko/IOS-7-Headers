/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface XPCClient : NSObject
{
    int _state;
    NSObject<OS_xpc_object> *_connection;
    id <XPCClientDelegate> _delegate;
}

@property(nonatomic) __weak id <XPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)postEvent:(id)arg1;
- (void)startConnectionWithType:(id)arg1;
- (void)startConnectionWithType:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (void)closeConnection;
- (id)initWithDelegate:(id)arg1 type:(id)arg2 queue:(id)arg3;

@end
