//
//  Gimmie.h
//  Gimmie
//
//  Created by llun on 11/26/12.
//  Copyright (c) 2012 gimmie. All rights reserved.
//
#define SDK_VERSION @"ios 2.7.1"

#import <Foundation/Foundation.h>

#import "GMAction.h"
#import "GMRecentAction.h"
#import "GMCategory.h"
#import "GMClaim.h"
#import "GMEvent.h"
#import "GMProfile.h"
#import "GMStore.h"
#import "GMUser.h"
#import "GMTopPlayer.h"
#import "GMTier.h"
#import "GMBadge.h"
#import "GMMayorship.h"
#import "GMBadgeCategory.h"
#import "GMCombineResponse.h"
#import "GMLog.h"

extern NSString * const GMNetworkErrorNotification;
extern NSString * const GMEventTriggerDidResponseNotification;
extern NSString * const GMProfileDidResponseNotification;
extern NSString * const GMRedeemDidResponseNotification;
extern NSString * const GMNeedLoginNotification;
extern NSString * const GMLogoutNotification;
extern NSString * const GMErrorNotification;

extern NSString * const GMNotificationFieldResponse;
extern NSString * const GMNotificationFieldUser;
extern NSString * const GMNotificationFieldProfile;

extern NSString * const GMTop20Points;
extern NSString * const GMTop20RedemptionPrices;
extern NSString * const GMTop20RedemptionCount;

extern NSString * const GMCountryGlobal;

extern NSString * const GMUserInformationKeyName;
extern NSString * const GMUserInformationKeyEmail;

/**
 A GMService object provides a methods for calling Gimmie API. 
 
 Use GMService to call Gimmie service directly with your components. It includes offline queue in event trigger to keep all trigger
 event when device is offline and flush all event when device goes online.
 
 Before using GMService, have to setup oauth key, secret and API in your application info.plist with below dictionary
 
     Gimmie (type dictionary)
       - key (String): Your application OAuth key from the portal.
       - secret (String): Your application OAuth secret from the portal.
       - api (String): Gimmie API endpoint - https://api.gimmieworld.com/1/
 
 After setup, login to Gimmie in ApplicationDelegate class
 
     [[GMService sharedService] login:@"unique_device_or_user_id"];
 
 */
@interface GMService : NSObject
{
    NSMutableArray *_handlers;
    
    NSMutableDictionary *_additionInformation;
}

/** @name Service settings */
/**
 Gimmie OAuth key
 */
@property (nonatomic, strong, readonly) NSString *key;
/**
 Gimmie OAuth secret
 */
@property (nonatomic, strong, readonly) NSString *secret;
/**
 Gimmie API endpoint
 */
@property (nonatomic, strong, readonly) NSString *api;

@property (nonatomic, strong) NSString *sponsorUrl;

/**
 Unique id or username from your service
 */
@property (nonatomic, strong, readonly) NSString *user;

/**
 Logged in flag
 */
@property (nonatomic, readonly, assign) BOOL loggedIn;

@property (nonatomic, readonly, assign) BOOL isLoginAsGuest;

/**
 Rewards country
 */
@property (nonatomic, strong) NSString *country;

/**
 Locale language for rewards information
 */
@property (nonatomic, strong) NSString *locale;

/** @name Service methods */

/** 
 Shared GMService instance. This method is auto initialize properties from Gimmie key in info.plist.
 @warning If Gimmie property is not found, it will crash and close the application.
 
 @return Shared GMService instance
 */
+ (GMService *) sharedService;

+ (GMService *) sharedServiceWithKey:(NSString *)key secret:(NSString *)secret;

/**
 Login generated unique user/device to gimmie service and using this to collect point and redeem item from Gimmie.
 */
- (void) loginWithGenerateID;

/** 
 Login unique user/device to gimmie service and using this to collect point and redeem item from Gimmie.
 
 @param user unique device or user id for tracking point and redeem item
 */
- (void) login:(NSString *)user;

/**
 Login with generated unique user/device with name and email for auto fill in claim page.
 
 @param user unique device or user id for tracking point and redeem item
 @param name user full name or given name for tracking in report
 @param email user email for validate claim
 */
- (void) login:(NSString *)user withName:(NSString *)name andEmail:(NSString *)email;

/**
 Login with additional information.
 
 @param user unique device or user id for tracking point and redeem item
 @param additionInformation for auto fill name and email or other information for user
 */
- (void) login:(NSString *)user withAdditionalInformation:(NSDictionary *) additionalInformation;

/** 
 Logout user from gimmie service
 */
- (void) logout;

/**
 Get user information for specific key given when login
 
 @param key information that put when login
 
 @return user information in string
 */
- (NSString *) userInformationForKey:(NSString *)key;

/** @name API methods */

/** 
 Get user profile from service
 
 @param callback function block with two arguments, NSError and GMProfile.
 */
- (void) getProfileCallback:(void (^) (NSError *error, GMProfile *profile))callback;


/**
 Load reward categories from service
 
 @param callback function block with two arguments, NSError and categories as NSArray.
 */
- (void) loadCategoryCallback:(void (^) (NSError *error, NSArray *categories)) callback DEPRECATED_ATTRIBUTE;

/**
 Load reward categories from service with specific country
 
 @param countryCode country for showing rewards available in specific country
 @param callback function block with two arguments, NSError and categories as NSArray.
 */
- (void) loadCategoryForCountry:(NSString *)countryCode callback:(void (^) (NSError *error, NSArray *categories)) callback;

/**
 Get reward detail from service
 
 @param rewardID reward id
 @param callback function block with two arguments, NSError and GMReward.
 */
- (void) loadReward:(NSNumber *) rewardID callback:(void (^) (NSError *error, GMReward *reward)) callback;

/**
 Get claim detail from service

 @param claimID claim id
 @param callback function block with two arguments, NSError and GMClaim.
 */
- (void) loadClaim:(NSNumber *) claimID callback:(void (^) (NSError *error, GMClaim *claim)) callback;

/**
 Get all events detail
 
 @param callback function block with two arguments, NSError and GMEvent as NSArray.
 */
- (void) loadEventsCallback:(void (^) (NSError *error, NSArray *events)) callback;

/**
 Get specific events detail
 
 @param eventIDs list of event id
 @param callback function block with two arguments, NSError and GMEvent as NSArray.
 */
- (void) loadEvents:(NSArray *) eventIDs Callback:(void (^) (NSError *error, NSArray *events)) callback;

/**
 Load recent 20 activities from gimmie service
 
 @param callback function block with two arguments, NSError and GMActivity as NSArray.
 */
- (void) loadRecentActionsCallback:(void (^) (NSError *error, NSArray *activities)) callback;

/**
 Load badges recipe
 
 @param showProgress required user progress for each badge flag
 @param callback function block with two arguments, NSError and GMBadgeCategory as NSArray.
 */
- (void) loadBadgesRecipeWithProgress:(BOOL)showProgress callback:(void (^) (NSError *error, NSArray *categories)) callback;

/** @name Event triggers and redeem item */

/**
 Trigger event with name
 
 @param eventName Event name define in Gimmie portal
 @param callback function block with two arguments, NSError and GMTriggerResponse for all responses from Trigger.
 */
- (void) triggerEventName:(NSString *) eventName
                 callback:(void (^)(NSError *error, GMCombineResponse *triggerResponse))callback;

/**
 Trigger event with id
 
 If device is offline, GMService will keep event in offline queue and send it to Gimmie when device goes online.
 
 @param eventID Event ID define in Gimmie portal
 @param callback function block with two arguments, NSError and GMTriggerResponse for all responses from Trigger.
 */
- (void) triggerEventID:(NSNumber *) eventID
               callback:(void (^)(NSError *error, GMCombineResponse *triggerResponse))callback;

- (void) checkin:(NSString *)checkinID venue:(NSString *)place callback:(void (^)(NSError *error, GMCombineResponse *triggerResponse))callback;

/**
 Redeem reward item with reward id
 
 @param rewardID reward id
 @param callback function block with two arguments, NSError, GMUser and GMClaim
 */
- (void) redeemWithReward:(NSNumber *) rewardID
                 callback:(void (^) (NSError *error, GMUser *user, GMClaim *claim)) callback;

/**
 Register handler block for do application logic when get notification from Gimmie service.
 
 @param handler function block that will call when got notification from Gimmie
 */
- (void) registerNotificationHandler:(void (^)(NSError *error, NSArray *actions))handler;

/**
 Register push notification to Gimmie push service
 
 @param token, token data from APNS
 */
- (void) registerPushNotificationWithTokenData:(NSData *)token;

- (void) pushNotificationTokenCallback:(void (^) (NSError *error, NSString *token)) callback;

/**
 Load top20 player with highest points, redemtion prices, redemption count;
 
 @param type type for get top 20 for, wrong type will cause an error
 @param callback function block that will call when got notification from Gimmie
 */
- (void) top20For:(NSString *)type
         callback:(void (^) (NSError *error, NSArray *topPlayers)) callback;

+ (NSString *) imageURLFromPath:(NSString *)path;

@end
