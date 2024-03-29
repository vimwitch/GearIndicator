//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFFilter.h"

@interface WFExponentialSmoothingFilter : WFFilter
{
    double sum;
    int count;
    int _initialAverage;
    double _smoothingFactor;
}

@property(readonly, nonatomic) int initialAverage; // @synthesize initialAverage=_initialAverage;
@property(readonly, nonatomic) double smoothingFactor; // @synthesize smoothingFactor=_smoothingFactor;
- (void)addSampleWithValue:(double)arg1;
- (id)initWithSmoothingFactor:(double)arg1 andInitialAverage:(int)arg2;
- (id)initWithSmoothingFactor:(double)arg1;
- (id)init;

@end

