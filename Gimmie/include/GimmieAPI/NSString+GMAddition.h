//
//  NSString+GMAddition.h
//  Gimmie
//
//  Created by llun on 11/26/12.
//  Copyright (c) 2012 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (GMAddition)

+ (NSString *) UUID;
+ (NSString *) randomStringWithSize:(NSUInteger) size;

- (NSString *) urlEncoding;

@end
