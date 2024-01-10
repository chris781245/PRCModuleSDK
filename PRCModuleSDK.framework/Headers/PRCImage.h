//
//  PRCImage.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PRCImage : UIImage

/**
 *    获取image
 *
 *    @param name 图片名字
 *
 */
+ (nullable UIImage *)imageForName:(nonnull NSString *)name;

/**
 *     获取image
 *
 *    @param name   图片名字
 *    @param bundle 图片的bundle
 *
 */
+ (nullable UIImage *)imageForName:(nonnull NSString *)name bundle:(nullable NSString *)bundle;

/**
 *  获取图片 缓存 底层【UIImage imageWithNamed】
 *
 *  @param name 图片名字
 *
 */
+ (nullable UIImage *)cacheImageForName:(nonnull NSString *)name;

/**
 *  获取图片
 *
 *  @param name   图片名字
 *  @param bundle bundle
 *
 */
+ (nullable UIImage *)cacheImageForName:(nonnull NSString *)name bundle:(nullable NSString *)bundle;

@end

NS_ASSUME_NONNULL_END
