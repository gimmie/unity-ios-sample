//
//  GMNotificationViewController.h
//  OX
//
//  Created by llun on 1/17/13.
//  Copyright (c) 2013 Gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMActivitiesViewController.h"

#import "GMNotificationProtocol.h"

#import "GMAction.h"
#import "GMReward.h"
#import "GMCombineResponse.h"

#import "SRWebSocket.h"

@class GMNotificationViewController;

@interface GMNotificationViewController : UIViewController <GMActivitiesViewControllerDelegate, GMNotificationOperationDelegate, SRWebSocketDelegate>

@property (nonatomic, readonly, assign) BOOL isNotificationShowing;

+ (id) sharedController;

- (UIViewController *) topPresentedViewController;
- (void) handlePushNotificationMessage:(NSDictionary *)userInfo;

@end
