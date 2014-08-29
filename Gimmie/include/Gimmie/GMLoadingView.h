//
//  GMLoadingView.h
//  Gimmie
//
//  Created by llun on 2/14/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GMLoadingView : UIView
{
    UIActivityIndicatorView *_activityIndicator;
    UIView *_indicatorBox;
    UILabel *_loadingMessageLabel;
}

@property (nonatomic, strong) NSString *message;

@end
