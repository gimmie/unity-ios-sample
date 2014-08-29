//
//  GMMayorshipNotificationView.h
//  Gimmie
//
//  Created by llun on 8/25/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import "GMNotificationView.h"

#define NOTIFICATION_CLOSE_BUTTON_PADDING 5
#define NOTIFICATION_CONTENT_PADDING 10
#define NOTIFICATION_CONTENT_INNER_PADDING 5
#define NOTIFICATION_BADGE_HEADER_HEIGHT 18
#define NOTIFICATION_BADGE_NAME_HEIGHT 18

@class GMMayorship;

@interface GMMayorshipNotificationView : GMNotificationView
{
    UIButton *_backgroundButton;
    UIImageView *_closeImage;
    
    UIButton *_badgeButton;
    UIImageView *_badgeCongratHeader;
    
    UIView *_badgeContent;
    UILabel *_badgeHeader;
    UILabel *_badgeName;
    
    UIView *_badgeBottomContent;
    UIImageView *_badgeImageView;
}

@property (nonatomic, strong) GMMayorship *mayorship;

@end
