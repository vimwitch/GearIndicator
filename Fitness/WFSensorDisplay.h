//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFSensor.h"

#import "WFAltimeterDataSource.h"
#import "WFAltimeterDelegate.h"
#import "WFDisplayConnectionDelegate.h"
#import "WFSessionManagerListener.h"

@class MPMediaItem, NSDictionary, UBERWorkoutDisplayRFLKT, WFAltimeter, WFDisplayConnection, WFDisplayData;

@interface WFSensorDisplay : WFSensor <WFDisplayConnectionDelegate, WFAltimeterDataSource, WFAltimeterDelegate, WFSessionManagerListener>
{
    MPMediaItem *nowPlayingItem;
    BOOL checkForMusicTrackChanges;
    BOOL _backlightAlwaysOn;
    BOOL _updatingDisplay;
    WFDisplayConnection *_displayConnection;
    WFDisplayData *_displayData;
    WFAltimeter *_altimeter;
    UBERWorkoutDisplayRFLKT *_workoutDisplay;
    int _loadedConfigSensorSubType;
    NSDictionary *_substituteCasioStringLookup;
}

+ (BOOL)canDisplayDataKeyOnSegmentedDisplay:(id)arg1;
@property(retain, nonatomic) NSDictionary *substituteCasioStringLookup; // @synthesize substituteCasioStringLookup=_substituteCasioStringLookup;
@property(nonatomic) int loadedConfigSensorSubType; // @synthesize loadedConfigSensorSubType=_loadedConfigSensorSubType;
@property(retain, nonatomic) UBERWorkoutDisplayRFLKT *workoutDisplay; // @synthesize workoutDisplay=_workoutDisplay;
@property(nonatomic, getter=isUpdatingDisplay) BOOL updatingDisplay; // @synthesize updatingDisplay=_updatingDisplay;
@property(retain, nonatomic) WFAltimeter *altimeter; // @synthesize altimeter=_altimeter;
@property(nonatomic) BOOL backlightAlwaysOn; // @synthesize backlightAlwaysOn=_backlightAlwaysOn;
@property(retain, nonatomic) WFDisplayData *displayData; // @synthesize displayData=_displayData;
@property(retain, nonatomic) WFDisplayConnection *displayConnection; // @synthesize displayConnection=_displayConnection;
- (void).cxx_destruct;
- (void)showAlertPageWithTriggerKey:(id)arg1 timeout:(double)arg2;
- (void)showAlertPagesWithTriggerKey:(id)arg1;
- (void)onMusicTrackChange;
- (void)onWorkoutStateChange;
- (void)sessionRecorder:(id)arg1 didResumeWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didPauseWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didEndWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didBeginWorkout:(id)arg2;
- (void)sessionRecorder:(id)arg1 didLapWorkout:(id)arg2;
- (void)updateDisplayDataForPageKey:(id)arg1;
- (void)updateDisplayData;
- (id)conditionedCasioStringFromString:(id)arg1 key:(id)arg2;
- (id)targetCasioElementKeyForDataKey:(id)arg1 inGroup:(id)arg2;
- (id)conditionedStringFromString:(id)arg1;
- (void)executeButtonAction:(id)arg1;
- (id)sessionManager;
- (void)updatePageNumbersInConfiguration:(id)arg1;
- (void)displayConnection:(id)arg1 pageIndexChanged:(unsigned int)arg2;
- (void)displayConnection:(id)arg1 visablePageChanged:(id)arg2;
- (void)displayConnection:(id)arg1 didButtonUp:(int)arg2;
- (void)displayConnection:(id)arg1 didButtonDown:(int)arg2;
- (id)configurationForDisplayConnection:(id)arg1;
- (void)displayConnection:(id)arg1 didFailConfigurationLoadingWithError:(id)arg2;
- (void)displayConnectionDidFinishConfigurationLoading:(id)arg1;
- (void)displayConnection:(id)arg1 didProgressConfigurationLoading:(float)arg2;
- (void)displayConnectionDidStartConfigurationLoading:(id)arg1;
- (void)stopDataDisplayUpdates;
- (void)startDisplayDataUpdates;
- (void)turnOffBacklight;
- (void)turnOnBacklightForSeconds:(double)arg1;
- (unsigned int)displayType;
- (void)playWorkoutLapSound;
- (void)playWorkoutResumeSound;
- (void)playWorkoutEndSound;
- (void)playWorkoutPauseSound;
- (void)playWorkoutStartSound;
- (void)updateSoundElements:(id)arg1;
- (id)soundLookupForConfg:(id)arg1;
- (id)soundThemeConfig;
- (id)soundDefaultConfig;
- (BOOL)setShouldSleepOnDisconnect:(BOOL)arg1;
- (void)postConnectSetup;
- (void)writeSummaryForWorkout:(id)arg1;
- (void)writeSummaryForSegment:(id)arg1;
- (BOOL)resetOffsets;
- (void)resumeWorkout;
- (void)pauseWorkout;
- (void)processData:(id)arg1;
- (void)endWorkout:(id)arg1;
- (void)endSegment:(id)arg1;
- (BOOL)beginWorkout:(id)arg1;
- (void)beginSegment;
- (id)formattedElevation:(CDStruct_e25eb2d1 *)arg1;
- (void)postConfigLoadSetup;
- (void)reloadDisplayConfiguration;
- (void)altimeter:(id)arg1 updatedCalibrationWithNewAltitude:(double)arg2;
- (BOOL)usesAutoCalibration;
- (BOOL)isCurrentWorkoutActive;
- (BOOL)sensorUsesIntelligentRecording;
- (id)getAltimeterData;
- (BOOL)supportsAltimeter;
- (void)setSession:(id)arg1;
- (void)dealloc;
- (id)init;

@end
