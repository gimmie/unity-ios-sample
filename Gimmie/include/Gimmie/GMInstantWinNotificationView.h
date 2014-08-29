//
//  GMInstantWinNotificationView.h
//  Gimmie
//
//  Created by llun on 8/24/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import "GMNotificationView.h"

#define NOTIFICATION_CONTENT_PADDING 10
#define NOTIFICATION_CONTENT_INNER_PADDING 5
#define NOTIFICATION_MESSAGE_HEIGHT 16
#define NOTIFICATION_REWARD_NAME_HEIGHT 18
#define NOTIFICATION_REWARD_STORENAME_HEIGHT 14
#define NOTIFICATION_REWARD_BUTTON_HEIGHT 24
#define NOTIFICATION_HELP_LABEL_HEIGHT 14

@class GMAction;

@interface GMInstantWinNotificationView : GMNotificationView
{
    UIButton *_backgroundButton;
    UIImageView *_closeImage;
    
    UIButton *_instantWinButton;
    UIImageView *_instantWinCongratHeader;
    
    UIView *_instantWinContent;
    UILabel *_instantWinMessage;
    UIImageView *_instantWinRewardImageView;
    UILabel *_instantWinRewardName;
    UILabel *_instantWinRewardStore;
    UILabel *_instantWinHelpLabel;
    
    UIButton *_instantWinRewardButton;
}

@property (nonatomic, strong) GMAction *action;

+ (CAGradientLayer*) couponBackgroundButton;

@end
