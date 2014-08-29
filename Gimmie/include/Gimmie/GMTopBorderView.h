//
//  GMTopBorderView.h
//  Gimmie
//
//  Created by llun on 1/24/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GMTopBorderView : UIView

@property (nonatomic, assign) CGFloat triangleBaseWidth;
@property (nonatomic, strong) UIColor *triangleColor;
@property (nonatomic, strong) UIColor *borderColor;
@property (nonatomic, strong) UIColor *backgroundExcludeTriangle;

@end
