//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface ShareItem : UIControl
{
    UIImageView *_shareIconImgv;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *shareIconImgv; // @synthesize shareIconImgv=_shareIconImgv;
- (void).cxx_destruct;
- (void)layoutUI;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
