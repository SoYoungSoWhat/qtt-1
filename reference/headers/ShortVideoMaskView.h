//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface ShortVideoMaskView : UIView
{
    long long _shortVideoMaskViewType;
    UIImageView *_imgv;
}

@property(retain, nonatomic) UIImageView *imgv; // @synthesize imgv=_imgv;
@property(nonatomic) long long shortVideoMaskViewType; // @synthesize shortVideoMaskViewType=_shortVideoMaskViewType;
- (void).cxx_destruct;
- (void)configUI:(long long)arg1;
- (void)layoutUI;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
