//
//  GMUser.h
//  OX
//
//  Created by llun on 11/20/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 GMUser class represents user object in system.
 */
@interface GMUser : NSObject

/** @name User properties */
/**
 User unique id in system
 */
@property (nonatomic, strong) NSString *userID;

/**
 Number of points user earn from the system
 */
@property (assign) int awardedPoints;
/**
 Number of points user used
 */
@property (assign) int redeemedPoints;
/**
 Number of points user currently have
 */
@property (assign, readonly) int usedPoints;
/**
 User level
 */
@property (assign) int level;
/**
 Number of points user need to go to next level.
 */
@property (assign) int nextLevelPoints;
/**
 Percentage of current level
 */
@property (assign, readonly) double levelProgressPercent;

@property (assign, readonly) int currentLevelPoints;
@property (assign, readonly) int pointsToNextLevel;


/** @name Initialize methods */
/**
 Initialize User with Dictionary convert from JSON data.
 */
- (id) initWithDictionary:(NSDictionary *)data;

@end
