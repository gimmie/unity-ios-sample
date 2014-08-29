//
//  GMSponsorHereCell.h
//  Gimmie
//
//  Created by llun on 8/27/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PSTCollectionView.h"
#import "PSTCollectionViewCell.h"

@interface GMSponsorHereCell : PSUICollectionViewCell
{
    UIView *_box;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

+ (CGFloat) defaultHeight;

@end
