/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString, SUItem;

@interface SUItemListGroup : NSObject
{
    NSMutableArray *_items;
    SUItem *_separatorItem;
}

@property(retain, nonatomic) SUItem *separatorItem; // @synthesize separatorItem=_separatorItem;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *indexBarTitle;
- (id)description;
- (void)dealloc;

@end
