//
//  GMDataStore.h
//  Gimmie
//
//  Created by llun on 2/4/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GMProfile;

@interface GMDataStore : NSObject
{
    GMProfile *_currentProfile;
}

- (void) currentProfileCallback:(void (^)(NSError *error, GMProfile *profile))callback;
- (void) freshProfileCallback:(void (^)(NSError *error, GMProfile *profile))callback;
- (void) loadProfile;
- (void) logout;

+ (GMDataStore *) sharedDataStore;

@end
