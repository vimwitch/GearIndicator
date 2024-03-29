//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class SChartNonStoringUserSettable;

@interface SChartTitle : UILabel
{
    BOOL _initialized;
    SChartNonStoringUserSettable *_textColorInternal;
    SChartNonStoringUserSettable *_backgroundColorInternal;
    SChartNonStoringUserSettable *_textAlignmentInternal;
    SChartNonStoringUserSettable *_minimumScaleFactorInternal;
    SChartNonStoringUserSettable *_fontInternal;
    SChartNonStoringUserSettable *_frameInternal;
}

@property(retain, nonatomic) SChartNonStoringUserSettable *frameInternal; // @synthesize frameInternal=_frameInternal;
@property(retain, nonatomic) SChartNonStoringUserSettable *fontInternal; // @synthesize fontInternal=_fontInternal;
@property(retain, nonatomic) SChartNonStoringUserSettable *minimumScaleFactorInternal; // @synthesize minimumScaleFactorInternal=_minimumScaleFactorInternal;
@property(retain, nonatomic) SChartNonStoringUserSettable *textAlignmentInternal; // @synthesize textAlignmentInternal=_textAlignmentInternal;
@property(retain, nonatomic) SChartNonStoringUserSettable *backgroundColorInternal; // @synthesize backgroundColorInternal=_backgroundColorInternal;
@property(retain, nonatomic) SChartNonStoringUserSettable *textColorInternal; // @synthesize textColorInternal=_textColorInternal;
@property(nonatomic) BOOL userSetFrame;
- (void)sizeToFit;
- (struct CGRect)frame;
- (void)setFrame:(struct CGRect)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (float)minimumScaleFactor;
- (void)setMinimumScaleFactor:(float)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (void)dealloc;
- (void)initializeUserSettables;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

