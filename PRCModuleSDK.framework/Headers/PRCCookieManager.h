//
//  PRCCookieManager.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/3.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import "PRCMacro.h"

NS_ASSUME_NONNULL_BEGIN

@interface PRCCookieManager : NSObject

DEC_SINGLETON(PRCCookieManager)

- (void)setCommonCookie:(NSHTTPCookie *)cookie;
- (void)deleteCommonCookie:(NSHTTPCookie *)cookie;
- (void)setCookie:(NSHTTPCookie *)cookie forWebView:(WKWebView *)webView;
- (void)deleteCookie:(NSHTTPCookie *)cookie forWebView:(WKWebView *)webView;

+ (void)syncRequestCookie:(NSMutableURLRequest *)request;

+ (void)copyNSHTTPCookieStorageToWKHTTPCookieStoreForWebViewOniOS11:(WKWebView *)webView withCompletion:(nullable void (^)(void))completion;
+ (void)copyWKHTTPCookieStoreToNSHTTPCookieStorageForWebViewOniOS11:(WKWebView *)webView withCompletion:(nullable void (^)(void))completion;

+ (NSArray *)cookieJavaScriptSourceArray;

- (void)addWebView:(WKWebView *)webview;
- (void)deleteWebView:(WKWebView *)webview;

@end

NS_ASSUME_NONNULL_END
