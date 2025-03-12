//
//  DMDSDocumentQualityInfo.h
//  DaonDocument
//
//  Created by jdudukovic on 26.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DMDSDocumentQualityAnalyzeStatus.h"
#import "DMDSResultQuality.h"

@interface DMDSDocumentQualityInfo : NSObject

/*!
 @abstract Status of Document Quality check.
 */
@property (nonatomic) DMDSDocumentQualityAnalyzeStatus analyzeStatus;

/*!
 @abstract Data from the quality analysis
 */
@property (nonatomic, strong) DMDSResultQuality* resultQuality;

@end

