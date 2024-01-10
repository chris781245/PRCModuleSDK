//
//  PRCPickerView.h
//  CashMate
//
//  Created by shizedong on 2023/12/15.
//

#import <UIKit/UIKit.h>
#import "PRCPickerModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol PRCPickerViewSelectDelegate <NSObject>

- (void)prcPickerViewSelectWithItem:(PRCPickerModel *)item;

@end

@interface PRCPickerView : UIView

@property (nonatomic, weak) id <PRCPickerViewSelectDelegate> delegate;

-(void)showActionSheetViewWithArr:(NSArray<PRCPickerSubModel *>*__nullable)modelArr andItem:(PRCPickerModel *__nullable)item;

- (void)hideTitle;

@end

NS_ASSUME_NONNULL_END
