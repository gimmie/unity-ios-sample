//
//  GMNavigationBar.h
//  Gimmie
//
//  Created by llun on 1/31/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GMNavigationBar : UINavigationBar

+ (UIColor *) backgroundColor;
+ (void) setBackgroundColor:(UIColor *)color;
+ (void) setBackgroundImage:(UIImage *)image;

+ (void) updateNavigationBarFont:(UINavigationBar *)navigationBar;

@end
