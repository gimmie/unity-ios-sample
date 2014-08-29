//
//  GMTop20TableCell.h
//  Gimmie
//
//  Created by llun on 8/5/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMTopPlayer;

@interface GMTop20TableCell : UITableViewCell
{
    int _rank;
    GMTopPlayer *_topPlayer;
    NSString *_type;
    
    UIImageView *_rankImage;
    UILabel *_rankText;
    UILabel *_playerID;
    UILabel *_points;
}

- (void) setTopPlayer:(GMTopPlayer *)topPlayer withRank:(int) rank andType:(NSString *)type;

@end
