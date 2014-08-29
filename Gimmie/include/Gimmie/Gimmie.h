//
//  Gimmie.h
//  Gimmie
//
//  Created by llun on 1/18/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GMService.h"

#import "GMAction.h"
#import "GMRecentAction.h"
#import "GMCategory.h"
#import "GMClaim.h"
#import "GMEvent.h"
#import "GMProfile.h"
#import "GMReward.h"
#import "GMStore.h"
#import "GMUser.h"

#import "GMNotificationViewController.h"
#import "GMRewardsViewController.h"

#import "NSBundle+GMResouce.h"

@interface Gimmie : NSObject

+ (void) start;
+ (void) login:(NSString *)username;
+ (void) showGimmieView;
+ (void) trigger:(NSString *)eventName;

@end