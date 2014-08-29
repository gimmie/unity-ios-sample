//
//  GMProfile.h
//  OX
//
//  Created by llun on 11/14/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GMUser;

/**
 GMProfile represents user profile in Gimmie service. When login and trigger an event, Gimmie will automatically create
 this object in the system.
 */
@interface GMProfile : NSObject

/** @name Profile properties */
/**
 User object for this profile.
 */
@property (nonatomic, strong) GMUser *user;
/**
 List of GMClaim item by this user profile.
 */
@property (nonatomic, strong) NSArray *claims;
/**
 List of GMBadge item by this user profile.
 */
@property (nonatomic, strong) NSArray *badges;
/**
 List of GMMayorship item by this user profile.
 */
@property (nonatomic, strong) NSArray *mayorships;

/** @name initialize methods */
/**
 Initialize profile with JSON data converts to NSDictionary.
 */
- (id) initWithDictionary:(NSDictionary *)data;

@end
