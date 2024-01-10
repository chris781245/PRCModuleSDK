//
//  PRCPickerCell.h
//  CashMate
//
//  Created by shizedong on 2023/12/15.
//

#import <UIKit/UIKit.h>
#import "PRCBaseTableViewCell.h"
#import "PRCPickerModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PRCPickerCellSelectDelegate <NSObject>

- (void)prcPickerCellSelectWithCell:(PRCBaseTableViewCell *)cell andItem:(PRCPickerSubModel *)item;

@end

@interface PRCPickerCell : PRCBaseTableViewCell

@property (nonatomic, weak) id <PRCPickerCellSelectDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
