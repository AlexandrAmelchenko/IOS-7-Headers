/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIItemListTableDelegate.h"

@class NSArray, NSOperationQueue, SKUIClientContext, SKUIIPadChartsView, SKUIResourceLoader;

@interface SKUIIPadChartsViewController : UIViewController <SKUIItemListTableDelegate>
{
    SKUIResourceLoader *_artworkLoader;
    NSArray *_charts;
    SKUIIPadChartsView *_chartsView;
    NSArray *_chartViewControllers;
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    int _selectedChartIndex;
    int _selectedItemIndex;
    id <SKUIChartsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUIChartsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(copy, nonatomic) NSArray *charts; // @synthesize charts=_charts;
@property(retain, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
- (void).cxx_destruct;
- (id)_artworkContextForChart:(id)arg1;
- (int)_visibleColumnCountForOrientation:(int)arg1;
- (void)_setSuspended:(BOOL)arg1;
- (void)_reloadChartsView;
- (id)_itemListWithChart:(id)arg1;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (void)enumerateVisibleItemsUsingBlock:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)unhideAllImages;
- (id)popImageViewForItemIndex:(int)arg1 chartIndex:(int)arg2;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (struct CGRect)frameForItemIndex:(int)arg1 chartIndex:(int)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
