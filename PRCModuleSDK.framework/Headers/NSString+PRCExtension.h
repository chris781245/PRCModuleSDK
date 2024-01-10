//
//  NSString+PRCExtension.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/7.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (PRCExtension)

@end

/**
 *  获取文本的显示高度,  可变长文本显示时可能会用到
 */
@interface NSString (UIDisplayRect)

+(CGRect)heightForString:(NSString *)str Size:(CGSize)size Font:(UIFont *)font;
+(CGRect)heightForString:(NSString *)str Size:(CGSize)size Font:(UIFont *)font Lines:(NSInteger)lines;
/**
 *  根据字体和行间距获得文本高度
 *
 *  @param font  字体
 *  @param width 文本框宽度
 *  @param space 行间距 space <= 0 表示使用默认行间距
 *
 *  @return 文本所需高度
 */
- (CGFloat)getHeightWithFont:(UIFont *)font width:(CGFloat)width andLineSpacing:(CGFloat)space;
- (CGFloat)getHeightWithFont:(UIFont *)font width:(CGFloat)width;
/**
 *  单行文本所需宽度
 *
 *  @param font   字体
 *  @param height 限高
 *
 *  @return 单行文本所需宽度
 */
- (CGFloat)getWidthWithFont:(UIFont *)font height:(CGFloat)height;
/**
 *  根据字体和行间距生成attributedString
 *
 *  @param font  字体
 *  @param space 行间距
 *
 *  @return 属性字符串
 */
- (NSMutableAttributedString *)getAttributedStringWithFont:(UIFont *)font andLineSpacing:(CGFloat)space;

@end


@interface NSString (Extension)

/**
 *  去除字符串中收尾空格和换行
 *
 *  @return 去掉空格后的字符串
 */
- (NSString *)trimString;

/**
 *  计算字符串字节数，英文为1，中文为2
 *
 *  @return 字符串字节数
 */
- (NSInteger)byteCount;

/**
 *  @param pattern 正则式
 *
 *  @return 是否匹配正则式
 */
- (BOOL)isMatchedPattern:(NSString *)pattern;

/**
 *
 *  @param splitStr 插入的字符串
 *  @param eachLen  每隔几个字符插入
 *
 *  @return 返回插入新字符后的字符串
 */
- (NSString*)splitWithString:(NSString*)splitStr each:(NSUInteger)eachLen;

/**
 *  从后面添加分割符号
 *
 *  @param splitStr 插入的字符串
 *  @param eachLen  每隔几个字符插入
 *
 */
- (NSString*)endSplitWithString:(NSString*)splitStr each:(NSUInteger)eachLen;

/**
 *  用*对字符串加密
 *
 *  @return 加密后的字符串
 */
- (NSString *)secretString;

/**
 *  @param pattern 正则式
 *
 *  @return 匹配正则式的第一个字符串
 */
- (NSString *)matchStringWith:(NSString *)pattern;

/**
 *
 *  @param length 尾号长度
 *
 *  @return 长度为length的尾部字符串
 */
- (NSString *)tailByLength:(NSUInteger)length;

/**
 *
 *  @return 显示的金额字符串, 每3位用逗号分隔
 */
- (NSString *)showMoneySring;

/**
 *  url编码
 *
 */
- (NSString*)URLEncoding;

/**
 *  url解码
 *
 */
- (NSString*)URLDecoding;

/**
 *  分割url字符串去字典
 *
 */
- (NSDictionary *)divisionStr;

/**
 *  标准化字符串，去掉+86 . #
 *
 */
- (NSString *)normalPhoneStr;

- (NSString *)firstCharactorCapital;

@end

@interface NSString (Valid)

/**
 *  @return 是否是合法的邮箱
 */
- (BOOL)isValidEmail;
/**
 *  @return 是否全是数字(不含小数)
 */
- (BOOL)isValidNumber;

/**
 *  @return 是否是数字(包含小数)
 */
- (BOOL)isValidDigit;

/**
 *  @return 是否是有效的金额
 */
- (BOOL)isValidAmount;

/**
 *  @return 是否是有效身份证号码
 */
- (BOOL)isValidIDNO;

/**
 *  @return 是否有效的银行卡号
 */
- (BOOL)isValidCardNO;

/**
 *  @return 是否中文名称（汉字加间隔号）
 */
- (BOOL)isValidChineseName;


/**
 *  @return 是否有效的手机号码
 */
- (BOOL)isValidPhone;

/**
 *  @return 是否有效的交易密码 规则8-16位, 数字和字母组合
 */
- (BOOL)isValidTradePwd;

/**
 *  @return 是否是有效的邮编
 */
- (BOOL)isValidZipCode;

/**
 *  @return 是否是有效的固定电话 格式：区号-电话号码-分机号码
 */
- (BOOL)isValidLandlineTelephone;
/**
 *  @return 是否有效的交易密码 规则6-16位, 数字和字母组合
 */
- (BOOL)isValidLoginPwd;
@end


@interface NSString (Pinyin)

/**
 *  将汉字转换为拼音(带声调)
 *
 *  @return 转换后的拼音
 */
- (NSString *)pinYin;

/**
 *
 *  @return 不带声调的拼音
 */
- (NSString *)pinYinWithoutTone;

/**
 *  @return 拼音的首字母
 */
- (NSString *)firstCharactor;
/**
 *  字符串类别修复baseitem解析bug
 *
 *  @return 值
 */
- (unsigned long long)unsignedLongLongValue;

@end

NS_ASSUME_NONNULL_END
