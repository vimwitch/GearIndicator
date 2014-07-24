//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFBTLEServiceProcessor.h"

@class NSMutableArray, WFTemperatureMeasurementCh, WFWahooWeightScaleControlPointCh, WFWeightScaleMeasurementCh;

@interface WFBTLEWeightScaleService : WFBTLEServiceProcessor
{
    id <WFWeightScaleDelegate> delegate;
    WFWeightScaleMeasurementCh *weightMeasurementCh;
    WFTemperatureMeasurementCh *temperatureMeasurementCh;
    WFWahooWeightScaleControlPointCh *wfWeightScaleControlPointCh;
    NSMutableArray *_userRecordsAwaitingId;
    NSMutableArray *_userProfiles;
    BOOL _userRequestingRecords;
}

@property(nonatomic) BOOL userRequestingRecords; // @synthesize userRequestingRecords=_userRequestingRecords;
@property(retain, nonatomic) NSMutableArray *userRecordsAwaitingId; // @synthesize userRecordsAwaitingId=_userRecordsAwaitingId;
@property(retain, nonatomic) NSMutableArray *userProfiles; // @synthesize userProfiles=_userProfiles;
@property(retain, nonatomic) id <WFWeightScaleDelegate> delegate; // @synthesize delegate;
- (void)delegateTestResult;
- (void)delegateUserId;
- (void)delegateUserRecords;
- (void)delegateWeightHistory;
- (BOOL)assignUserId:(int)arg1 toHistoryRecordWithTimestamp:(double)arg2;
- (BOOL)requestAllUserRecords;
- (BOOL)clearUserRecordWithId:(int)arg1;
- (BOOL)requestUserId;
- (BOOL)clearAllUserRecords;
- (BOOL)clearHistoryRecordWithTimestamp:(double)arg1;
- (BOOL)clearAllHistory;
- (BOOL)testConnection:(float)arg1;
- (BOOL)setDisplayUnitsToMetric:(BOOL)arg1;
- (BOOL)storeUserRecord:(id)arg1;
- (BOOL)setDeviceTime;
- (BOOL)requestHistorySinceTimestamp:(double)arg1;
- (BOOL)requestAllHistory;
- (id)getData;
- (BOOL)startUpdatingForService:(id)arg1 onPeripheral:(id)arg2;
- (void)reset;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;

@end
