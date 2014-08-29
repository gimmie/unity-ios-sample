//
//  GMActivitiesViewController.h
//  Gimmie
//
//  Created by llun on 1/29/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TTTTimeIntervalFormatter;

@class GMLoadingView;
@class GMActivitiesViewController;
@class GMRecentAction;

@protocol GMActivitiesViewControllerDelegate <NSObject>

@end

@interface GMActivitiesViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_activities;
    TTTTimeIntervalFormatter *_timeFormatter;
    
    GMLoadingView *_loadingView;
}

@property (nonatomic, strong) IBOutlet UITableView *activitiesView;
@property (nonatomic, strong) IBOutlet UILabel *noActivitiesLabel;

- (void)close:(id)sender;

@end
