//
//  IXUAFAuthenticatorRegistry
//  DaonFIDOSDK
//
//  Copyright © 2017-24 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <DaonFIDOSDK/IXUAFLicense.h>

@class IXUAFAuthenticator;


@interface IXUAFAuthenticatorRegistry : NSObject

- (instancetype) initWithLicense:(IXUAFLicense*)license parameters:(NSDictionary*)parameters;

- (NSArray<IXUAFAuthenticator*>*) allAuthenticators;

- (IXUAFAuthenticator*) authenticatorWithAaid:(NSString *)aaid;

- (NSArray<IXUAFAuthenticator*>*)authenticatorsWithFactors:(NSArray<NSNumber*> *)factors;

- (IXUAFAuthenticator*) authenticatorWithFactor:(NSInteger)factor;

- (void) logAuthenticators;

@end
