//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartBaseAxisAdder.h"

@interface SChartUnmappedAxisAdder : SChartBaseAxisAdder
{
}

+ (BOOL)axisIsSupported:(id)arg1;
+ (BOOL)supportsMultipleAxes;
- (void)removeAxis:(id)arg1 fromAxesArray:(id)arg2;
- (void)replaceAxis:(id)arg1 inArray:(id)arg2 withAxis:(id)arg3;
- (void)addAxis:(id)arg1 toAxesArray:(id)arg2;
- (BOOL)assertAxisTypeSupported:(id)arg1;

@end
