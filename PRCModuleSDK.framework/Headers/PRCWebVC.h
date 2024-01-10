//
//  PRCWebVC.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/3.
//

#import <UIKit/UIKit.h>
#import "PRCWebView.h"

NS_ASSUME_NONNULL_BEGIN

/**
 这个类不要直接使用 也不要继承 需要继承ActivityViewController ！！！！！！！！！！
 */
@interface PRCWebVC : UIViewController <PRCWebViewDelegate>

// 上个界面的参数
@property (nonatomic, strong) NSDictionary * _Nullable startParams;

// webview
@property (nonatomic, strong) PRCWebView *innerWebView;

/**
 *  是否支持post请求
 */
@property (nonatomic, assign) BOOL isPost;



/**
 *  是否自动请求url，默认YES
 */
@property (nonatomic, assign) BOOL autoRequestUrl;

/**
 *  是否启用WKWebView，默认NO
    是否启用WKWebView,PRCWebViewVC还有其他逻辑，不能根据此来判断使用的就是WKWebView。
    可以根据innerWebView的usingWKWebView的返回来判断
 */
@property (nonatomic, assign) BOOL enableWKWebView;

/**
 开放goback方法，方便继承vc获取goback消息
 */
- (void)webViewBack;

/**
 开放refresh方法，方便继承vc获取refresh消息
 */
- (void)webviewAction;


/**
 加载界面只给子类用

 @param url
 */
- (void)loadUrl:(NSString *)url;

- (void)setUpUI;

- (NSString *)url;

- (void)closeView;

- (void)loadPropertyFromStartParams;

@end

NS_ASSUME_NONNULL_END
