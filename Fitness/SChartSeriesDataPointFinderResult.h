//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SChartInternalDataPoint, SChartSeriesDataBin;

@interface SChartSeriesDataPointFinderResult : NSObject
{
    SChartSeriesDataBin *_dataBin;
    SChartInternalDataPoint *_dataPoint;
    SChartInternalDataPoint *_lowDataPoint;
}

@property(nonatomic) SChartInternalDataPoint *lowDataPoint; // @synthesize lowDataPoint=_lowDataPoint;
@property(nonatomic) SChartInternalDataPoint *dataPoint; // @synthesize dataPoint=_dataPoint;
@property(nonatomic) SChartSeriesDataBin *dataBin; // @synthesize dataBin=_dataBin;

@end

