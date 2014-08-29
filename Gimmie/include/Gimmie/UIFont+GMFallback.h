//
//  UIFont+GMFallback.h
//  Gimmie
//
//  Created by llun on 2/14/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (GMFallback)

+ (UIFont *) fontWithName:(NSString *)fontName size:(CGFloat)fontSize fallbackFontName:(NSString *)fallbackFontName fallbackFontSize:(CGFloat)fallbackFontSize;
+ (UIFont *) fontWithNameFallbackToHelvetica:(NSString *)fontName size:(CGFloat)fontSize;

@end
