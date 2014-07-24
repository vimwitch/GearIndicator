//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSUUID, WFDisplayElement, WFDisplayGlobalString;

@interface WFDisplayUpdateItem : NSObject
{
    WFDisplayElement *_element;
    WFDisplayGlobalString *_globalString;
    int _property;
    BOOL _forceUpdate;
    NSDate *_dateCreated;
    NSUUID *_batchUUID;
}

+ (id)displayUpdateItemWithGlobalString:(id)arg1 property:(int)arg2;
+ (id)displayUpdateItemWithElement:(id)arg1 property:(int)arg2;
@property(retain, nonatomic) NSUUID *batchUUID; // @synthesize batchUUID=_batchUUID;
@property(readonly, retain, nonatomic) WFDisplayGlobalString *globalString; // @synthesize globalString=_globalString;
@property(retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(nonatomic) BOOL forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(readonly, nonatomic) int property; // @synthesize property=_property;
@property(readonly, retain, nonatomic) WFDisplayElement *element; // @synthesize element=_element;
- (BOOL)isEqual:(id)arg1;
- (id)updateData;
- (id)key;
- (unsigned char)pageBinaryKey;
- (void)dealloc;
- (id)initWithGlobalString:(id)arg1 property:(int)arg2;
- (id)initWithElement:(id)arg1 property:(int)arg2;

@end
