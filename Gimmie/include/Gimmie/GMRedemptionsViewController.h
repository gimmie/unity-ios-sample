//
//  GMRedemptionsViewController.h
//  Gimmie
//
//  Created by llun on 8/20/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PSTCollectionView.h"

@class GMProfile;

@interface GMRedemptionsViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UIView *emptyView;
@property (nonatomic, strong) IBOutlet UILabel *emptyMessage;

@property (nonatomic, strong) IBOutlet UITableView *redemtionsView;
@property (nonatomic, strong) GMProfile *profile;

@end
