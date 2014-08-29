//
//  GMProfileCounterAndSubviewCell.h
//  Gimmie
//
//  Created by llun on 8/19/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import "GMProfileSubViewCell.h"

extern NSString * const GMProfileCounterBadges;
extern NSString * const GMProfileCounterRedemptions;

@interface GMProfileCounterAndSubviewCell : GMProfileSubViewCell

@property (nonatomic, strong) UILabel *counterLabel;

@end
