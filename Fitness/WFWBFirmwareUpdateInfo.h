//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WFWBFirmwareUpdateInfo : NSObject
{
    BOOL isLegacy;
    NSString *currentVersion;
    NSString *firmwareDirectory;
    NSString *deviceName;
    NSString *deviceInfo;
}

@property(retain, nonatomic) NSString *deviceInfo; // @synthesize deviceInfo;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName;
@property(retain, nonatomic) NSString *firmwareDirectory; // @synthesize firmwareDirectory;
@property(retain, nonatomic) NSString *currentVersion; // @synthesize currentVersion;
@property(nonatomic) BOOL isLegacy; // @synthesize isLegacy;
- (id)init;
- (void)dealloc;

@end

