//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSArray, NSMutableArray;

@interface BFNavigationController : NSViewController
{
    NSMutableArray *_viewControllers;
    id <BFNavigationControllerDelegate> _delegate;
}

@property(nonatomic) id <BFNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)popToViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_navigateFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3 push:(BOOL)arg4;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) NSViewController *visibleViewController;
@property(readonly, nonatomic) NSViewController *topViewController;
- (id)initWithFrame:(struct CGRect)arg1 rootViewController:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

