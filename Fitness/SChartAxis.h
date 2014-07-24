//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SChartTickLabelPresenter.h"

@class NSMutableArray, NSNumber, NSObject<SChartErrorHandler>, NSObject<SChartTickFrequencyCalculator>, NSString, SChartAxisStyle, SChartBackedUserSettable, SChartRange, SChartSkipList, SChartTickLabelFormatter, SChartTitle, ShinobiChart, UIView;

@interface SChartAxis : NSObject <SChartTickLabelPresenter>
{
    id rangePaddingLow;
    id rangePaddingHigh;
    id _tickCalculator;
    SChartAxisStyle *style;
    id previousMajorTickFrequency;
    NSMutableArray *seriesOnAxis;
    SChartRange *maxRange;
    SChartRange *glRange;
    BOOL glMinSet;
    BOOL glMaxSet;
    double internalRangeLowPadding;
    double internalRangeHighPadding;
    BOOL defaultRangeSet;
    BOOL dataRangeValid;
    BOOL allowPanningOutOfMaxRange;
    BOOL allowPanningOutOfDefaultRange;
    BOOL animatingRange;
    BOOL animationEdgeBouncing;
    BOOL animationEnabled;
    struct MinMax animationStart;
    struct MinMax animationTarget;
    double animationStartTime;
    double lastMomentumPanFrame;
    double lastMomentumZoomFrame;
    double momentumPanFrameAccum;
    int numMomentumPanFrames;
    double zoom;
    double initialZoom;
    struct CGRect axisFrame;
    int axisOrientation;
    id majorTickFrequency;
    id minorTickFrequency;
    id _internalMajorTickFrequency;
    id _internalMinorTickFrequency;
    id anchorPoint;
    BOOL needToSortTickMarks;
    double panMomentumDelay;
    double panMomentumFactor;
    double zoomMomentumDelay;
    double zoomMomentumFactor;
    BOOL isMomentumZooming;
    BOOL isMomentumPanning;
    BOOL enableMomentumZooming;
    BOOL enableMomentumPanning;
    double zoomMomentumCurrent;
    double zoomMomentumCentre;
    double panMomentumCurrent;
    double panMomentumInitial;
    double panMomentumLimit;
    ShinobiChart *chart;
    float largestLabelDiagonal;
    BOOL axisWidthIsSufficient;
    BOOL axisLabelsAreFixed;
    BOOL recalculateBarColumnsRequired;
    BOOL barColumnsConfigured;
    BOOL _calculateMajorTickFrequencyFromDiscontinuousRange;
    BOOL _userSetWidth;
    BOOL _animateRangeAdjustments;
    float secondaryAxisOffset;
    UIView *axisLineView;
    float glMin;
    float glMax;
    SChartRange *dataRange;
    SChartRange *axisRange;
    SChartRange *defaultRange;
    SChartRange *dataRangeInternal;
    SChartRange *axisRangeInternal;
    SChartRange *defaultRangeInternal;
    int _discontinuousTickLabelClipping;
    SChartTickLabelFormatter *labelFormatter;
    NSNumber *barColMin;
    NSNumber *barColMax;
    SChartTitle *titleLabel;
    id <SChartAxisDrawer> _drawer;
    id <SChartTickManager> _tickManager;
    id <SChartAxisPropertyManager> _propertyManager;
    NSString *_axisKey;
    SChartSkipList *_skipList;
    SChartBackedUserSettable *_tickLabelClippingModeHighInternal;
    SChartBackedUserSettable *_tickLabelClippingModeLowInternal;
    float _largestLabelWidth;
    float _largestLabelHeight;
    NSObject<SChartErrorHandler> *_errorHandler;
    struct CGPoint labelSizeScalers;
    double lastTickFreq;
    struct CGSize lastTickLabelSize;
    double barColSpacing;
}

@property(nonatomic) BOOL animateRangeAdjustments; // @synthesize animateRangeAdjustments=_animateRangeAdjustments;
@property(retain, nonatomic) NSObject<SChartErrorHandler> *errorHandler; // @synthesize errorHandler=_errorHandler;
@property(nonatomic) BOOL userSetWidth; // @synthesize userSetWidth=_userSetWidth;
@property(nonatomic) float largestLabelHeight; // @synthesize largestLabelHeight=_largestLabelHeight;
@property(nonatomic) float largestLabelWidth; // @synthesize largestLabelWidth=_largestLabelWidth;
@property(retain, nonatomic) SChartBackedUserSettable *tickLabelClippingModeLowInternal; // @synthesize tickLabelClippingModeLowInternal=_tickLabelClippingModeLowInternal;
@property(retain, nonatomic) SChartBackedUserSettable *tickLabelClippingModeHighInternal; // @synthesize tickLabelClippingModeHighInternal=_tickLabelClippingModeHighInternal;
@property(retain, nonatomic) SChartSkipList *skipList; // @synthesize skipList=_skipList;
@property(retain, nonatomic) NSString *axisKey; // @synthesize axisKey=_axisKey;
@property(retain, nonatomic) id <SChartAxisPropertyManager> propertyManager; // @synthesize propertyManager=_propertyManager;
@property(retain, nonatomic) id <SChartTickManager> tickManager; // @synthesize tickManager=_tickManager;
@property(retain, nonatomic) id <SChartAxisDrawer> drawer; // @synthesize drawer=_drawer;
@property(nonatomic) BOOL calculateMajorTickFrequencyFromDiscontinuousRange; // @synthesize calculateMajorTickFrequencyFromDiscontinuousRange=_calculateMajorTickFrequencyFromDiscontinuousRange;
@property(retain, nonatomic) SChartTitle *titleLabel; // @synthesize titleLabel;
@property(nonatomic) double zoomMomentumFactor; // @synthesize zoomMomentumFactor;
@property(nonatomic) double zoomMomentumDelay; // @synthesize zoomMomentumDelay;
@property(nonatomic) double panMomentumFactor; // @synthesize panMomentumFactor;
@property(nonatomic) double panMomentumDelay; // @synthesize panMomentumDelay;
@property(readonly, nonatomic) BOOL isMomentumPanning; // @synthesize isMomentumPanning;
@property(readonly, nonatomic) BOOL isMomentumZooming; // @synthesize isMomentumZooming;
@property(nonatomic) BOOL enableMomentumPanning; // @synthesize enableMomentumPanning;
@property(nonatomic) BOOL enableMomentumZooming; // @synthesize enableMomentumZooming;
@property(retain, nonatomic) SChartAxisStyle *style; // @synthesize style;
@property(nonatomic) BOOL barColumnsConfigured; // @synthesize barColumnsConfigured;
@property(nonatomic) BOOL recalculateBarColumnsRequired; // @synthesize recalculateBarColumnsRequired;
@property(retain, nonatomic) NSNumber *barColMax; // @synthesize barColMax;
@property(retain, nonatomic) NSNumber *barColMin; // @synthesize barColMin;
@property(nonatomic) double barColSpacing; // @synthesize barColSpacing;
@property(retain, nonatomic) SChartTickLabelFormatter *labelFormatter; // @synthesize labelFormatter;
@property(retain, nonatomic) NSObject<SChartTickFrequencyCalculator> *tickCalculator; // @synthesize tickCalculator=_tickCalculator;
@property(nonatomic) struct CGSize lastTickLabelSize; // @synthesize lastTickLabelSize;
@property(nonatomic) double lastTickFreq; // @synthesize lastTickFreq;
@property(nonatomic) int discontinuousTickLabelClipping; // @synthesize discontinuousTickLabelClipping=_discontinuousTickLabelClipping;
@property(nonatomic) struct CGPoint labelSizeScalers; // @synthesize labelSizeScalers;
@property(retain, nonatomic) id anchorPoint; // @synthesize anchorPoint;
@property(retain, nonatomic) id previousMajorTickFrequency; // @synthesize previousMajorTickFrequency;
@property(nonatomic) int axisOrientation; // @synthesize axisOrientation;
@property(nonatomic) struct CGRect axisFrame; // @synthesize axisFrame;
@property(nonatomic) BOOL animationEdgeBouncing; // @synthesize animationEdgeBouncing;
@property(nonatomic) BOOL animationEnabled; // @synthesize animationEnabled;
@property(retain, nonatomic) SChartRange *defaultRangeInternal; // @synthesize defaultRangeInternal;
@property(readonly, nonatomic) SChartRange *axisRangeInternal; // @synthesize axisRangeInternal;
@property(nonatomic) float glMax; // @synthesize glMax;
@property(nonatomic) float glMin; // @synthesize glMin;
@property(retain, nonatomic) UIView *axisLineView; // @synthesize axisLineView;
@property(nonatomic) BOOL axisLabelsAreFixed; // @synthesize axisLabelsAreFixed;
@property(nonatomic) float secondaryAxisOffset; // @synthesize secondaryAxisOffset;
- (struct CGRect)frameForTitleLabel;
@property(retain, nonatomic) NSNumber *axisPositionValue; // @dynamic axisPositionValue;
@property(nonatomic) int axisPosition; // @dynamic axisPosition;
@property(retain, nonatomic) NSNumber *width; // @dynamic width;
@property(nonatomic) BOOL enableGestureZooming; // @dynamic enableGestureZooming;
@property(nonatomic) BOOL enableGesturePanning; // @dynamic enableGesturePanning;
- (void)configureFromFirstDataPointValue:(id)arg1;
- (BOOL)allowsInterpolation;
- (BOOL)allowsStacking;
- (void)willAddDataPointToSeriesWithValue:(id)arg1;
- (void)reconfigureFromStubbedAxisCopy:(id)arg1;
- (id)stubCopyOfAxisForDataLoading;
- (void)adjustRangesIfDataIsOutsideOfAllowedPanningLimits;
- (void)updateRanges;
- (void)initialiseAxisIfNeededFromChartSeries:(id)arg1;
- (id)maxRange;
- (id)axisPositionValueInternal;
- (void)sortDataIfRequired:(id)arg1;
- (void)removeViews;
- (id)rangeFromRangeWithUserPadding:(id)arg1;
- (double)defaultBaseline;
- (void)configureWithDataMin:(id)arg1 andDataMax:(id)arg2;
- (BOOL)isSkippedData:(id)arg1;
- (id)transformValueToExternal:(id)arg1;
- (id)transformValueToInternal:(id)arg1;
- (void)linkSeries:(id)arg1;
- (void)unlinkAllSeries;
- (void)clearGlRange;
- (id)glRange;
- (void)fixGLRangeWithMin:(float)arg1 max:(float)arg2;
- (void)updateGlRange;
- (void)stopMomentumPanning;
- (void)stopMomentumZooming;
- (BOOL)panWithMomentumStartingAt:(double)arg1;
- (BOOL)panWithMomentum;
- (BOOL)panTo:(int)arg1;
- (BOOL)panTo:(int)arg1 withAnimation:(BOOL)arg2;
- (BOOL)panByValue:(double)arg1;
- (BOOL)panByValue:(double)arg1 withAnimation:(BOOL)arg2;
- (BOOL)panByValue:(double)arg1 withAnimation:(BOOL)arg2 withBounceLimits:(BOOL)arg3;
- (BOOL)panByValue:(double)arg1 withAnimation:(BOOL)arg2 withBounceLimits:(BOOL)arg3 andRedraw:(BOOL)arg4;
- (BOOL)setRangeInternalWithRedraw:(BOOL)arg1 min:(id)arg2 max:(id)arg3 animated:(BOOL)arg4 bounceLimits:(BOOL)arg5;
- (void)zoomToPoint:(double)arg1 withRange:(double)arg2;
- (void)zoomToPoint:(double)arg1 withRange:(double)arg2 withAnimation:(BOOL)arg3 usingBounceLimits:(BOOL)arg4;
- (BOOL)zoomWithMomentum:(double)arg1 fromPosition:(double)arg2;
- (BOOL)zoomWithMomentum;
- (BOOL)resetZoomLevel;
- (BOOL)resetZoomLevelWithAnimation:(BOOL)arg1;
- (BOOL)setZoomLevel:(int)arg1;
- (double)zoom;
- (BOOL)setZoom:(double)arg1;
- (BOOL)setZoom:(double)arg1 withAnimation:(BOOL)arg2;
- (BOOL)setZoom:(double)arg1 fromPosition:(double *)arg2;
- (BOOL)setZoom:(double)arg1 fromPosition:(double *)arg2 withAnimation:(BOOL)arg3;
- (BOOL)setZoom:(double)arg1 fromPosition:(double *)arg2 withAnimation:(BOOL)arg3 andBounceLimits:(BOOL)arg4;
- (BOOL)setZoom:(double)arg1 fromPosition:(double *)arg2 withAnimation:(BOOL)arg3 andBounceLimits:(BOOL)arg4 andRedraw:(BOOL)arg5;
- (void)cancelGestures;
- (float)momentumModifierForVelocity:(float)arg1 withInitialVelocity:(float)arg2;
- (id)description;
- (id)stringForId:(id)arg1;
- (id)stringForValue:(double)arg1;
- (id)appropriateFormat:(id)arg1;
- (id)appropriateFormat:(id)arg1 fallbackToLabelFormatter:(BOOL)arg2;
- (BOOL)ensureValueIsVisible:(double)arg1;
- (BOOL)ensureValueIsVisible:(double)arg1 andRedraw:(BOOL)arg2;
- (BOOL)valueIsVisible:(double)arg1 onSeries:(id)arg2;
- (void)configureTitle;
- (float)spaceRequiredForTitle;
- (float)spaceRequiredToDrawWithTitle:(BOOL)arg1;
- (void)drawAxisWithGLFrame:(struct CGRect)arg1 usingAxisDrawer:(id)arg2;
- (void)drawTickMarksWithGLFrame:(struct CGRect)arg1 usingAxisDrawer:(id)arg2 needToRedrawLabels:(BOOL)arg3;
- (void)drawWithFrame:(struct CGRect)arg1 onCanvas:(id)arg2;
- (void)rotateLabel:(id)arg1;
- (void)applyAxisTitleStyle:(id)arg1;
- (void)applyAxisStyle:(id)arg1;
@property(retain, nonatomic) NSString *labelFormatString;
- (void)alterTickMark:(id)arg1;
- (id)textForDisplayFromInternalValue:(double)arg1;
- (void)setNeedsTickLabelsRecreated;
- (void)restyleTickLabels;
- (double)getBaselineOffsetForSeries:(id)arg1;
- (double)decrementTickMarkValue:(double)arg1 isMajor:(BOOL)arg2;
- (double)incrementTickMarkValue:(double)arg1 isMajor:(BOOL)arg2;
- (id)currentMinorTickFrequency;
- (id)currentMajorTickFrequency;
@property(retain, nonatomic) id minorTickFrequency; // @dynamic minorTickFrequency;
@property(retain, nonatomic) id majorTickFrequency; // @dynamic majorTickFrequency;
- (void)setInternalMinorTickFrequency:(id)arg1;
- (void)setInternalMajorTickFrequency:(id)arg1;
- (id)internalMinorTickFrequency;
- (id)internalMajorTickFrequency;
- (void)autoGenerateTickMarks:(BOOL)arg1;
- (id)manualGenerateTickMarks;
- (BOOL)shouldAutocalculateTickMarks;
- (BOOL)firstTickInsideChart:(double)arg1;
- (int)indexOfFirstLabel:(int)arg1;
- (struct CGSize)sizeCustomTickLabels:(id)arg1;
- (struct CGSize)sizeTickLabels;
- (BOOL)zoomingIn:(id)arg1 withFrequency:(id)arg2;
- (BOOL)isOverAlternate:(double)arg1;
- (id)firstMinorTick;
- (id)firstMajorTick;
- (BOOL)spaceForNumberOfLabels:(int)arg1 withFrequency:(id)arg2 labelSizeScalers:(struct CGPoint)arg3;
- (BOOL)spaceForNumberOfLabels:(int)arg1 withFrequency:(id)arg2;
- (BOOL)spaceForLabels:(int)arg1 withLabelSizeScalers:(struct CGPoint)arg2;
- (void)updateInternalTickFrequencies;
- (id)longestLabel;
- (id)heuristicGuessAtLongestLabel;
- (id)sensibleValuesForLongestLabel;
- (id)longestLabelFromDelegate;
- (void)configureBars:(double)arg1 withMinY:(id)arg2 withMaxY:(id)arg3;
- (void)configureColumns:(double)arg1 withMinX:(id)arg2 withMaxX:(id)arg3;
- (void)configureBarColumns:(double)arg1 withMin:(id)arg2 withMax:(id)arg3;
- (void)recalculateBarColumns:(id)arg1;
- (void)mapCoordinatesForBarColumnChartDataPoint:(id)arg1 inSeries:(id)arg2;
- (void)mapCoordinatesForDataPoint:(id)arg1 inSeries:(id)arg2;
- (id)dataValueFromCoord:(double)arg1;
- (id)offsetForSeries:(id)arg1;
- (id)offsetForDataValue:(id)arg1 inSeries:(id)arg2;
- (id)dataValueForPixelValue:(float)arg1;
- (float)pixelValueForInternalDataValue:(id)arg1;
- (float)pixelValueForDataValue:(id)arg1;
- (double)mapPixelValueForInternalDataValue:(double)arg1 usingSeries:(id)arg2;
- (double)mapDataValueForPixelValue:(double)arg1 glViewFrame:(struct CGRect)arg2;
- (double)doubleForExternalValue:(id)arg1;
- (double)scaleDataValueForPixelValue:(double)arg1 glViewFrame:(struct CGRect)arg2;
- (id)visibleRange;
- (id)visibleRangeInternal;
- (void)updateZoom;
- (void)updateMaxRange;
- (void)refreshDataRange;
- (void)setAxisRangeInternal:(id)arg1;
- (void)setDataRangeInternal:(id)arg1;
@property(readonly, nonatomic) SChartRange *dataRangeInternal; // @synthesize dataRangeInternal;
- (void)updateDefaultRange;
- (void)setDataRange:(id)arg1;
- (id)chartRangeFromGlRange;
- (void)setDefaultRangeInternal:(id)arg1 asIfUserSet:(BOOL)arg2;
@property(readonly, nonatomic) SChartRange *axisRange; // @synthesize axisRange;
@property(readonly, nonatomic) SChartRange *dataRange; // @synthesize dataRange;
@property(retain, nonatomic) SChartRange *defaultRange; // @synthesize defaultRange;
- (id)transformRangeToExternal:(id)arg1;
- (id)transformRangeToInternal:(id)arg1;
@property(retain, nonatomic) id rangePaddingHigh; // @dynamic rangePaddingHigh;
@property(retain, nonatomic) id rangePaddingLow; // @dynamic rangePaddingLow;
- (BOOL)rangePaddingValueIsValid:(id)arg1;
- (id)getNewRangeWithMinimum:(id)arg1 withMaximum:(id)arg2;
- (BOOL)setRangeWithMinimum:(id)arg1 andMaximum:(id)arg2;
- (BOOL)setRangeWithMinimum:(id)arg1 andMaximum:(id)arg2 withAnimation:(BOOL)arg3;
- (BOOL)setRangeWithMinimum:(id)arg1 andMaximum:(id)arg2 withAnimation:(BOOL)arg3 usingBounceLimits:(BOOL)arg4;
- (BOOL)setRangeInternalWithMinimum:(id)arg1 andMaximum:(id)arg2;
- (BOOL)setRangeInternalWithMinimum:(id)arg1 andMaximum:(id)arg2 withAnimation:(BOOL)arg3;
- (BOOL)setRangeInternalWithMinimum:(id)arg1 andMaximum:(id)arg2 withAnimation:(BOOL)arg3 usingBounceLimits:(BOOL)arg4;
- (void)stopAnimations;
- (void)animateRangeChange;
- (BOOL)beyondAxisMinLimit;
- (BOOL)beyondAxisLimitsOnBothSides;
- (BOOL)beyondAxisLimits;
- (BOOL)getAxisLimitsWithMin:(double *)arg1 andMax:(double *)arg2;
@property(nonatomic) BOOL allowPanningOutOfDefaultRange; // @dynamic allowPanningOutOfDefaultRange;
@property(nonatomic) BOOL allowPanningOutOfMaxRange; // @dynamic allowPanningOutOfMaxRange;
- (BOOL)recheckAxisRange;
- (id)doubleToData:(double)arg1;
- (id)ownedSeries;
- (BOOL)isLinkedToSeries:(id)arg1;
- (void)setupDefaultsForRadialChart;
@property(nonatomic) int tickLabelClippingModeLow; // @dynamic tickLabelClippingModeLow;
@property(nonatomic) int tickLabelClippingModeHigh; // @dynamic tickLabelClippingModeHigh;
- (void)assertIsGenericAxis;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) ShinobiChart *chart; // @dynamic chart;
- (void)dealloc;
- (id)initWithRange:(id)arg1;
- (id)initWithErrorHandler:(id)arg1;
- (id)init;
- (BOOL)isXAxis;
- (id)transformValueToDiscontinous:(id)arg1;
- (id)transformValueFromDiscontinous:(id)arg1;
- (void)clearSkips;
- (void)addSkipFrom:(double)arg1 to:(double)arg2;

@end
