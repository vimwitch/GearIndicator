//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SChartAnnotationManager.h"

@class NSMutableArray;

@interface SChartCartesianAnnotationManager : NSObject <SChartAnnotationManager>
{
    NSMutableArray *_annotations;
    id <SChartErrorHandler> _errorHandler;
}

@property(retain, nonatomic) id <SChartErrorHandler> errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSMutableArray *annotations; // @synthesize annotations=_annotations;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (id)getAnnotations;
- (void)replaceAnnotationAtIndex:(int)arg1 withAnnotation:(id)arg2 onCanvas:(id)arg3;
- (void)addAnnotation:(id)arg1 toCanvas:(id)arg2;
- (void)dealloc;
- (id)initWithErrorHandler:(id)arg1;

@end
