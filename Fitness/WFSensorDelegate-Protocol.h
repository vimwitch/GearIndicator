//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, WFSensor;

@protocol WFSensorDelegate
- (void)sensor:(WFSensor *)arg1 rejectedByDeviceNamed:(NSString *)arg2 appAlreadyConnected:(NSString *)arg3;
- (void)sensor:(WFSensor *)arg1 didConnect:(BOOL)arg2;
@end
