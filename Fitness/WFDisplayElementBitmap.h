//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFDisplayElement.h"

@class NSMutableArray, NSString;

@interface WFDisplayElementBitmap : WFDisplayElement
{
    NSString *_imageBase64;
    int _transparentColor;
}

+ (id)instanceFromDictionary:(id)arg1;
@property(copy, nonatomic) NSString *imageBase64; // @synthesize imageBase64=_imageBase64;
@property(nonatomic) int transparentColor; // @synthesize transparentColor=_transparentColor;
- (int)colorForByte:(unsigned char)arg1;
- (unsigned char)bitsPerPixel;
- (BOOL)hasValidBitsPerPixel;
- (id)imageData;
- (id)binaryRepresentationForVersion:(int)arg1;
- (id)dictionaryRepresentation;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)image;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *errors; // @dynamic errors;

@end

