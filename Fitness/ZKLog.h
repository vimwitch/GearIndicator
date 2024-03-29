//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSString;

@interface ZKLog : NSObject
{
    unsigned int _minimumLevel;
    NSDateFormatter *_dateFormatter;
    int _pid;
    NSString *_logFilePath;
    struct __sFILE *_logFilePointer;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property struct __sFILE *logFilePointer; // @synthesize logFilePointer=_logFilePointer;
@property(copy) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property int pid; // @synthesize pid=_pid;
@property(retain) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)levelToLabel:(unsigned int)arg1;
@property unsigned int minimumLevel; // @dynamic minimumLevel;
- (void)logFile:(char *)arg1 lineNumber:(unsigned int)arg2 level:(unsigned int)arg3 format:(id)arg4;

@end

