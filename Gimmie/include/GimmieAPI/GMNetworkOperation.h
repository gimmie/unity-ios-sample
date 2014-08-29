//
//  GMNetworkOperation.h
//  Gimmie
//
//  Created by llun on 1/15/13.
//  Copyright (c) 2013 gimmie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GMService.h"

@interface GMNetworkOperation : NSOperation<NSCopying>
{
    NSString *_key;
    NSString *_secret;
    NSString *_api;
    
    BOOL _isExecuting;
}

@property (nonatomic, strong) NSString *user;
@property (nonatomic, strong) NSString *target;
@property (nonatomic, strong) NSDictionary *parameters;
@property (nonatomic, strong) NSDictionary *headers;
@property (nonatomic, copy) void(^callback)(NSError *error, NSDictionary *output);

+ (NSOperationQueue *) networkQueue;

- (id) initWithKey:(NSString *)key
            secret:(NSString *)secret
               api:(NSString *)api;

- (NSString *)generateHMAC_SHA1SignatureFor:(NSString *)baseString;
- (NSString *)authorizationHeaderForRequest:(NSURLRequest *) request timestamp:(NSString *)timestamp nounce:(NSString *)nonce;

@end
