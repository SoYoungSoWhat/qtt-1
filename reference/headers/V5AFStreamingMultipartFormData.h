//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "V5AFMultipartFormData-Protocol.h"

@class NSMutableURLRequest, NSString, V5AFMultipartBodyStream;

@interface V5AFStreamingMultipartFormData : NSObject <V5AFMultipartFormData>
{
    NSMutableURLRequest *_request;
    unsigned long long _stringEncoding;
    NSString *_boundary;
    V5AFMultipartBodyStream *_bodyStream;
}

@property(retain, nonatomic) V5AFMultipartBodyStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(copy, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)requestByFinalizingMultipartFormData;
- (void)throttleBandwidthWithPacketSize:(unsigned long long)arg1 delay:(double)arg2;
- (void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
- (void)appendPartWithFormData:(id)arg1 name:(id)arg2;
- (void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id *)arg5;
- (_Bool)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
- (id)initWithURLRequest:(id)arg1 stringEncoding:(unsigned long long)arg2;

@end
