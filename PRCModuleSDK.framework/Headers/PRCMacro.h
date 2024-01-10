//
//  PRCMacro.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/2.
//

#ifndef PRCMacro_h
#define PRCMacro_h

#import "Masonry.h"
#import "NSDictionary+PRCExtension.h"
#import "UIColor+PRCExtension.h"
#import "UIView+PRCExtension.h"
#import "NSDictionary+PRCExtension.h"
#import "NSArray+PRCExtension.h"
#import "PRCImage.h"
#import "UIDevice+PRCHardWare.h"
#import "UIDevice+Resolutions.h"

//#import "UIDevice+Hardware.h"

/********************************app配置******************************************/
//app名字
#define PRC_APP_NAME @""
#define PRC_APP_ID   @""
//appid
#define PRC_ITUNES_ID @""
/********************************app配置******************************************/

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
// 字体的乘数因子
#define PRC_HOMEPAGE_FONE_MULTIPLIER (0.5f)

/******************************屏幕大小******************************/
//NavBar高度
#define NAV_BAR_HEIGHT       44
//statusBar高度
#define STATUS_BAR_HEIGHT    [UIApplication sharedApplication].statusBarFrame.size.height
//section间距
#define GapBetweenSections 20
//默认间距 一般为左右边距
#define DefaultGap           15
#define PRC_TOTAL_NAV_BAR_HEIGHT   (IS_IPHONEX ? 88 : 64)
#define PRC_TAB_BAR_HEIGHT   (IS_IPHONEX ? 83 : 49)
#define PRC_BOTTOM_SAREAREA_HEIGHT (IS_IPHONEX ? 34 : 0)

//1像素, 一般为分割线的宽度
#define PRC_ONE_PIXELS       (1.f / [UIScreen mainScreen].scale)
//1像素的起点坐标偏移值
#define PRC_ONE_PIXEL_LINE_ADJUST_OFFSET   ((1.f / [UIScreen mainScreen].scale) / 2)

//获取屏幕 宽度、高度
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define scaleBy320(x) ((int)(SCREEN_WIDTH)*(x)/320)
#define DRAW_LINE_WIDTH (1/[[UIScreen mainScreen] scale])
/******************************屏幕大小******************************/

/******************************系统版本******************************/
//应用版本
#define APP_VERSION    [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

//获取系统版本
#define IOS_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

//检查系统版本
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define IS_IPHONEX    [[UIDevice currentDevice] isIphoneX]


/******************************颜色类******************************/
// 16进制颜色
#define HEXCOLOR(rgbValue) HEXACOLOR(rgbValue, 1.f)
#define HEXACOLOR(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:a]

// RGB颜色
#define RGBCOLOR(r,g,b)    RGBACOLOR(r, g, b, 1.f)
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define PRC_SEPARATOR_COLOR  HEXCOLOR(0xd8d9dc)
#define PRC_SEPARATOR_LINE_WIDTH (1/[UIScreen mainScreen].scale)
/******************************颜色类******************************/


/******************************安全*******************************/
#define SAFE_DIVISION(a,b)  (b == 0 ? (a) : ((a) / (b)))
#define SAFE_STRING(x) ([x isKindOfClass:[NSString class]]?x:([x isKindOfClass:[NSNumber class]]?[NSString stringWithFormat:@"%@",x]:@""))
///获取一个字符串转换为URL
#define URL(str) [NSURL URLWithString:[str UTF8Encoding]]

///判断字符串是否为空或者为空字符串
#define StringIsNullOrEmpty(str) (str == nil || [str isEqualToString:@""])

///判断字符串不为空并且不为空字符串
#define StringNotNullAndEmpty(str) (str != nil && ![str isEqualToString:@""])

///快速格式化一个字符串
#define _S(str,...) [NSString stringWithFormat:str, ##__VA_ARGS__]
/******************************安全*******************************/


//字体
#define SYSTEMFONT(x)       [UIFont systemFontOfSize:(x)*1.0f]

/******************************performSelector 去掉警告*******************************/
#define SuppressPerformSelectorLeakWarning(Stuff) \
do { \
_Pragma("clang diagnostic push") \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
Stuff; \
_Pragma("clang diagnostic pop") \
} while (0)
/******************************performSelector 去掉警告*******************************/


/******************************单例模式*******************************/
#undef    DEC_SINGLETON
#define DEC_SINGLETON( __class ) \
+ (__class *)sharedInstance;

#undef    DEF_SINGLETON
#define DEF_SINGLETON( __class ) \
+ (__class *)sharedInstance \
{ \
static dispatch_once_t once; \
static __class * __singleton__; \
dispatch_once( &once, ^{ __singleton__ = [[__class alloc] init]; } ); \
return __singleton__; \
}
/******************************单例模式*******************************/


/******************************类型转换******************************/
//转成NSString
#define LONGSTR(a)    [NSString stringWithFormat:@"%ld", a]
#define INTSTR(a)     [NSString stringWithFormat:@"%d", a]
#define LLONGSTR(a)   [NSString stringWithFormat:@"%lld", a]
#define BOOLSTR(a)    [NSString stringWithFormat:@"%d", a ? 1 : 0]
#define FLOATSTR(a)   [NSString stringWithFormat:@"%f", a]
#define DOUBLESTR(a)  [NSString stringWithFormat:@"%lf", a]
#if __LP64__ || (TARGET_OS_EMBEDDED && !TARGET_OS_IPHONE) || TARGET_OS_WIN32 || NS_BUILD_32_LIKE_64
#define INTEGERSTR(a)  LONGSTR(a)
#else
#define INTEGERSTR(a)  INTSTR(a)
#endif

//转成NSNumber
#define BOOLNUM(a)    [NSNumber numberWithBool:a]
#define INTNUM(a)     [NSNumber numberWithInt:a]
#define LONGNUM(a)    [NSNumber numberWithLong:a]
#define LLONGNUM(a)   [NSNumber numberWithLongLong:a]
#define FLOATNUM(a)   [NSNumber numberWithFloat:a]
#define DOUBLENUM(a)  [NSNumber numberWithDouble:a]
/******************************类型转换******************************/

#endif /* PRCMacro_h */
