//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSTextView;

__attribute__((visibility("hidden")))
@interface DebugBenchmarkTool : NSWindowController
{
    NSTextView *_resultsTextView;
}

@property(retain) NSTextView *resultsTextView; // @synthesize resultsTextView=_resultsTextView;
- (void).cxx_destruct;
- (void)_update;
- (void)_updateResults;
- (void)refresh:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;

@end
