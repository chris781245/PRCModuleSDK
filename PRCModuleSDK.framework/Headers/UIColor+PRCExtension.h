//
//  UIColor+PRCExtension.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (PRCExtension)

- (NSString *)hexString;
+ (UIColor *)colorWithHex:(int)color;
+ (UIColor *)colorWithHexRed:(int)red green:(char)green blue:(char)blue alpha:(char)alpha;
+ (UIColor *)colorWithHexString:(NSString *)hexString;
+ (UIColor *)colorWithIntegerRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;

@end

NS_ASSUME_NONNULL_END
