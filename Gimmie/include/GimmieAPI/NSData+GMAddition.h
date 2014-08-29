//
//  NSData+GMAddition.h
//  Gimmie
//
//  Created by llun on 11/29/12.
//  Copyright (c) 2012 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (GMAddition)

- (NSString *) base64EncodedString;
- (NSString*) hexRepresentationWithSpaces_AS:(BOOL)spaces;

@end
