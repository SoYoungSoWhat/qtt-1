//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSString, UMReachability;

@interface UMConfigureCache : NSObject
{
    _Bool _encryptEnabled;
    _Bool _logEnabled;
    int _eNetStatus;
    NSString *_appkey;
    NSString *_channel;
    NSString *_wraperType;
    NSString *_wraperVersion;
    NSOperationQueue *_slnetworkerQueue;
    NSMutableDictionary *_cachedDict;
    UMReachability *_internetReachability;
    unsigned long long _backgroundTaskIdentifier;
}

+ (int)counterThenIncWithKey:(id)arg1;
+ (void)resetCounterWithKey:(id)arg1;
+ (void)accumulateCount:(int)arg1 withKey:(id)arg2;
+ (void)incCounterForKey:(id)arg1;
+ (void)removeObjectForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)objectWithKey:(id)arg1;
+ (void)memoryCacheObject:(id)arg1 forKey:(id)arg2;
+ (id)memoryCacheObjectWithKey:(id)arg1;
+ (id)sharedInstance;
@property unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) UMReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain) NSMutableDictionary *cachedDict; // @synthesize cachedDict=_cachedDict;
@property(retain) NSOperationQueue *slnetworkerQueue; // @synthesize slnetworkerQueue=_slnetworkerQueue;
@property int eNetStatus; // @synthesize eNetStatus=_eNetStatus;
@property _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property _Bool encryptEnabled; // @synthesize encryptEnabled=_encryptEnabled;
@property(copy) NSString *wraperVersion; // @synthesize wraperVersion=_wraperVersion;
@property(copy) NSString *wraperType; // @synthesize wraperType=_wraperType;
@property(copy) NSString *channel; // @synthesize channel=_channel;
@property(copy) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (void)endBackgroundTask;
- (void)beginBackgroundTask;
- (void)appInactivate:(id)arg1;
- (void)appActivate:(id)arg1;
- (void)flushStatelessFile;
- (void)updateReachability:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)monitorNetwork;
- (void)dealloc;
- (id)init;
- (void)load;

@end
