//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFShareLocalActivity.h"

#import "MFMailComposeViewControllerDelegate.h"

@class UIViewController;

@interface WFShareDebugLogActivity : WFShareLocalActivity <MFMailComposeViewControllerDelegate>
{
    UIViewController *_activityViewController;
}

+ (id)getWorkoutTimestampStringForWorkout:(id)arg1;
+ (id)logFilesForWorkout:(id)arg1;
+ (BOOL)workoutHasDebugLogFiles:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)file:(id)arg1 WithDescription:(id)arg2;
- (void)attachFilesToEmail:(id *)arg1 includeDescription:(id)arg2;
- (void)attachFilesToEmail:(id *)arg1;
- (void)performActivity;
- (id)activityViewController;
- (id)init;

@end

