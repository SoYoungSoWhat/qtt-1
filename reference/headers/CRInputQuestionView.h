//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, UITableView;
@protocol CRQuestionViewDelegate;

@interface CRInputQuestionView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *selectedArray;
    UILabel *_headLabel;
    UITableView *_contentTableView;
    UILabel *_emptyLabel;
    NSArray *_questionArray;
    id <CRQuestionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CRQuestionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *questionArray; // @synthesize questionArray=_questionArray;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) UILabel *headLabel; // @synthesize headLabel=_headLabel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
