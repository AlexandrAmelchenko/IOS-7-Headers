/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class SUCellConfiguration, SUItemOfferButton, SUTableCellContentView, UIBezierPath, UIColor;

@interface SUTableCell : UITableViewCell
{
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    unsigned int _hideHighlight:1;
    SUItemOfferButton *_itemOfferButton;
    CDStruct_b08558f4 _position;
    UIColor *_topBorderColor;
}

@property(retain, nonatomic) UIColor *topBorderColor; // @synthesize topBorderColor=_topBorderColor;
@property(nonatomic) CDStruct_b08558f4 position; // @synthesize position=_position;
@property(retain, nonatomic) UIColor *bottomBorderColor; // @synthesize bottomBorderColor=_bottomBorderColor;
@property(nonatomic) BOOL usesSubviews;
@property(nonatomic) BOOL showHighlight;
@property(nonatomic) BOOL highlightsOnlyContentView;
@property(nonatomic) BOOL drawAsDisabled;
@property(retain, nonatomic) SUCellConfiguration *configuration;
@property(nonatomic) int clipCorners;
@property(readonly, nonatomic) SUItemOfferButton *itemOfferButton;
@property(readonly, nonatomic) UIBezierPath *clippingPath;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_canDrawContent;
- (id)copyPurchaseAnimationView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

