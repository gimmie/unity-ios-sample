//
//  GMCategoryItemCell.h
//  Gimmie
//
//  Created by llun on 1/23/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PSTCollectionView.h"
#import "PSTCollectionViewCell.h"

@class GMReward;
@class GMSoldOutView;

@class GMCategoryRewardCell;

@protocol GMCategoryRewardCellDelegate <NSObject>

@optional
- (void) categoryRewardCellTapOnAction:(GMCategoryRewardCell *)cell;

@end

@interface GMCategoryRewardCell : PSUICollectionViewCell
{
    UIView *_rewardView;
    UIImageView *_rewardImage;
    
    UILabel *_rewardDescription;
    UILabel *_rewardStore;
    
    UILabel *_rewardPoints;
    UIButton *_actionButton;
    UIImageView *_actionNextIcon;
    
    UIImageView *_ribbonBadge;
    
    GMSoldOutView *_soldoutOverlayView;
}

@property (nonatomic, strong) GMReward *reward;
@property (nonatomic, strong) id<GMCategoryRewardCellDelegate> delegate;
@property (nonatomic, assign) BOOL isFeatured;

+ (CGSize) sizeForOrientation:(UIInterfaceOrientation) orientation;

@end
