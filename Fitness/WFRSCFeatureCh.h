//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFCharacteristicDecoder.h"

@interface WFRSCFeatureCh : WFCharacteristicDecoder
{
    CDStruct_885d282a stFeatures;
}

@property(readonly, nonatomic) CDStruct_885d282a *pstFeatures;
- (void)reset;
- (BOOL)decodeCharacteristicData;
- (id)init;

@end
