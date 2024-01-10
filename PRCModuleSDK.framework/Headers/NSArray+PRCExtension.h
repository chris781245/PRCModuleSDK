//
//  NSArray+PRCExtension.h
//  PRCDemo
//
//  Created by shizedong on 2023/11/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (PRCExtension)

//取头部count个元素
- (nonnull NSArray *)head:(NSUInteger)count;
//取尾部count个元素
- (nonnull NSArray *)tail:(NSUInteger)count;

//加了安全保护，如果index大于总数会返回nil
- (nullable id)safeObjectAtIndex:(NSUInteger)index;

//加了安全保护，如果index大于总数会返回nil
- (nullable NSArray *)safeSubarrayWithRange:(NSRange)range;
/**
 *  @param index 元素下标
 *  @return 返回安全的NSString类型
 */
- (nonnull NSString *)strAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的int类型
 */
- (int)intAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的BOOL类型
 */
- (BOOL)boolAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的long类型
 */
- (long)longAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的long long类型
 */
- (long long)llongAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的double类型
 */
- (double)doubleAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的float类型
 */
- (float)floatAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的NSNumber类型
 */
- (nullable NSNumber *)numAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的NSArray类型
 */
- (nullable NSArray *)arrAt:(NSUInteger)index;
/**
 *  @param index 元素下标
 *  @return 返回安全的NSDictionary类型
 */
- (nullable NSDictionary *)dicAt:(NSUInteger)index;

/**
 *  @return 返回数组最后下标
 */
- (NSUInteger)lastIndex;

//将array变成data
-(nullable NSData*)data;
@end

#pragma mark -

@interface NSMutableArray (PRCExtension)

//在头部插入一个obj（可作为堆栈使用）
- (nonnull NSMutableArray *)pushHead:(nullable NSObject *)obj;
//在头部插入一个arry（可作为堆栈使用）
- (nonnull NSMutableArray *)pushHeadN:(nullable NSArray *)all;
//在尾部插入一个obj（可作为堆栈使用）
- (nonnull NSMutableArray *)pushTail:(nullable NSObject *)obj;
//在尾部插入一个arry（可作为堆栈使用）
- (nonnull NSMutableArray *)pushTailN:(nullable NSArray *)all;
//移除尾部一个obj（可作为堆栈使用）
- (nonnull NSMutableArray *)popTail;
//移除尾部N个obj（可作为堆栈使用）
- (nonnull NSMutableArray *)popTailN:(NSUInteger)n;
//移除头部一个obj（可作为堆栈使用）
- (nonnull NSMutableArray *)popHead;
//移除头部N个obj（可作为堆栈使用）
- (nonnull NSMutableArray *)popHeadN:(NSUInteger)n;
//仅保留头部n个数据
- (nonnull NSMutableArray *)keepHead:(NSUInteger)n;
//仅保留尾部n个数据
- (nonnull NSMutableArray *)keepTail:(NSUInteger)n;

//安全add函数
- (void)safeAddObject:(nullable id)anObject;
//安全插入函数
-(bool)safeInsertObject:(nullable id)anObject atIndex:(NSUInteger)index;
//安全移除函数
-(bool)safeRemoveObjectAtIndex:(NSUInteger)index;
//安全替换函数
-(bool)safeReplaceObjectAtIndex:(NSUInteger)index withObject:(nonnull id)anObject;

@end

NS_ASSUME_NONNULL_END
