//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QKBaseViewController.h"

#import "IMYWebViewDelegate-Protocol.h"
#import "LCActionSheetDelegate-Protocol.h"
#import "LCFloatViewDelegate-Protocol.h"
#import "LCWebErrorViewDelegate-Protocol.h"
#import "QKCRMangerViewDelegate-Protocol.h"
#import "TSWebViewDelegate-Protocol.h"
#import "articlePieChartViewDelegate-Protocol.h"

@class IMYWebView, JavaScriptOC, LCFloatView, NJKWebViewProgressView, NSDate, NSString, QKContentModel, QKContentToolBar, QKReadAntiCheatingManager, QKReadAntiCheatingModel, QKReadAntiCheatingView, articlePieChartView, floatingView, read_conf_Model;

@interface QKContentViewController : QKBaseViewController <IMYWebViewDelegate, LCActionSheetDelegate, LCWebErrorViewDelegate, QKCRMangerViewDelegate, articlePieChartViewDelegate, LCFloatViewDelegate, TSWebViewDelegate>
{
    double _oldPanOffsetY;
    _Bool _is_loading;
    _Bool _is_report_read_time;
    _Bool _is_js_called;
    long long _cdn_ecount;
    NJKWebViewProgressView *_progressView;
    NSDate *_contentInitTime;
    long long _contentLoadStyle;
    _Bool _isContetLoadTimeReport;
    _Bool _isHasGetContent;
    _Bool _readTimerRight;
    _Bool _webLoaded;
    QKContentModel *_contentModel;
    QKContentModel *_fromContentModel;
    JavaScriptOC *_javaScript;
    NSString *_callback;
    QKContentToolBar *_toolBar;
    IMYWebView *_webView;
    NSString *_request_url;
    articlePieChartView *_pieChartView;
    read_conf_Model *_readConfModel;
    floatingView *_floatingView;
    LCFloatView *_lcFloatView;
    QKReadAntiCheatingView *_readAntiCheatingView;
    QKReadAntiCheatingManager *_readAntiCheatingManager;
    QKReadAntiCheatingModel *_readAntiCheatingModel;
}

+ (id)contentController:(id)arg1;
@property(nonatomic) _Bool webLoaded; // @synthesize webLoaded=_webLoaded;
@property(retain, nonatomic) QKReadAntiCheatingModel *readAntiCheatingModel; // @synthesize readAntiCheatingModel=_readAntiCheatingModel;
@property(retain, nonatomic) QKReadAntiCheatingManager *readAntiCheatingManager; // @synthesize readAntiCheatingManager=_readAntiCheatingManager;
@property(retain, nonatomic) QKReadAntiCheatingView *readAntiCheatingView; // @synthesize readAntiCheatingView=_readAntiCheatingView;
@property(nonatomic) _Bool readTimerRight; // @synthesize readTimerRight=_readTimerRight;
@property(retain, nonatomic) LCFloatView *lcFloatView; // @synthesize lcFloatView=_lcFloatView;
@property(retain, nonatomic) floatingView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) read_conf_Model *readConfModel; // @synthesize readConfModel=_readConfModel;
@property(retain, nonatomic) articlePieChartView *pieChartView; // @synthesize pieChartView=_pieChartView;
@property(retain, nonatomic) NSString *request_url; // @synthesize request_url=_request_url;
@property(retain, nonatomic) IMYWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) QKContentToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isHasGetContent; // @synthesize isHasGetContent=_isHasGetContent;
@property(retain, nonatomic) JavaScriptOC *javaScript; // @synthesize javaScript=_javaScript;
@property(retain, nonatomic) QKContentModel *fromContentModel; // @synthesize fromContentModel=_fromContentModel;
@property(retain, nonatomic) QKContentModel *contentModel; // @synthesize contentModel=_contentModel;
- (void).cxx_destruct;
- (void)redPacket:(id)arg1;
- (void)showCoinValue:(id)arg1 message:(id)arg2;
- (void)gotoComment;
- (void)commentAction:(id)arg1;
- (void)storeAction;
- (void)shareAction;
- (void)showFonts;
- (void)CRMangerUnlike:(id)arg1;
- (void)CRMangerReport:(id)arg1;
- (void)showError:(id)arg1 webView:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)login:(id)arg1;
- (void)loginCallBack;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didCreateJavaScriptContext:(id)arg2;
- (void)attAction:(id)arg1 callback:(id)arg2;
- (void)perfectHideTooBar:(_Bool)arg1;
- (void)hideToolBar:(_Bool)arg1;
- (void)showArticleNotFoundView;
- (void)loadContent;
- (void)load;
- (void)notification_reload_subcript:(id)arg1;
- (void)reload;
- (void)contentFontChanged;
- (void)didReport;
- (void)didReload;
- (void)closeAction;
- (void)popped;
- (void)back;
- (void)removeAppACtiveObservers;
- (void)applicationDidEnterBackground;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)addAppACtiveObservers;
- (void)reportReadTimeDuration;
- (void)recordReadTimeDuration;
- (void)initReportReadDuration;
- (id)webViewEx;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleUIApplicatioDidEnterBackground:(id)arg1;
- (void)pVReport;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)endPlayVideo:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)floatViewDidEndMove:(id)arg1;
- (void)floatViewDidMove:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)pieChartNodePause:(float)arg1;
- (void)pieChartFull:(float)arg1;
- (void)pieChartProgress:(float)arg1;
- (void)pieChartSelectMothod;
- (void)startTimerAnimation;
- (_Bool)isReadTimerRight;
- (struct CGRect)updateFloatingPoint;
- (void)readTimerConfig;
- (void)nextReadtimer;
- (void)currentReadtimer;
- (double)lengthLimitWithWebHeight:(double)arg1;
- (void)readAntiCheatingRequest;
- (void)configReadAntiCheating;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
