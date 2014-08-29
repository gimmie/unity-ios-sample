//
//  GMTopPlayer.h
//  Gimmie
//
//  Created by llun on 28/5/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GMTopPlayer : NSObject
{
    NSDictionary *_raw;
}

/**
 User ID provide to Gimmie, need to map to application name.
 */
@property (nonatomic, strong, readonly) NSString *externalUid;
/**
 User rank in leaderboard.
 */
@property (assign, readonly) int rank;
/**
 Value for current board.
 */
@property (nonatomic, strong, readonly) NSNumber *value;

/** @name Initialize methods */
/**
 Initialize Gimmie model object with Dictionary converts from JSON data.
 */
- (id) initWithDictionary:(NSDictionary *)data;

@end
