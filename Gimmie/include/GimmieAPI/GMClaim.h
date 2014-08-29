//
//  GMClaim.h
//  OX
//
//  Created by llun on 11/19/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import "GMIDObject.h"
#import "GMReward.h"

/**
 GMClaim represents user claimed item in Gimmie service. When user redeem an item, user will get new claim.
 */
@interface GMClaim : GMIDObject

/** @name Claim properties */
/**
 Claim URL
 */
@property (nonatomic, strong) NSString *url;
/**
 Claim reward
 */
@property (nonatomic, strong, readonly) GMReward *reward;
/**
 Claim code use to get reward at shop
 */
@property (nonatomic, strong, readonly) NSString *code;
@property (nonatomic, strong) NSDate *createdDate;

@end
