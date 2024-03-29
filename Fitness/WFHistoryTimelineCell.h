//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MKMapView, UIImageView, UILabel, UIView;

@interface WFHistoryTimelineCell : UITableViewCell
{
    MKMapView *_debugMapView;
    UILabel *_titleLabel;
    UIImageView *_thumbnail;
    UIImageView *_workoutIcon;
    UILabel *_dateLabel;
    UILabel *_distanceLabel;
    UILabel *_timeLabel;
    UIView *_colourBandView;
}

@property(nonatomic) __weak UIView *colourBandView; // @synthesize colourBandView=_colourBandView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UIImageView *workoutIcon; // @synthesize workoutIcon=_workoutIcon;
@property(nonatomic) __weak UIImageView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MKMapView *debugMapView; // @synthesize debugMapView=_debugMapView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

