//
//  GMActivity.h
//  Gimmie
//
//  Created by llun on 1/29/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GMIDObject.h"
#import "GMAction.h"
#import "GMEvent.h"

/**
 GMActivity is class represent past event an action done by user
 */
@interface GMRecentAction : GMIDObject

/**
 Past action done by this activity
 */
@property (nonatomic, strong) GMAction *action;
/**
 Past event done by this activity
 */
@property (nonatomic, strong) GMEvent *event;
/**
 Activity created time
 */
@property (nonatomic, strong) NSDate *createdTime;

@end
