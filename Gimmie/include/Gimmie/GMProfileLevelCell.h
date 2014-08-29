//
//  GMProfileLevelCell.h
//  Gimmie
//
//  Created by llun on 8/19/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMProfileTableCell.h"

@interface GMProfileLevelCell : GMProfileTableCell

@property (nonatomic, strong) UILabel *progressLabel;

@property (nonatomic, strong) UIView *progressBar;
@property (nonatomic, strong) UIView *progressTrack;

@end
