//
//  GMRemoteObject.h
//  OX
//
//  Created by llun on 11/16/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Root object for Gimmie service model, it save raw data uses for represent it when print with description.
 */
@interface GMIDObject : NSObject
{
    NSDictionary *_raw;
}

/** @name Object properties */
/**
 Object unique ID in Gimmie service
 */
@property (readonly) int objectID;

/** @name Initialize methods */
/**
 Initialize Gimmie model object with Dictionary converts from JSON data.
 */
- (id) initWithDictionary:(NSDictionary *)data;

@end
