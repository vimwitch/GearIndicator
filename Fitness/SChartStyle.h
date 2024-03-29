//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, SChartBackedUserSettable, UIColor;

@interface SChartStyle : NSObject <NSCopying>
{
    SChartBackedUserSettable *_backgroundColorInternal;
    SChartBackedUserSettable *_backgroundColorGradientInternal;
    SChartBackedUserSettable *_borderColorInternal;
    SChartBackedUserSettable *_borderWidthInternal;
    SChartBackedUserSettable *_plotAreaBackgroundColorInternal;
    SChartBackedUserSettable *_plotAreaBorderColorInternal;
    SChartBackedUserSettable *_plotAreaBorderWidthInternal;
    SChartBackedUserSettable *_canvasBackgroundColorInternal;
    SChartBackedUserSettable *_loadingDataIndicatorColorInternal;
}

@property(retain, nonatomic) SChartBackedUserSettable *loadingDataIndicatorColorInternal; // @synthesize loadingDataIndicatorColorInternal=_loadingDataIndicatorColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *canvasBackgroundColorInternal; // @synthesize canvasBackgroundColorInternal=_canvasBackgroundColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *plotAreaBorderWidthInternal; // @synthesize plotAreaBorderWidthInternal=_plotAreaBorderWidthInternal;
@property(retain, nonatomic) SChartBackedUserSettable *plotAreaBorderColorInternal; // @synthesize plotAreaBorderColorInternal=_plotAreaBorderColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *plotAreaBackgroundColorInternal; // @synthesize plotAreaBackgroundColorInternal=_plotAreaBackgroundColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *borderWidthInternal; // @synthesize borderWidthInternal=_borderWidthInternal;
@property(retain, nonatomic) SChartBackedUserSettable *borderColorInternal; // @synthesize borderColorInternal=_borderColorInternal;
@property(retain, nonatomic) SChartBackedUserSettable *backgroundColorGradientInternal; // @synthesize backgroundColorGradientInternal=_backgroundColorGradientInternal;
@property(retain, nonatomic) SChartBackedUserSettable *backgroundColorInternal; // @synthesize backgroundColorInternal=_backgroundColorInternal;
@property(retain, nonatomic) UIColor *loadingDataIndicatorColor; // @dynamic loadingDataIndicatorColor;
@property(retain, nonatomic) UIColor *canvasBackgroundColor; // @dynamic canvasBackgroundColor;
@property(retain, nonatomic) NSNumber *plotAreaBorderWidth; // @dynamic plotAreaBorderWidth;
@property(retain, nonatomic) UIColor *plotAreaBorderColor; // @dynamic plotAreaBorderColor;
@property(retain, nonatomic) UIColor *plotAreaBackgroundColor; // @dynamic plotAreaBackgroundColor;
@property(retain, nonatomic) NSNumber *borderWidth; // @dynamic borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @dynamic borderColor;
@property(retain, nonatomic) UIColor *backgroundColorGradient; // @dynamic backgroundColorGradient;
@property(retain, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
- (void)supplementStyleFromStyle:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

