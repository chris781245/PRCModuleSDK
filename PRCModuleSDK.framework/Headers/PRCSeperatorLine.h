//
//  PRCSeperatorLine.h
//  CashMate
//
//  Created by shizedong on 2023/12/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, kMarginMask) {
    kBottomMask = 1,
    kTopMask,
    kLeftMask,
    kRightMask,
};

@interface PRCSeperatorLine : UIView

- (void)setSeperatorMask:(kMarginMask)mask color:(UIColor *)color height:(CGFloat)height;

@end

NS_ASSUME_NONNULL_END
