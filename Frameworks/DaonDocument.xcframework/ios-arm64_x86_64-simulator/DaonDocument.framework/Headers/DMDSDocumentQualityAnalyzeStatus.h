//
//  DMDSImageQualityAnalyzeStatus.h
//  DaonDocument
//
//  Created by jdudukovic on 18.5.23..
//  Copyright © 2023 Daon. All rights reserved.
//

#ifndef DMDSDocumentQualityAnalyzeStatus_h
#define DMDSDocumentQualityAnalyzeStatus_h

/*!
 @abstract Status of Document Quality check
 @constant DMDSDocumentQualityFailed - Quality could not be calculated
 @constant DMDSDocumentQualityGlareDetected - Glare was found on document
 @constant DMDSDocumentQualityBlurDetected - Blur was found on document
 @constant DMDSDocumentQualityOk - No problem was detected, this status will not trigger callback
 */
typedef NS_ENUM (NSInteger, DMDSDocumentQualityAnalyzeStatus) {
    DMDSDocumentQualityFailed           = 0,
    DMDSDocumentQualityGlareDetected    = 1,
    DMDSDocumentQualityBlurDetected     = 2,
    DMDSDocumentQualityOk               = 3
};

#endif /* DMDSDocumentQualityAnalyzeStatus_h */

