//
//  GMMayorshipInformationView.h
//  Gimmie
//
//  Created by llun on 8/26/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMMayorship;
@class GMMayorshipInformationView;

@protocol GMMayorshipInformationViewDelegate <NSObject>

- (void) mayorshipInformationViewDidDismiss:(GMMayorshipInformationView *)mayorshipInformationView;

@end

@interface GMMayorshipInformationView : UIView
{
    UIButton *_backgroundButton;
    UIImageView *_closeImage;
    
    UIButton *_badgeButton;
    
    UIView *_badgeContent;
    UILabel *_badgeName;
    
    UIView *_badgeBottomContent;
    UIImageView *_badgeImageView;
}

@property (nonatomic, strong) id<GMMayorshipInformationViewDelegate> delegate;
@property (nonatomic, strong) GMMayorship *mayorship;

@end
