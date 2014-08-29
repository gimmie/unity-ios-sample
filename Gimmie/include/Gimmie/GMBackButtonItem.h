//
//  GMBackButtonItem.h
//  Gimmie
//
//  Created by llun on 2/1/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GMBackButtonItem : UIBarButtonItem
{
    UIButton *_backButton;
}

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) UIColor *textColor;


- (id)initWithTarget:(id) target action:(SEL)selector forControlEvents:(UIControlEvents *)event;

@end
