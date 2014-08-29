//
//  GMLeaderboardViewController.h
//  Gimmie
//
//  Created by llun on 8/1/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMLoadingView;

@interface GMLeaderboardViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_top20;
    NSString *_board;
    
    GMLoadingView *_loadingView;
}

@property (nonatomic, strong) IBOutlet UIButton *mostPointsButton;
@property (nonatomic, strong) IBOutlet UIButton *mostRewardsButton;
@property (nonatomic, strong) IBOutlet UIButton *mostValueButton;
@property (nonatomic, strong) IBOutlet UITableView *leaderboardTable;

- (IBAction)selectLeaderboardTab:(id)sender;

@end
