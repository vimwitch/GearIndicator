//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorConnection.h"

#import "WFBikePowerDelegate.h"
#import "WFBikeTrainerDelegate.h"

@interface _WFBikePowerConnection : WFSensorConnection <WFBikePowerDelegate, WFBikeTrainerDelegate>
{
    id <WFBikePowerDelegate> cpmDelegate;
    id <WFBikeTrainerDelegate> btDelegate;
}

- (BOOL)kurtSetProFlyWheelEnabled:(BOOL)arg1 spindownEnabled:(BOOL)arg2;
- (BOOL)kurtSetMomentOfInertia:(float)arg1;
- (BOOL)kurtSetDragParams:(float)arg1 offsetYIntercept:(float)arg2;
- (BOOL)kurtSetSpindownParams:(unsigned short)arg1 startPeriod:(unsigned short)arg2 endPeriod:(unsigned short)arg3 debounceThreshold:(unsigned short)arg4;
- (BOOL)kurtSetDriveCircumference:(float)arg1 driveRatio:(unsigned char)arg2;
- (BOOL)trainerEnableControl:(BOOL)arg1 withPasscode:(unsigned long)arg2;
- (BOOL)trainerResetPasscode;
- (BOOL)trainerSetPasscode:(unsigned long)arg1 currentPasscode:(unsigned long)arg2;
- (BOOL)trainerTestOptical;
- (BOOL)sendSetDeviceCapabilitiesRequest:(unsigned short)arg1;
- (BOOL)sendReadDeviceCapabilitiesRequest;
- (BOOL)sendReadDeviceInfoRequest;
- (BOOL)sendReadCalibrationRequest;
- (BOOL)sendReadCrankLengthRequest;
- (BOOL)sendSetCrankLengthRequest:(float)arg1;
- (BOOL)sendSetTemperatureSlopeRequest:(float)arg1;
- (BOOL)sendSetSlopeRequest:(unsigned short)arg1;
- (BOOL)sendReadTemperatureRequest;
- (BOOL)sendReadAccelerometerRequest;
- (BOOL)sendFactoryCalibrateRequest:(unsigned char)arg1;
- (BOOL)sendEnableAntRadio:(BOOL)arg1;
- (BOOL)sendAssignDeviceInfo:(unsigned short)arg1 serialNumber:(unsigned long)arg2;
- (id)cpmService;
- (void)cpmConnection:(id)arg1 didReceiveTrainerEnableControlResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveTrainerResetControlPasscodeResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveTrainerSetControlPasscodeResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveTrainerTestOpticalResult:(BOOL)arg2;
- (void)cpmConnection:(id)arg1 didReceiveKurtSetProFlywheelEnabled:(BOOL)arg2 spindownEnabled:(BOOL)arg3 response:(BOOL)arg4;
- (void)cpmConnection:(id)arg1 didReceiveReadDeviceCapabilitiesResponse:(unsigned char)arg2 deviceCapabilities:(unsigned short)arg3;
- (void)cpmConnection:(id)arg1 didReceiveSetDeviceCapabilitiesResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveReadDeviceInfoResponse:(unsigned char)arg2 serialNumber:(unsigned long)arg3 antId:(unsigned short)arg4;
- (void)cpmConnection:(id)arg1 didReceiveReadCalibrationResponse:(unsigned char)arg2 slope:(float)arg3 temperatureSlope:(float)arg4 dpotValue:(unsigned char)arg5;
- (void)cpmConnection:(id)arg1 didReceiveSetTemperatureSlopeResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveSetSlopeResponse:(unsigned char)arg2;
- (void)cpmConnection:(id)arg1 didReceiveReadTemperatureResponse:(unsigned char)arg2 temperature:(BOOL)arg3;
- (void)cpmConnection:(id)arg1 didReceiveReadAccelerometerResponse:(unsigned char)arg2 xAxis:(float)arg3 yAxis:(float)arg4 zAxis:(float)arg5;
- (void)cpmConnection:(id)arg1 didReceiveFactoryCalibrateResponse:(unsigned char)arg2 strainTicks:(unsigned short)arg3;
- (void)cpmConnection:(id)arg1 didReceiveAntIdResponse:(unsigned char)arg2;

@end

