//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class ClipBoardGifModel, NSString, UITextField;

@interface InviteCodeViewController : QKBaseViewController <UITextFieldDelegate>
{
    int _from;
    ClipBoardGifModel *_clipboardGif;
    QKBaseViewController *_parentVctr;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) QKBaseViewController *parentVctr; // @synthesize parentVctr=_parentVctr;
@property(retain, nonatomic) ClipBoardGifModel *clipboardGif; // @synthesize clipboardGif=_clipboardGif;
@property(nonatomic) int from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)confirmAction;
- (void)laterAction;
- (void)hideKeybord;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)initUI;
- (void)viewDidLoad;
- (void)back;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
