//
//  IXUAFLicense
//  
//
//  Copyright (c) 2017 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>
#import <CommonCrypto/CommonDigest.h>


@interface IXUAFLicense : NSObject

@property (nonatomic, readonly) NSString * license;
@property (nonatomic, readonly) NSDictionary * extensions;

- (id) initWithContent:(NSString*)license;

- (bool) hasExpired;
- (bool) isVerified;
- (bool) supportsFeatureWithName:(NSString*)feature;

@end
