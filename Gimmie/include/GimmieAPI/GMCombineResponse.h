//
//  GMTriggerResponse.h
//  Gimmie
//
//  Created by llun on 8/22/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const GMCombineResponseKeyActions;
extern NSString * const GMCombineResponseKeyBadges;
extern NSString * const GMCombineResponseKeyCategories;
extern NSString * const GMCombineResponseKeyMayorship;
extern NSString * const GMCombineResponseKeyUser;

@class GMUser;
@class GMMayorship;

@interface GMCombineResponse : NSObject
{
    NSDictionary *_rawResponse;
}

- (id) initWithDictionary:(NSDictionary *)dictionary;
- (id) objectForKey:(NSString *) key;

@end
