//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFStaticTableViewController.h"

@class UIBarButtonItem, UILabel;

@interface WFHRBurnBurstFieldTestReadyVC : WFStaticTableViewController
{
    UILabel *_getReadyLabel;
    UILabel *_warmUpLabel;
    UILabel *_warmUpTimeLabel;
    UILabel *_moderateLabel;
    UILabel *_moderateTimeLabel;
    UILabel *_fastPaceLabel;
    UILabel *_fastPaceTimeLabel;
    UILabel *_walkLabel;
    UILabel *_walkTimeLabel;
    UIBarButtonItem *_nextButton;
}

@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *walkTimeLabel; // @synthesize walkTimeLabel=_walkTimeLabel;
@property(retain, nonatomic) UILabel *walkLabel; // @synthesize walkLabel=_walkLabel;
@property(retain, nonatomic) UILabel *fastPaceTimeLabel; // @synthesize fastPaceTimeLabel=_fastPaceTimeLabel;
@property(retain, nonatomic) UILabel *fastPaceLabel; // @synthesize fastPaceLabel=_fastPaceLabel;
@property(retain, nonatomic) UILabel *moderateTimeLabel; // @synthesize moderateTimeLabel=_moderateTimeLabel;
@property(retain, nonatomic) UILabel *moderateLabel; // @synthesize moderateLabel=_moderateLabel;
@property(retain, nonatomic) UILabel *warmUpTimeLabel; // @synthesize warmUpTimeLabel=_warmUpTimeLabel;
@property(retain, nonatomic) UILabel *warmUpLabel; // @synthesize warmUpLabel=_warmUpLabel;
@property(retain, nonatomic) UILabel *getReadyLabel; // @synthesize getReadyLabel=_getReadyLabel;
- (void).cxx_destruct;
- (void)drawLines;
- (void)viewDidLoad;

@end

