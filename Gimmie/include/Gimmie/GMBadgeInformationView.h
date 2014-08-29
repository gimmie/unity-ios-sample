//
//  GMBadgeInformationView.h
//  Gimmie
//
//  Created by llun on 8/26/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMBadge;
@class GMBadgeInformationView;

@protocol GMBadgeInformationViewDelegate <NSObject>

- (void) badgeInformationViewDidDismiss:(GMBadgeInformationView *)badgeInformationView;

@end

@interface GMBadgeInformationView : UIView
{
    UIButton *_backgroundButton;
    UIImageView *_closeImage;
    
    UIButton *_badgeButton;
    
    UIView *_badgeContent;
    UILabel *_badgeName;
    
    UIView *_badgeBottomContent;
    UIImageView *_badgeImageView;
}

@property (nonatomic, strong) id<GMBadgeInformationViewDelegate> delegate;
@property (nonatomic, strong) GMBadge *badge;

@end
