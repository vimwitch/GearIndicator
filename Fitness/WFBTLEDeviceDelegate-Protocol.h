//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCharacteristic, NSError, WFBTLEDevice;

@protocol WFBTLEDeviceDelegate <NSObject>
- (void)btleDeviceDidRejectConnection:(WFBTLEDevice *)arg1 error:(NSError *)arg2;
- (void)btleDeviceDidDiscoverBaseService:(int)arg1;
- (void)btleDeviceDidCompleteConnection:(WFBTLEDevice *)arg1;
- (void)btleDevice:(WFBTLEDevice *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2;
- (void)btleDevice:(WFBTLEDevice *)arg1 didFailServiceDiscovery:(NSError *)arg2;
@end
