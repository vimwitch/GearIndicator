//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensorConnection.h"

#import "WFDisplayConnectionDelegate.h"

@class NSMutableArray, WFDisplaySensorConfiguration;

@interface WFDisplayConnection : WFSensorConnection <WFDisplayConnectionDelegate>
{
    id <WFDisplayConnectionDelegate> _displayConnectionDelegate;
    int currentPage;
    NSMutableArray *updateQueue;
    WFDisplaySensorConfiguration *configuration;
    float _lastLoadingProgress;
    BOOL _didSendConfigWithDelegate;
}

@property(nonatomic) BOOL didSendConfigWithDelegate; // @synthesize didSendConfigWithDelegate=_didSendConfigWithDelegate;
@property(nonatomic) float lastLoadingProgress; // @synthesize lastLoadingProgress=_lastLoadingProgress;
@property(nonatomic) id <WFDisplayConnectionDelegate> displayConnectionDelegate; // @synthesize displayConnectionDelegate=_displayConnectionDelegate;
- (BOOL)playSoundWithKey:(id)arg1;
- (BOOL)setAltimeterCurrentElevation:(double)arg1;
- (BOOL)setAltimeterStandardPressure:(double)arg1;
- (BOOL)setShouldSleepOnDisconnect:(BOOL)arg1;
- (BOOL)getDateTimeFormats;
- (BOOL)setDateFormat:(int)arg1 timeFormat:(int)arg2 startDayOfWeek:(int)arg3 watchfaceStyle:(int)arg4;
- (BOOL)setAutoPageScrollDisabled;
- (BOOL)setAutoPageScrollWithDelay:(double)arg1;
- (BOOL)setDeviceDate:(id)arg1 timeZone:(id)arg2;
- (BOOL)getDisplayInverted;
- (BOOL)setDisplayInverted:(BOOL)arg1;
- (BOOL)setBacklightOn:(unsigned char)arg1 withTimeout:(double)arg2;
- (BOOL)setBacklightOnWithNumber:(id)arg1;
- (BOOL)setBacklightOn:(unsigned char)arg1;
- (BOOL)setPageVisableWithKey:(id)arg1 timeout:(double)arg2;
- (BOOL)setFrame:(struct CGRect)arg1 forElementWithKey:(id)arg2;
- (BOOL)setHidden:(BOOL)arg1 forElementWithKey:(id)arg2;
- (BOOL)setValue:(id)arg1 forElementWithKey:(id)arg2;
- (void)endUpdatesCompletion:(CDUnknownBlockType)arg1;
- (void)endUpdates;
- (void)beginForcedUpdates;
- (void)beginUpdates;
- (void)loadConfiguration:(id)arg1;
- (void)loadConfigationWithDisplayConnectionDelegate;
- (id)recomendedPageKeysToUpdate;
- (id)currentPageKey;
- (id)getDisplayData;
- (id)displayService;
- (void)disconnect;
- (void)setConnectionStatus:(int)arg1;
- (void)displayConnection:(id)arg1 didRespondShouldSleepOnDisconnect:(BOOL)arg2 error:(id)arg3;
- (void)displayConnection:(id)arg1 didRespondDateFormat:(int)arg2 timeFormat:(int)arg3 startDayOfWeek:(int)arg4 watchfaceStyle:(int)arg5 error:(id)arg6;
- (void)displayConnection:(id)arg1 didRespondAutoPageScrollWithDelay:(double)arg2 error:(id)arg3;
- (void)displayConnection:(id)arg1 didRespondDate:(id)arg2 timeZone:(id)arg3 error:(id)arg4;
- (void)displayConnection:(id)arg1 didRespondPageVisableWithKey:(id)arg2 error:(id)arg3;
- (void)displayConnection:(id)arg1 didRespondDisplayInverted:(BOOL)arg2 error:(id)arg3;
- (void)displayConnection:(id)arg1 didRespondBacklightOn:(BOOL)arg2 error:(id)arg3;
- (void)displayConnection:(id)arg1 didFailConfigurationLoadingWithError:(id)arg2;
- (void)displayConnectionDidFinishConfigurationLoading:(id)arg1;
- (void)displayConnection:(id)arg1 didProgressConfigurationLoading:(float)arg2;
- (void)displayConnectionDidStartConfigurationLoading:(id)arg1;
- (id)configurationForDisplayConnection:(id)arg1;
- (void)displayConnection:(id)arg1 visablePageChanged:(id)arg2;
- (void)displayConnection:(id)arg1 didButtonUp:(int)arg2;
- (void)displayConnection:(id)arg1 didButtonDown:(int)arg2;
- (void)dealloc;
- (id)init;

@end

