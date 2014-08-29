//
//  GMGATracker.h
//  Gimmie
//
//  Created by llun on 28/5/14.
//  Copyright (c) 2014 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "GMAnalytics.h"

@interface GMGATracker : NSObject<GMTracker>

@property (nonatomic, copy) NSString *trackingID;
@property (nonatomic, copy) NSString *username;

- (id) initWithTrackingID:(NSString *) trackingID;

@end
