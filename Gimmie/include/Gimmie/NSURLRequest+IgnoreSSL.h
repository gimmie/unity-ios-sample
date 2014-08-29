//
//  NSURLRequest+IgnoreSSL.h
//  Gimmie
//
//  Created by llun on 3/7/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLRequest (IgnoreSSL)

+ (BOOL)allowsAnyHTTPSCertificateForHost:(NSString*)host;

@end
