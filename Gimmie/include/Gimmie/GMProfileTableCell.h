//
//  GMProfileTableCell.h
//  Gimmie
//
//  Created by llun on 8/19/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GMService.h"

#import "UIFont+GMFallback.h"
#import "UIImage+GMBundle.h"

#define GMProfileTableCellVerticalPadding 8.0f;
#define GMProfileTableCellHorizontalPadding 16.0f;

@class GMProfile;

@interface GMProfileTableCell : UITableViewCell

@property (nonatomic, strong) UIImageView *profileIcon;
@property (nonatomic, strong) UILabel *profileLabel;
@property (nonatomic, strong) NSString *profileType;

@property (nonatomic, strong) GMProfile *profile;

- (id) initWithProfile:(GMProfile *)profile reuseIdentifier:(NSString *)reuseIdentifier;

@end
