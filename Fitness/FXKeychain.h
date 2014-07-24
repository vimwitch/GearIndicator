//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FXKeychain : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
    int _accessibility;
}

+ (id)defaultKeychain;
@property(nonatomic) int accessibility; // @synthesize accessibility=_accessibility;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (BOOL)removeObjectForKey:(id)arg1;
- (BOOL)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2 accessibility:(int)arg3;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)init;

@end
