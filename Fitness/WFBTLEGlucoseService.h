//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFBTLEServiceProcessor.h"

@class WFGlucoseFeatureCh, WFGlucoseMeasurementCh, WFGlucoseMeasurementContextCh, WFRecordAccessControlPointCh;

@interface WFBTLEGlucoseService : WFBTLEServiceProcessor
{
    id <WFBTLEGlucoseDelegate> delegate;
    WFGlucoseMeasurementCh *glucoseMeasurementCh;
    WFGlucoseMeasurementContextCh *glucoseMeasurementContextCh;
    WFGlucoseFeatureCh *glucoseFeatureCh;
    WFRecordAccessControlPointCh *recordAccessControlPointCh;
}

@property(retain, nonatomic) id <WFBTLEGlucoseDelegate> delegate; // @synthesize delegate;
- (BOOL)sendRecordCommand:(int)arg1 withOperator:(int)arg2 operands:(id)arg3;
- (void)delegateReceiveRecord:(id)arg1;
- (void)delegateCommandResponse:(id)arg1;
- (void)reset;
- (id)getData;
- (BOOL)startUpdatingForService:(id)arg1 onPeripheral:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)init;

@end

