//
//  GMNotificationProtocol.h
//  Gimmie
//
//  Created by llun on 8/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GMNotificationView;

@protocol GMNotificationViewDelegate <NSObject>

- (void) notificationViewDidDismiss:(GMNotificationView *) notificationView;

@end

@protocol GMNotificationOperationDelegate <NSObject>

- (void) notificationOperation: (NSOperation *)operation willShowNotificationView: (GMNotificationView *) notificationView;

@optional
- (void) notificationOperation:(NSOperation *)operation didEndByDismissNotificationView:(GMNotificationView *)notificationView;
- (void) notificationOperation:(NSOperation *)operation didEndByTimeoutNotificationView:(GMNotificationView *)notificationView;

@end