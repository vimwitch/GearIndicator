//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSDateFormatter, NSFetchedResultsController, UIButton, UIView, WFFormatterCentre, WFWorkoutMapSnapshot;

@interface WFHistoryTimelineTVC : UITableViewController <NSFetchedResultsControllerDelegate>
{
    BOOL _sendsDelegateScrollMessages;
    id <WFHistoryTimelineDatasource> _dataSource;
    id <WFHistoryTimelineDelegate> _delegate;
    UIView *_importGarminView;
    NSFetchedResultsController *_fetchWorkoutsResultsController;
    WFFormatterCentre *_formatterCentre;
    NSDateFormatter *_dateFormatter;
    UIButton *_importGarminButton;
    WFWorkoutMapSnapshot *_workoutSnapshot;
}

@property(retain, nonatomic) WFWorkoutMapSnapshot *workoutSnapshot; // @synthesize workoutSnapshot=_workoutSnapshot;
@property(nonatomic) __weak UIButton *importGarminButton; // @synthesize importGarminButton=_importGarminButton;
@property(nonatomic) BOOL sendsDelegateScrollMessages; // @synthesize sendsDelegateScrollMessages=_sendsDelegateScrollMessages;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) WFFormatterCentre *formatterCentre; // @synthesize formatterCentre=_formatterCentre;
@property(retain, nonatomic) NSFetchedResultsController *fetchWorkoutsResultsController; // @synthesize fetchWorkoutsResultsController=_fetchWorkoutsResultsController;
@property(nonatomic) __weak UIView *importGarminView; // @synthesize importGarminView=_importGarminView;
@property(nonatomic) __weak id <WFHistoryTimelineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WFHistoryTimelineDatasource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollToDateRangeWithStartDate:(double)arg1 endDate:(double)arg2;
@property(readonly, nonatomic) double firstDate;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned int)arg4 newIndexPath:(id)arg5;
- (void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned int)arg3 forChangeType:(unsigned int)arg4;
- (void)controllerWillChangeContent:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)workoutPredicate;
- (id)workoutFilter;
- (void)importGarmin:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)presentHistoryDetailWithWorkout:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

@end

