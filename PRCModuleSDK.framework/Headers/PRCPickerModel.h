//
//  PRCPickerModel.h
//  CashMate
//
//  Created by shizedong on 2023/12/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    PRCPickerTypeDate = 0,
    PRCPickerTypeJob,
    PRCPickerTypeSalary,
    PRCPickerTypeEducate,
    PRCPickerTypeMarriage,
    PRCPickerTypeChildren,
    PRCPickerTypeRelation,
    PRCPickerTypeLoan,
}PRCPickerType;

@interface PRCPickerSubModel : NSObject

@property (nonatomic, assign) BOOL isSelected;

@property (nonatomic, strong) NSString *value;

@property (nonatomic, strong) NSString *content;

@end

@interface PRCPickerModel : NSObject

@property (nonatomic, assign) PRCPickerType type;

// 通过下拉框的value,查找显示出当前的content
@property (nonatomic, strong) NSString *value;

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *content;

@property (nonatomic, strong) NSString *placeholder;

@property (nonatomic, assign) NSInteger contactSerial;

@end

NS_ASSUME_NONNULL_END
