//
//  GMEvent.h
//  OX
//
//  Created by llun on 11/20/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import "GMIDObject.h"

/**
 GMEvent class represents event model from the portal.
 */
@interface GMEvent : GMIDObject

/** @name Event properties */
/**
 List of actions done by this event.
 */
@property (nonatomic, strong) NSArray *actions;
/**
 Event description
 */
@property (nonatomic, strong) NSString *description;
/**
 Event name
 */
@property (nonatomic, strong) NSString *name;

@end
