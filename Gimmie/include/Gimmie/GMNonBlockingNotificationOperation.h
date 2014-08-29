//
//  GMNonBlockingNotificationOperation.h
//  Gimmie
//
//  Created by llun on 8/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GMNotificationOperation.h"

@interface GMNonBlockingNotificationOperation : GMNotificationOperation<GMNotificationViewDelegate>
{
    NSTimer *_autoDismissTimer;
}

@end
