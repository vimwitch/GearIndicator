//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface WFBTLEDataStream : NSObject
{
    int pointer;
    int packetSequence;
    int bytesLeft;
    int hashPointer;
    NSData *_data;
    NSData *_sha256;
}

@property(retain, nonatomic) NSData *sha256; // @synthesize sha256=_sha256;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned short)dataCRC;
- (unsigned char)encodeHashCheckPacket:(id)arg1;
- (unsigned char)encodeDataPacket:(id)arg1;
@property(readonly) BOOL hasDataToSend;
@property(readonly, nonatomic) int headerSize;
@property(readonly, nonatomic) int dataSize;
- (void)resetPointer;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

