//
//  GMCategory.h
//  Gimmie
//
//  Created by llun on 12/19/12.
//  Copyright (c) 2012 gimmie. All rights reserved.
//

#import "GMIDObject.h"

/**
 GMCategory class represent category model from Gimmie service.
 */
@interface GMCategory : GMIDObject

/**
 Initialize Category object with Country Code and Dictionary converts from JSON data.
 */
- (id) initWithCountry:(NSString*)country andDictionary:(NSDictionary *)data;

/** @name Category properties */
/**
 Category name
 */
@property (nonatomic, strong) NSString *name;
/**
 List of GMReward in this category
 */
@property (nonatomic, strong) NSArray *rewards;
/**
 Country code for filter rewards that not available in specific country out
 */
@property (nonatomic, strong) NSString *country;

@end
