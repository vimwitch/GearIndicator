//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFormatter;

@interface SChartTickLabelFormatter : NSObject
{
    NSFormatter *formatter;
}

+ (id)dateFormatter;
+ (id)numberFormatter;
@property(retain, nonatomic) NSFormatter *formatter; // @synthesize formatter;
- (id)dateFormatter;
- (id)numberFormatter;
- (BOOL)isNumberFormatter;
- (id)stringForObjectValue:(id)arg1 onAxis:(id)arg2;
- (void)dealloc;

@end
