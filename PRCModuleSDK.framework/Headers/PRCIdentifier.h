//
//  PRCIdentifier.h
//  KashLinker
//
//  Created by shizedong on 2023/12/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PRCIdentifier : NSObject

/**
 * iOS14后，IDFA的获取必须先要用户授权
 *
 */
+ (void)requestIDFAAuthCompletion:(void (^)(void))actionBlock;

/**
 *  @return 广告标志符
 */
+ (NSString *)idfa;

@end

NS_ASSUME_NONNULL_END
