//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorData.h"

@class NSDate, NSString, WFCommonData;

@interface WFGeoCacheData : WFSensorData
{
    WFCommonData *commonData;
    NSString *geoCacheId;
    NSString *hint;
    double latitude;
    double longitude;
    NSDate *lastVisit;
    unsigned short numberOfVisits;
    BOOL isAuthenticated;
}

@property(nonatomic) BOOL isAuthenticated; // @synthesize isAuthenticated;
@property(nonatomic) unsigned short numberOfVisits; // @synthesize numberOfVisits;
@property(retain, nonatomic) NSDate *lastVisit; // @synthesize lastVisit;
@property(nonatomic) double longitude; // @synthesize longitude;
@property(nonatomic) double latitude; // @synthesize latitude;
@property(retain, nonatomic) NSString *hint; // @synthesize hint;
@property(retain, nonatomic) NSString *geoCacheId; // @synthesize geoCacheId;
@property(retain, nonatomic) WFCommonData *commonData; // @synthesize commonData;
- (id)init;
- (void)dealloc;

@end

