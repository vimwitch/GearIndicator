//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WFHistoryCalendarScrollerCVC;

@protocol WFHistoryCalendarScrollerDelegate <NSObject>
- (void)calendarScroller:(WFHistoryCalendarScrollerCVC *)arg1 didUpdateStartDate:(double)arg2 endDate:(double)arg3 scope:(int)arg4;
- (void)calendarScrollerTapped:(WFHistoryCalendarScrollerCVC *)arg1;
@end
