//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage, UIViewController, UIViewController<WFWorkoutWidgetProtocol>, UIWindow, WFColorPalette;

@protocol WFThemeProtocol <NSObject>
+ (id <WFThemeProtocol>)theme;
- (UIImage *)splashScreenImage;
- (UIViewController<WFWorkoutWidgetProtocol> *)instantiateWorkoutViewController;
- (UIViewController *)instantiateStartViewController;
- (UIWindow *)instantiateApplicationWindow;

@optional
- (WFColorPalette *)colorPalette;
@end
