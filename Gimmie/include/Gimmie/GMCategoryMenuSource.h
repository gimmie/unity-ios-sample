//
//  GMCategoryMenuSource.h
//  Gimmie
//
//  Created by llun on 8/14/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class GMCategory;
@class GMCategoryMenuSource;

typedef void (^UpdatedCategoriesCallback)(NSArray *selectedCategory);

@protocol GMCategoryMenuSourceDelegate <NSObject>

@optional
- (void) categoryMenuSource: (GMCategoryMenuSource *)source didSelectCategory:(GMCategory *)category;

@end

@interface GMCategoryMenuSource : NSObject<UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_categories;
}

@property (nonatomic, assign) id<GMCategoryMenuSourceDelegate> delegate;

- (void) updateWithCallback:(UpdatedCategoriesCallback) callback;

@end
