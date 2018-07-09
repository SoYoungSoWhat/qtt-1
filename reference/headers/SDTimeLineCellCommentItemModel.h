//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString;

@interface SDTimeLineCellCommentItemModel : LCBaseModel
{
    int _pass;
    NSString *_parent_comment_id;
    NSString *_comment_id;
    NSString *_commentString;
    NSString *_firstUserName;
    NSString *_firstUserId;
    NSString *_secondUserName;
    NSString *_secondUserId;
    long long _is_comment_admin;
    NSString *_content_id;
    NSString *_tips;
}

@property(retain, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) int pass; // @synthesize pass=_pass;
@property(copy, nonatomic) NSString *content_id; // @synthesize content_id=_content_id;
@property(nonatomic) long long is_comment_admin; // @synthesize is_comment_admin=_is_comment_admin;
@property(copy, nonatomic) NSString *secondUserId; // @synthesize secondUserId=_secondUserId;
@property(copy, nonatomic) NSString *secondUserName; // @synthesize secondUserName=_secondUserName;
@property(copy, nonatomic) NSString *firstUserId; // @synthesize firstUserId=_firstUserId;
@property(copy, nonatomic) NSString *firstUserName; // @synthesize firstUserName=_firstUserName;
@property(copy, nonatomic) NSString *commentString; // @synthesize commentString=_commentString;
@property(copy, nonatomic) NSString *comment_id; // @synthesize comment_id=_comment_id;
@property(copy, nonatomic) NSString *parent_comment_id; // @synthesize parent_comment_id=_parent_comment_id;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
