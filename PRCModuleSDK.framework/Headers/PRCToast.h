//
//  PRCToast.h
//  FocusDigits
//
//  Created by shizedong on 2023/11/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, PRCToastType) {
    PRCToastTypeNormal = 1,
    PRCToastTypeError,
    PRCToastTypeNoImage,
};

@interface PRCToast : UIView

+ (void)showToast:(NSString *_Nullable)msg;

+ (void)showToast:(NSString *_Nullable)msg
        toastType:(PRCToastType)type;

+ (void)showToast:(NSString *_Nullable)msg
        toastType:(PRCToastType)type
           inView:(UIView *_Nullable)view;

+ (void)showToast:(NSString *_Nullable)msg
        toastType:(PRCToastType)type
           inView:(UIView *_Nullable)view
     dissmisBlock:(void (^_Nullable)(void))block;

+ (void)showToast:(NSString *_Nullable)msg
        toastType:(PRCToastType)type
           inView:(UIView *_Nullable)view
     dissmisBlock:(void (^_Nullable)(void))block
         duration:(CGFloat)duration;

@end

NS_ASSUME_NONNULL_END
