//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_WFWeightScaleConnection.h"

#import "WFWeightScaleDelegate.h"

@class WFBTLEWeightScaleUser;

@interface WFWeightScaleConnection : _WFWeightScaleConnection <WFWeightScaleDelegate>
{
    id <WFWeightScaleDelegate> wsDelegate;
    BOOL _waitingForUserId;
    WFBTLEWeightScaleUser *_userRecordWaitingForId;
}

+ (BOOL)configureConditionalConnection:(id)arg1 lastSyncDate:(id)arg2;
- (BOOL)clearUserRecordWithId:(int)arg1;
- (BOOL)assignUserId:(int)arg1 toHistoryRecordWithTimestamp:(double)arg2;
- (BOOL)requestAllUserRecords;
- (BOOL)clearAllUserRecords;
- (BOOL)clearHistoryRecordWithTimestamp:(double)arg1;
- (BOOL)clearAllHistory;
- (BOOL)setDisplayUnitType:(int)arg1;
- (BOOL)storeUserRecord:(id)arg1;
- (BOOL)requestHistorySinceLastSync;
- (double)getLastSyncTime;
- (BOOL)requestHistorySinceTimestamp:(double)arg1;
- (BOOL)requestAllHistory;
- (BOOL)setWeightScaleUserProfile:(CDStruct_5eba643d *)arg1;
- (id)getWeightScaleData;
- (BOOL)testConnection;
- (BOOL)requestUserId;
- (BOOL)setDeviceTime;
- (void)processUserRecordsAwaitingId;
- (void)addRecord:(id)arg1;
- (id)btleWeightScaleService;
- (id)weightScaleSensor;
@property(retain, nonatomic) id <WFWeightScaleDelegate> wsDelegate;
- (void)disconnect;
- (void)setConnectionStatus:(int)arg1;
- (void)wsConnection:(id)arg1 didReceiveTestResult:(BOOL)arg2;
- (void)wsConnection:(id)arg1 didReceiveUserId:(int)arg2;
- (void)wsConnection:(id)arg1 didAddNewUserRecord:(id)arg2;
- (void)wsConnection:(id)arg1 userProfileRejected:(id)arg2 forOverlappingWith:(id)arg3;
- (void)wsConnection:(id)arg1 didReceiveUserRecords:(id)arg2;
- (void)wsConnection:(id)arg1 didReceiveWeightHistory:(id)arg2;
- (void)dealloc;
- (id)init;

@end

