//
//  GMTier.h
//  Gimmie
//
//  Created by llun on 12/18/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GMProfile;

@interface GMTier : NSObject

@property (nonatomic, strong) NSArray *badges;

- (id) initWithBadges:(NSArray *)badges;

- (NSArray *) unlockedBadgesWithProgressForProfile:(GMProfile *)profile;
- (NSArray *) lockedBadgesWithProgressForProfile:(GMProfile *)profile;

@end
