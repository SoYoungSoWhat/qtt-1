//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSString, UIColor, UIFont, UIImage;

@interface PicModel : LCBaseModel
{
    NSString *_background;
    NSString *_qr_url;
    NSString *_word;
    UIColor *_color;
    UIFont *_font;
    UIImage *_image;
    NSString *_type;
    struct CGRect _rect;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSString *qr_url; // @synthesize qr_url=_qr_url;
@property(retain, nonatomic) NSString *background; // @synthesize background=_background;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1;

@end
