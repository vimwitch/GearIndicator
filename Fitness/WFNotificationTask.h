//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface WFNotificationTask : NSObject
{
    BOOL _showing;
    UIView *_view;
    int _style;
    CDUnknownBlockType _willShowBlock;
    CDUnknownBlockType _didTimeoutBlock;
    CDUnknownBlockType _didDismissBlock;
    double _duration;
}

+ (id)statusBarNotificationWithView:(id)arg1 duration:(double)arg2 timeout:(double)arg3 didTimeout:(CDUnknownBlockType)arg4 willShow:(CDUnknownBlockType)arg5 didDismiss:(CDUnknownBlockType)arg6;
+ (id)navigationBarNotificationWithView:(id)arg1 duration:(double)arg2 timeout:(double)arg3 didTimeout:(CDUnknownBlockType)arg4 willShow:(CDUnknownBlockType)arg5 didDismiss:(CDUnknownBlockType)arg6;
+ (id)notificationWithView:(id)arg1 style:(int)arg2 duration:(double)arg3 timeout:(double)arg4 didTimeout:(CDUnknownBlockType)arg5 willShow:(CDUnknownBlockType)arg6 didDismiss:(CDUnknownBlockType)arg7;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didTimeoutBlock; // @synthesize didTimeoutBlock=_didTimeoutBlock;
@property(copy, nonatomic) CDUnknownBlockType willShowBlock; // @synthesize willShowBlock=_willShowBlock;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic, getter=isShowing) BOOL showing; // @synthesize showing=_showing;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)cancel;
- (void)didTimeout;
- (void)cancelTimeout;
- (void)setTimeout:(double)arg1;
- (void)didDismiss;
- (void)willShow;

@end

