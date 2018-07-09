//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LCRouterServiceProtocol-Protocol.h"

@class NSString;

@interface RouterService : NSObject <LCRouterServiceProtocol>
{
}

+ (void)showLocalPushTopView;
+ (id)appDelegateApnsHandlerLaunchOptions;
+ (_Bool)appDelegateApnsHandlerAllowedNotification;
+ (_Bool)appDelegateNeedForceShowRedEnvelope;
+ (_Bool)containsRootInArr:(id)arg1;
+ (_Bool)containsGlobalInArr:(id)arg1;
+ (id)pageCMDMap;
+ (id)pageIDMap;
+ (id)pageMap;
+ (id)rootPageIds;
+ (_Bool)checkPageEnabledWithIDs:(id)arg1;
+ (void)showAbout;
+ (void)showReport:(id)arg1;
+ (void)pushAdsWithDpUrl:(id)arg1 dpCurl:(id)arg2 cUrl:(id)arg3 isLunchAd:(_Bool)arg4 needTrace:(_Bool)arg5;
+ (void)gotoQKInviteViewController;
+ (void)gotoQKMissionViewController;
+ (void)showWemediaPage:(id)arg1;
+ (void)showWebView:(id)arg1;
+ (void)selectViewName:(id)arg1;
+ (void)mappingConfigWithControllerName:(id)arg1;
+ (_Bool)handleScheme:(id)arg1;
+ (_Bool)handleSchemeURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
