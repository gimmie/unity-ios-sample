//
//  GMPointsNotificationView.h
//  Gimmie
//
//  Created by llun on 8/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMNotificationView.h"

@class GMAction;
@class GMReward;

@interface GMPointsNotificationView : GMNotificationView
{
    UIButton *_closeButton;

    UIButton *_pointsNotificationButton;
    UIImageView *_pointsNotificationImageView;
    UILabel *_pointsNotificationLabel;
    
    UIButton *_featuredRewardView;
    UIImageView *_featuredRewardImageView;
    UILabel *_featuredRewardName;
    UILabel *_featuredRewardStoreName;
    UIButton *_featuredRewardRedeemButton;
}

@property (nonatomic, strong) GMAction *action;
@property (nonatomic, strong) GMReward *featuredReward;

@end
