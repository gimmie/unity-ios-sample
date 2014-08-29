//
//  GMCloseButtonItem.h
//  Gimmie
//
//  Created by llun on 1/31/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GMCloseButtonItem : UIBarButtonItem
{
    UIButton *_button;
}

- (id)initWithTarget:(id) target action:(SEL)selector forControlEvents:(UIControlEvents *)event;

@end
