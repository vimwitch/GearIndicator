//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_WFSensorConnection.h"

@class NSString, WFDeviceInformation;

@interface WFSensorConnection : _WFSensorConnection
{
    id <WFSensorConnectionDelegate> delegate;
    WFDeviceInformation *_deviceInformation;
}

@property(retain, nonatomic) WFDeviceInformation *deviceInformation; // @synthesize deviceInformation=_deviceInformation;
@property(retain, nonatomic) id <WFSensorConnectionDelegate> delegate; // @synthesize delegate;
- (float)signalEfficiency;
- (id)serviceProcessorForSensorType:(int)arg1;
- (BOOL)hasData;
- (id)getRawData;
- (id)getData;
- (void)disconnect:(BOOL)arg1;
- (void)disconnect;
- (void)delegateConnectionRejectedByDevice:(id)arg1;
- (void)delegateTimeout;
- (void)delegateStateChanged;
@property(readonly, nonatomic) int networkType;
@property(readonly, nonatomic) unsigned char transmissionType;
@property(readonly, nonatomic) double timeSinceLastMessage;
@property(readonly, nonatomic) int sensorSubType;
@property(readonly, nonatomic) int sensorType;
@property(readonly, nonatomic) BOOL hasWildcardParams;
@property(readonly, nonatomic) BOOL hasValidParams;
@property(readonly, nonatomic) BOOL hasError;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BOOL isConnected;
@property(readonly, nonatomic) BOOL isANTConnection;
@property(readonly, nonatomic) BOOL isBTLEConnection;
@property(readonly, nonatomic) int error;
@property(readonly, nonatomic) BOOL didTimeout;
@property(readonly, nonatomic) NSString *deviceIDString;
@property(readonly, nonatomic) NSString *deviceUUIDString;
@property(readonly, nonatomic) unsigned short deviceNumber;
@property(readonly, nonatomic) int connectionStatus;
- (void)setConnectionStatus:(int)arg1;
- (void)dealloc;

@end

