//
//  GMCatalogViewController.h
//  Gimmie
//
//  Created by llun on 8/1/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PSTCollectionView.h"
#import "GMCategoryMenuSource.h"
#import "GMCategoryRewardCell.h"

@class GMCategory;
@class GMLoadingView;
@class GMLoginView;
@class GMEmptyCatalogView;

@interface GMCatalogViewController : UIViewController<PSUICollectionViewDelegate, PSUICollectionViewDataSource, GMCategoryMenuSourceDelegate, GMCategoryRewardCellDelegate>
{
    GMCategory *_category;
    
    UIImageView *_categoryMenuIcon;
    UIView *_categoryMenuView;
    UIButton *_categoryMenuButton;
    UIButton *_categoryListView;
    UITableView *_categoryListTable;
    GMCategoryMenuSource *_categoryMenuSource;
    
    GMLoginView *_loginView;
}

@property (nonatomic, strong) IBOutlet PSUICollectionView *collectionView;
@property (nonatomic, strong) IBOutlet GMLoadingView *loadingView;
@property (nonatomic, strong) IBOutlet GMEmptyCatalogView *emptyView;

@end
