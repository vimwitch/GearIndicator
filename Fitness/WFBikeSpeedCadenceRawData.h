//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@interface WFBikeSpeedCadenceRawData : WFSensorData
{
    unsigned short lastCadenceTime;
    unsigned short totalCrankRevolutions;
    unsigned short lastSpeedTime;
    unsigned short totalWheelRevolutions;
}

@property(nonatomic) unsigned short totalWheelRevolutions; // @synthesize totalWheelRevolutions;
@property(nonatomic) unsigned short lastSpeedTime; // @synthesize lastSpeedTime;
@property(nonatomic) unsigned short totalCrankRevolutions; // @synthesize totalCrankRevolutions;
@property(nonatomic) unsigned short lastCadenceTime; // @synthesize lastCadenceTime;

@end

