//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartDataPoint.h"

#import "SChartData.h"

@class NSNumber, NSString;

@interface SChartRadialDataPoint : SChartDataPoint <SChartData>
{
}

@property(retain, nonatomic) NSNumber *value; // @dynamic value;
@property(retain, nonatomic) NSString *name; // @dynamic name;
- (BOOL)sChartPointIsSelected;
- (id)sChartYValue;
- (id)sChartXValue;
- (id)description;
- (id)initWithInternal:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) int sChartDataPointIndex;

@end

