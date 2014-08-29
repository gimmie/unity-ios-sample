//
//  GMRewardViewController.h
//  OX
//
//  Created by llun on 11/20/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMSoldOutView;
@class GMLoadingView;
@class GMBackButtonItem;
@class GMLandscapeBackButtonItem;
@class GMClaim;
@class GMReward;

@interface GMRewardViewController : UIViewController<UIAlertViewDelegate>
{
    GMReward *_reward;
    
    GMBackButtonItem *_backButton;
    
    GMSoldOutView *_overlayImageView;
    GMLoadingView *_loadingView;
    
    UIInterfaceOrientation _beginOrientation;
}

@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;

@property (nonatomic, strong) IBOutlet UIView *rewardImageBox;
@property (nonatomic, strong) IBOutlet UIImageView *rewardImageView;
@property (nonatomic, strong) IBOutlet UIImageView *rewardFeaturedBadge;
@property (nonatomic, strong) IBOutlet UILabel *rewardNameLabel;
@property (nonatomic, strong) IBOutlet UILabel *storeNameLabel;

@property (nonatomic, strong) IBOutlet UIButton *descriptionSectionButton;
@property (nonatomic, strong) IBOutlet UIButton *fineprintSectionButton;
@property (nonatomic, strong) IBOutlet UITextView *rewardDetail;

// iPad View Properties
@property (nonatomic, strong) IBOutlet UITextView *iPadfinePrintDetail;

@property (nonatomic, strong) IBOutlet UIButton *redeemButton;
@property (nonatomic, strong) IBOutlet UILabel *rewardPointsLabel;

- (id) initWithReward:(GMReward *)reward orientation:(UIInterfaceOrientation) orientation;
- (IBAction)redeemReward:(id)sender;
- (IBAction)selectSection:(id)sender;

@end
