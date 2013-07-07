/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@class NSArray, UIImage, UIImageView, UIView;

@interface PLCameraButton : UIButton
{
    UIView *_rotationHolder;
    UIImageView *_iconView;
    BOOL _lockEnabled;
    BOOL _isLandscape;
    BOOL _dontDrawDisabled;
    UIImage *_cameraIcon;
    UIImage *_cameraIconLandscape;
    NSArray *_videoRecordingIcons;
    UIImage *_panoRecordingIcon;
    UIImage *_panoRecordingIconLandscape;
    int _buttonMode;
    BOOL _isCapturing;
    int _orientation;
    BOOL _watchingOrientationChanges;
}

+ (struct UIEdgeInsets)hitRectExtension;
+ (struct UIEdgeInsets)backgroundResizableEdgeInsets;
+ (struct CGRect)defaultFrame;
+ (id)videoOnIconName;
+ (id)videoOffIconName;
+ (id)photoIconLandscapeName;
+ (id)photoIconPortraitName;
+ (id)backgroundPanoOnPressedImageName;
+ (id)backgroundPanoOnImageName;
+ (id)backgroundPanoOffPressedImageName;
+ (id)backgroundPanoOffImageName;
+ (id)backgroundVideoPressedImageName;
+ (id)backgroundVideoImageName;
+ (id)backgroundPressedImageName;
+ (id)backgroundImageName;
+ (id)defaultIconName;
- (int)orientation;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_startWatchingDeviceOrientationChanges;
- (void)setLockEnabled:(BOOL)arg1;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setDontShowDisabledState:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setIsCapturing:(BOOL)arg1;
- (void)setButtonMode:(int)arg1;
- (void)_loadPanoLandscapeResources;
- (void)_loadPanoResources;
- (void)_loadVideoResources;
- (void)_loadStillLandscapeResources;
- (void)_loadStillResources;
- (void)dealloc;
- (void)_setIcon:(id)arg1;
- (id)initWithDefaultSize;

@end
