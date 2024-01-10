//
//  UIImage+PRCExtension.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (PRCExtension)

+ (UIImage *)imgForColor:(UIColor *)color;
+ (UIImage *)imgForColor:(UIColor *)color size:(CGSize)size;
- (UIImage *)stretchImg;

+ (UIImage *)imgWithColor:(UIColor *)color
               rectCorner:(UIRectCorner)rectCorner
                   bounds:(CGRect)bounds
              cornerRadii:(CGSize)cornerRadii;

/**
 *  将渐变色转换成图片
 *
 *  @param colors 渐变色数组，元素类型是UIColor
 *  @param bounds 图片的frame
 *
 *  @return 图片
 */
+ (UIImage *)imgWithColors:(NSArray *)colors
                    bounds:(CGRect)bounds;


/**
 *  将渐变色转换成图片
 *
 */
+ (UIImage *)imgWithColors:(NSArray *)colors locations:(NSArray<NSNumber *> *)locations bounds:(CGRect)bounds startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

/**
 *  将渐变色转换成图片
 *
 *  @param colors 渐变色数组，元素类型是UIColor
 *  @param bounds 图片的frame
 *  @param startPoint 渐变色起点
 *  @param endPoint   渐变色终点
 *
 *  @return 图片
 */
+ (UIImage *)imgWithColors:(NSArray *)colors bounds:(CGRect)bounds startPoint:(CGPoint)startPoint endPoint:(CGPoint)endPoint;

/**
 *
 *
 *  @param color  圆颜色
 *  @param radius 半径
 *
 *  @return 生成的圆的图片
 */
+ (UIImage *)circleImgWithColor:(UIColor *)color radius:(CGFloat)radius;

@end

NS_ASSUME_NONNULL_END
