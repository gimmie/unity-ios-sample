//
//  GMNotificationOperation.h
//  Gimmie
//
//  Created by llun on 8/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "GMNotificationProtocol.h"

@class GMNotificationView;
@class GMNotificationViewController;

@interface GMNotificationOperation : NSOperation<GMNotificationViewDelegate>
{
    @protected
    BOOL _isExecuting;
}

@property (nonatomic, strong) GMNotificationViewController *notificationViewController;
@property (nonatomic, strong) GMNotificationView *notificationView;
@property (nonatomic, strong) UIView *notificationBackgroundView;
@property (nonatomic, strong) UIViewController *parentViewController;

@property (nonatomic, strong) id<GMNotificationOperationDelegate> delegate;

- (id) initWithNotificationViewController:(GMNotificationViewController *)notificationViewController
                     parentViewController:(UIViewController *)parentController
               backgroundNotificationView:(UIView *)backgroundView
                         notificationView:(GMNotificationView *)notificationView;

@end
