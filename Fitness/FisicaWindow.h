//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIEvent;

@interface FisicaWindow : UIWindow
{
    BOOL introStarted;
    UIEvent *_lastEvent;
}

@property(retain, nonatomic) UIEvent *lastEvent; // @synthesize lastEvent=_lastEvent;
- (void).cxx_destruct;
- (void)becomeKeyWindow;
- (void)registerForRemote;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)sendEvent:(id)arg1;

@end

