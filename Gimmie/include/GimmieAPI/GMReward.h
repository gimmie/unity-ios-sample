//
//  GMReward.h
//  OX
//
//  Created by llun on 11/16/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import "GMIDObject.h"

/**
 GMReward class represents reward item in Gimmie system.
 */
@interface GMReward : GMIDObject

/** @name Reward properties */
/**
 Reward name
 */
@property (nonatomic, strong) NSString *name;
/**
 Reward short name
 */
@property (nonatomic, strong) NSString *shortName;
/**
 Reward description
 */
@property (nonatomic, strong) NSString *rewardDescription;
/**
 Reward fineprint
 */
@property (nonatomic, strong) NSString *finePrint;
/**
 Reward image URL
 */
@property (nonatomic, strong) NSString *imageURL;
/**
 Reward store name
 */
@property (nonatomic, strong) NSString *storeName;

/**
 Reward category
 */
@property (nonatomic, strong) NSString *category;

/**
 Points requires to redeem this reward.
 */
@property (assign, unsafe_unretained) int points;

/** @name Quantity and sold out */
/**
 Total number of this reward in system
 */
@property (assign, unsafe_unretained) int totalQuantity;
/**
 Total number of this reward already claimed by user
 */
@property (assign, unsafe_unretained) int claimedQuantity;
/**
 Is reward sold out.
 */
@property (assign, unsafe_unretained, readonly) BOOL isSoldOut;
/**
 Is reward in featured category.
 */
@property (assign, unsafe_unretained, readonly) BOOL isFeatured;


/** @name Reward Date and Time */

/**
 Reward begin date
 */
@property (nonatomic, strong) NSDate *startDate DEPRECATED_ATTRIBUTE;
/**
 Reward end date
 */
@property (nonatomic, strong) NSDate *endDate DEPRECATED_ATTRIBUTE;
/**
 Reward valid date
 */
@property (nonatomic, strong) NSDate *validUntil;

/**
 Reward expired flag
 */
@property (assign, unsafe_unretained, readonly) BOOL isExpired;

/**
 Reward avaliable countries
 */
@property (nonatomic, strong) NSArray *countries;

/**
 Is reward available in specific country
 
 @param country
 @return true if reward is available in specific country otherwise false.
 */
- (BOOL) isAvailableInCountry:(NSString *)country;

@end
