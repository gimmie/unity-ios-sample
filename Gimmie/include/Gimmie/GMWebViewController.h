//
//  GMWebViewController.h
//  Gimmie
//
//  Created by llun on 1/28/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GMLoadingView;
@class GMClaim;

@interface GMWebViewController : UIViewController<UIWebViewDelegate>
{
    IBOutlet UIWebView *_webView;
    
    UIBarButtonItem *_portraitNavigationBackButton;
    UIBarButtonItem *_landscapeNavigationBackButton;
    
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_actionButton;
    
    UIToolbar *_toolbar;
    
    NSURL *_url;
    
    CGRect _defaultRect;
    
    GMClaim *_claim;
    GMLoadingView *_loadingView;
}

+ (void) setOpenInBrowser:(BOOL)option;

- (id) initWithClaim:(GMClaim *) claim;

@end
