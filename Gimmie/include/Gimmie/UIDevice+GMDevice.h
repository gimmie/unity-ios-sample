//
//  UIDevice+GMDevice.h
//  Gimmie
//
//  Created by llun on 3/4/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    GM_PHONE_SCREEN = 0,
    GM_TABLET_SCREEN = 1
} GMScreen;

@interface UIDevice (GMDevice)

- (BOOL) isSimulator;
- (GMScreen) screen;


@end
