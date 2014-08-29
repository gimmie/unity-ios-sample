//
//  GMBadgeCategory.h
//  Gimmie
//
//  Created by llun on 12/18/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GMProfile;

@interface GMBadgeCategory : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSArray *tiers;

- (id) initWithName:(NSString *)name andTiers:(NSArray *)tiers;

- (NSArray *) unlockedTiersWithProgressForProfile:(GMProfile *)profile;
- (NSArray *) lockedTiersWithProgressForProfile:(GMProfile *)profile;

@end
