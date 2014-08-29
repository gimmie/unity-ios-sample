//
//  GMRewardGridView.h
//  OX
//
//  Created by llun on 12/20/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMGridCell.h"

@class GMReward;

@interface GMRewardGridView : UIButton <GMGridView>
{
    UIView *_itemView;
    UILabel *_name;
    UIImageView *_rewardImage;
}

@property (nonatomic, strong) GMReward *reward;

- (id) initWithReward:(GMReward *)reward frame:(CGRect) frame;

@end
