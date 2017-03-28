//
//  ShutterView.h
//  See the file "LICENSE.md" for the full license governing this code.
//

#import <Foundation/Foundation.h>


@interface CardIOShutterView : UIView

- (id)initWithFrame:(CGRect)aFrame backgroundColor:(UIColor*)backgroundColor;
- (void)setOpen:(BOOL)shouldBeOpen animated:(BOOL)animated duration:(CFTimeInterval)duration;

@property(nonatomic, assign, readwrite) BOOL open;

@end
