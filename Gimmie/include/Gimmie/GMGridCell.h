//
//  GMGridCell.h
//  OX
//
//  Created by llun on 12/21/12.
//  Copyright (c) 2012 Gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol GMGridView <NSObject>

- (id) initWithGridData:(id) data;
- (id) gridData;

- (void) addTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;

@end

@protocol GMGridCellDelegate <NSObject>

- (void) didSelectOnItem:(id)item;

@end

@interface GMGridCell : UITableViewCell
{
    NSMutableArray *_grids;
}

@property (unsafe_unretained, assign) int gridPerRow;
@property (unsafe_unretained, assign) Class gridClass;

@property (nonatomic, strong) NSArray *data;
@property (nonatomic, strong) id delegate;

@end
