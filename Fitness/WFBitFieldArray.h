//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WFBitFieldArray : NSObject
{
    unsigned long values[32];
    unsigned char count;
    unsigned char ucIndex;
}

+ (id)fromBitField:(unsigned long)arg1;
@property(readonly, nonatomic) unsigned char count; // @synthesize count;
- (void)reset;
- (unsigned long)next;
- (id)initWithBitField:(unsigned long)arg1;
@property(readonly, nonatomic) BOOL hasNext;
- (unsigned long)first;
- (void)dealloc;
- (id)init;

@end

