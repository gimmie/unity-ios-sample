//
//  GMRedemptionCell.h
//  Gimmie
//
//  Created by llun on 8/20/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PSTCollectionView.h"

@class GMClaim;

extern NSString * const GMClaimCellPositionTop;
extern NSString * const GMClaimCellPositionCenter;
extern NSString * const GMClaimCellPositionBottom;

@interface GMRedemptionCell : UITableViewCell
{
    UIImageView *_rewardImage;
    
    UILabel *_rewardName;
    UILabel *_storeName;
    
    UILabel *_expiredDate;
    UILabel *_createdDate;
    
    UIImageView *_navigationIcon;
    
    UIView *_expiredOverlay;
    UILabel *_expiredDateOverlay;
    
    NSString *_position;
}

@property (nonatomic, strong) GMClaim *claim;

- (id) initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;
- (void) setPosition:(NSString *)position;

@end
