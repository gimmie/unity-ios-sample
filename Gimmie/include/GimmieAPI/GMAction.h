//
//  GMAction.h
//  OX
//
//  Created by llun on 11/20/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    GMActionTypeUnknown = -1,
    GMActionTypeAwardPoints = 0,
    GMActionTypeInstantReward = 1
} GMActionType;

@class GMClaim;

/**
 GMAction class represents action in event defines in the portal.
 */

@interface GMAction : NSObject

/** @name Action properties */
/**
 Action type (Event type in portal.)
 
 - GMActionTypeAwardPoints: Award Points type
 - GMActionTypeInstantReward: Instant Reward type
 - GMActionTypeUnknown: For other event type
 */
@property (nonatomic, assign) GMActionType type;
/**
 Action message for event.
 */
@property (nonatomic, strong) NSString *message;
/**
 If action type is "GMActionTypeInstantReward", GMClaim will attach to action. Otherwise it will be null.
 */
@property (nonatomic, strong) GMClaim *claim;

/**
 Action result
 */
@property (assign) BOOL success;
/**
 Action points
 */
@property (assign) NSUInteger points;

/** @name Initialize */
/**
 Initialize GMAction with JSON data return from Gimmie service
 
 @param data Dictionary converts from JSON data
 @return GMAction instance
 */
- (id) initWithDictionary:(NSDictionary *) data;

@end
