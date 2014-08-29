//
//  GMRewardCollection.h
//  Gimmie
//
//  Created by llun on 3/1/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PSTCollectionView.h"

@class GMClaim;

@interface GMClaimCollectionCell : PSUICollectionViewCell
{
    UIView *_itemView;
    UILabel *_name;
    UILabel *_storeName;
    UIImageView *_rewardImage;
    
    UIView *_overlayInformationView;
    UILabel *_overlayInformationLabel;
}

@property (nonatomic, strong) GMClaim *claim;

@end
