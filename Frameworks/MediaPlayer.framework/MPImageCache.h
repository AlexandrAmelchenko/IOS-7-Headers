/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPImageRequestDelegate.h"

@class CPLRUDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface MPImageCache : NSObject <MPImageRequestDelegate>
{
    CPLRUDictionary *_cachedImages;
    NSObject<OS_dispatch_queue> *_cachedImagesQueue;
    unsigned int _cacheSize;
    id <MPImageCacheDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    int _resumeToForegroundCacheSize;
    int _suspendToBackgroundCacheSize;
    id _idleEventHandler;
    id _libraryDisplayValueChangeObserver;
}

@property(nonatomic) __weak id libraryDisplayValueChangeObserver; // @synthesize libraryDisplayValueChangeObserver=_libraryDisplayValueChangeObserver;
@property(copy, nonatomic) id idleEventHandler; // @synthesize idleEventHandler=_idleEventHandler;
@property(nonatomic) __weak id <MPImageCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int cacheSize; // @synthesize cacheSize=_cacheSize;
- (void).cxx_destruct;
- (void)_zapCache;
- (void)_zapCachedPlaceholders;
- (void)_removeCachedImageForKey:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)arg1;
- (id)_cachedImageForKey:(id)arg1;
- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (void)_didReceiveMemoryWarningNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)imageRequest:(id)arg1 loadedImage:(id)arg2;
- (void)imageRequest:(id)arg1 failedWithError:(id)arg2;
@property(nonatomic) BOOL imageRequestsSuspended;
- (void)setCacheSize:(unsigned int)arg1 preserveExisting:(BOOL)arg2;
- (void)loadImageForRequest:(id)arg1 asynchronously:(BOOL)arg2 completionHandler:(id)arg3;
@property(readonly, nonatomic) BOOL isIdle;
- (id)imageForRequest:(id)arg1 error:(id *)arg2;
- (void)cancelAllImageRequests;
- (id)cachedImageForRequest:(id)arg1;
- (void)dealloc;
- (id)init;

@end
