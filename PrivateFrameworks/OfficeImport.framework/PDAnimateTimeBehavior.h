/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDAnimateTimeBehavior : PDAnimateBehavior
{
    NSMutableArray *mTimeAnimateValues;
}

- (void)addTimeAnimateValue:(id)arg1;
- (id)timeAnimateValueAtIndex:(unsigned int)arg1;
- (unsigned int)timeAnimateValueCount;
- (void)dealloc;
- (id)init;

@end

