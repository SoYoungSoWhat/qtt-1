//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CRInputFunctionView, NSString, V5VoiceMessage;

@protocol CRInputFunctionViewDelegate <NSObject>
- (_Bool)isCRInputFunctionViewEnableVoiceRecord:(CRInputFunctionView *)arg1;
- (void)CRInputFunctionView:(CRInputFunctionView *)arg1 selectMoreFunctionOfTag:(NSString *)arg2;
- (void)CRInputFunctionView:(CRInputFunctionView *)arg1 selectMoreFunctionOfIndex:(long long)arg2;
- (void)CRInputFunctionView:(CRInputFunctionView *)arg1 willChangeOriginY:(double)arg2;
- (void)CRInputFunctionView:(CRInputFunctionView *)arg1 shouldReloadData:(_Bool)arg2;
- (_Bool)CRInputFunctionView:(CRInputFunctionView *)arg1 sendVoiceMessage:(V5VoiceMessage *)arg2;
- (_Bool)CRInputFunctionView:(CRInputFunctionView *)arg1 sendMessage:(NSString *)arg2;
@end
