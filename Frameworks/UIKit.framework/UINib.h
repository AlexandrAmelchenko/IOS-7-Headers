/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface UINib : NSObject
{
    id storage;
}

+ (id)nibWithData:(id)arg1 bundle:(id)arg2;
+ (id)nibWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)instantiateWithOwner:(id)arg1 options:(id)arg2;
- (id)unarchiverForInstantiatingReturningError:(id *)arg1;
- (id)lazyArchiveData;
- (id)nibDataForPath:(id)arg1;
- (id)bundleResourcePath;
- (id)identifierForStringsFile;
- (void)setIdentifierForStringsFile:(id)arg1;
- (id)effectiveBundle;
- (void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (void)setCaptureEnclosingNIBBundleOnDecode:(BOOL)arg1;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (void)setInstantiatingForSimulator:(BOOL)arg1;
- (BOOL)instantiatingForSimulator;
- (void)_registerForMemoryWarningIfNeeded;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithNibName:(id)arg1 directory:(id)arg2 bundle:(id)arg3;
- (id)initWithData:(id)arg1 bundle:(id)arg2;
- (id)initWithBundle:(id)arg1;

@end
