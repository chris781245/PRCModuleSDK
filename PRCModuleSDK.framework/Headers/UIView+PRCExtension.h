//
//  UIView+PRCExtension.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/2.
//

#import <UIKit/UIKit.h>

// 过期提醒
#define PRCDeprecated(instead)  NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

@interface UIView (PRCExtension)

/**
 *  @return frame.origin.x
 */
- (CGFloat)prcLeft;

/**
 *  @return CGRectGetMaxX(self.frame)
 */
- (CGFloat)prcRight;

/**
 *  @return frame.origin.y
 */
- (CGFloat)prcTop;

/**
 *  @return CGRectGetMaxY(self.frame)
 */
- (CGFloat)prcBottom;

/**
 *  @return frame.size.width
 */
- (CGFloat)prcWidth;

/**
 *  @return frame.size.height
 */
- (CGFloat)prcHeight;

/**
 *  @return CGRectGetMidX(self.frame)
 */
- (CGFloat)prcCenterX;

/**
 *  @return CGRectGetMidY(self.frame)
 */
- (CGFloat)prcCenterY;

/**
 *  @return frame.size
 */
- (CGSize)prcSize;

/**
 *  设置 frame.origin.x
 */
- (void)setPrcLeft:(CGFloat)left;

/**
 *  设置 frame.origin.y
 */
- (void)setPrcTop:(CGFloat)top;

/**
 *  设置 frame.size.width
 */
- (void)setPrcWidth:(CGFloat)width;

/**
 *  设置 frame.size.height
 */
- (void)setPrcHeight:(CGFloat)height;

/**
 *  设置view横向的中间坐标
 */
- (void)setPrcCenterX:(CGFloat)centerX;

/**
 *  设置view纵向的中间坐标
 */
- (void)setPrcCenterY:(CGFloat)centerY;

/**
 *  @param size 设置 frame.size
 */
- (void)setPrcSize:(CGSize)size;

/**
 *    设置右边距
 *
 */
- (void)setPrcRight:(CGFloat)right;

/**
 *    设置底部边距
 *
 */
- (void)setPrcBottom:(CGFloat)bottom;

/**
 *  @return frame.origin.x
 */
- (CGFloat)left PRCDeprecated("使用prcLeft代替");

/**
 *  @return CGRectGetMaxX(self.frame)
 */
- (CGFloat)right PRCDeprecated("使用prcRight代替") ;

/**
 *  @return frame.origin.y
 */
- (CGFloat)top PRCDeprecated("使用prcTop代替");

/**
 *  @return CGRectGetMaxY(self.frame)
 */
- (CGFloat)bottom PRCDeprecated("使用prcBottom代替");


/**
 *  @return frame.size.width
 */
- (CGFloat)width PRCDeprecated("使用prcWidth代替");

/**
 *  @return frame.size.height
 */
- (CGFloat)height PRCDeprecated("使用prcHeight代替");

/**
 *  @return CGRectGetMidX(self.frame)
 */
- (CGFloat)centerX PRCDeprecated("使用prcCenterX代替");

/**
 *  @return CGRectGetMidY(self.frame)
 */
- (CGFloat)centerY PRCDeprecated("使用prcCenterY代替");

/**
 *  @return frame.size
 */
- (CGSize)size PRCDeprecated("使用prcSize代替");

/**
 *  设置 frame.origin.x
 */
- (void)setLeft:(CGFloat)left PRCDeprecated("使用prcLeft代替");
/**
 *    设置右边距
 *
 */
- (void)setRight:(CGFloat)right PRCDeprecated("使用prcRight代替");

/**
 *  设置 frame.origin.y
 */
- (void)setTop:(CGFloat)top PRCDeprecated("使用prcTop代替");

/**
 *    设置底部边距
 *
 */
- (void)setBottom:(CGFloat)bottom PRCDeprecated("使用prcBottom代替");

/**
 *  设置 frame.size.width
 */
- (void)setWidth:(CGFloat)width PRCDeprecated("使用prcWidth代替");

/**
 *  设置 frame.size.height
 */
- (void)setHeight:(CGFloat)height PRCDeprecated("使用prcHeight代替");

/**
 *  设置view横向的中间坐标
 */
- (void)setCenterX:(CGFloat)centerX PRCDeprecated("使用setPrcCenterX代替");

/**
 *  设置view纵向的中间坐标
 */
- (void)setCenterY:(CGFloat)centerY PRCDeprecated("使用setPrcCenterY代替");

/**
 *  @param size 设置 frame.size
 */
- (void)setSize:(CGSize)size PRCDeprecated("使用setPrcSize代替");

/**
 *  移除当前view的所有子view
 */
- (void)prcRemoveAllSubViews;

@end
