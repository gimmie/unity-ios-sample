//
//  GMClaimGridView.h
//  Gimmie
//
//  Created by llun on 2/5/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMGridCell.h"

@class GMClaim;

@interface GMClaimGridView : UIButton <GMGridView>
{
    UIView *_itemView;
    UILabel *_name;
    UILabel *_storeName;
    UIImageView *_rewardImage;
    
    UIView *_overlayInformationView;
    UILabel *_overlayInformationLabel;
}

@property (nonatomic, strong) GMClaim *claim;
@property (nonatomic, assign) UIEdgeInsets padding;

- (id) initWithClaim:(GMClaim *)claim frame:(CGRect) frame;

@end
