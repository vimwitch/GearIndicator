//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SChartTheme.h"

@class UIColor;

@interface SChartMidnightTheme : SChartTheme
{
    UIColor *midnight_greyColor;
    UIColor *midnight_greyColorLowAlpha;
    UIColor *midnight_greyColorLabel;
    UIColor *midnight_brownColorDark;
    UIColor *midnight_brownColorLight;
    UIColor *midnight_pinkColor;
    UIColor *midnight_pinkColorLowAlpha;
    UIColor *midnight_textShadowColor;
}

@property(readonly, nonatomic) UIColor *midnight_textShadowColor; // @synthesize midnight_textShadowColor;
@property(readonly, nonatomic) UIColor *midnight_pinkColorLowAlpha; // @synthesize midnight_pinkColorLowAlpha;
@property(readonly, nonatomic) UIColor *midnight_pinkColor; // @synthesize midnight_pinkColor;
@property(readonly, nonatomic) UIColor *midnight_brownColorLight; // @synthesize midnight_brownColorLight;
@property(readonly, nonatomic) UIColor *midnight_brownColorDark; // @synthesize midnight_brownColorDark;
@property(readonly, nonatomic) UIColor *midnight_greyColorLabel; // @synthesize midnight_greyColorLabel;
@property(readonly, nonatomic) UIColor *midnight_greyColorLowAlpha; // @synthesize midnight_greyColorLowAlpha;
@property(readonly, nonatomic) UIColor *midnight_greyColor; // @synthesize midnight_greyColor;
@property(readonly, nonatomic) UIColor *midnight_yellowColorLight; // @dynamic midnight_yellowColorLight;
@property(readonly, nonatomic) UIColor *midnight_yellowColorDark; // @dynamic midnight_yellowColorDark;
@property(readonly, nonatomic) UIColor *midnight_purpleColorLight; // @dynamic midnight_purpleColorLight;
@property(readonly, nonatomic) UIColor *midnight_purpleColorDark; // @dynamic midnight_purpleColorDark;
@property(readonly, nonatomic) UIColor *midnight_orangeColorLight; // @dynamic midnight_orangeColorLight;
@property(readonly, nonatomic) UIColor *midnight_orangeColorDark; // @dynamic midnight_orangeColorDark;
@property(readonly, nonatomic) UIColor *midnight_greenColorLight; // @dynamic midnight_greenColorLight;
@property(readonly, nonatomic) UIColor *midnight_greenColorDark; // @dynamic midnight_greenColorDark;
@property(readonly, nonatomic) UIColor *midnight_blueColorLight; // @dynamic midnight_blueColorLight;
@property(readonly, nonatomic) UIColor *midnight_blueColorDark; // @dynamic midnight_blueColorDark;
- (void)configureScatterSeriesStyle:(id)arg1;
- (void)configureLineSeriesStyle:(id)arg1;
- (void)dealloc;
- (void)setColors;

@end
