//
//  GMBadgesViewController.h
//  Gimmie
//
//  Created by llun on 8/20/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMProfile;

@interface GMBadgesViewController : UIViewController
{
    UIView *_mayorshipView;
    UILabel *_mayorshipLabel;
    UIView *_mayorshipBox;
    
    UIView *_badgesView;
    UILabel *_badgesLabel;
    UIView *_badgesBox;
    
    UIView *_lockedBadgesView;
    UILabel *_lockedBadgesLabel;
    UIView *_lockedBadgesBox;
    
    NSMutableArray *_unlockedTierList;
    NSMutableArray *_lockedTierList;
}

@property (nonatomic, strong) IBOutlet UIScrollView *badgesScrollView;
@property (nonatomic, strong) GMProfile *profile;

@end
