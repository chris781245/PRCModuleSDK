//
//  PRCBaseTableViewCell.h
//  CashMate
//
//  Created by shizedong on 2023/12/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PRCBaseTableViewCell : UITableViewCell

@property (nonatomic, assign) BOOL showCustomBackgroundLayer;
@property (nonatomic, strong) UIView *mBackGroundLayer;

@property (nonatomic, assign) BOOL showCustomAccessoryView;
@property (nonatomic, strong) UIImageView *customAccessoryView;

@property (nonatomic, assign) CGFloat rcellHeight;

- (void)setupUI;

- (void)updateUI:(id)data;

+ (CGFloat)getCellHeightWithData:(id)data;

@end

NS_ASSUME_NONNULL_END
