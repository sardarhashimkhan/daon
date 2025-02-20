//
//  DFSFaceMaskAnalyzer.h
//  DaonFaceSDK
//
//  Copyright © 2020 Daon. All rights reserved.
//

#import <DaonFaceSDK/DFSLicensedAnalyzer.h>

#define kDFSConfigMaskThresholdKey              @"MaskThreshold"
#define kDFSConfigMaskFrameRateKey              @"MaskFrameRate"

@interface DFSFaceMaskAnalyzer : NSObject <DFSLicensedAnalyzer>

+ (NSString*) module;

@end
