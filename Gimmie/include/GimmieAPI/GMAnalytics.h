//
//  GMTracker.h
//  Gimmie
//
//  Created by llun on 28/5/14.
//  Copyright (c) 2014 gimmie. All rights reserved.
//

@protocol GMTracker <NSObject>

- (void) trackEvent: (NSString *) eventName;
- (void) trackEvent: (NSString *) eventName properties: (NSDictionary *) properties;

- (void) login: (NSString *) username;
- (void) logout;

- (void) flush;

@end

@interface GMAnalytics : NSObject

@property (nonatomic, strong, readonly) id<GMTracker> tracker;

+ (GMAnalytics *) instance;

+ (void) trackEvent:(NSString *) eventName;
+ (void) trackEvent:(NSString *)eventName properties: (NSDictionary *) properties;
+ (void) login:(NSString *)user;
+ (void) logout;
+ (void) flush;

@end
