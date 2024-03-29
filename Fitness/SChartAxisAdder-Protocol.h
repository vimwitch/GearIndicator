//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, SChartAxis, ShinobiChart;

@protocol SChartAxisAdder <NSObject>
- (void)removeAxis:(SChartAxis *)arg1 fromAxesArray:(NSMutableArray *)arg2;
- (void)replaceAxis:(SChartAxis *)arg1 inArray:(NSMutableArray *)arg2 withAxis:(SChartAxis *)arg3;
- (void)addAxis:(SChartAxis *)arg1 toAxesArray:(NSMutableArray *)arg2;
- (id)initWithChart:(ShinobiChart *)arg1 errorHandler:(id <SChartErrorHandler>)arg2;
@end

