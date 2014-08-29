//
//  GMBadge.h
//  Gimmie
//
//  Created by llun on 8/19/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import "GMIDObject.h"

@interface GMBadge : GMIDObject

@property (nonatomic, strong) NSString *category;
@property (nonatomic, strong) NSString *name;
// Detail is description in API
@property (nonatomic, strong) NSString *detail;
@property (nonatomic, strong) NSString *imageURL;

@property (nonatomic, strong) NSDictionary *ruleDescription;
@property (nonatomic, strong) NSString *unlockMessage;
@property (nonatomic, unsafe_unretained) int tier;

@property (nonatomic, strong, readonly) NSNumber *progress;

@end
