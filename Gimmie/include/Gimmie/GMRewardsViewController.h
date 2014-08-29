//
//  GMRewardsViewController.h
//  Gimmie
//
//  Created by llun on 1/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMCatalogViewController.h"
#import "GMProfileViewController.h"
#import "GMLeaderboardViewController.h"

@class GMProfile;
@class GMRewardsViewController;

typedef enum {
    GMFullViewTabRewards = 0,
    GMFullViewTabProfile = 1,
    GMFullViewTabLeaderboard = 2
} GMFullViewTab;

@protocol GMRewardsViewControllerDelegate <NSObject>

@optional
- (void) rewardsViewControllerDidDisappear:(GMRewardsViewController *)viewController;

@end

/**
 GMRewardsViewController is a main class represents reward category and user profile. This is the main class you will use with your
 application to show reward. It incldes two main sub-controllers, rewardController and profileController.
 */
@interface GMRewardsViewController : UIViewController<UIAlertViewDelegate>
{
    GMCatalogViewController *_catalogController;
    GMProfileViewController *_profileController;
    GMLeaderboardViewController *_leaderboardController;
    
    UINavigationController *_catalogNavigationController;
    UINavigationController *_profileNavigationController;
    UINavigationController *_leaderboardNavigationController;
    
    GMProfile *_profile;
    
    UIView *_tabsView;
    UIButton *_rewardsTabButton;
    UIButton *_profileTabButton;
    UIButton *_leaderboardTabButton;
    
    UILabel *_userPointsLabel;
    
    NSArray *_tabs;
    
    BOOL _isTabBarHidden;
    
    UIInterfaceOrientation _orientation;
}

/** @name Rewards view controller properties */
@property (nonatomic, strong) id<GMRewardsViewControllerDelegate> delegate;
/** @name Show leaderboard tabs in main view */
@property (assign, unsafe_unretained) BOOL showLeaderboards;

/** @name RewardsViewController management methods */
/**
 Presents Gimmie on controller with category view
 
 @param controller Controller you want to show Gimmie rewards over it
 */
+ (void) presentGimmieOnController:(UIViewController *)controller;

/**
 Presents Gimmie on controller with specific view
 
 There are two pages that you can choose
 
 - GMFullViewTabRewards: To show rewards category
 - GMFullViewTabProfile: To show user profile
 - GMFullViewTabLeaderboard: To show leaderboard
 
 @param controller Controller you want to show Gimmie rewards over it
 @param tab Tab you want to show when presents Gimmie view
 */
+ (void) presentGimmieOnController:(UIViewController *)controller withTab:(GMFullViewTab) tab;

+ (void) presentGimmieOnController:(UIViewController *)controller withLeaderboard:(BOOL)showLeaderboard;

/**
 Presents Gimmie on controller without tab and profile page
 
 @param controller Controller you want to show Gimmie rewards on it
 */
+ (void) presentGimmieOnControllerWithOutTab:(UIViewController *)controller;

/**
 Shared reward controller create after present GimmieOnController
 
 This method doesn't create instance, it just return what's already create by present method, So you should call presentGimmieOnController on any
 your controller first.
 
 @return shared GMRewardsViewController instance
 */
+ (id) sharedController;

@end
