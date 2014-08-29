//
//  GMNotificationView.h
//  Gimmie
//
//  Created by llun on 8/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMNotificationProtocol.h"

@interface GMNotificationView : UIView

@property (nonatomic, strong) id<GMNotificationViewDelegate> delegate;
@property (nonatomic, strong) UIViewController *parentViewController;

- (BOOL) isAutoDismiss;
- (NSInteger) notificationTimeout;

- (CGFloat) notificationHeight;

@end
