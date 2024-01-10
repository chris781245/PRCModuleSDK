//
//  PRCSectionData.h
//  CashMate
//
//  Created by shizedong on 2023/12/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PRCSeperatorLine.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, kPRCSectionType) {
    kPRCSectionHeader = 0, //全白
    kPRCSectionFooter, //灰
};

@interface PRCSectionData : NSObject

@property (nonatomic, assign) kPRCSectionType type;
@property (nonatomic, assign) NSUInteger tag;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat startMargin;
@property (nonatomic, assign) CGFloat endMargin;
@property (nonatomic, assign) kMarginMask mask;
@property (nonatomic, assign) BOOL hasSeperateLine;
@property (nonatomic, strong) UIColor *color;

+ (PRCSectionData *)headerData;
+ (PRCSectionData *)footerData;
+ (PRCSectionData *)dataByType:(kPRCSectionType)type height:(CGFloat)height;
+ (PRCSectionData *)dataByColor:(UIColor *)color height:(CGFloat)height;
+ (PRCSectionData *)dataByType:(kPRCSectionType)type height:(CGFloat)height mask:(kMarginMask)mask;
+ (PRCSectionData *)dataByType:(kPRCSectionType)type
                        height:(CGFloat)height
                          mask:(kMarginMask)mask
                   startMargin:(CGFloat)startMargin;

@end

NS_ASSUME_NONNULL_END
