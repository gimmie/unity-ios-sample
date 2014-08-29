//
//  GMProfileViewController.h
//  Gimmie
//
//  Created by llun on 8/19/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const GMMenuTypePoints;
extern NSString * const GMMenuTypeLevel;
extern NSString * const GMMenuTypeBadges;
extern NSString * const GMMenuTypeRedemptions;
extern NSString * const GMMenuTypeActivities;

@class GMLoadingView;
@class GMProfile;

@interface GMProfileViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_menu;
    GMProfile *_profile;
    GMLoadingView *_loadingView;
}

@property (nonatomic, strong) IBOutlet UITableView *profileTable;
@property (nonatomic, strong) IBOutlet UIView *errorView;

@end
