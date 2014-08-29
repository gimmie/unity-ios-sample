//
//  GMStore.h
//  OX
//
//  Created by llun on 11/16/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GMIDObject.h"

/**
 GMStore class represents Sponser store in Gimmie system.
 */
@interface GMStore : GMIDObject

/** @name Store properties */
/**
 Store logo image URL
 */
@property (nonatomic, strong) NSString *imageURL;
/**
 Store name
 */
@property (nonatomic, strong) NSString *name;
/**
 List of GMReward that this store have.
 */
@property (nonatomic, strong) NSArray *rewards;

@end
