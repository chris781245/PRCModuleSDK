//
//  PRCWebView.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/3.
//

#import <UIKit/UIKit.h>
#import "PRCMacro.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PRCWebViewNavigationType) {
    PRCWebViewNavagationTypeLinkActivated,
    PRCWebViewNavagationTypeFormSubmitted,
    PRCWebViewNavagationTypeBackForward,
    PRCWebViewNavagationTypeReload,
    PRCWebViewNavagationTypeFormResubmitted,
    PRCWebViewNavagationTypeOther = -1,
} ;

extern NSString *const blankWebUrl;

@class PRCWebView;

@protocol PRCWebViewDelegate <NSObject>

@optional

- (BOOL)prcWebView:(PRCWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(PRCWebViewNavigationType)navigationType;

- (void)prcWebviewStartLoad:(PRCWebView *)webView;

- (void)prcWebviewFinishLoad:(PRCWebView *)webView;

- (void)prcWebview:(PRCWebView *)webView loadFailed:(NSError *)error;

- (void)prcWebview:(PRCWebView *)webView updateProgress:(float)progress;
@end


@interface PRCWebView : UIView

@property (nonatomic, weak) id<PRCWebViewDelegate> delegate;

@property (nonatomic, readonly, strong) NSURL *url;
@property (nonatomic, readonly, strong) UIScrollView *scrollView;

@property (nonatomic, readonly, assign) BOOL canGoBack;

@property (nonatomic, readonly, assign) BOOL canGoForward;

@property (nonatomic, readonly, assign) BOOL isLoading;



//是否支持媒体播放
@property (nonatomic, assign)BOOL allowsInlineMediaPlayback;
@property (nonatomic, assign) BOOL scalesPageToFit;
//是否启用WKWebView,PRCWebView还有其他逻辑，不能根据此来判断是否使用的就是WKWebView。
//可以根据usingWKWebView的返回来判断
@property (nonatomic, strong) NSString *currentRequestUrl;
/**
 是否加载loading条
 */
@property (nonatomic, assign) BOOL isHaveLoading;

/**
新版UA
 */
@property (nonatomic, copy) NSString *resetUA;

- (void)evaluateJavaScript:(NSString *)javaScriptString completionHandler:(void (^ __nullable)(__nullable id result, NSError * __nullable error))completionHandler;

- (void)cancelSyncEvaluateJs;



- (void)reload;
- (void)stopLoading;

- (void)goBack;
- (void)goForward;

- (void)loadUrl:(NSString *)url;

- (void)loadRequest:(NSURLRequest *)request;

- (void)loadHTMLString:(NSString *)string baseURL:(nullable NSURL *)baseURL;


- (void)resetCookie;

- (void)injectResponseName:(NSString *)name func:(void(^)(NSDictionary *params))funcbody;

- (CGFloat)contentHeight;

@end

NS_ASSUME_NONNULL_END
