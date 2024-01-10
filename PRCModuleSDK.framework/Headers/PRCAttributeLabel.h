//
//  PRCAttributeLabel.h

#import "TTTAttributedLabel.h"

typedef void(^LabelClickBlock)(void);

@interface PRCAttributeLabel : TTTAttributedLabel

- (void)addClickRange:(NSRange)range
            linkColor:(UIColor *)color
                block:(LabelClickBlock)block;

- (void)addClickRange:(NSRange)range
            linkColor:(UIColor *)color
        showUnderLine:(BOOL)showUnderLine
                block:(LabelClickBlock)block;

@end


