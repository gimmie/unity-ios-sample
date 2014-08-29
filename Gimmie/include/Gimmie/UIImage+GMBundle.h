//
//  UIImage+GMBundle.h
//  Gimmie
//
//  Created by llun on 1/21/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GMBundle)

+ (UIImage *)imageNamed:(NSString *)name bundle:(NSBundle *)bundle;
+ (UIImage *)imageNamedFromResourceBundle:(NSString *)name;

- (UIImage *)resizeToNewSize:(CGSize)size;
- (UIImage *)imageWithCapInsets:(UIEdgeInsets)insets;

@end
