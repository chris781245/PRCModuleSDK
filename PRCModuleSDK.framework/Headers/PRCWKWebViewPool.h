//
//  PRCWKWebViewPool.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/3.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PRCWKWebViewPool : NSObject

@property (nonatomic, assign) NSUInteger maxCacheNum;

+ (instancetype)sharedInstance;
//主动创建一个待复用的webview
- (void)prepareReuseWebView;

- (WKWebView *)getReusedWebView;

- (void)recycleReusedWebView:(WKWebView *)webView;

@end

NS_ASSUME_NONNULL_END
