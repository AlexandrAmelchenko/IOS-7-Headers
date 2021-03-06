/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class UIColor;

@interface RCAcousticAnnotationView : UIView
{
    float _minimumDecibelRange;
    float _maximumDecibelRange;
    int _numberOfDecibelMarkers;
    UIColor *_boundaryKeylinesColor;
    UIColor *_centerKeylineColor;
    UIColor *_borderColor;
    float _decibleMarkerAlpha;
}

@property(nonatomic) float decibleMarkerAlpha; // @synthesize decibleMarkerAlpha=_decibleMarkerAlpha;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *centerKeylineColor; // @synthesize centerKeylineColor=_centerKeylineColor;
@property(retain, nonatomic) UIColor *boundaryKeylinesColor; // @synthesize boundaryKeylinesColor=_boundaryKeylinesColor;
@property(nonatomic) int numberOfDecibelMarkers; // @synthesize numberOfDecibelMarkers=_numberOfDecibelMarkers;
@property(nonatomic) float maximumDecibelRange; // @synthesize maximumDecibelRange=_maximumDecibelRange;
@property(nonatomic) float minimumDecibelRange; // @synthesize minimumDecibelRange=_minimumDecibelRange;
- (void).cxx_destruct;
- (id)_zeroMarkerAttributes;
- (id)_decibelMarkersAttributes;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)annotationBoundaryRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

