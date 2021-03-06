//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLLabel.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MLLink, NSDictionary, NSMutableArray, NSString, UILongPressGestureRecognizer;
@protocol MLLinkLabelDelegate;

@interface MLLinkLabel : MLLabel <UIGestureRecognizerDelegate>
{
    _Bool _allowLineBreakInsideLinks;
    _Bool _dontReCreateLinks;
    unsigned long long _dataDetectorTypes;
    unsigned long long _dataDetectorTypesOfAttributedLinkValue;
    NSDictionary *_linkTextAttributes;
    NSDictionary *_activeLinkTextAttributes;
    double _activeLinkToNilDelay;
    CDUnknownBlockType _didClickLinkBlock;
    CDUnknownBlockType _didLongPressLinkBlock;
    id <MLLinkLabelDelegate> _delegate;
    CDUnknownBlockType _beforeAddLinkBlock;
    NSMutableArray *_links;
    MLLink *_activeLink;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) _Bool dontReCreateLinks; // @synthesize dontReCreateLinks=_dontReCreateLinks;
@property(retain, nonatomic) MLLink *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(copy, nonatomic) CDUnknownBlockType beforeAddLinkBlock; // @synthesize beforeAddLinkBlock=_beforeAddLinkBlock;
@property(nonatomic) __weak id <MLLinkLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType didLongPressLinkBlock; // @synthesize didLongPressLinkBlock=_didLongPressLinkBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickLinkBlock; // @synthesize didClickLinkBlock=_didClickLinkBlock;
@property(nonatomic) _Bool allowLineBreakInsideLinks; // @synthesize allowLineBreakInsideLinks=_allowLineBreakInsideLinks;
@property(nonatomic) double activeLinkToNilDelay; // @synthesize activeLinkToNilDelay=_activeLinkToNilDelay;
@property(retain, nonatomic) NSDictionary *activeLinkTextAttributes; // @synthesize activeLinkTextAttributes=_activeLinkTextAttributes;
@property(retain, nonatomic) NSDictionary *linkTextAttributes; // @synthesize linkTextAttributes=_linkTextAttributes;
@property(nonatomic) unsigned long long dataDetectorTypesOfAttributedLinkValue; // @synthesize dataDetectorTypesOfAttributedLinkValue=_dataDetectorTypesOfAttributedLinkValue;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
- (void).cxx_destruct;
- (_Bool)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (void)invalidateDisplayForLinks;
- (id)addLinks:(id)arg1;
- (id)addLinkWithType:(unsigned long long)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (_Bool)addLink:(id)arg1;
- (void)longPressGestureDidFire:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linksWithString:(id)arg1;
- (unsigned long long)linkTypeOfString:(id)arg1 withDataDetectorTypes:(unsigned long long)arg2;
- (id)regexpsWithDataDetectorTypes:(unsigned long long)arg1;
- (id)attributedTextForTextStorageFromLabelProperties;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)commonInit;
- (void)reSetText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

