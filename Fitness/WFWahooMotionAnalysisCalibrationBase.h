//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface WFWahooMotionAnalysisCalibrationBase : NSObject
{
    NSDate *_calibrationDate;
}

+ (id)makeCalibationInstanceForActivityType:(int)arg1;
@property(retain, nonatomic) NSDate *calibrationDate; // @synthesize calibrationDate=_calibrationDate;
- (BOOL)parseDeviceCalibrationData:(id)arg1 forPart:(unsigned char)arg2;
- (id)getDeviceCalibrationDataForPart:(unsigned char)arg1;
- (unsigned char)getDeviceCalibrationPartsCount;
@property(readonly) int activityType;

@end

