//
//  DMDSFaceQualityInfo.h
//  DaonDocument
//
//  Created by jdudukovic on 26.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DMDSFaceQualityAnalyzeStatus.h"
#import "DMDSFaceResultQuality.h"

@interface DMDSFaceQualityInfo : NSObject

/*
 * Status of Face Quality check.
 */
@property (nonatomic) DMDSFaceQualityAnalyzeStatus analyzeStatus;

/*
 * @abstract Represents the quality info about the face extracted from the scanned document.
 */
@property (nonatomic, strong) DMDSFaceResultQuality* faceResultQuality;

@end
